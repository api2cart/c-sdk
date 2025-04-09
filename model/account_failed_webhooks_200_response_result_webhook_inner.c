#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_failed_webhooks_200_response_result_webhook_inner.h"



static account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_create_internal(
    int webhook_id,
    char *entity_id,
    a2_c_date_time_t *time
    ) {
    account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_local_var = malloc(sizeof(account_failed_webhooks_200_response_result_webhook_inner_t));
    if (!account_failed_webhooks_200_response_result_webhook_inner_local_var) {
        return NULL;
    }
    account_failed_webhooks_200_response_result_webhook_inner_local_var->webhook_id = webhook_id;
    account_failed_webhooks_200_response_result_webhook_inner_local_var->entity_id = entity_id;
    account_failed_webhooks_200_response_result_webhook_inner_local_var->time = time;

    account_failed_webhooks_200_response_result_webhook_inner_local_var->_library_owned = 1;
    return account_failed_webhooks_200_response_result_webhook_inner_local_var;
}

__attribute__((deprecated)) account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_create(
    int webhook_id,
    char *entity_id,
    a2_c_date_time_t *time
    ) {
    return account_failed_webhooks_200_response_result_webhook_inner_create_internal (
        webhook_id,
        entity_id,
        time
        );
}

void account_failed_webhooks_200_response_result_webhook_inner_free(account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner) {
    if(NULL == account_failed_webhooks_200_response_result_webhook_inner){
        return ;
    }
    if(account_failed_webhooks_200_response_result_webhook_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_failed_webhooks_200_response_result_webhook_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_failed_webhooks_200_response_result_webhook_inner->entity_id) {
        free(account_failed_webhooks_200_response_result_webhook_inner->entity_id);
        account_failed_webhooks_200_response_result_webhook_inner->entity_id = NULL;
    }
    if (account_failed_webhooks_200_response_result_webhook_inner->time) {
        a2_c_date_time_free(account_failed_webhooks_200_response_result_webhook_inner->time);
        account_failed_webhooks_200_response_result_webhook_inner->time = NULL;
    }
    free(account_failed_webhooks_200_response_result_webhook_inner);
}

cJSON *account_failed_webhooks_200_response_result_webhook_inner_convertToJSON(account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_failed_webhooks_200_response_result_webhook_inner->webhook_id
    if(account_failed_webhooks_200_response_result_webhook_inner->webhook_id) {
    if(cJSON_AddNumberToObject(item, "webhook_id", account_failed_webhooks_200_response_result_webhook_inner->webhook_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_failed_webhooks_200_response_result_webhook_inner->entity_id
    if(account_failed_webhooks_200_response_result_webhook_inner->entity_id) {
    if(cJSON_AddStringToObject(item, "entity_id", account_failed_webhooks_200_response_result_webhook_inner->entity_id) == NULL) {
    goto fail; //String
    }
    }


    // account_failed_webhooks_200_response_result_webhook_inner->time
    if(account_failed_webhooks_200_response_result_webhook_inner->time) {
    cJSON *time_local_JSON = a2_c_date_time_convertToJSON(account_failed_webhooks_200_response_result_webhook_inner->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
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

account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_parseFromJSON(cJSON *account_failed_webhooks_200_response_result_webhook_innerJSON){

    account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_local_var = NULL;

    // define the local variable for account_failed_webhooks_200_response_result_webhook_inner->time
    a2_c_date_time_t *time_local_nonprim = NULL;

    // account_failed_webhooks_200_response_result_webhook_inner->webhook_id
    cJSON *webhook_id = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_response_result_webhook_innerJSON, "webhook_id");
    if (cJSON_IsNull(webhook_id)) {
        webhook_id = NULL;
    }
    if (webhook_id) { 
    if(!cJSON_IsNumber(webhook_id))
    {
    goto end; //Numeric
    }
    }

    // account_failed_webhooks_200_response_result_webhook_inner->entity_id
    cJSON *entity_id = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_response_result_webhook_innerJSON, "entity_id");
    if (cJSON_IsNull(entity_id)) {
        entity_id = NULL;
    }
    if (entity_id) { 
    if(!cJSON_IsString(entity_id) && !cJSON_IsNull(entity_id))
    {
    goto end; //String
    }
    }

    // account_failed_webhooks_200_response_result_webhook_inner->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_response_result_webhook_innerJSON, "time");
    if (cJSON_IsNull(time)) {
        time = NULL;
    }
    if (time) { 
    time_local_nonprim = a2_c_date_time_parseFromJSON(time); //nonprimitive
    }


    account_failed_webhooks_200_response_result_webhook_inner_local_var = account_failed_webhooks_200_response_result_webhook_inner_create_internal (
        webhook_id ? webhook_id->valuedouble : 0,
        entity_id && !cJSON_IsNull(entity_id) ? strdup(entity_id->valuestring) : NULL,
        time ? time_local_nonprim : NULL
        );

    return account_failed_webhooks_200_response_result_webhook_inner_local_var;
end:
    if (time_local_nonprim) {
        a2_c_date_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    return NULL;

}
