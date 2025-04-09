#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_update.h"



static order_shipment_update_t *order_shipment_update_create_internal(
    char *store_id,
    char *shipment_id,
    char *order_id,
    list_t *tracking_numbers,
    int replace,
    int is_shipped,
    char *tracking_link,
    char *delivered_at,
    char *shipment_provider
    ) {
    order_shipment_update_t *order_shipment_update_local_var = malloc(sizeof(order_shipment_update_t));
    if (!order_shipment_update_local_var) {
        return NULL;
    }
    order_shipment_update_local_var->store_id = store_id;
    order_shipment_update_local_var->shipment_id = shipment_id;
    order_shipment_update_local_var->order_id = order_id;
    order_shipment_update_local_var->tracking_numbers = tracking_numbers;
    order_shipment_update_local_var->replace = replace;
    order_shipment_update_local_var->is_shipped = is_shipped;
    order_shipment_update_local_var->tracking_link = tracking_link;
    order_shipment_update_local_var->delivered_at = delivered_at;
    order_shipment_update_local_var->shipment_provider = shipment_provider;

    order_shipment_update_local_var->_library_owned = 1;
    return order_shipment_update_local_var;
}

__attribute__((deprecated)) order_shipment_update_t *order_shipment_update_create(
    char *store_id,
    char *shipment_id,
    char *order_id,
    list_t *tracking_numbers,
    int replace,
    int is_shipped,
    char *tracking_link,
    char *delivered_at,
    char *shipment_provider
    ) {
    return order_shipment_update_create_internal (
        store_id,
        shipment_id,
        order_id,
        tracking_numbers,
        replace,
        is_shipped,
        tracking_link,
        delivered_at,
        shipment_provider
        );
}

void order_shipment_update_free(order_shipment_update_t *order_shipment_update) {
    if(NULL == order_shipment_update){
        return ;
    }
    if(order_shipment_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_update->store_id) {
        free(order_shipment_update->store_id);
        order_shipment_update->store_id = NULL;
    }
    if (order_shipment_update->shipment_id) {
        free(order_shipment_update->shipment_id);
        order_shipment_update->shipment_id = NULL;
    }
    if (order_shipment_update->order_id) {
        free(order_shipment_update->order_id);
        order_shipment_update->order_id = NULL;
    }
    if (order_shipment_update->tracking_numbers) {
        list_ForEach(listEntry, order_shipment_update->tracking_numbers) {
            order_shipment_add_tracking_numbers_inner_free(listEntry->data);
        }
        list_freeList(order_shipment_update->tracking_numbers);
        order_shipment_update->tracking_numbers = NULL;
    }
    if (order_shipment_update->tracking_link) {
        free(order_shipment_update->tracking_link);
        order_shipment_update->tracking_link = NULL;
    }
    if (order_shipment_update->delivered_at) {
        free(order_shipment_update->delivered_at);
        order_shipment_update->delivered_at = NULL;
    }
    if (order_shipment_update->shipment_provider) {
        free(order_shipment_update->shipment_provider);
        order_shipment_update->shipment_provider = NULL;
    }
    free(order_shipment_update);
}

cJSON *order_shipment_update_convertToJSON(order_shipment_update_t *order_shipment_update) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_update->store_id
    if(order_shipment_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_shipment_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_update->shipment_id
    if (!order_shipment_update->shipment_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipment_id", order_shipment_update->shipment_id) == NULL) {
    goto fail; //String
    }


    // order_shipment_update->order_id
    if(order_shipment_update->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_shipment_update->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_update->tracking_numbers
    if(order_shipment_update->tracking_numbers) {
    cJSON *tracking_numbers = cJSON_AddArrayToObject(item, "tracking_numbers");
    if(tracking_numbers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tracking_numbersListEntry;
    if (order_shipment_update->tracking_numbers) {
    list_ForEach(tracking_numbersListEntry, order_shipment_update->tracking_numbers) {
    cJSON *itemLocal = order_shipment_add_tracking_numbers_inner_convertToJSON(tracking_numbersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tracking_numbers, itemLocal);
    }
    }
    }


    // order_shipment_update->replace
    if(order_shipment_update->replace) {
    if(cJSON_AddBoolToObject(item, "replace", order_shipment_update->replace) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_update->is_shipped
    if(order_shipment_update->is_shipped) {
    if(cJSON_AddBoolToObject(item, "is_shipped", order_shipment_update->is_shipped) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_update->tracking_link
    if(order_shipment_update->tracking_link) {
    if(cJSON_AddStringToObject(item, "tracking_link", order_shipment_update->tracking_link) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_update->delivered_at
    if(order_shipment_update->delivered_at) {
    if(cJSON_AddStringToObject(item, "delivered_at", order_shipment_update->delivered_at) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_update->shipment_provider
    if(order_shipment_update->shipment_provider) {
    if(cJSON_AddStringToObject(item, "shipment_provider", order_shipment_update->shipment_provider) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_shipment_update_t *order_shipment_update_parseFromJSON(cJSON *order_shipment_updateJSON){

    order_shipment_update_t *order_shipment_update_local_var = NULL;

    // define the local list for order_shipment_update->tracking_numbers
    list_t *tracking_numbersList = NULL;

    // order_shipment_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_shipment_update->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "shipment_id");
    if (cJSON_IsNull(shipment_id)) {
        shipment_id = NULL;
    }
    if (!shipment_id) {
        goto end;
    }

    
    if(!cJSON_IsString(shipment_id))
    {
    goto end; //String
    }

    // order_shipment_update->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_shipment_update->tracking_numbers
    cJSON *tracking_numbers = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "tracking_numbers");
    if (cJSON_IsNull(tracking_numbers)) {
        tracking_numbers = NULL;
    }
    if (tracking_numbers) { 
    cJSON *tracking_numbers_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tracking_numbers)){
        goto end; //nonprimitive container
    }

    tracking_numbersList = list_createList();

    cJSON_ArrayForEach(tracking_numbers_local_nonprimitive,tracking_numbers )
    {
        if(!cJSON_IsObject(tracking_numbers_local_nonprimitive)){
            goto end;
        }
        order_shipment_add_tracking_numbers_inner_t *tracking_numbersItem = order_shipment_add_tracking_numbers_inner_parseFromJSON(tracking_numbers_local_nonprimitive);

        list_addElement(tracking_numbersList, tracking_numbersItem);
    }
    }

    // order_shipment_update->replace
    cJSON *replace = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "replace");
    if (cJSON_IsNull(replace)) {
        replace = NULL;
    }
    if (replace) { 
    if(!cJSON_IsBool(replace))
    {
    goto end; //Bool
    }
    }

    // order_shipment_update->is_shipped
    cJSON *is_shipped = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "is_shipped");
    if (cJSON_IsNull(is_shipped)) {
        is_shipped = NULL;
    }
    if (is_shipped) { 
    if(!cJSON_IsBool(is_shipped))
    {
    goto end; //Bool
    }
    }

    // order_shipment_update->tracking_link
    cJSON *tracking_link = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "tracking_link");
    if (cJSON_IsNull(tracking_link)) {
        tracking_link = NULL;
    }
    if (tracking_link) { 
    if(!cJSON_IsString(tracking_link) && !cJSON_IsNull(tracking_link))
    {
    goto end; //String
    }
    }

    // order_shipment_update->delivered_at
    cJSON *delivered_at = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "delivered_at");
    if (cJSON_IsNull(delivered_at)) {
        delivered_at = NULL;
    }
    if (delivered_at) { 
    if(!cJSON_IsString(delivered_at) && !cJSON_IsNull(delivered_at))
    {
    goto end; //String
    }
    }

    // order_shipment_update->shipment_provider
    cJSON *shipment_provider = cJSON_GetObjectItemCaseSensitive(order_shipment_updateJSON, "shipment_provider");
    if (cJSON_IsNull(shipment_provider)) {
        shipment_provider = NULL;
    }
    if (shipment_provider) { 
    if(!cJSON_IsString(shipment_provider) && !cJSON_IsNull(shipment_provider))
    {
    goto end; //String
    }
    }


    order_shipment_update_local_var = order_shipment_update_create_internal (
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        strdup(shipment_id->valuestring),
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        tracking_numbers ? tracking_numbersList : NULL,
        replace ? replace->valueint : 0,
        is_shipped ? is_shipped->valueint : 0,
        tracking_link && !cJSON_IsNull(tracking_link) ? strdup(tracking_link->valuestring) : NULL,
        delivered_at && !cJSON_IsNull(delivered_at) ? strdup(delivered_at->valuestring) : NULL,
        shipment_provider && !cJSON_IsNull(shipment_provider) ? strdup(shipment_provider->valuestring) : NULL
        );

    return order_shipment_update_local_var;
end:
    if (tracking_numbersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tracking_numbersList) {
            order_shipment_add_tracking_numbers_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tracking_numbersList);
        tracking_numbersList = NULL;
    }
    return NULL;

}
