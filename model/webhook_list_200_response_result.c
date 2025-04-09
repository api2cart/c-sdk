#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_list_200_response_result.h"



static webhook_list_200_response_result_t *webhook_list_200_response_result_create_internal(
    list_t *webhook
    ) {
    webhook_list_200_response_result_t *webhook_list_200_response_result_local_var = malloc(sizeof(webhook_list_200_response_result_t));
    if (!webhook_list_200_response_result_local_var) {
        return NULL;
    }
    webhook_list_200_response_result_local_var->webhook = webhook;

    webhook_list_200_response_result_local_var->_library_owned = 1;
    return webhook_list_200_response_result_local_var;
}

__attribute__((deprecated)) webhook_list_200_response_result_t *webhook_list_200_response_result_create(
    list_t *webhook
    ) {
    return webhook_list_200_response_result_create_internal (
        webhook
        );
}

void webhook_list_200_response_result_free(webhook_list_200_response_result_t *webhook_list_200_response_result) {
    if(NULL == webhook_list_200_response_result){
        return ;
    }
    if(webhook_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_list_200_response_result->webhook) {
        list_ForEach(listEntry, webhook_list_200_response_result->webhook) {
            webhook_free(listEntry->data);
        }
        list_freeList(webhook_list_200_response_result->webhook);
        webhook_list_200_response_result->webhook = NULL;
    }
    free(webhook_list_200_response_result);
}

cJSON *webhook_list_200_response_result_convertToJSON(webhook_list_200_response_result_t *webhook_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // webhook_list_200_response_result->webhook
    if(webhook_list_200_response_result->webhook) {
    cJSON *webhook = cJSON_AddArrayToObject(item, "webhook");
    if(webhook == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *webhookListEntry;
    if (webhook_list_200_response_result->webhook) {
    list_ForEach(webhookListEntry, webhook_list_200_response_result->webhook) {
    cJSON *itemLocal = webhook_convertToJSON(webhookListEntry->data);
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

webhook_list_200_response_result_t *webhook_list_200_response_result_parseFromJSON(cJSON *webhook_list_200_response_resultJSON){

    webhook_list_200_response_result_t *webhook_list_200_response_result_local_var = NULL;

    // define the local list for webhook_list_200_response_result->webhook
    list_t *webhookList = NULL;

    // webhook_list_200_response_result->webhook
    cJSON *webhook = cJSON_GetObjectItemCaseSensitive(webhook_list_200_response_resultJSON, "webhook");
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
        webhook_t *webhookItem = webhook_parseFromJSON(webhook_local_nonprimitive);

        list_addElement(webhookList, webhookItem);
    }
    }


    webhook_list_200_response_result_local_var = webhook_list_200_response_result_create_internal (
        webhook ? webhookList : NULL
        );

    return webhook_list_200_response_result_local_var;
end:
    if (webhookList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, webhookList) {
            webhook_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(webhookList);
        webhookList = NULL;
    }
    return NULL;

}
