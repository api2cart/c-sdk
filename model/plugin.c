#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "plugin.h"



static plugin_t *plugin_create_internal(
    char *name,
    int active,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    plugin_t *plugin_local_var = malloc(sizeof(plugin_t));
    if (!plugin_local_var) {
        return NULL;
    }
    plugin_local_var->name = name;
    plugin_local_var->active = active;
    plugin_local_var->additional_fields = additional_fields;
    plugin_local_var->custom_fields = custom_fields;

    plugin_local_var->_library_owned = 1;
    return plugin_local_var;
}

__attribute__((deprecated)) plugin_t *plugin_create(
    char *name,
    int active,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return plugin_create_internal (
        name,
        active,
        additional_fields,
        custom_fields
        );
}

void plugin_free(plugin_t *plugin) {
    if(NULL == plugin){
        return ;
    }
    if(plugin->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "plugin_free");
        return ;
    }
    listEntry_t *listEntry;
    if (plugin->name) {
        free(plugin->name);
        plugin->name = NULL;
    }
    if (plugin->additional_fields) {
        object_free(plugin->additional_fields);
        plugin->additional_fields = NULL;
    }
    if (plugin->custom_fields) {
        object_free(plugin->custom_fields);
        plugin->custom_fields = NULL;
    }
    free(plugin);
}

cJSON *plugin_convertToJSON(plugin_t *plugin) {
    cJSON *item = cJSON_CreateObject();

    // plugin->name
    if(plugin->name) {
    if(cJSON_AddStringToObject(item, "name", plugin->name) == NULL) {
    goto fail; //String
    }
    }


    // plugin->active
    if(plugin->active) {
    if(cJSON_AddBoolToObject(item, "active", plugin->active) == NULL) {
    goto fail; //Bool
    }
    }


    // plugin->additional_fields
    if(plugin->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(plugin->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // plugin->custom_fields
    if(plugin->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(plugin->custom_fields);
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

plugin_t *plugin_parseFromJSON(cJSON *pluginJSON){

    plugin_t *plugin_local_var = NULL;

    // plugin->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(pluginJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // plugin->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(pluginJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsBool(active))
    {
    goto end; //Bool
    }
    }

    // plugin->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(pluginJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // plugin->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(pluginJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    plugin_local_var = plugin_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        active ? active->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return plugin_local_var;
end:
    return NULL;

}
