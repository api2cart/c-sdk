#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_delete_batch.h"



static product_delete_batch_t *product_delete_batch_create_internal(
    list_t *payload
    ) {
    product_delete_batch_t *product_delete_batch_local_var = malloc(sizeof(product_delete_batch_t));
    if (!product_delete_batch_local_var) {
        return NULL;
    }
    product_delete_batch_local_var->payload = payload;

    product_delete_batch_local_var->_library_owned = 1;
    return product_delete_batch_local_var;
}

__attribute__((deprecated)) product_delete_batch_t *product_delete_batch_create(
    list_t *payload
    ) {
    return product_delete_batch_create_internal (
        payload
        );
}

void product_delete_batch_free(product_delete_batch_t *product_delete_batch) {
    if(NULL == product_delete_batch){
        return ;
    }
    if(product_delete_batch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_delete_batch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_delete_batch->payload) {
        list_ForEach(listEntry, product_delete_batch->payload) {
            product_delete_batch_payload_inner_free(listEntry->data);
        }
        list_freeList(product_delete_batch->payload);
        product_delete_batch->payload = NULL;
    }
    free(product_delete_batch);
}

cJSON *product_delete_batch_convertToJSON(product_delete_batch_t *product_delete_batch) {
    cJSON *item = cJSON_CreateObject();

    // product_delete_batch->payload
    if (!product_delete_batch->payload) {
        goto fail;
    }
    cJSON *payload = cJSON_AddArrayToObject(item, "payload");
    if(payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payloadListEntry;
    if (product_delete_batch->payload) {
    list_ForEach(payloadListEntry, product_delete_batch->payload) {
    cJSON *itemLocal = product_delete_batch_payload_inner_convertToJSON(payloadListEntry->data);
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

product_delete_batch_t *product_delete_batch_parseFromJSON(cJSON *product_delete_batchJSON){

    product_delete_batch_t *product_delete_batch_local_var = NULL;

    // define the local list for product_delete_batch->payload
    list_t *payloadList = NULL;

    // product_delete_batch->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(product_delete_batchJSON, "payload");
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
        product_delete_batch_payload_inner_t *payloadItem = product_delete_batch_payload_inner_parseFromJSON(payload_local_nonprimitive);

        list_addElement(payloadList, payloadItem);
    }


    product_delete_batch_local_var = product_delete_batch_create_internal (
        payloadList
        );

    return product_delete_batch_local_var;
end:
    if (payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payloadList) {
            product_delete_batch_payload_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payloadList);
        payloadList = NULL;
    }
    return NULL;

}
