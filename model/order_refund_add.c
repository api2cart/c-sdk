#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_refund_add.h"



static order_refund_add_t *order_refund_add_create_internal(
    char *order_id,
    list_t *items,
    double total_price,
    double shipping_price,
    double fee_price,
    char *message,
    int item_restock,
    int send_notifications,
    char *date,
    int is_online
    ) {
    order_refund_add_t *order_refund_add_local_var = malloc(sizeof(order_refund_add_t));
    if (!order_refund_add_local_var) {
        return NULL;
    }
    order_refund_add_local_var->order_id = order_id;
    order_refund_add_local_var->items = items;
    order_refund_add_local_var->total_price = total_price;
    order_refund_add_local_var->shipping_price = shipping_price;
    order_refund_add_local_var->fee_price = fee_price;
    order_refund_add_local_var->message = message;
    order_refund_add_local_var->item_restock = item_restock;
    order_refund_add_local_var->send_notifications = send_notifications;
    order_refund_add_local_var->date = date;
    order_refund_add_local_var->is_online = is_online;

    order_refund_add_local_var->_library_owned = 1;
    return order_refund_add_local_var;
}

__attribute__((deprecated)) order_refund_add_t *order_refund_add_create(
    char *order_id,
    list_t *items,
    double total_price,
    double shipping_price,
    double fee_price,
    char *message,
    int item_restock,
    int send_notifications,
    char *date,
    int is_online
    ) {
    return order_refund_add_create_internal (
        order_id,
        items,
        total_price,
        shipping_price,
        fee_price,
        message,
        item_restock,
        send_notifications,
        date,
        is_online
        );
}

void order_refund_add_free(order_refund_add_t *order_refund_add) {
    if(NULL == order_refund_add){
        return ;
    }
    if(order_refund_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_refund_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_refund_add->order_id) {
        free(order_refund_add->order_id);
        order_refund_add->order_id = NULL;
    }
    if (order_refund_add->items) {
        list_ForEach(listEntry, order_refund_add->items) {
            order_refund_add_items_inner_free(listEntry->data);
        }
        list_freeList(order_refund_add->items);
        order_refund_add->items = NULL;
    }
    if (order_refund_add->message) {
        free(order_refund_add->message);
        order_refund_add->message = NULL;
    }
    if (order_refund_add->date) {
        free(order_refund_add->date);
        order_refund_add->date = NULL;
    }
    free(order_refund_add);
}

cJSON *order_refund_add_convertToJSON(order_refund_add_t *order_refund_add) {
    cJSON *item = cJSON_CreateObject();

    // order_refund_add->order_id
    if(order_refund_add->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_refund_add->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add->items
    if(order_refund_add->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (order_refund_add->items) {
    list_ForEach(itemsListEntry, order_refund_add->items) {
    cJSON *itemLocal = order_refund_add_items_inner_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // order_refund_add->total_price
    if(order_refund_add->total_price) {
    if(cJSON_AddNumberToObject(item, "total_price", order_refund_add->total_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund_add->shipping_price
    if(order_refund_add->shipping_price) {
    if(cJSON_AddNumberToObject(item, "shipping_price", order_refund_add->shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund_add->fee_price
    if(order_refund_add->fee_price) {
    if(cJSON_AddNumberToObject(item, "fee_price", order_refund_add->fee_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund_add->message
    if(order_refund_add->message) {
    if(cJSON_AddStringToObject(item, "message", order_refund_add->message) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add->item_restock
    if(order_refund_add->item_restock) {
    if(cJSON_AddBoolToObject(item, "item_restock", order_refund_add->item_restock) == NULL) {
    goto fail; //Bool
    }
    }


    // order_refund_add->send_notifications
    if(order_refund_add->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_refund_add->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_refund_add->date
    if(order_refund_add->date) {
    if(cJSON_AddStringToObject(item, "date", order_refund_add->date) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add->is_online
    if(order_refund_add->is_online) {
    if(cJSON_AddBoolToObject(item, "is_online", order_refund_add->is_online) == NULL) {
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

order_refund_add_t *order_refund_add_parseFromJSON(cJSON *order_refund_addJSON){

    order_refund_add_t *order_refund_add_local_var = NULL;

    // define the local list for order_refund_add->items
    list_t *itemsList = NULL;

    // order_refund_add->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_refund_add->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "items");
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
        order_refund_add_items_inner_t *itemsItem = order_refund_add_items_inner_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // order_refund_add->total_price
    cJSON *total_price = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "total_price");
    if (cJSON_IsNull(total_price)) {
        total_price = NULL;
    }
    if (total_price) { 
    if(!cJSON_IsNumber(total_price))
    {
    goto end; //Numeric
    }
    }

    // order_refund_add->shipping_price
    cJSON *shipping_price = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "shipping_price");
    if (cJSON_IsNull(shipping_price)) {
        shipping_price = NULL;
    }
    if (shipping_price) { 
    if(!cJSON_IsNumber(shipping_price))
    {
    goto end; //Numeric
    }
    }

    // order_refund_add->fee_price
    cJSON *fee_price = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "fee_price");
    if (cJSON_IsNull(fee_price)) {
        fee_price = NULL;
    }
    if (fee_price) { 
    if(!cJSON_IsNumber(fee_price))
    {
    goto end; //Numeric
    }
    }

    // order_refund_add->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // order_refund_add->item_restock
    cJSON *item_restock = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "item_restock");
    if (cJSON_IsNull(item_restock)) {
        item_restock = NULL;
    }
    if (item_restock) { 
    if(!cJSON_IsBool(item_restock))
    {
    goto end; //Bool
    }
    }

    // order_refund_add->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }

    // order_refund_add->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // order_refund_add->is_online
    cJSON *is_online = cJSON_GetObjectItemCaseSensitive(order_refund_addJSON, "is_online");
    if (cJSON_IsNull(is_online)) {
        is_online = NULL;
    }
    if (is_online) { 
    if(!cJSON_IsBool(is_online))
    {
    goto end; //Bool
    }
    }


    order_refund_add_local_var = order_refund_add_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        items ? itemsList : NULL,
        total_price ? total_price->valuedouble : 0,
        shipping_price ? shipping_price->valuedouble : 0,
        fee_price ? fee_price->valuedouble : 0,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        item_restock ? item_restock->valueint : 0,
        send_notifications ? send_notifications->valueint : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        is_online ? is_online->valueint : 0
        );

    return order_refund_add_local_var;
end:
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            order_refund_add_items_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    return NULL;

}
