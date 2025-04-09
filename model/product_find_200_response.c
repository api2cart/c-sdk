#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_find_200_response.h"



static product_find_200_response_t *product_find_200_response_create_internal(
    int return_code,
    char *return_message,
    product_find_200_response_result_t *result
    ) {
    product_find_200_response_t *product_find_200_response_local_var = malloc(sizeof(product_find_200_response_t));
    if (!product_find_200_response_local_var) {
        return NULL;
    }
    product_find_200_response_local_var->return_code = return_code;
    product_find_200_response_local_var->return_message = return_message;
    product_find_200_response_local_var->result = result;

    product_find_200_response_local_var->_library_owned = 1;
    return product_find_200_response_local_var;
}

__attribute__((deprecated)) product_find_200_response_t *product_find_200_response_create(
    int return_code,
    char *return_message,
    product_find_200_response_result_t *result
    ) {
    return product_find_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void product_find_200_response_free(product_find_200_response_t *product_find_200_response) {
    if(NULL == product_find_200_response){
        return ;
    }
    if(product_find_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_find_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_find_200_response->return_message) {
        free(product_find_200_response->return_message);
        product_find_200_response->return_message = NULL;
    }
    if (product_find_200_response->result) {
        product_find_200_response_result_free(product_find_200_response->result);
        product_find_200_response->result = NULL;
    }
    free(product_find_200_response);
}

cJSON *product_find_200_response_convertToJSON(product_find_200_response_t *product_find_200_response) {
    cJSON *item = cJSON_CreateObject();

    // product_find_200_response->return_code
    if(product_find_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", product_find_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_find_200_response->return_message
    if(product_find_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", product_find_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // product_find_200_response->result
    if(product_find_200_response->result) {
    cJSON *result_local_JSON = product_find_200_response_result_convertToJSON(product_find_200_response->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
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

product_find_200_response_t *product_find_200_response_parseFromJSON(cJSON *product_find_200_responseJSON){

    product_find_200_response_t *product_find_200_response_local_var = NULL;

    // define the local variable for product_find_200_response->result
    product_find_200_response_result_t *result_local_nonprim = NULL;

    // product_find_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(product_find_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // product_find_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(product_find_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // product_find_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(product_find_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = product_find_200_response_result_parseFromJSON(result); //nonprimitive
    }


    product_find_200_response_local_var = product_find_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return product_find_200_response_local_var;
end:
    if (result_local_nonprim) {
        product_find_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
