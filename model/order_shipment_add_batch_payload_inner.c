#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_add_batch_payload_inner.h"



static order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_create_internal(
    char *order_id,
    char *store_id,
    char *warehouse_id,
    char *carrier_id,
    char *carrier_name,
    char *tracking_number,
    char *tracking_link,
    char *shipment_provider,
    list_t *items,
    int send_notifications
    ) {
    order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_local_var = malloc(sizeof(order_shipment_add_batch_payload_inner_t));
    if (!order_shipment_add_batch_payload_inner_local_var) {
        return NULL;
    }
    order_shipment_add_batch_payload_inner_local_var->order_id = order_id;
    order_shipment_add_batch_payload_inner_local_var->store_id = store_id;
    order_shipment_add_batch_payload_inner_local_var->warehouse_id = warehouse_id;
    order_shipment_add_batch_payload_inner_local_var->carrier_id = carrier_id;
    order_shipment_add_batch_payload_inner_local_var->carrier_name = carrier_name;
    order_shipment_add_batch_payload_inner_local_var->tracking_number = tracking_number;
    order_shipment_add_batch_payload_inner_local_var->tracking_link = tracking_link;
    order_shipment_add_batch_payload_inner_local_var->shipment_provider = shipment_provider;
    order_shipment_add_batch_payload_inner_local_var->items = items;
    order_shipment_add_batch_payload_inner_local_var->send_notifications = send_notifications;

    order_shipment_add_batch_payload_inner_local_var->_library_owned = 1;
    return order_shipment_add_batch_payload_inner_local_var;
}

__attribute__((deprecated)) order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_create(
    char *order_id,
    char *store_id,
    char *warehouse_id,
    char *carrier_id,
    char *carrier_name,
    char *tracking_number,
    char *tracking_link,
    char *shipment_provider,
    list_t *items,
    int send_notifications
    ) {
    return order_shipment_add_batch_payload_inner_create_internal (
        order_id,
        store_id,
        warehouse_id,
        carrier_id,
        carrier_name,
        tracking_number,
        tracking_link,
        shipment_provider,
        items,
        send_notifications
        );
}

void order_shipment_add_batch_payload_inner_free(order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner) {
    if(NULL == order_shipment_add_batch_payload_inner){
        return ;
    }
    if(order_shipment_add_batch_payload_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_add_batch_payload_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_add_batch_payload_inner->order_id) {
        free(order_shipment_add_batch_payload_inner->order_id);
        order_shipment_add_batch_payload_inner->order_id = NULL;
    }
    if (order_shipment_add_batch_payload_inner->store_id) {
        free(order_shipment_add_batch_payload_inner->store_id);
        order_shipment_add_batch_payload_inner->store_id = NULL;
    }
    if (order_shipment_add_batch_payload_inner->warehouse_id) {
        free(order_shipment_add_batch_payload_inner->warehouse_id);
        order_shipment_add_batch_payload_inner->warehouse_id = NULL;
    }
    if (order_shipment_add_batch_payload_inner->carrier_id) {
        free(order_shipment_add_batch_payload_inner->carrier_id);
        order_shipment_add_batch_payload_inner->carrier_id = NULL;
    }
    if (order_shipment_add_batch_payload_inner->carrier_name) {
        free(order_shipment_add_batch_payload_inner->carrier_name);
        order_shipment_add_batch_payload_inner->carrier_name = NULL;
    }
    if (order_shipment_add_batch_payload_inner->tracking_number) {
        free(order_shipment_add_batch_payload_inner->tracking_number);
        order_shipment_add_batch_payload_inner->tracking_number = NULL;
    }
    if (order_shipment_add_batch_payload_inner->tracking_link) {
        free(order_shipment_add_batch_payload_inner->tracking_link);
        order_shipment_add_batch_payload_inner->tracking_link = NULL;
    }
    if (order_shipment_add_batch_payload_inner->shipment_provider) {
        free(order_shipment_add_batch_payload_inner->shipment_provider);
        order_shipment_add_batch_payload_inner->shipment_provider = NULL;
    }
    if (order_shipment_add_batch_payload_inner->items) {
        list_ForEach(listEntry, order_shipment_add_batch_payload_inner->items) {
            order_shipment_add_batch_payload_inner_items_inner_free(listEntry->data);
        }
        list_freeList(order_shipment_add_batch_payload_inner->items);
        order_shipment_add_batch_payload_inner->items = NULL;
    }
    free(order_shipment_add_batch_payload_inner);
}

cJSON *order_shipment_add_batch_payload_inner_convertToJSON(order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_add_batch_payload_inner->order_id
    if (!order_shipment_add_batch_payload_inner->order_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_id", order_shipment_add_batch_payload_inner->order_id) == NULL) {
    goto fail; //String
    }


    // order_shipment_add_batch_payload_inner->store_id
    if(order_shipment_add_batch_payload_inner->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_shipment_add_batch_payload_inner->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->warehouse_id
    if(order_shipment_add_batch_payload_inner->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", order_shipment_add_batch_payload_inner->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->carrier_id
    if(order_shipment_add_batch_payload_inner->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrier_id", order_shipment_add_batch_payload_inner->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->carrier_name
    if(order_shipment_add_batch_payload_inner->carrier_name) {
    if(cJSON_AddStringToObject(item, "carrier_name", order_shipment_add_batch_payload_inner->carrier_name) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->tracking_number
    if (!order_shipment_add_batch_payload_inner->tracking_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tracking_number", order_shipment_add_batch_payload_inner->tracking_number) == NULL) {
    goto fail; //String
    }


    // order_shipment_add_batch_payload_inner->tracking_link
    if(order_shipment_add_batch_payload_inner->tracking_link) {
    if(cJSON_AddStringToObject(item, "tracking_link", order_shipment_add_batch_payload_inner->tracking_link) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->shipment_provider
    if(order_shipment_add_batch_payload_inner->shipment_provider) {
    if(cJSON_AddStringToObject(item, "shipment_provider", order_shipment_add_batch_payload_inner->shipment_provider) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_batch_payload_inner->items
    if(order_shipment_add_batch_payload_inner->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (order_shipment_add_batch_payload_inner->items) {
    list_ForEach(itemsListEntry, order_shipment_add_batch_payload_inner->items) {
    cJSON *itemLocal = order_shipment_add_batch_payload_inner_items_inner_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // order_shipment_add_batch_payload_inner->send_notifications
    if(order_shipment_add_batch_payload_inner->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_shipment_add_batch_payload_inner->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_parseFromJSON(cJSON *order_shipment_add_batch_payload_innerJSON){

    order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_local_var = NULL;

    // define the local list for order_shipment_add_batch_payload_inner->items
    list_t *itemsList = NULL;

    // order_shipment_add_batch_payload_inner->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (!order_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_id))
    {
    goto end; //String
    }

    // order_shipment_add_batch_payload_inner->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "carrier_id");
    if (cJSON_IsNull(carrier_id)) {
        carrier_id = NULL;
    }
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->carrier_name
    cJSON *carrier_name = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "carrier_name");
    if (cJSON_IsNull(carrier_name)) {
        carrier_name = NULL;
    }
    if (carrier_name) { 
    if(!cJSON_IsString(carrier_name) && !cJSON_IsNull(carrier_name))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->tracking_number
    cJSON *tracking_number = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "tracking_number");
    if (cJSON_IsNull(tracking_number)) {
        tracking_number = NULL;
    }
    if (!tracking_number) {
        goto end;
    }

    
    if(!cJSON_IsString(tracking_number))
    {
    goto end; //String
    }

    // order_shipment_add_batch_payload_inner->tracking_link
    cJSON *tracking_link = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "tracking_link");
    if (cJSON_IsNull(tracking_link)) {
        tracking_link = NULL;
    }
    if (tracking_link) { 
    if(!cJSON_IsString(tracking_link) && !cJSON_IsNull(tracking_link))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->shipment_provider
    cJSON *shipment_provider = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "shipment_provider");
    if (cJSON_IsNull(shipment_provider)) {
        shipment_provider = NULL;
    }
    if (shipment_provider) { 
    if(!cJSON_IsString(shipment_provider) && !cJSON_IsNull(shipment_provider))
    {
    goto end; //String
    }
    }

    // order_shipment_add_batch_payload_inner->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "items");
    if (cJSON_IsNull(items)) {
        items = NULL;
    }
    if (items) { 
    cJSON *items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(items)){
        goto end; //nonprimitive container
    }

    itemsList = list_createList();

    cJSON_ArrayForEach(items_local_nonprimitive,items )
    {
        if(!cJSON_IsObject(items_local_nonprimitive)){
            goto end;
        }
        order_shipment_add_batch_payload_inner_items_inner_t *itemsItem = order_shipment_add_batch_payload_inner_items_inner_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // order_shipment_add_batch_payload_inner->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_shipment_add_batch_payload_innerJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }


    order_shipment_add_batch_payload_inner_local_var = order_shipment_add_batch_payload_inner_create_internal (
        strdup(order_id->valuestring),
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        carrier_name && !cJSON_IsNull(carrier_name) ? strdup(carrier_name->valuestring) : NULL,
        strdup(tracking_number->valuestring),
        tracking_link && !cJSON_IsNull(tracking_link) ? strdup(tracking_link->valuestring) : NULL,
        shipment_provider && !cJSON_IsNull(shipment_provider) ? strdup(shipment_provider->valuestring) : NULL,
        items ? itemsList : NULL,
        send_notifications ? send_notifications->valueint : 0
        );

    return order_shipment_add_batch_payload_inner_local_var;
end:
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            order_shipment_add_batch_payload_inner_items_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    return NULL;

}
