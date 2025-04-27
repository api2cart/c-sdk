#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_add.h"



static order_shipment_add_t *order_shipment_add_create_internal(
    char *order_id,
    char *warehouse_id,
    char *store_id,
    char *shipment_provider,
    char *shipping_method,
    list_t *items,
    list_t *tracking_numbers,
    char *tracking_link,
    int is_shipped,
    int send_notifications,
    int adjust_stock,
    int enable_cache,
    int check_process_status,
    int use_latest_api_version
    ) {
    order_shipment_add_t *order_shipment_add_local_var = malloc(sizeof(order_shipment_add_t));
    if (!order_shipment_add_local_var) {
        return NULL;
    }
    order_shipment_add_local_var->order_id = order_id;
    order_shipment_add_local_var->warehouse_id = warehouse_id;
    order_shipment_add_local_var->store_id = store_id;
    order_shipment_add_local_var->shipment_provider = shipment_provider;
    order_shipment_add_local_var->shipping_method = shipping_method;
    order_shipment_add_local_var->items = items;
    order_shipment_add_local_var->tracking_numbers = tracking_numbers;
    order_shipment_add_local_var->tracking_link = tracking_link;
    order_shipment_add_local_var->is_shipped = is_shipped;
    order_shipment_add_local_var->send_notifications = send_notifications;
    order_shipment_add_local_var->adjust_stock = adjust_stock;
    order_shipment_add_local_var->enable_cache = enable_cache;
    order_shipment_add_local_var->check_process_status = check_process_status;
    order_shipment_add_local_var->use_latest_api_version = use_latest_api_version;

    order_shipment_add_local_var->_library_owned = 1;
    return order_shipment_add_local_var;
}

__attribute__((deprecated)) order_shipment_add_t *order_shipment_add_create(
    char *order_id,
    char *warehouse_id,
    char *store_id,
    char *shipment_provider,
    char *shipping_method,
    list_t *items,
    list_t *tracking_numbers,
    char *tracking_link,
    int is_shipped,
    int send_notifications,
    int adjust_stock,
    int enable_cache,
    int check_process_status,
    int use_latest_api_version
    ) {
    return order_shipment_add_create_internal (
        order_id,
        warehouse_id,
        store_id,
        shipment_provider,
        shipping_method,
        items,
        tracking_numbers,
        tracking_link,
        is_shipped,
        send_notifications,
        adjust_stock,
        enable_cache,
        check_process_status,
        use_latest_api_version
        );
}

void order_shipment_add_free(order_shipment_add_t *order_shipment_add) {
    if(NULL == order_shipment_add){
        return ;
    }
    if(order_shipment_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_add->order_id) {
        free(order_shipment_add->order_id);
        order_shipment_add->order_id = NULL;
    }
    if (order_shipment_add->warehouse_id) {
        free(order_shipment_add->warehouse_id);
        order_shipment_add->warehouse_id = NULL;
    }
    if (order_shipment_add->store_id) {
        free(order_shipment_add->store_id);
        order_shipment_add->store_id = NULL;
    }
    if (order_shipment_add->shipment_provider) {
        free(order_shipment_add->shipment_provider);
        order_shipment_add->shipment_provider = NULL;
    }
    if (order_shipment_add->shipping_method) {
        free(order_shipment_add->shipping_method);
        order_shipment_add->shipping_method = NULL;
    }
    if (order_shipment_add->items) {
        list_ForEach(listEntry, order_shipment_add->items) {
            order_shipment_add_items_inner_free(listEntry->data);
        }
        list_freeList(order_shipment_add->items);
        order_shipment_add->items = NULL;
    }
    if (order_shipment_add->tracking_numbers) {
        list_ForEach(listEntry, order_shipment_add->tracking_numbers) {
            order_shipment_add_tracking_numbers_inner_free(listEntry->data);
        }
        list_freeList(order_shipment_add->tracking_numbers);
        order_shipment_add->tracking_numbers = NULL;
    }
    if (order_shipment_add->tracking_link) {
        free(order_shipment_add->tracking_link);
        order_shipment_add->tracking_link = NULL;
    }
    free(order_shipment_add);
}

cJSON *order_shipment_add_convertToJSON(order_shipment_add_t *order_shipment_add) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_add->order_id
    if(order_shipment_add->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_shipment_add->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->warehouse_id
    if(order_shipment_add->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", order_shipment_add->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->store_id
    if(order_shipment_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_shipment_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->shipment_provider
    if(order_shipment_add->shipment_provider) {
    if(cJSON_AddStringToObject(item, "shipment_provider", order_shipment_add->shipment_provider) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->shipping_method
    if(order_shipment_add->shipping_method) {
    if(cJSON_AddStringToObject(item, "shipping_method", order_shipment_add->shipping_method) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->items
    if(order_shipment_add->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (order_shipment_add->items) {
    list_ForEach(itemsListEntry, order_shipment_add->items) {
    cJSON *itemLocal = order_shipment_add_items_inner_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // order_shipment_add->tracking_numbers
    if(order_shipment_add->tracking_numbers) {
    cJSON *tracking_numbers = cJSON_AddArrayToObject(item, "tracking_numbers");
    if(tracking_numbers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tracking_numbersListEntry;
    if (order_shipment_add->tracking_numbers) {
    list_ForEach(tracking_numbersListEntry, order_shipment_add->tracking_numbers) {
    cJSON *itemLocal = order_shipment_add_tracking_numbers_inner_convertToJSON(tracking_numbersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tracking_numbers, itemLocal);
    }
    }
    }


    // order_shipment_add->tracking_link
    if(order_shipment_add->tracking_link) {
    if(cJSON_AddStringToObject(item, "tracking_link", order_shipment_add->tracking_link) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add->is_shipped
    if(order_shipment_add->is_shipped) {
    if(cJSON_AddBoolToObject(item, "is_shipped", order_shipment_add->is_shipped) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_add->send_notifications
    if(order_shipment_add->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_shipment_add->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_add->adjust_stock
    if(order_shipment_add->adjust_stock) {
    if(cJSON_AddBoolToObject(item, "adjust_stock", order_shipment_add->adjust_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_add->enable_cache
    if(order_shipment_add->enable_cache) {
    if(cJSON_AddBoolToObject(item, "enable_cache", order_shipment_add->enable_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_add->check_process_status
    if(order_shipment_add->check_process_status) {
    if(cJSON_AddBoolToObject(item, "check_process_status", order_shipment_add->check_process_status) == NULL) {
    goto fail; //Bool
    }
    }


    // order_shipment_add->use_latest_api_version
    if(order_shipment_add->use_latest_api_version) {
    if(cJSON_AddBoolToObject(item, "use_latest_api_version", order_shipment_add->use_latest_api_version) == NULL) {
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

order_shipment_add_t *order_shipment_add_parseFromJSON(cJSON *order_shipment_addJSON){

    order_shipment_add_t *order_shipment_add_local_var = NULL;

    // define the local list for order_shipment_add->items
    list_t *itemsList = NULL;

    // define the local list for order_shipment_add->tracking_numbers
    list_t *tracking_numbersList = NULL;

    // order_shipment_add->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add->shipment_provider
    cJSON *shipment_provider = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "shipment_provider");
    if (cJSON_IsNull(shipment_provider)) {
        shipment_provider = NULL;
    }
    if (shipment_provider) { 
    if(!cJSON_IsString(shipment_provider) && !cJSON_IsNull(shipment_provider))
    {
    goto end; //String
    }
    }

    // order_shipment_add->shipping_method
    cJSON *shipping_method = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "shipping_method");
    if (cJSON_IsNull(shipping_method)) {
        shipping_method = NULL;
    }
    if (shipping_method) { 
    if(!cJSON_IsString(shipping_method) && !cJSON_IsNull(shipping_method))
    {
    goto end; //String
    }
    }

    // order_shipment_add->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "items");
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
        order_shipment_add_items_inner_t *itemsItem = order_shipment_add_items_inner_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // order_shipment_add->tracking_numbers
    cJSON *tracking_numbers = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "tracking_numbers");
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

    // order_shipment_add->tracking_link
    cJSON *tracking_link = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "tracking_link");
    if (cJSON_IsNull(tracking_link)) {
        tracking_link = NULL;
    }
    if (tracking_link) { 
    if(!cJSON_IsString(tracking_link) && !cJSON_IsNull(tracking_link))
    {
    goto end; //String
    }
    }

    // order_shipment_add->is_shipped
    cJSON *is_shipped = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "is_shipped");
    if (cJSON_IsNull(is_shipped)) {
        is_shipped = NULL;
    }
    if (is_shipped) { 
    if(!cJSON_IsBool(is_shipped))
    {
    goto end; //Bool
    }
    }

    // order_shipment_add->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }

    // order_shipment_add->adjust_stock
    cJSON *adjust_stock = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "adjust_stock");
    if (cJSON_IsNull(adjust_stock)) {
        adjust_stock = NULL;
    }
    if (adjust_stock) { 
    if(!cJSON_IsBool(adjust_stock))
    {
    goto end; //Bool
    }
    }

    // order_shipment_add->enable_cache
    cJSON *enable_cache = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "enable_cache");
    if (cJSON_IsNull(enable_cache)) {
        enable_cache = NULL;
    }
    if (enable_cache) { 
    if(!cJSON_IsBool(enable_cache))
    {
    goto end; //Bool
    }
    }

    // order_shipment_add->check_process_status
    cJSON *check_process_status = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "check_process_status");
    if (cJSON_IsNull(check_process_status)) {
        check_process_status = NULL;
    }
    if (check_process_status) { 
    if(!cJSON_IsBool(check_process_status))
    {
    goto end; //Bool
    }
    }

    // order_shipment_add->use_latest_api_version
    cJSON *use_latest_api_version = cJSON_GetObjectItemCaseSensitive(order_shipment_addJSON, "use_latest_api_version");
    if (cJSON_IsNull(use_latest_api_version)) {
        use_latest_api_version = NULL;
    }
    if (use_latest_api_version) { 
    if(!cJSON_IsBool(use_latest_api_version))
    {
    goto end; //Bool
    }
    }


    order_shipment_add_local_var = order_shipment_add_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        shipment_provider && !cJSON_IsNull(shipment_provider) ? strdup(shipment_provider->valuestring) : NULL,
        shipping_method && !cJSON_IsNull(shipping_method) ? strdup(shipping_method->valuestring) : NULL,
        items ? itemsList : NULL,
        tracking_numbers ? tracking_numbersList : NULL,
        tracking_link && !cJSON_IsNull(tracking_link) ? strdup(tracking_link->valuestring) : NULL,
        is_shipped ? is_shipped->valueint : 0,
        send_notifications ? send_notifications->valueint : 0,
        adjust_stock ? adjust_stock->valueint : 0,
        enable_cache ? enable_cache->valueint : 0,
        check_process_status ? check_process_status->valueint : 0,
        use_latest_api_version ? use_latest_api_version->valueint : 0
        );

    return order_shipment_add_local_var;
end:
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            order_shipment_add_items_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
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
