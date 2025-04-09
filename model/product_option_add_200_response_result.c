#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option_add_200_response_result.h"



static product_option_add_200_response_result_t *product_option_add_200_response_result_create_internal(
    char *option_id,
    char *product_option_id,
    char *product_value_ids
    ) {
    product_option_add_200_response_result_t *product_option_add_200_response_result_local_var = malloc(sizeof(product_option_add_200_response_result_t));
    if (!product_option_add_200_response_result_local_var) {
        return NULL;
    }
    product_option_add_200_response_result_local_var->option_id = option_id;
    product_option_add_200_response_result_local_var->product_option_id = product_option_id;
    product_option_add_200_response_result_local_var->product_value_ids = product_value_ids;

    product_option_add_200_response_result_local_var->_library_owned = 1;
    return product_option_add_200_response_result_local_var;
}

__attribute__((deprecated)) product_option_add_200_response_result_t *product_option_add_200_response_result_create(
    char *option_id,
    char *product_option_id,
    char *product_value_ids
    ) {
    return product_option_add_200_response_result_create_internal (
        option_id,
        product_option_id,
        product_value_ids
        );
}

void product_option_add_200_response_result_free(product_option_add_200_response_result_t *product_option_add_200_response_result) {
    if(NULL == product_option_add_200_response_result){
        return ;
    }
    if(product_option_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option_add_200_response_result->option_id) {
        free(product_option_add_200_response_result->option_id);
        product_option_add_200_response_result->option_id = NULL;
    }
    if (product_option_add_200_response_result->product_option_id) {
        free(product_option_add_200_response_result->product_option_id);
        product_option_add_200_response_result->product_option_id = NULL;
    }
    if (product_option_add_200_response_result->product_value_ids) {
        free(product_option_add_200_response_result->product_value_ids);
        product_option_add_200_response_result->product_value_ids = NULL;
    }
    free(product_option_add_200_response_result);
}

cJSON *product_option_add_200_response_result_convertToJSON(product_option_add_200_response_result_t *product_option_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // product_option_add_200_response_result->option_id
    if(product_option_add_200_response_result->option_id) {
    if(cJSON_AddStringToObject(item, "option_id", product_option_add_200_response_result->option_id) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add_200_response_result->product_option_id
    if(product_option_add_200_response_result->product_option_id) {
    if(cJSON_AddStringToObject(item, "product_option_id", product_option_add_200_response_result->product_option_id) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add_200_response_result->product_value_ids
    if(product_option_add_200_response_result->product_value_ids) {
    if(cJSON_AddStringToObject(item, "product_value_ids", product_option_add_200_response_result->product_value_ids) == NULL) {
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

product_option_add_200_response_result_t *product_option_add_200_response_result_parseFromJSON(cJSON *product_option_add_200_response_resultJSON){

    product_option_add_200_response_result_t *product_option_add_200_response_result_local_var = NULL;

    // product_option_add_200_response_result->option_id
    cJSON *option_id = cJSON_GetObjectItemCaseSensitive(product_option_add_200_response_resultJSON, "option_id");
    if (cJSON_IsNull(option_id)) {
        option_id = NULL;
    }
    if (option_id) { 
    if(!cJSON_IsString(option_id) && !cJSON_IsNull(option_id))
    {
    goto end; //String
    }
    }

    // product_option_add_200_response_result->product_option_id
    cJSON *product_option_id = cJSON_GetObjectItemCaseSensitive(product_option_add_200_response_resultJSON, "product_option_id");
    if (cJSON_IsNull(product_option_id)) {
        product_option_id = NULL;
    }
    if (product_option_id) { 
    if(!cJSON_IsString(product_option_id) && !cJSON_IsNull(product_option_id))
    {
    goto end; //String
    }
    }

    // product_option_add_200_response_result->product_value_ids
    cJSON *product_value_ids = cJSON_GetObjectItemCaseSensitive(product_option_add_200_response_resultJSON, "product_value_ids");
    if (cJSON_IsNull(product_value_ids)) {
        product_value_ids = NULL;
    }
    if (product_value_ids) { 
    if(!cJSON_IsString(product_value_ids) && !cJSON_IsNull(product_value_ids))
    {
    goto end; //String
    }
    }


    product_option_add_200_response_result_local_var = product_option_add_200_response_result_create_internal (
        option_id && !cJSON_IsNull(option_id) ? strdup(option_id->valuestring) : NULL,
        product_option_id && !cJSON_IsNull(product_option_id) ? strdup(product_option_id->valuestring) : NULL,
        product_value_ids && !cJSON_IsNull(product_value_ids) ? strdup(product_value_ids->valuestring) : NULL
        );

    return product_option_add_200_response_result_local_var;
end:
    return NULL;

}
