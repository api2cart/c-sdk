#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_live_shipping_service.h"



static basket_live_shipping_service_t *basket_live_shipping_service_create_internal(
    char *id,
    char *name,
    char *callback,
    int callback_err_cnt,
    int enabled_on_store,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    basket_live_shipping_service_t *basket_live_shipping_service_local_var = malloc(sizeof(basket_live_shipping_service_t));
    if (!basket_live_shipping_service_local_var) {
        return NULL;
    }
    basket_live_shipping_service_local_var->id = id;
    basket_live_shipping_service_local_var->name = name;
    basket_live_shipping_service_local_var->callback = callback;
    basket_live_shipping_service_local_var->callback_err_cnt = callback_err_cnt;
    basket_live_shipping_service_local_var->enabled_on_store = enabled_on_store;
    basket_live_shipping_service_local_var->additional_fields = additional_fields;
    basket_live_shipping_service_local_var->custom_fields = custom_fields;

    basket_live_shipping_service_local_var->_library_owned = 1;
    return basket_live_shipping_service_local_var;
}

__attribute__((deprecated)) basket_live_shipping_service_t *basket_live_shipping_service_create(
    char *id,
    char *name,
    char *callback,
    int callback_err_cnt,
    int enabled_on_store,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return basket_live_shipping_service_create_internal (
        id,
        name,
        callback,
        callback_err_cnt,
        enabled_on_store,
        additional_fields,
        custom_fields
        );
}

void basket_live_shipping_service_free(basket_live_shipping_service_t *basket_live_shipping_service) {
    if(NULL == basket_live_shipping_service){
        return ;
    }
    if(basket_live_shipping_service->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_live_shipping_service_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket_live_shipping_service->id) {
        free(basket_live_shipping_service->id);
        basket_live_shipping_service->id = NULL;
    }
    if (basket_live_shipping_service->name) {
        free(basket_live_shipping_service->name);
        basket_live_shipping_service->name = NULL;
    }
    if (basket_live_shipping_service->callback) {
        free(basket_live_shipping_service->callback);
        basket_live_shipping_service->callback = NULL;
    }
    if (basket_live_shipping_service->additional_fields) {
        object_free(basket_live_shipping_service->additional_fields);
        basket_live_shipping_service->additional_fields = NULL;
    }
    if (basket_live_shipping_service->custom_fields) {
        object_free(basket_live_shipping_service->custom_fields);
        basket_live_shipping_service->custom_fields = NULL;
    }
    free(basket_live_shipping_service);
}

cJSON *basket_live_shipping_service_convertToJSON(basket_live_shipping_service_t *basket_live_shipping_service) {
    cJSON *item = cJSON_CreateObject();

    // basket_live_shipping_service->id
    if(basket_live_shipping_service->id) {
    if(cJSON_AddStringToObject(item, "id", basket_live_shipping_service->id) == NULL) {
    goto fail; //String
    }
    }


    // basket_live_shipping_service->name
    if(basket_live_shipping_service->name) {
    if(cJSON_AddStringToObject(item, "name", basket_live_shipping_service->name) == NULL) {
    goto fail; //String
    }
    }


    // basket_live_shipping_service->callback
    if(basket_live_shipping_service->callback) {
    if(cJSON_AddStringToObject(item, "callback", basket_live_shipping_service->callback) == NULL) {
    goto fail; //String
    }
    }


    // basket_live_shipping_service->callback_err_cnt
    if(basket_live_shipping_service->callback_err_cnt) {
    if(cJSON_AddNumberToObject(item, "callback_err_cnt", basket_live_shipping_service->callback_err_cnt) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_live_shipping_service->enabled_on_store
    if(basket_live_shipping_service->enabled_on_store) {
    if(cJSON_AddBoolToObject(item, "enabled_on_store", basket_live_shipping_service->enabled_on_store) == NULL) {
    goto fail; //Bool
    }
    }


    // basket_live_shipping_service->additional_fields
    if(basket_live_shipping_service->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(basket_live_shipping_service->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket_live_shipping_service->custom_fields
    if(basket_live_shipping_service->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(basket_live_shipping_service->custom_fields);
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

basket_live_shipping_service_t *basket_live_shipping_service_parseFromJSON(cJSON *basket_live_shipping_serviceJSON){

    basket_live_shipping_service_t *basket_live_shipping_service_local_var = NULL;

    // basket_live_shipping_service->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // basket_live_shipping_service->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // basket_live_shipping_service->callback
    cJSON *callback = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "callback");
    if (cJSON_IsNull(callback)) {
        callback = NULL;
    }
    if (callback) { 
    if(!cJSON_IsString(callback) && !cJSON_IsNull(callback))
    {
    goto end; //String
    }
    }

    // basket_live_shipping_service->callback_err_cnt
    cJSON *callback_err_cnt = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "callback_err_cnt");
    if (cJSON_IsNull(callback_err_cnt)) {
        callback_err_cnt = NULL;
    }
    if (callback_err_cnt) { 
    if(!cJSON_IsNumber(callback_err_cnt))
    {
    goto end; //Numeric
    }
    }

    // basket_live_shipping_service->enabled_on_store
    cJSON *enabled_on_store = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "enabled_on_store");
    if (cJSON_IsNull(enabled_on_store)) {
        enabled_on_store = NULL;
    }
    if (enabled_on_store) { 
    if(!cJSON_IsBool(enabled_on_store))
    {
    goto end; //Bool
    }
    }

    // basket_live_shipping_service->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // basket_live_shipping_service->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_serviceJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    basket_live_shipping_service_local_var = basket_live_shipping_service_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        callback && !cJSON_IsNull(callback) ? strdup(callback->valuestring) : NULL,
        callback_err_cnt ? callback_err_cnt->valuedouble : 0,
        enabled_on_store ? enabled_on_store->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return basket_live_shipping_service_local_var;
end:
    return NULL;

}
