#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_failed_webhooks_200_response_result.h"



static account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_create_internal(
    char *all_failed_webhook,
    list_t *webhook
    ) {
    account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_local_var = malloc(sizeof(account_failed_webhooks_200_response_result_t));
    if (!account_failed_webhooks_200_response_result_local_var) {
        return NULL;
    }
    account_failed_webhooks_200_response_result_local_var->all_failed_webhook = all_failed_webhook;
    account_failed_webhooks_200_response_result_local_var->webhook = webhook;

    account_failed_webhooks_200_response_result_local_var->_library_owned = 1;
    return account_failed_webhooks_200_response_result_local_var;
}

__attribute__((deprecated)) account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_create(
    char *all_failed_webhook,
    list_t *webhook
    ) {
    return account_failed_webhooks_200_response_result_create_internal (
        all_failed_webhook,
        webhook
        );
}

void account_failed_webhooks_200_response_result_free(account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result) {
    if(NULL == account_failed_webhooks_200_response_result){
        return ;
    }
    if(account_failed_webhooks_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_failed_webhooks_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_failed_webhooks_200_response_result->all_failed_webhook) {
        free(account_failed_webhooks_200_response_result->all_failed_webhook);
        account_failed_webhooks_200_response_result->all_failed_webhook = NULL;
    }
    if (account_failed_webhooks_200_response_result->webhook) {
        list_ForEach(listEntry, account_failed_webhooks_200_response_result->webhook) {
            account_failed_webhooks_200_response_result_webhook_inner_free(listEntry->data);
        }
        list_freeList(account_failed_webhooks_200_response_result->webhook);
        account_failed_webhooks_200_response_result->webhook = NULL;
    }
    free(account_failed_webhooks_200_response_result);
}

cJSON *account_failed_webhooks_200_response_result_convertToJSON(account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // account_failed_webhooks_200_response_result->all_failed_webhook
    if(account_failed_webhooks_200_response_result->all_failed_webhook) {
    if(cJSON_AddStringToObject(item, "all_failed_webhook", account_failed_webhooks_200_response_result->all_failed_webhook) == NULL) {
    goto fail; //String
    }
    }


    // account_failed_webhooks_200_response_result->webhook
    if(account_failed_webhooks_200_response_result->webhook) {
    cJSON *webhook = cJSON_AddArrayToObject(item, "webhook");
    if(webhook == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *webhookListEntry;
    if (account_failed_webhooks_200_response_result->webhook) {
    list_ForEach(webhookListEntry, account_failed_webhooks_200_response_result->webhook) {
    cJSON *itemLocal = account_failed_webhooks_200_response_result_webhook_inner_convertToJSON(webhookListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(webhook, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_parseFromJSON(cJSON *account_failed_webhooks_200_response_resultJSON){

    account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_local_var = NULL;

    // define the local list for account_failed_webhooks_200_response_result->webhook
    list_t *webhookList = NULL;

    // account_failed_webhooks_200_response_result->all_failed_webhook
    cJSON *all_failed_webhook = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_response_resultJSON, "all_failed_webhook");
    if (cJSON_IsNull(all_failed_webhook)) {
        all_failed_webhook = NULL;
    }
    if (all_failed_webhook) { 
    if(!cJSON_IsString(all_failed_webhook) && !cJSON_IsNull(all_failed_webhook))
    {
    goto end; //String
    }
    }

    // account_failed_webhooks_200_response_result->webhook
    cJSON *webhook = cJSON_GetObjectItemCaseSensitive(account_failed_webhooks_200_response_resultJSON, "webhook");
    if (cJSON_IsNull(webhook)) {
        webhook = NULL;
    }
    if (webhook) { 
    cJSON *webhook_local_nonprimitive = NULL;
    if(!cJSON_IsArray(webhook)){
        goto end; //nonprimitive container
    }

    webhookList = list_createList();

    cJSON_ArrayForEach(webhook_local_nonprimitive,webhook )
    {
        if(!cJSON_IsObject(webhook_local_nonprimitive)){
            goto end;
        }
        account_failed_webhooks_200_response_result_webhook_inner_t *webhookItem = account_failed_webhooks_200_response_result_webhook_inner_parseFromJSON(webhook_local_nonprimitive);

        list_addElement(webhookList, webhookItem);
    }
    }


    account_failed_webhooks_200_response_result_local_var = account_failed_webhooks_200_response_result_create_internal (
        all_failed_webhook && !cJSON_IsNull(all_failed_webhook) ? strdup(all_failed_webhook->valuestring) : NULL,
        webhook ? webhookList : NULL
        );

    return account_failed_webhooks_200_response_result_local_var;
end:
    if (webhookList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, webhookList) {
            account_failed_webhooks_200_response_result_webhook_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(webhookList);
        webhookList = NULL;
    }
    return NULL;

}
