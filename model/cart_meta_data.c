#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_meta_data.h"



static cart_meta_data_t *cart_meta_data_create_internal(
    char *id,
    char *key,
    char *value,
    char *_namespace,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_meta_data_t *cart_meta_data_local_var = malloc(sizeof(cart_meta_data_t));
    if (!cart_meta_data_local_var) {
        return NULL;
    }
    cart_meta_data_local_var->id = id;
    cart_meta_data_local_var->key = key;
    cart_meta_data_local_var->value = value;
    cart_meta_data_local_var->_namespace = _namespace;
    cart_meta_data_local_var->additional_fields = additional_fields;
    cart_meta_data_local_var->custom_fields = custom_fields;

    cart_meta_data_local_var->_library_owned = 1;
    return cart_meta_data_local_var;
}

__attribute__((deprecated)) cart_meta_data_t *cart_meta_data_create(
    char *id,
    char *key,
    char *value,
    char *_namespace,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_meta_data_create_internal (
        id,
        key,
        value,
        _namespace,
        additional_fields,
        custom_fields
        );
}

void cart_meta_data_free(cart_meta_data_t *cart_meta_data) {
    if(NULL == cart_meta_data){
        return ;
    }
    if(cart_meta_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_meta_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_meta_data->id) {
        free(cart_meta_data->id);
        cart_meta_data->id = NULL;
    }
    if (cart_meta_data->key) {
        free(cart_meta_data->key);
        cart_meta_data->key = NULL;
    }
    if (cart_meta_data->value) {
        free(cart_meta_data->value);
        cart_meta_data->value = NULL;
    }
    if (cart_meta_data->_namespace) {
        free(cart_meta_data->_namespace);
        cart_meta_data->_namespace = NULL;
    }
    if (cart_meta_data->additional_fields) {
        object_free(cart_meta_data->additional_fields);
        cart_meta_data->additional_fields = NULL;
    }
    if (cart_meta_data->custom_fields) {
        object_free(cart_meta_data->custom_fields);
        cart_meta_data->custom_fields = NULL;
    }
    free(cart_meta_data);
}

cJSON *cart_meta_data_convertToJSON(cart_meta_data_t *cart_meta_data) {
    cJSON *item = cJSON_CreateObject();

    // cart_meta_data->id
    if(cart_meta_data->id) {
    if(cJSON_AddStringToObject(item, "id", cart_meta_data->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_meta_data->key
    if(cart_meta_data->key) {
    if(cJSON_AddStringToObject(item, "key", cart_meta_data->key) == NULL) {
    goto fail; //String
    }
    }


    // cart_meta_data->value
    if(cart_meta_data->value) {
    if(cJSON_AddStringToObject(item, "value", cart_meta_data->value) == NULL) {
    goto fail; //String
    }
    }


    // cart_meta_data->_namespace
    if(cart_meta_data->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", cart_meta_data->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // cart_meta_data->additional_fields
    if(cart_meta_data->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_meta_data->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_meta_data->custom_fields
    if(cart_meta_data->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_meta_data->custom_fields);
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

cart_meta_data_t *cart_meta_data_parseFromJSON(cJSON *cart_meta_dataJSON){

    cart_meta_data_t *cart_meta_data_local_var = NULL;

    // cart_meta_data->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_meta_data->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "key");
    if (cJSON_IsNull(key)) {
        key = NULL;
    }
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // cart_meta_data->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // cart_meta_data->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "namespace");
    if (cJSON_IsNull(_namespace)) {
        _namespace = NULL;
    }
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // cart_meta_data->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_meta_data->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_meta_dataJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_meta_data_local_var = cart_meta_data_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_meta_data_local_var;
end:
    return NULL;

}
