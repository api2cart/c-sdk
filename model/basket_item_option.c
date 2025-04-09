#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_item_option.h"



static basket_item_option_t *basket_item_option_create_internal(
    char *id,
    char *value_id,
    char *name,
    char *value,
    int used_in_combination,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    basket_item_option_t *basket_item_option_local_var = malloc(sizeof(basket_item_option_t));
    if (!basket_item_option_local_var) {
        return NULL;
    }
    basket_item_option_local_var->id = id;
    basket_item_option_local_var->value_id = value_id;
    basket_item_option_local_var->name = name;
    basket_item_option_local_var->value = value;
    basket_item_option_local_var->used_in_combination = used_in_combination;
    basket_item_option_local_var->additional_fields = additional_fields;
    basket_item_option_local_var->custom_fields = custom_fields;

    basket_item_option_local_var->_library_owned = 1;
    return basket_item_option_local_var;
}

__attribute__((deprecated)) basket_item_option_t *basket_item_option_create(
    char *id,
    char *value_id,
    char *name,
    char *value,
    int used_in_combination,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return basket_item_option_create_internal (
        id,
        value_id,
        name,
        value,
        used_in_combination,
        additional_fields,
        custom_fields
        );
}

void basket_item_option_free(basket_item_option_t *basket_item_option) {
    if(NULL == basket_item_option){
        return ;
    }
    if(basket_item_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_item_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket_item_option->id) {
        free(basket_item_option->id);
        basket_item_option->id = NULL;
    }
    if (basket_item_option->value_id) {
        free(basket_item_option->value_id);
        basket_item_option->value_id = NULL;
    }
    if (basket_item_option->name) {
        free(basket_item_option->name);
        basket_item_option->name = NULL;
    }
    if (basket_item_option->value) {
        free(basket_item_option->value);
        basket_item_option->value = NULL;
    }
    if (basket_item_option->additional_fields) {
        object_free(basket_item_option->additional_fields);
        basket_item_option->additional_fields = NULL;
    }
    if (basket_item_option->custom_fields) {
        object_free(basket_item_option->custom_fields);
        basket_item_option->custom_fields = NULL;
    }
    free(basket_item_option);
}

cJSON *basket_item_option_convertToJSON(basket_item_option_t *basket_item_option) {
    cJSON *item = cJSON_CreateObject();

    // basket_item_option->id
    if(basket_item_option->id) {
    if(cJSON_AddStringToObject(item, "id", basket_item_option->id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item_option->value_id
    if(basket_item_option->value_id) {
    if(cJSON_AddStringToObject(item, "value_id", basket_item_option->value_id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item_option->name
    if(basket_item_option->name) {
    if(cJSON_AddStringToObject(item, "name", basket_item_option->name) == NULL) {
    goto fail; //String
    }
    }


    // basket_item_option->value
    if(basket_item_option->value) {
    if(cJSON_AddStringToObject(item, "value", basket_item_option->value) == NULL) {
    goto fail; //String
    }
    }


    // basket_item_option->used_in_combination
    if(basket_item_option->used_in_combination) {
    if(cJSON_AddBoolToObject(item, "used_in_combination", basket_item_option->used_in_combination) == NULL) {
    goto fail; //Bool
    }
    }


    // basket_item_option->additional_fields
    if(basket_item_option->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(basket_item_option->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket_item_option->custom_fields
    if(basket_item_option->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(basket_item_option->custom_fields);
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

basket_item_option_t *basket_item_option_parseFromJSON(cJSON *basket_item_optionJSON){

    basket_item_option_t *basket_item_option_local_var = NULL;

    // basket_item_option->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // basket_item_option->value_id
    cJSON *value_id = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "value_id");
    if (cJSON_IsNull(value_id)) {
        value_id = NULL;
    }
    if (value_id) { 
    if(!cJSON_IsString(value_id) && !cJSON_IsNull(value_id))
    {
    goto end; //String
    }
    }

    // basket_item_option->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // basket_item_option->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // basket_item_option->used_in_combination
    cJSON *used_in_combination = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "used_in_combination");
    if (cJSON_IsNull(used_in_combination)) {
        used_in_combination = NULL;
    }
    if (used_in_combination) { 
    if(!cJSON_IsBool(used_in_combination))
    {
    goto end; //Bool
    }
    }

    // basket_item_option->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // basket_item_option->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(basket_item_optionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    basket_item_option_local_var = basket_item_option_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        value_id && !cJSON_IsNull(value_id) ? strdup(value_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        used_in_combination ? used_in_combination->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return basket_item_option_local_var;
end:
    return NULL;

}
