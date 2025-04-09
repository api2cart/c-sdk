#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_info_200_response.h"



static attribute_info_200_response_t *attribute_info_200_response_create_internal(
    int return_code,
    char *return_message,
    store_attribute_t *result
    ) {
    attribute_info_200_response_t *attribute_info_200_response_local_var = malloc(sizeof(attribute_info_200_response_t));
    if (!attribute_info_200_response_local_var) {
        return NULL;
    }
    attribute_info_200_response_local_var->return_code = return_code;
    attribute_info_200_response_local_var->return_message = return_message;
    attribute_info_200_response_local_var->result = result;

    attribute_info_200_response_local_var->_library_owned = 1;
    return attribute_info_200_response_local_var;
}

__attribute__((deprecated)) attribute_info_200_response_t *attribute_info_200_response_create(
    int return_code,
    char *return_message,
    store_attribute_t *result
    ) {
    return attribute_info_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void attribute_info_200_response_free(attribute_info_200_response_t *attribute_info_200_response) {
    if(NULL == attribute_info_200_response){
        return ;
    }
    if(attribute_info_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_info_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_info_200_response->return_message) {
        free(attribute_info_200_response->return_message);
        attribute_info_200_response->return_message = NULL;
    }
    if (attribute_info_200_response->result) {
        store_attribute_free(attribute_info_200_response->result);
        attribute_info_200_response->result = NULL;
    }
    free(attribute_info_200_response);
}

cJSON *attribute_info_200_response_convertToJSON(attribute_info_200_response_t *attribute_info_200_response) {
    cJSON *item = cJSON_CreateObject();

    // attribute_info_200_response->return_code
    if(attribute_info_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", attribute_info_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // attribute_info_200_response->return_message
    if(attribute_info_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", attribute_info_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // attribute_info_200_response->result
    if(attribute_info_200_response->result) {
    cJSON *result_local_JSON = store_attribute_convertToJSON(attribute_info_200_response->result);
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

attribute_info_200_response_t *attribute_info_200_response_parseFromJSON(cJSON *attribute_info_200_responseJSON){

    attribute_info_200_response_t *attribute_info_200_response_local_var = NULL;

    // define the local variable for attribute_info_200_response->result
    store_attribute_t *result_local_nonprim = NULL;

    // attribute_info_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(attribute_info_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // attribute_info_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(attribute_info_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // attribute_info_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(attribute_info_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = store_attribute_parseFromJSON(result); //nonprimitive
    }


    attribute_info_200_response_local_var = attribute_info_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return attribute_info_200_response_local_var;
end:
    if (result_local_nonprim) {
        store_attribute_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
