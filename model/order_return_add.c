#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_return_add.h"



static order_return_add_t *order_return_add_create_internal(
    char *order_id,
    char *store_id,
    char *return_status_id,
    char *return_action_id,
    char *return_reason_id,
    char *return_reason,
    int item_restock,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
    ) {
    order_return_add_t *order_return_add_local_var = malloc(sizeof(order_return_add_t));
    if (!order_return_add_local_var) {
        return NULL;
    }
    order_return_add_local_var->order_id = order_id;
    order_return_add_local_var->store_id = store_id;
    order_return_add_local_var->return_status_id = return_status_id;
    order_return_add_local_var->return_action_id = return_action_id;
    order_return_add_local_var->return_reason_id = return_reason_id;
    order_return_add_local_var->return_reason = return_reason;
    order_return_add_local_var->item_restock = item_restock;
    order_return_add_local_var->staff_note = staff_note;
    order_return_add_local_var->comment = comment;
    order_return_add_local_var->send_notifications = send_notifications;
    order_return_add_local_var->reject_reason = reject_reason;
    order_return_add_local_var->order_products = order_products;

    order_return_add_local_var->_library_owned = 1;
    return order_return_add_local_var;
}

__attribute__((deprecated)) order_return_add_t *order_return_add_create(
    char *order_id,
    char *store_id,
    char *return_status_id,
    char *return_action_id,
    char *return_reason_id,
    char *return_reason,
    int item_restock,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
    ) {
    return order_return_add_create_internal (
        order_id,
        store_id,
        return_status_id,
        return_action_id,
        return_reason_id,
        return_reason,
        item_restock,
        staff_note,
        comment,
        send_notifications,
        reject_reason,
        order_products
        );
}

void order_return_add_free(order_return_add_t *order_return_add) {
    if(NULL == order_return_add){
        return ;
    }
    if(order_return_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_return_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_return_add->order_id) {
        free(order_return_add->order_id);
        order_return_add->order_id = NULL;
    }
    if (order_return_add->store_id) {
        free(order_return_add->store_id);
        order_return_add->store_id = NULL;
    }
    if (order_return_add->return_status_id) {
        free(order_return_add->return_status_id);
        order_return_add->return_status_id = NULL;
    }
    if (order_return_add->return_action_id) {
        free(order_return_add->return_action_id);
        order_return_add->return_action_id = NULL;
    }
    if (order_return_add->return_reason_id) {
        free(order_return_add->return_reason_id);
        order_return_add->return_reason_id = NULL;
    }
    if (order_return_add->return_reason) {
        free(order_return_add->return_reason);
        order_return_add->return_reason = NULL;
    }
    if (order_return_add->staff_note) {
        free(order_return_add->staff_note);
        order_return_add->staff_note = NULL;
    }
    if (order_return_add->comment) {
        free(order_return_add->comment);
        order_return_add->comment = NULL;
    }
    if (order_return_add->reject_reason) {
        free(order_return_add->reject_reason);
        order_return_add->reject_reason = NULL;
    }
    if (order_return_add->order_products) {
        list_ForEach(listEntry, order_return_add->order_products) {
            order_return_add_order_products_inner_free(listEntry->data);
        }
        list_freeList(order_return_add->order_products);
        order_return_add->order_products = NULL;
    }
    free(order_return_add);
}

cJSON *order_return_add_convertToJSON(order_return_add_t *order_return_add) {
    cJSON *item = cJSON_CreateObject();

    // order_return_add->order_id
    if(order_return_add->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_return_add->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->store_id
    if(order_return_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_return_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->return_status_id
    if (!order_return_add->return_status_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "return_status_id", order_return_add->return_status_id) == NULL) {
    goto fail; //String
    }


    // order_return_add->return_action_id
    if (!order_return_add->return_action_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "return_action_id", order_return_add->return_action_id) == NULL) {
    goto fail; //String
    }


    // order_return_add->return_reason_id
    if (!order_return_add->return_reason_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "return_reason_id", order_return_add->return_reason_id) == NULL) {
    goto fail; //String
    }


    // order_return_add->return_reason
    if(order_return_add->return_reason) {
    if(cJSON_AddStringToObject(item, "return_reason", order_return_add->return_reason) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->item_restock
    if(order_return_add->item_restock) {
    if(cJSON_AddBoolToObject(item, "item_restock", order_return_add->item_restock) == NULL) {
    goto fail; //Bool
    }
    }


    // order_return_add->staff_note
    if(order_return_add->staff_note) {
    if(cJSON_AddStringToObject(item, "staff_note", order_return_add->staff_note) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->comment
    if(order_return_add->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_return_add->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->send_notifications
    if(order_return_add->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_return_add->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_return_add->reject_reason
    if(order_return_add->reject_reason) {
    if(cJSON_AddStringToObject(item, "reject_reason", order_return_add->reject_reason) == NULL) {
    goto fail; //String
    }
    }


    // order_return_add->order_products
    if (!order_return_add->order_products) {
        goto fail;
    }
    cJSON *order_products = cJSON_AddArrayToObject(item, "order_products");
    if(order_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_productsListEntry;
    if (order_return_add->order_products) {
    list_ForEach(order_productsListEntry, order_return_add->order_products) {
    cJSON *itemLocal = order_return_add_order_products_inner_convertToJSON(order_productsListEntry->data);
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

order_return_add_t *order_return_add_parseFromJSON(cJSON *order_return_addJSON){

    order_return_add_t *order_return_add_local_var = NULL;

    // define the local list for order_return_add->order_products
    list_t *order_productsList = NULL;

    // order_return_add->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_return_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_return_add->return_status_id
    cJSON *return_status_id = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "return_status_id");
    if (cJSON_IsNull(return_status_id)) {
        return_status_id = NULL;
    }
    if (!return_status_id) {
        goto end;
    }

    
    if(!cJSON_IsString(return_status_id))
    {
    goto end; //String
    }

    // order_return_add->return_action_id
    cJSON *return_action_id = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "return_action_id");
    if (cJSON_IsNull(return_action_id)) {
        return_action_id = NULL;
    }
    if (!return_action_id) {
        goto end;
    }

    
    if(!cJSON_IsString(return_action_id))
    {
    goto end; //String
    }

    // order_return_add->return_reason_id
    cJSON *return_reason_id = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "return_reason_id");
    if (cJSON_IsNull(return_reason_id)) {
        return_reason_id = NULL;
    }
    if (!return_reason_id) {
        goto end;
    }

    
    if(!cJSON_IsString(return_reason_id))
    {
    goto end; //String
    }

    // order_return_add->return_reason
    cJSON *return_reason = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "return_reason");
    if (cJSON_IsNull(return_reason)) {
        return_reason = NULL;
    }
    if (return_reason) { 
    if(!cJSON_IsString(return_reason) && !cJSON_IsNull(return_reason))
    {
    goto end; //String
    }
    }

    // order_return_add->item_restock
    cJSON *item_restock = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "item_restock");
    if (cJSON_IsNull(item_restock)) {
        item_restock = NULL;
    }
    if (item_restock) { 
    if(!cJSON_IsBool(item_restock))
    {
    goto end; //Bool
    }
    }

    // order_return_add->staff_note
    cJSON *staff_note = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "staff_note");
    if (cJSON_IsNull(staff_note)) {
        staff_note = NULL;
    }
    if (staff_note) { 
    if(!cJSON_IsString(staff_note) && !cJSON_IsNull(staff_note))
    {
    goto end; //String
    }
    }

    // order_return_add->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_return_add->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }

    // order_return_add->reject_reason
    cJSON *reject_reason = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "reject_reason");
    if (cJSON_IsNull(reject_reason)) {
        reject_reason = NULL;
    }
    if (reject_reason) { 
    if(!cJSON_IsString(reject_reason) && !cJSON_IsNull(reject_reason))
    {
    goto end; //String
    }
    }

    // order_return_add->order_products
    cJSON *order_products = cJSON_GetObjectItemCaseSensitive(order_return_addJSON, "order_products");
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
        order_return_add_order_products_inner_t *order_productsItem = order_return_add_order_products_inner_parseFromJSON(order_products_local_nonprimitive);

        list_addElement(order_productsList, order_productsItem);
    }


    order_return_add_local_var = order_return_add_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        strdup(return_status_id->valuestring),
        strdup(return_action_id->valuestring),
        strdup(return_reason_id->valuestring),
        return_reason && !cJSON_IsNull(return_reason) ? strdup(return_reason->valuestring) : NULL,
        item_restock ? item_restock->valueint : 0,
        staff_note && !cJSON_IsNull(staff_note) ? strdup(staff_note->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        send_notifications ? send_notifications->valueint : 0,
        reject_reason && !cJSON_IsNull(reject_reason) ? strdup(reject_reason->valuestring) : NULL,
        order_productsList
        );

    return order_return_add_local_var;
end:
    if (order_productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_productsList) {
            order_return_add_order_products_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_productsList);
        order_productsList = NULL;
    }
    return NULL;

}
