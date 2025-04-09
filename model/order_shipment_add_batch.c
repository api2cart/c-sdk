#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_add_batch.h"



static order_shipment_add_batch_t *order_shipment_add_batch_create_internal(
    list_t *payload
    ) {
    order_shipment_add_batch_t *order_shipment_add_batch_local_var = malloc(sizeof(order_shipment_add_batch_t));
    if (!order_shipment_add_batch_local_var) {
        return NULL;
    }
    order_shipment_add_batch_local_var->payload = payload;

    order_shipment_add_batch_local_var->_library_owned = 1;
    return order_shipment_add_batch_local_var;
}

__attribute__((deprecated)) order_shipment_add_batch_t *order_shipment_add_batch_create(
    list_t *payload
    ) {
    return order_shipment_add_batch_create_internal (
        payload
        );
}

void order_shipment_add_batch_free(order_shipment_add_batch_t *order_shipment_add_batch) {
    if(NULL == order_shipment_add_batch){
        return ;
    }
    if(order_shipment_add_batch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_add_batch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_add_batch->payload) {
        list_ForEach(listEntry, order_shipment_add_batch->payload) {
            order_shipment_add_batch_payload_inner_free(listEntry->data);
        }
        list_freeList(order_shipment_add_batch->payload);
        order_shipment_add_batch->payload = NULL;
    }
    free(order_shipment_add_batch);
}

cJSON *order_shipment_add_batch_convertToJSON(order_shipment_add_batch_t *order_shipment_add_batch) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_add_batch->payload
    if (!order_shipment_add_batch->payload) {
        goto fail;
    }
    cJSON *payload = cJSON_AddArrayToObject(item, "payload");
    if(payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payloadListEntry;
    if (order_shipment_add_batch->payload) {
    list_ForEach(payloadListEntry, order_shipment_add_batch->payload) {
    cJSON *itemLocal = order_shipment_add_batch_payload_inner_convertToJSON(payloadListEntry->data);
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

order_shipment_add_batch_t *order_shipment_add_batch_parseFromJSON(cJSON *order_shipment_add_batchJSON){

    order_shipment_add_batch_t *order_shipment_add_batch_local_var = NULL;

    // define the local list for order_shipment_add_batch->payload
    list_t *payloadList = NULL;

    // order_shipment_add_batch->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batchJSON, "payload");
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
        order_shipment_add_batch_payload_inner_t *payloadItem = order_shipment_add_batch_payload_inner_parseFromJSON(payload_local_nonprimitive);

        list_addElement(payloadList, payloadItem);
    }


    order_shipment_add_batch_local_var = order_shipment_add_batch_create_internal (
        payloadList
        );

    return order_shipment_add_batch_local_var;
end:
    if (payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payloadList) {
            order_shipment_add_batch_payload_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payloadList);
        payloadList = NULL;
    }
    return NULL;

}
