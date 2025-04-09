#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "plugin_list.h"



static plugin_list_t *plugin_list_create_internal(
    int all_plugins,
    list_t *plugins,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    plugin_list_t *plugin_list_local_var = malloc(sizeof(plugin_list_t));
    if (!plugin_list_local_var) {
        return NULL;
    }
    plugin_list_local_var->all_plugins = all_plugins;
    plugin_list_local_var->plugins = plugins;
    plugin_list_local_var->additional_fields = additional_fields;
    plugin_list_local_var->custom_fields = custom_fields;

    plugin_list_local_var->_library_owned = 1;
    return plugin_list_local_var;
}

__attribute__((deprecated)) plugin_list_t *plugin_list_create(
    int all_plugins,
    list_t *plugins,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return plugin_list_create_internal (
        all_plugins,
        plugins,
        additional_fields,
        custom_fields
        );
}

void plugin_list_free(plugin_list_t *plugin_list) {
    if(NULL == plugin_list){
        return ;
    }
    if(plugin_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "plugin_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (plugin_list->plugins) {
        list_ForEach(listEntry, plugin_list->plugins) {
            plugin_free(listEntry->data);
        }
        list_freeList(plugin_list->plugins);
        plugin_list->plugins = NULL;
    }
    if (plugin_list->additional_fields) {
        object_free(plugin_list->additional_fields);
        plugin_list->additional_fields = NULL;
    }
    if (plugin_list->custom_fields) {
        object_free(plugin_list->custom_fields);
        plugin_list->custom_fields = NULL;
    }
    free(plugin_list);
}

cJSON *plugin_list_convertToJSON(plugin_list_t *plugin_list) {
    cJSON *item = cJSON_CreateObject();

    // plugin_list->all_plugins
    if(plugin_list->all_plugins) {
    if(cJSON_AddNumberToObject(item, "all_plugins", plugin_list->all_plugins) == NULL) {
    goto fail; //Numeric
    }
    }


    // plugin_list->plugins
    if(plugin_list->plugins) {
    cJSON *plugins = cJSON_AddArrayToObject(item, "plugins");
    if(plugins == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pluginsListEntry;
    if (plugin_list->plugins) {
    list_ForEach(pluginsListEntry, plugin_list->plugins) {
    cJSON *itemLocal = plugin_convertToJSON(pluginsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(plugins, itemLocal);
    }
    }
    }


    // plugin_list->additional_fields
    if(plugin_list->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(plugin_list->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // plugin_list->custom_fields
    if(plugin_list->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(plugin_list->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

plugin_list_t *plugin_list_parseFromJSON(cJSON *plugin_listJSON){

    plugin_list_t *plugin_list_local_var = NULL;

    // define the local list for plugin_list->plugins
    list_t *pluginsList = NULL;

    // plugin_list->all_plugins
    cJSON *all_plugins = cJSON_GetObjectItemCaseSensitive(plugin_listJSON, "all_plugins");
    if (cJSON_IsNull(all_plugins)) {
        all_plugins = NULL;
    }
    if (all_plugins) { 
    if(!cJSON_IsNumber(all_plugins))
    {
    goto end; //Numeric
    }
    }

    // plugin_list->plugins
    cJSON *plugins = cJSON_GetObjectItemCaseSensitive(plugin_listJSON, "plugins");
    if (cJSON_IsNull(plugins)) {
        plugins = NULL;
    }
    if (plugins) { 
    cJSON *plugins_local_nonprimitive = NULL;
    if(!cJSON_IsArray(plugins)){
        goto end; //nonprimitive container
    }

    pluginsList = list_createList();

    cJSON_ArrayForEach(plugins_local_nonprimitive,plugins )
    {
        if(!cJSON_IsObject(plugins_local_nonprimitive)){
            goto end;
        }
        plugin_t *pluginsItem = plugin_parseFromJSON(plugins_local_nonprimitive);

        list_addElement(pluginsList, pluginsItem);
    }
    }

    // plugin_list->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(plugin_listJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // plugin_list->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(plugin_listJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    plugin_list_local_var = plugin_list_create_internal (
        all_plugins ? all_plugins->valuedouble : 0,
        plugins ? pluginsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return plugin_list_local_var;
end:
    if (pluginsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pluginsList) {
            plugin_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pluginsList);
        pluginsList = NULL;
    }
    return NULL;

}
