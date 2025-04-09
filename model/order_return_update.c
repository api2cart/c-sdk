#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_return_update.h"



static order_return_update_t *order_return_update_create_internal(
    char *return_id,
    char *order_id,
    char *store_id,
    int item_restock,
    char *return_status_id,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
    ) {
    order_return_update_t *order_return_update_local_var = malloc(sizeof(order_return_update_t));
    if (!order_return_update_local_var) {
        return NULL;
    }
    order_return_update_local_var->return_id = return_id;
    order_return_update_local_var->order_id = order_id;
    order_return_update_local_var->store_id = store_id;
    order_return_update_local_var->item_restock = item_restock;
    order_return_update_local_var->return_status_id = return_status_id;
    order_return_update_local_var->staff_note = staff_note;
    order_return_update_local_var->comment = comment;
    order_return_update_local_var->send_notifications = send_notifications;
    order_return_update_local_var->reject_reason = reject_reason;
    order_return_update_local_var->order_products = order_products;

    order_return_update_local_var->_library_owned = 1;
    return order_return_update_local_var;
}

__attribute__((deprecated)) order_return_update_t *order_return_update_create(
    char *return_id,
    char *order_id,
    char *store_id,
    int item_restock,
    char *return_status_id,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
    ) {
    return order_return_update_create_internal (
        return_id,
        order_id,
        store_id,
        item_restock,
        return_status_id,
        staff_note,
        comment,
        send_notifications,
        reject_reason,
        order_products
        );
}

void order_return_update_free(order_return_update_t *order_return_update) {
    if(NULL == order_return_update){
        return ;
    }
    if(order_return_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_return_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_return_update->return_id) {
        free(order_return_update->return_id);
        order_return_update->return_id = NULL;
    }
    if (order_return_update->order_id) {
        free(order_return_update->order_id);
        order_return_update->order_id = NULL;
    }
    if (order_return_update->store_id) {
        free(order_return_update->store_id);
        order_return_update->store_id = NULL;
    }
    if (order_return_update->return_status_id) {
        free(order_return_update->return_status_id);
        order_return_update->return_status_id = NULL;
    }
    if (order_return_update->staff_note) {
        free(order_return_update->staff_note);
        order_return_update->staff_note = NULL;
    }
    if (order_return_update->comment) {
        free(order_return_update->comment);
        order_return_update->comment = NULL;
    }
    if (order_return_update->reject_reason) {
        free(order_return_update->reject_reason);
        order_return_update->reject_reason = NULL;
    }
    if (order_return_update->order_products) {
        list_ForEach(listEntry, order_return_update->order_products) {
            order_return_update_order_products_inner_free(listEntry->data);
        }
        list_freeList(order_return_update->order_products);
        order_return_update->order_products = NULL;
    }
    free(order_return_update);
}

cJSON *order_return_update_convertToJSON(order_return_update_t *order_return_update) {
    cJSON *item = cJSON_CreateObject();

    // order_return_update->return_id
    if (!order_return_update->return_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "return_id", order_return_update->return_id) == NULL) {
    goto fail; //String
    }


    // order_return_update->order_id
    if(order_return_update->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_return_update->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->store_id
    if(order_return_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_return_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->item_restock
    if(order_return_update->item_restock) {
    if(cJSON_AddBoolToObject(item, "item_restock", order_return_update->item_restock) == NULL) {
    goto fail; //Bool
    }
    }


    // order_return_update->return_status_id
    if(order_return_update->return_status_id) {
    if(cJSON_AddStringToObject(item, "return_status_id", order_return_update->return_status_id) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->staff_note
    if(order_return_update->staff_note) {
    if(cJSON_AddStringToObject(item, "staff_note", order_return_update->staff_note) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->comment
    if(order_return_update->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_return_update->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->send_notifications
    if(order_return_update->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_return_update->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_return_update->reject_reason
    if(order_return_update->reject_reason) {
    if(cJSON_AddStringToObject(item, "reject_reason", order_return_update->reject_reason) == NULL) {
    goto fail; //String
    }
    }


    // order_return_update->order_products
    if (!order_return_update->order_products) {
        goto fail;
    }
    cJSON *order_products = cJSON_AddArrayToObject(item, "order_products");
    if(order_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_productsListEntry;
    if (order_return_update->order_products) {
    list_ForEach(order_productsListEntry, order_return_update->order_products) {
    cJSON *itemLocal = order_return_update_order_products_inner_convertToJSON(order_productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_products, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_return_update_t *order_return_update_parseFromJSON(cJSON *order_return_updateJSON){

    order_return_update_t *order_return_update_local_var = NULL;

    // define the local list for order_return_update->order_products
    list_t *order_productsList = NULL;

    // order_return_update->return_id
    cJSON *return_id = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "return_id");
    if (cJSON_IsNull(return_id)) {
        return_id = NULL;
    }
    if (!return_id) {
        goto end;
    }

    
    if(!cJSON_IsString(return_id))
    {
    goto end; //String
    }

    // order_return_update->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_return_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_return_update->item_restock
    cJSON *item_restock = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "item_restock");
    if (cJSON_IsNull(item_restock)) {
        item_restock = NULL;
    }
    if (item_restock) { 
    if(!cJSON_IsBool(item_restock))
    {
    goto end; //Bool
    }
    }

    // order_return_update->return_status_id
    cJSON *return_status_id = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "return_status_id");
    if (cJSON_IsNull(return_status_id)) {
        return_status_id = NULL;
    }
    if (return_status_id) { 
    if(!cJSON_IsString(return_status_id) && !cJSON_IsNull(return_status_id))
    {
    goto end; //String
    }
    }

    // order_return_update->staff_note
    cJSON *staff_note = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "staff_note");
    if (cJSON_IsNull(staff_note)) {
        staff_note = NULL;
    }
    if (staff_note) { 
    if(!cJSON_IsString(staff_note) && !cJSON_IsNull(staff_note))
    {
    goto end; //String
    }
    }

    // order_return_update->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_return_update->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }

    // order_return_update->reject_reason
    cJSON *reject_reason = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "reject_reason");
    if (cJSON_IsNull(reject_reason)) {
        reject_reason = NULL;
    }
    if (reject_reason) { 
    if(!cJSON_IsString(reject_reason) && !cJSON_IsNull(reject_reason))
    {
    goto end; //String
    }
    }

    // order_return_update->order_products
    cJSON *order_products = cJSON_GetObjectItemCaseSensitive(order_return_updateJSON, "order_products");
    if (cJSON_IsNull(order_products)) {
        order_products = NULL;
    }
    if (!order_products) {
        goto end;
    }

    
    cJSON *order_products_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_products)){
        goto end; //nonprimitive container
    }

    order_productsList = list_createList();

    cJSON_ArrayForEach(order_products_local_nonprimitive,order_products )
    {
        if(!cJSON_IsObject(order_products_local_nonprimitive)){
            goto end;
        }
        order_return_update_order_products_inner_t *order_productsItem = order_return_update_order_products_inner_parseFromJSON(order_products_local_nonprimitive);

        list_addElement(order_productsList, order_productsItem);
    }


    order_return_update_local_var = order_return_update_create_internal (
        strdup(return_id->valuestring),
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        item_restock ? item_restock->valueint : 0,
        return_status_id && !cJSON_IsNull(return_status_id) ? strdup(return_status_id->valuestring) : NULL,
        staff_note && !cJSON_IsNull(staff_note) ? strdup(staff_note->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        send_notifications ? send_notifications->valueint : 0,
        reject_reason && !cJSON_IsNull(reject_reason) ? strdup(reject_reason->valuestring) : NULL,
        order_productsList
        );

    return order_return_update_local_var;
end:
    if (order_productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_productsList) {
            order_return_update_order_products_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_productsList);
        order_productsList = NULL;
    }
    return NULL;

}
