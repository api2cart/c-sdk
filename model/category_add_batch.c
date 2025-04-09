#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_batch.h"



static category_add_batch_t *category_add_batch_create_internal(
    list_t *payload
    ) {
    category_add_batch_t *category_add_batch_local_var = malloc(sizeof(category_add_batch_t));
    if (!category_add_batch_local_var) {
        return NULL;
    }
    category_add_batch_local_var->payload = payload;

    category_add_batch_local_var->_library_owned = 1;
    return category_add_batch_local_var;
}

__attribute__((deprecated)) category_add_batch_t *category_add_batch_create(
    list_t *payload
    ) {
    return category_add_batch_create_internal (
        payload
        );
}

void category_add_batch_free(category_add_batch_t *category_add_batch) {
    if(NULL == category_add_batch){
        return ;
    }
    if(category_add_batch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_batch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_batch->payload) {
        list_ForEach(listEntry, category_add_batch->payload) {
            category_add_batch_payload_inner_free(listEntry->data);
        }
        list_freeList(category_add_batch->payload);
        category_add_batch->payload = NULL;
    }
    free(category_add_batch);
}

cJSON *category_add_batch_convertToJSON(category_add_batch_t *category_add_batch) {
    cJSON *item = cJSON_CreateObject();

    // category_add_batch->payload
    if (!category_add_batch->payload) {
        goto fail;
    }
    cJSON *payload = cJSON_AddArrayToObject(item, "payload");
    if(payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payloadListEntry;
    if (category_add_batch->payload) {
    list_ForEach(payloadListEntry, category_add_batch->payload) {
    cJSON *itemLocal = category_add_batch_payload_inner_convertToJSON(payloadListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(payload, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

category_add_batch_t *category_add_batch_parseFromJSON(cJSON *category_add_batchJSON){

    category_add_batch_t *category_add_batch_local_var = NULL;

    // define the local list for category_add_batch->payload
    list_t *payloadList = NULL;

    // category_add_batch->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(category_add_batchJSON, "payload");
    if (cJSON_IsNull(payload)) {
        payload = NULL;
    }
    if (!payload) {
        goto end;
    }

    
    cJSON *payload_local_nonprimitive = NULL;
    if(!cJSON_IsArray(payload)){
        goto end; //nonprimitive container
    }

    payloadList = list_createList();

    cJSON_ArrayForEach(payload_local_nonprimitive,payload )
    {
        if(!cJSON_IsObject(payload_local_nonprimitive)){
            goto end;
        }
        category_add_batch_payload_inner_t *payloadItem = category_add_batch_payload_inner_parseFromJSON(payload_local_nonprimitive);

        list_addElement(payloadList, payloadItem);
    }


    category_add_batch_local_var = category_add_batch_create_internal (
        payloadList
        );

    return category_add_batch_local_var;
end:
    if (payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payloadList) {
            category_add_batch_payload_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payloadList);
        payloadList = NULL;
    }
    return NULL;

}
