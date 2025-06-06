#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_update_batch.h"


char* product_update_batch_nested_items_update_behaviour_ToString(api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour) {
    char* nested_items_update_behaviourArray[] =  { "NULL", "replace", "merge" };
    return nested_items_update_behaviourArray[nested_items_update_behaviour];
}

api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e product_update_batch_nested_items_update_behaviour_FromString(char* nested_items_update_behaviour){
    int stringToReturn = 0;
    char *nested_items_update_behaviourArray[] =  { "NULL", "replace", "merge" };
    size_t sizeofArray = sizeof(nested_items_update_behaviourArray) / sizeof(nested_items_update_behaviourArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(nested_items_update_behaviour, nested_items_update_behaviourArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static product_update_batch_t *product_update_batch_create_internal(
    api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour,
    int clear_cache,
    int reindex,
    list_t *payload
    ) {
    product_update_batch_t *product_update_batch_local_var = malloc(sizeof(product_update_batch_t));
    if (!product_update_batch_local_var) {
        return NULL;
    }
    product_update_batch_local_var->nested_items_update_behaviour = nested_items_update_behaviour;
    product_update_batch_local_var->clear_cache = clear_cache;
    product_update_batch_local_var->reindex = reindex;
    product_update_batch_local_var->payload = payload;

    product_update_batch_local_var->_library_owned = 1;
    return product_update_batch_local_var;
}

__attribute__((deprecated)) product_update_batch_t *product_update_batch_create(
    api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviour,
    int clear_cache,
    int reindex,
    list_t *payload
    ) {
    return product_update_batch_create_internal (
        nested_items_update_behaviour,
        clear_cache,
        reindex,
        payload
        );
}

void product_update_batch_free(product_update_batch_t *product_update_batch) {
    if(NULL == product_update_batch){
        return ;
    }
    if(product_update_batch->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_update_batch_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_update_batch->payload) {
        list_ForEach(listEntry, product_update_batch->payload) {
            product_update_batch_payload_inner_free(listEntry->data);
        }
        list_freeList(product_update_batch->payload);
        product_update_batch->payload = NULL;
    }
    free(product_update_batch);
}

cJSON *product_update_batch_convertToJSON(product_update_batch_t *product_update_batch) {
    cJSON *item = cJSON_CreateObject();

    // product_update_batch->nested_items_update_behaviour
    if(product_update_batch->nested_items_update_behaviour != api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_NULL) {
    if(cJSON_AddStringToObject(item, "nested_items_update_behaviour", product_update_batch_nested_items_update_behaviour_ToString(product_update_batch->nested_items_update_behaviour)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // product_update_batch->clear_cache
    if(product_update_batch->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_update_batch->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch->reindex
    if(product_update_batch->reindex) {
    if(cJSON_AddBoolToObject(item, "reindex", product_update_batch->reindex) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch->payload
    if (!product_update_batch->payload) {
        goto fail;
    }
    cJSON *payload = cJSON_AddArrayToObject(item, "payload");
    if(payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *payloadListEntry;
    if (product_update_batch->payload) {
    list_ForEach(payloadListEntry, product_update_batch->payload) {
    cJSON *itemLocal = product_update_batch_payload_inner_convertToJSON(payloadListEntry->data);
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

product_update_batch_t *product_update_batch_parseFromJSON(cJSON *product_update_batchJSON){

    product_update_batch_t *product_update_batch_local_var = NULL;

    // define the local list for product_update_batch->payload
    list_t *payloadList = NULL;

    // product_update_batch->nested_items_update_behaviour
    cJSON *nested_items_update_behaviour = cJSON_GetObjectItemCaseSensitive(product_update_batchJSON, "nested_items_update_behaviour");
    if (cJSON_IsNull(nested_items_update_behaviour)) {
        nested_items_update_behaviour = NULL;
    }
    api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_e nested_items_update_behaviourVariable;
    if (nested_items_update_behaviour) { 
    if(!cJSON_IsString(nested_items_update_behaviour))
    {
    goto end; //Enum
    }
    nested_items_update_behaviourVariable = product_update_batch_nested_items_update_behaviour_FromString(nested_items_update_behaviour->valuestring);
    }

    // product_update_batch->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_update_batchJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }

    // product_update_batch->reindex
    cJSON *reindex = cJSON_GetObjectItemCaseSensitive(product_update_batchJSON, "reindex");
    if (cJSON_IsNull(reindex)) {
        reindex = NULL;
    }
    if (reindex) { 
    if(!cJSON_IsBool(reindex))
    {
    goto end; //Bool
    }
    }

    // product_update_batch->payload
    cJSON *payload = cJSON_GetObjectItemCaseSensitive(product_update_batchJSON, "payload");
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
        product_update_batch_payload_inner_t *payloadItem = product_update_batch_payload_inner_parseFromJSON(payload_local_nonprimitive);

        list_addElement(payloadList, payloadItem);
    }


    product_update_batch_local_var = product_update_batch_create_internal (
        nested_items_update_behaviour ? nested_items_update_behaviourVariable : api2cart_openapi_product_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_NULL,
        clear_cache ? clear_cache->valueint : 0,
        reindex ? reindex->valueint : 0,
        payloadList
        );

    return product_update_batch_local_var;
end:
    if (payloadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payloadList) {
            product_update_batch_payload_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payloadList);
        payloadList = NULL;
    }
    return NULL;

}
