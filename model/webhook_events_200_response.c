#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_events_200_response.h"



static webhook_events_200_response_t *webhook_events_200_response_create_internal(
    int return_code,
    char *return_message,
    webhook_events_200_response_result_t *result
    ) {
    webhook_events_200_response_t *webhook_events_200_response_local_var = malloc(sizeof(webhook_events_200_response_t));
    if (!webhook_events_200_response_local_var) {
        return NULL;
    }
    webhook_events_200_response_local_var->return_code = return_code;
    webhook_events_200_response_local_var->return_message = return_message;
    webhook_events_200_response_local_var->result = result;

    webhook_events_200_response_local_var->_library_owned = 1;
    return webhook_events_200_response_local_var;
}

__attribute__((deprecated)) webhook_events_200_response_t *webhook_events_200_response_create(
    int return_code,
    char *return_message,
    webhook_events_200_response_result_t *result
    ) {
    return webhook_events_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void webhook_events_200_response_free(webhook_events_200_response_t *webhook_events_200_response) {
    if(NULL == webhook_events_200_response){
        return ;
    }
    if(webhook_events_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_events_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_events_200_response->return_message) {
        free(webhook_events_200_response->return_message);
        webhook_events_200_response->return_message = NULL;
    }
    if (webhook_events_200_response->result) {
        webhook_events_200_response_result_free(webhook_events_200_response->result);
        webhook_events_200_response->result = NULL;
    }
    free(webhook_events_200_response);
}

cJSON *webhook_events_200_response_convertToJSON(webhook_events_200_response_t *webhook_events_200_response) {
    cJSON *item = cJSON_CreateObject();

    // webhook_events_200_response->return_code
    if(webhook_events_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", webhook_events_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_events_200_response->return_message
    if(webhook_events_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", webhook_events_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // webhook_events_200_response->result
    if(webhook_events_200_response->result) {
    cJSON *result_local_JSON = webhook_events_200_response_result_convertToJSON(webhook_events_200_response->result);
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

webhook_events_200_response_t *webhook_events_200_response_parseFromJSON(cJSON *webhook_events_200_responseJSON){

    webhook_events_200_response_t *webhook_events_200_response_local_var = NULL;

    // define the local variable for webhook_events_200_response->result
    webhook_events_200_response_result_t *result_local_nonprim = NULL;

    // webhook_events_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(webhook_events_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // webhook_events_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(webhook_events_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // webhook_events_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(webhook_events_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = webhook_events_200_response_result_parseFromJSON(result); //nonprimitive
    }


    webhook_events_200_response_local_var = webhook_events_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return webhook_events_200_response_local_var;
end:
    if (result_local_nonprim) {
        webhook_events_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
