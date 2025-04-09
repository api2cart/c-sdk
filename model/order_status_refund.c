#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_status_refund.h"



static order_status_refund_t *order_status_refund_create_internal(
    double shipping,
    double fee,
    double tax,
    double total_refunded,
    a2_c_date_time_t *time,
    char *comment,
    list_t *refunded_items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_status_refund_t *order_status_refund_local_var = malloc(sizeof(order_status_refund_t));
    if (!order_status_refund_local_var) {
        return NULL;
    }
    order_status_refund_local_var->shipping = shipping;
    order_status_refund_local_var->fee = fee;
    order_status_refund_local_var->tax = tax;
    order_status_refund_local_var->total_refunded = total_refunded;
    order_status_refund_local_var->time = time;
    order_status_refund_local_var->comment = comment;
    order_status_refund_local_var->refunded_items = refunded_items;
    order_status_refund_local_var->additional_fields = additional_fields;
    order_status_refund_local_var->custom_fields = custom_fields;

    order_status_refund_local_var->_library_owned = 1;
    return order_status_refund_local_var;
}

__attribute__((deprecated)) order_status_refund_t *order_status_refund_create(
    double shipping,
    double fee,
    double tax,
    double total_refunded,
    a2_c_date_time_t *time,
    char *comment,
    list_t *refunded_items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_status_refund_create_internal (
        shipping,
        fee,
        tax,
        total_refunded,
        time,
        comment,
        refunded_items,
        additional_fields,
        custom_fields
        );
}

void order_status_refund_free(order_status_refund_t *order_status_refund) {
    if(NULL == order_status_refund){
        return ;
    }
    if(order_status_refund->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_status_refund_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_status_refund->time) {
        a2_c_date_time_free(order_status_refund->time);
        order_status_refund->time = NULL;
    }
    if (order_status_refund->comment) {
        free(order_status_refund->comment);
        order_status_refund->comment = NULL;
    }
    if (order_status_refund->refunded_items) {
        list_ForEach(listEntry, order_status_refund->refunded_items) {
            order_status_refund_item_free(listEntry->data);
        }
        list_freeList(order_status_refund->refunded_items);
        order_status_refund->refunded_items = NULL;
    }
    if (order_status_refund->additional_fields) {
        object_free(order_status_refund->additional_fields);
        order_status_refund->additional_fields = NULL;
    }
    if (order_status_refund->custom_fields) {
        object_free(order_status_refund->custom_fields);
        order_status_refund->custom_fields = NULL;
    }
    free(order_status_refund);
}

cJSON *order_status_refund_convertToJSON(order_status_refund_t *order_status_refund) {
    cJSON *item = cJSON_CreateObject();

    // order_status_refund->shipping
    if(order_status_refund->shipping) {
    if(cJSON_AddNumberToObject(item, "shipping", order_status_refund->shipping) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund->fee
    if(order_status_refund->fee) {
    if(cJSON_AddNumberToObject(item, "fee", order_status_refund->fee) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund->tax
    if(order_status_refund->tax) {
    if(cJSON_AddNumberToObject(item, "tax", order_status_refund->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund->total_refunded
    if(order_status_refund->total_refunded) {
    if(cJSON_AddNumberToObject(item, "total_refunded", order_status_refund->total_refunded) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_status_refund->time
    if(order_status_refund->time) {
    cJSON *time_local_JSON = a2_c_date_time_convertToJSON(order_status_refund->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status_refund->comment
    if(order_status_refund->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_status_refund->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_status_refund->refunded_items
    if(order_status_refund->refunded_items) {
    cJSON *refunded_items = cJSON_AddArrayToObject(item, "refunded_items");
    if(refunded_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *refunded_itemsListEntry;
    if (order_status_refund->refunded_items) {
    list_ForEach(refunded_itemsListEntry, order_status_refund->refunded_items) {
    cJSON *itemLocal = order_status_refund_item_convertToJSON(refunded_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(refunded_items, itemLocal);
    }
    }
    }


    // order_status_refund->additional_fields
    if(order_status_refund->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_status_refund->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_status_refund->custom_fields
    if(order_status_refund->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_status_refund->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_status_refund_t *order_status_refund_parseFromJSON(cJSON *order_status_refundJSON){

    order_status_refund_t *order_status_refund_local_var = NULL;

    // define the local variable for order_status_refund->time
    a2_c_date_time_t *time_local_nonprim = NULL;

    // define the local list for order_status_refund->refunded_items
    list_t *refunded_itemsList = NULL;

    // order_status_refund->shipping
    cJSON *shipping = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "shipping");
    if (cJSON_IsNull(shipping)) {
        shipping = NULL;
    }
    if (shipping) { 
    if(!cJSON_IsNumber(shipping))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund->fee
    cJSON *fee = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "fee");
    if (cJSON_IsNull(fee)) {
        fee = NULL;
    }
    if (fee) { 
    if(!cJSON_IsNumber(fee))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund->total_refunded
    cJSON *total_refunded = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "total_refunded");
    if (cJSON_IsNull(total_refunded)) {
        total_refunded = NULL;
    }
    if (total_refunded) { 
    if(!cJSON_IsNumber(total_refunded))
    {
    goto end; //Numeric
    }
    }

    // order_status_refund->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "time");
    if (cJSON_IsNull(time)) {
        time = NULL;
    }
    if (time) { 
    time_local_nonprim = a2_c_date_time_parseFromJSON(time); //nonprimitive
    }

    // order_status_refund->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_status_refund->refunded_items
    cJSON *refunded_items = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "refunded_items");
    if (cJSON_IsNull(refunded_items)) {
        refunded_items = NULL;
    }
    if (refunded_items) { 
    cJSON *refunded_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(refunded_items)){
        goto end; //nonprimitive container
    }

    refunded_itemsList = list_createList();

    cJSON_ArrayForEach(refunded_items_local_nonprimitive,refunded_items )
    {
        if(!cJSON_IsObject(refunded_items_local_nonprimitive)){
            goto end;
        }
        order_status_refund_item_t *refunded_itemsItem = order_status_refund_item_parseFromJSON(refunded_items_local_nonprimitive);

        list_addElement(refunded_itemsList, refunded_itemsItem);
    }
    }

    // order_status_refund->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_status_refund->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_status_refundJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_status_refund_local_var = order_status_refund_create_internal (
        shipping ? shipping->valuedouble : 0,
        fee ? fee->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        total_refunded ? total_refunded->valuedouble : 0,
        time ? time_local_nonprim : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        refunded_items ? refunded_itemsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_status_refund_local_var;
end:
    if (time_local_nonprim) {
        a2_c_date_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    if (refunded_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, refunded_itemsList) {
            order_status_refund_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(refunded_itemsList);
        refunded_itemsList = NULL;
    }
    return NULL;

}
