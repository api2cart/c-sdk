#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_add_batch.h"



static product_variant_add_batch_t *product_variant_add_batch_create_internal(
    int clear_cache,
    int reindex,
    list_t *payload
    ) {
    product_variant_add_batch_t *product_variant_add_batch_local_var = malloc(sizeof(product_variant_add_batch_t));
    if (!product_variant_add_batch_local_var) {
        return NULL;
    }
    product_variant_add_batch_local_var->clear_cache = clear_cache;
    product_variant_add_batch_local_var->reindex = reindex;
    product_variant_add_batch_local_var->payload = payload;

    product_variant_add_batch_local_var->_library_owned = 1;
    return product_variant_add_batch_local_var;
}

__attribute__((deprecated)) product_variant_add_batch_t *product_variant_add_batch_create(
    int clear_cache,
    int reindex,
    list_t *payload
    ) {
    return product_variant_add_batch_create_internal (
        clear_cache,
        reindex,
        payload
        );
}

void product_variant_add_batch_free(product_variant_add_batch_t *product_variant_add_batch) {
    if(NULL == product_variant_add_batch){
        return ;
    }
    if(product_variant_add_batch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_add_batch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_add_batch->payload) {
        list_ForEach(listEntry, product_variant_add_batch->payload) {
            product_variant_add_batch_payload_inner_free(listEntry->data);
        }
        list_freeList(product_variant_add_batch->payload);
        product_variant_add_batch->payload = NULL;
    }
    free(product_variant_add_batch);
}

cJSON *product_variant_add_batch_convertToJSON(product_variant_add_batch_t *product_variant_add_batch) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_add_batch->clear_cache
    if(product_variant_add_batch->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_variant_add_batch->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add_batch->reindex
    if(product_variant_add_batch->reindex) {
    if(cJSON_AddBoolToObject(item, "reindex", product_variant_add_batch->reindex) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add_batch->payload
    if (!product_variant_add_batch->payload) {
        goto fail;
    }
    cJSON *payload = cJSON_AddArrayToObject(item, "payload");
    if(payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payloadListEntry;
    if (product_variant_add_batch->payload) {
    list_ForEach(payloadListEntry, product_variant_add_batch->payload) {
    cJSON *itemLocal = product_variant_add_batch_payload_inner_convertToJSON(payloadListEntry->data);
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

product_variant_add_batch_t *product_variant_add_batch_parseFromJSON(cJSON *product_variant_add_batchJSON){

    product_variant_add_batch_t *product_variant_add_batch_local_var = NULL;

    // define the local list for product_variant_add_batch->payload
    list_t *payloadList = NULL;

    // product_variant_add_batch->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_variant_add_batchJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }

    // product_variant_add_batch->reindex
    cJSON *reindex = cJSON_GetObjectItemCaseSensitive(product_variant_add_batchJSON, "reindex");
    if (cJSON_IsNull(reindex)) {
        reindex = NULL;
    }
    if (reindex) { 
    if(!cJSON_IsBool(reindex))
    {
    goto end; //Bool
    }
    }

    // product_variant_add_batch->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(product_variant_add_batchJSON, "payload");
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
        product_variant_add_batch_payload_inner_t *payloadItem = product_variant_add_batch_payload_inner_parseFromJSON(payload_local_nonprimitive);

        list_addElement(payloadList, payloadItem);
    }


    product_variant_add_batch_local_var = product_variant_add_batch_create_internal (
        clear_cache ? clear_cache->valueint : 0,
        reindex ? reindex->valueint : 0,
        payloadList
        );

    return product_variant_add_batch_local_var;
end:
    if (payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payloadList) {
            product_variant_add_batch_payload_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payloadList);
        payloadList = NULL;
    }
    return NULL;

}
