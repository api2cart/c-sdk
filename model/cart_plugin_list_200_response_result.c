#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_plugin_list_200_response_result.h"



static cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_create_internal(
    int all_plugins,
    list_t *plugins
    ) {
    cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_local_var = malloc(sizeof(cart_plugin_list_200_response_result_t));
    if (!cart_plugin_list_200_response_result_local_var) {
        return NULL;
    }
    cart_plugin_list_200_response_result_local_var->all_plugins = all_plugins;
    cart_plugin_list_200_response_result_local_var->plugins = plugins;

    cart_plugin_list_200_response_result_local_var->_library_owned = 1;
    return cart_plugin_list_200_response_result_local_var;
}

__attribute__((deprecated)) cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_create(
    int all_plugins,
    list_t *plugins
    ) {
    return cart_plugin_list_200_response_result_create_internal (
        all_plugins,
        plugins
        );
}

void cart_plugin_list_200_response_result_free(cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result) {
    if(NULL == cart_plugin_list_200_response_result){
        return ;
    }
    if(cart_plugin_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_plugin_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_plugin_list_200_response_result->plugins) {
        list_ForEach(listEntry, cart_plugin_list_200_response_result->plugins) {
            plugin_list_free(listEntry->data);
        }
        list_freeList(cart_plugin_list_200_response_result->plugins);
        cart_plugin_list_200_response_result->plugins = NULL;
    }
    free(cart_plugin_list_200_response_result);
}

cJSON *cart_plugin_list_200_response_result_convertToJSON(cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_plugin_list_200_response_result->all_plugins
    if(cart_plugin_list_200_response_result->all_plugins) {
    if(cJSON_AddNumberToObject(item, "all_plugins", cart_plugin_list_200_response_result->all_plugins) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_plugin_list_200_response_result->plugins
    if(cart_plugin_list_200_response_result->plugins) {
    cJSON *plugins = cJSON_AddArrayToObject(item, "plugins");
    if(plugins == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pluginsListEntry;
    if (cart_plugin_list_200_response_result->plugins) {
    list_ForEach(pluginsListEntry, cart_plugin_list_200_response_result->plugins) {
    cJSON *itemLocal = plugin_list_convertToJSON(pluginsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(plugins, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_parseFromJSON(cJSON *cart_plugin_list_200_response_resultJSON){

    cart_plugin_list_200_response_result_t *cart_plugin_list_200_response_result_local_var = NULL;

    // define the local list for cart_plugin_list_200_response_result->plugins
    list_t *pluginsList = NULL;

    // cart_plugin_list_200_response_result->all_plugins
    cJSON *all_plugins = cJSON_GetObjectItemCaseSensitive(cart_plugin_list_200_response_resultJSON, "all_plugins");
    if (cJSON_IsNull(all_plugins)) {
        all_plugins = NULL;
    }
    if (all_plugins) { 
    if(!cJSON_IsNumber(all_plugins))
    {
    goto end; //Numeric
    }
    }

    // cart_plugin_list_200_response_result->plugins
    cJSON *plugins = cJSON_GetObjectItemCaseSensitive(cart_plugin_list_200_response_resultJSON, "plugins");
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
        plugin_list_t *pluginsItem = plugin_list_parseFromJSON(plugins_local_nonprimitive);

        list_addElement(pluginsList, pluginsItem);
    }
    }


    cart_plugin_list_200_response_result_local_var = cart_plugin_list_200_response_result_create_internal (
        all_plugins ? all_plugins->valuedouble : 0,
        plugins ? pluginsList : NULL
        );

    return cart_plugin_list_200_response_result_local_var;
end:
    if (pluginsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pluginsList) {
            plugin_list_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pluginsList);
        pluginsList = NULL;
    }
    return NULL;

}
