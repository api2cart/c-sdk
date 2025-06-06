#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_batch_200_response.h"



static category_add_batch_200_response_t *category_add_batch_200_response_create_internal(
    int return_code,
    char *return_message,
    category_add_batch_200_response_result_t *result
    ) {
    category_add_batch_200_response_t *category_add_batch_200_response_local_var = malloc(sizeof(category_add_batch_200_response_t));
    if (!category_add_batch_200_response_local_var) {
        return NULL;
    }
    category_add_batch_200_response_local_var->return_code = return_code;
    category_add_batch_200_response_local_var->return_message = return_message;
    category_add_batch_200_response_local_var->result = result;

    category_add_batch_200_response_local_var->_library_owned = 1;
    return category_add_batch_200_response_local_var;
}

__attribute__((deprecated)) category_add_batch_200_response_t *category_add_batch_200_response_create(
    int return_code,
    char *return_message,
    category_add_batch_200_response_result_t *result
    ) {
    return category_add_batch_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void category_add_batch_200_response_free(category_add_batch_200_response_t *category_add_batch_200_response) {
    if(NULL == category_add_batch_200_response){
        return ;
    }
    if(category_add_batch_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_batch_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_batch_200_response->return_message) {
        free(category_add_batch_200_response->return_message);
        category_add_batch_200_response->return_message = NULL;
    }
    if (category_add_batch_200_response->result) {
        category_add_batch_200_response_result_free(category_add_batch_200_response->result);
        category_add_batch_200_response->result = NULL;
    }
    free(category_add_batch_200_response);
}

cJSON *category_add_batch_200_response_convertToJSON(category_add_batch_200_response_t *category_add_batch_200_response) {
    cJSON *item = cJSON_CreateObject();

    // category_add_batch_200_response->return_code
    if(category_add_batch_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", category_add_batch_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // category_add_batch_200_response->return_message
    if(category_add_batch_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", category_add_batch_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // category_add_batch_200_response->result
    if(category_add_batch_200_response->result) {
    cJSON *result_local_JSON = category_add_batch_200_response_result_convertToJSON(category_add_batch_200_response->result);
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

category_add_batch_200_response_t *category_add_batch_200_response_parseFromJSON(cJSON *category_add_batch_200_responseJSON){

    category_add_batch_200_response_t *category_add_batch_200_response_local_var = NULL;

    // define the local variable for category_add_batch_200_response->result
    category_add_batch_200_response_result_t *result_local_nonprim = NULL;

    // category_add_batch_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(category_add_batch_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // category_add_batch_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(category_add_batch_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // category_add_batch_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(category_add_batch_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = category_add_batch_200_response_result_parseFromJSON(result); //nonprimitive
    }


    category_add_batch_200_response_local_var = category_add_batch_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return category_add_batch_200_response_local_var;
end:
    if (result_local_nonprim) {
        category_add_batch_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
