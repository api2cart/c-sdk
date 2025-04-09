#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_failed_webhooks_200_response.h"



static account_failed_webhooks_200_response_t *account_failed_webhooks_200_response_create_internal(
    int return_code,
    char *return_message,
    account_failed_webhooks_200_response_result_t *result
    ) {
    account_failed_webhooks_200_response_t *account_failed_webhooks_200_response_local_var = malloc(sizeof(account_failed_webhooks_200_response_t));
    if (!account_failed_webhooks_200_response_local_var) {
        return NULL;
    }
    account_failed_webhooks_200_response_local_var->return_code = return_code;
    account_failed_webhooks_200_response_local_var->return_message = return_message;
    account_failed_webhooks_200_response_local_var->result = result;

    account_failed_webhooks_200_response_local_var->_library_owned = 1;
    return account_failed_webhooks_200_response_local_var;
}

__attribute__((deprecated)) account_failed_webhooks_200_response_t *account_failed_webhooks_200_response_create(
    int return_code,
    char *return_message,
    account_failed_webhooks_200_response_result_t *result
    ) {
    return account_failed_webhooks_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void account_failed_webhooks_200_response_free(account_failed_webhooks_200_response_t *account_failed_webhooks_200_response) {
    if(NULL == account_failed_webhooks_200_response){
        return ;
    }
    if(account_failed_webhooks_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_failed_webhooks_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_failed_webhooks_200_response->return_message) {
        free(account_failed_webhooks_200_response->return_message);
        account_failed_webhooks_200_response->return_message = NULL;
    }
    if (account_failed_webhooks_200_response->result) {
        account_failed_webhooks_200_response_result_free(account_failed_webhooks_200_response->result);
        account_failed_webhooks_200_response->result = NULL;
    }
    free(account_failed_webhooks_200_response);
}

cJSON *account_failed_webhooks_200_response_convertToJSON(account_failed_webhooks_200_response_t *account_failed_webhooks_200_response) {
    cJSON *item = cJSON_CreateObject();

    // account_failed_webhooks_200_response->return_code
    if(account_failed_webhooks_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", account_failed_webhooks_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_failed_webhooks_200_response->return_message
    if(account_failed_webhooks_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", account_failed_webhooks_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // account_failed_webhooks_200_response->result
    if(account_failed_webhooks_200_response->result) {
    cJSON *result_local_JSON = account_failed_webhooks_200_response_result_convertToJSON(account_failed_webhooks_200_response->result);
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

account_failed_webhooks_200_response_t *account_failed_webhooks_200_response_parseFromJSON(cJSON *account_failed_webhooks_200_responseJSON){

    account_failed_webhooks_200_response_t *account_failed_webhooks_200_response_local_var = NULL;

    // define the local variable for account_failed_webhooks_200_response->result
    account_failed_webhooks_200_response_result_t *result_local_nonprim = NULL;

    // account_failed_webhooks_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // account_failed_webhooks_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // account_failed_webhooks_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = account_failed_webhooks_200_response_result_parseFromJSON(result); //nonprimitive
    }


    account_failed_webhooks_200_response_local_var = account_failed_webhooks_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return account_failed_webhooks_200_response_local_var;
end:
    if (result_local_nonprim) {
        account_failed_webhooks_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
