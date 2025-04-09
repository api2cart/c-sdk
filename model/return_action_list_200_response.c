#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_action_list_200_response.h"



static return_action_list_200_response_t *return_action_list_200_response_create_internal(
    int return_code,
    char *return_message,
    return_action_list_200_response_result_t *result
    ) {
    return_action_list_200_response_t *return_action_list_200_response_local_var = malloc(sizeof(return_action_list_200_response_t));
    if (!return_action_list_200_response_local_var) {
        return NULL;
    }
    return_action_list_200_response_local_var->return_code = return_code;
    return_action_list_200_response_local_var->return_message = return_message;
    return_action_list_200_response_local_var->result = result;

    return_action_list_200_response_local_var->_library_owned = 1;
    return return_action_list_200_response_local_var;
}

__attribute__((deprecated)) return_action_list_200_response_t *return_action_list_200_response_create(
    int return_code,
    char *return_message,
    return_action_list_200_response_result_t *result
    ) {
    return return_action_list_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void return_action_list_200_response_free(return_action_list_200_response_t *return_action_list_200_response) {
    if(NULL == return_action_list_200_response){
        return ;
    }
    if(return_action_list_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_action_list_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_action_list_200_response->return_message) {
        free(return_action_list_200_response->return_message);
        return_action_list_200_response->return_message = NULL;
    }
    if (return_action_list_200_response->result) {
        return_action_list_200_response_result_free(return_action_list_200_response->result);
        return_action_list_200_response->result = NULL;
    }
    free(return_action_list_200_response);
}

cJSON *return_action_list_200_response_convertToJSON(return_action_list_200_response_t *return_action_list_200_response) {
    cJSON *item = cJSON_CreateObject();

    // return_action_list_200_response->return_code
    if(return_action_list_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", return_action_list_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // return_action_list_200_response->return_message
    if(return_action_list_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", return_action_list_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // return_action_list_200_response->result
    if(return_action_list_200_response->result) {
    cJSON *result_local_JSON = return_action_list_200_response_result_convertToJSON(return_action_list_200_response->result);
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

return_action_list_200_response_t *return_action_list_200_response_parseFromJSON(cJSON *return_action_list_200_responseJSON){

    return_action_list_200_response_t *return_action_list_200_response_local_var = NULL;

    // define the local variable for return_action_list_200_response->result
    return_action_list_200_response_result_t *result_local_nonprim = NULL;

    // return_action_list_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(return_action_list_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // return_action_list_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(return_action_list_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // return_action_list_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(return_action_list_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = return_action_list_200_response_result_parseFromJSON(result); //nonprimitive
    }


    return_action_list_200_response_local_var = return_action_list_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return return_action_list_200_response_local_var;
end:
    if (result_local_nonprim) {
        return_action_list_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
