#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_attribute_value_set_200_response_result.h"



static product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result_create_internal(
    char *product_id,
    char *attribute_id,
    char *value_id
    ) {
    product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result_local_var = malloc(sizeof(product_attribute_value_set_200_response_result_t));
    if (!product_attribute_value_set_200_response_result_local_var) {
        return NULL;
    }
    product_attribute_value_set_200_response_result_local_var->product_id = product_id;
    product_attribute_value_set_200_response_result_local_var->attribute_id = attribute_id;
    product_attribute_value_set_200_response_result_local_var->value_id = value_id;

    product_attribute_value_set_200_response_result_local_var->_library_owned = 1;
    return product_attribute_value_set_200_response_result_local_var;
}

__attribute__((deprecated)) product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result_create(
    char *product_id,
    char *attribute_id,
    char *value_id
    ) {
    return product_attribute_value_set_200_response_result_create_internal (
        product_id,
        attribute_id,
        value_id
        );
}

void product_attribute_value_set_200_response_result_free(product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result) {
    if(NULL == product_attribute_value_set_200_response_result){
        return ;
    }
    if(product_attribute_value_set_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_attribute_value_set_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_attribute_value_set_200_response_result->product_id) {
        free(product_attribute_value_set_200_response_result->product_id);
        product_attribute_value_set_200_response_result->product_id = NULL;
    }
    if (product_attribute_value_set_200_response_result->attribute_id) {
        free(product_attribute_value_set_200_response_result->attribute_id);
        product_attribute_value_set_200_response_result->attribute_id = NULL;
    }
    if (product_attribute_value_set_200_response_result->value_id) {
        free(product_attribute_value_set_200_response_result->value_id);
        product_attribute_value_set_200_response_result->value_id = NULL;
    }
    free(product_attribute_value_set_200_response_result);
}

cJSON *product_attribute_value_set_200_response_result_convertToJSON(product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_attribute_value_set_200_response_result->product_id
    if(product_attribute_value_set_200_response_result->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_attribute_value_set_200_response_result->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute_value_set_200_response_result->attribute_id
    if(product_attribute_value_set_200_response_result->attribute_id) {
    if(cJSON_AddStringToObject(item, "attribute_id", product_attribute_value_set_200_response_result->attribute_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute_value_set_200_response_result->value_id
    if(product_attribute_value_set_200_response_result->value_id) {
    if(cJSON_AddStringToObject(item, "value_id", product_attribute_value_set_200_response_result->value_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result_parseFromJSON(cJSON *product_attribute_value_set_200_response_resultJSON){

    product_attribute_value_set_200_response_result_t *product_attribute_value_set_200_response_result_local_var = NULL;

    // product_attribute_value_set_200_response_result->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_attribute_value_set_200_response_resultJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_attribute_value_set_200_response_result->attribute_id
    cJSON *attribute_id = cJSON_GetObjectItemCaseSensitive(product_attribute_value_set_200_response_resultJSON, "attribute_id");
    if (cJSON_IsNull(attribute_id)) {
        attribute_id = NULL;
    }
    if (attribute_id) { 
    if(!cJSON_IsString(attribute_id) && !cJSON_IsNull(attribute_id))
    {
    goto end; //String
    }
    }

    // product_attribute_value_set_200_response_result->value_id
    cJSON *value_id = cJSON_GetObjectItemCaseSensitive(product_attribute_value_set_200_response_resultJSON, "value_id");
    if (cJSON_IsNull(value_id)) {
        value_id = NULL;
    }
    if (value_id) { 
    if(!cJSON_IsString(value_id) && !cJSON_IsNull(value_id))
    {
    goto end; //String
    }
    }


    product_attribute_value_set_200_response_result_local_var = product_attribute_value_set_200_response_result_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        attribute_id && !cJSON_IsNull(attribute_id) ? strdup(attribute_id->valuestring) : NULL,
        value_id && !cJSON_IsNull(value_id) ? strdup(value_id->valuestring) : NULL
        );

    return product_attribute_value_set_200_response_result_local_var;
end:
    return NULL;

}
