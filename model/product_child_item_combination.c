#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_child_item_combination.h"



static product_child_item_combination_t *product_child_item_combination_create_internal(
    char *option_id,
    char *option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_child_item_combination_t *product_child_item_combination_local_var = malloc(sizeof(product_child_item_combination_t));
    if (!product_child_item_combination_local_var) {
        return NULL;
    }
    product_child_item_combination_local_var->option_id = option_id;
    product_child_item_combination_local_var->option_value_id = option_value_id;
    product_child_item_combination_local_var->additional_fields = additional_fields;
    product_child_item_combination_local_var->custom_fields = custom_fields;

    product_child_item_combination_local_var->_library_owned = 1;
    return product_child_item_combination_local_var;
}

__attribute__((deprecated)) product_child_item_combination_t *product_child_item_combination_create(
    char *option_id,
    char *option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_child_item_combination_create_internal (
        option_id,
        option_value_id,
        additional_fields,
        custom_fields
        );
}

void product_child_item_combination_free(product_child_item_combination_t *product_child_item_combination) {
    if(NULL == product_child_item_combination){
        return ;
    }
    if(product_child_item_combination->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_child_item_combination_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_child_item_combination->option_id) {
        free(product_child_item_combination->option_id);
        product_child_item_combination->option_id = NULL;
    }
    if (product_child_item_combination->option_value_id) {
        free(product_child_item_combination->option_value_id);
        product_child_item_combination->option_value_id = NULL;
    }
    if (product_child_item_combination->additional_fields) {
        object_free(product_child_item_combination->additional_fields);
        product_child_item_combination->additional_fields = NULL;
    }
    if (product_child_item_combination->custom_fields) {
        object_free(product_child_item_combination->custom_fields);
        product_child_item_combination->custom_fields = NULL;
    }
    free(product_child_item_combination);
}

cJSON *product_child_item_combination_convertToJSON(product_child_item_combination_t *product_child_item_combination) {
    cJSON *item = cJSON_CreateObject();

    // product_child_item_combination->option_id
    if(product_child_item_combination->option_id) {
    if(cJSON_AddStringToObject(item, "option_id", product_child_item_combination->option_id) == NULL) {
    goto fail; //String
    }
    }


    // product_child_item_combination->option_value_id
    if(product_child_item_combination->option_value_id) {
    if(cJSON_AddStringToObject(item, "option_value_id", product_child_item_combination->option_value_id) == NULL) {
    goto fail; //String
    }
    }


    // product_child_item_combination->additional_fields
    if(product_child_item_combination->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_child_item_combination->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_child_item_combination->custom_fields
    if(product_child_item_combination->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_child_item_combination->custom_fields);
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

product_child_item_combination_t *product_child_item_combination_parseFromJSON(cJSON *product_child_item_combinationJSON){

    product_child_item_combination_t *product_child_item_combination_local_var = NULL;

    // product_child_item_combination->option_id
    cJSON *option_id = cJSON_GetObjectItemCaseSensitive(product_child_item_combinationJSON, "option_id");
    if (cJSON_IsNull(option_id)) {
        option_id = NULL;
    }
    if (option_id) { 
    if(!cJSON_IsString(option_id) && !cJSON_IsNull(option_id))
    {
    goto end; //String
    }
    }

    // product_child_item_combination->option_value_id
    cJSON *option_value_id = cJSON_GetObjectItemCaseSensitive(product_child_item_combinationJSON, "option_value_id");
    if (cJSON_IsNull(option_value_id)) {
        option_value_id = NULL;
    }
    if (option_value_id) { 
    if(!cJSON_IsString(option_value_id) && !cJSON_IsNull(option_value_id))
    {
    goto end; //String
    }
    }

    // product_child_item_combination->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_child_item_combinationJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_child_item_combination->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_child_item_combinationJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_child_item_combination_local_var = product_child_item_combination_create_internal (
        option_id && !cJSON_IsNull(option_id) ? strdup(option_id->valuestring) : NULL,
        option_value_id && !cJSON_IsNull(option_value_id) ? strdup(option_value_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_child_item_combination_local_var;
end:
    return NULL;

}
