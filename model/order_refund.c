#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_refund.h"



static order_refund_t *order_refund_create_internal(
    char *id,
    double shipping,
    double fee,
    double tax,
    double total,
    a2_c_date_time_t *modified_time,
    char *comment,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_refund_t *order_refund_local_var = malloc(sizeof(order_refund_t));
    if (!order_refund_local_var) {
        return NULL;
    }
    order_refund_local_var->id = id;
    order_refund_local_var->shipping = shipping;
    order_refund_local_var->fee = fee;
    order_refund_local_var->tax = tax;
    order_refund_local_var->total = total;
    order_refund_local_var->modified_time = modified_time;
    order_refund_local_var->comment = comment;
    order_refund_local_var->items = items;
    order_refund_local_var->additional_fields = additional_fields;
    order_refund_local_var->custom_fields = custom_fields;

    order_refund_local_var->_library_owned = 1;
    return order_refund_local_var;
}

__attribute__((deprecated)) order_refund_t *order_refund_create(
    char *id,
    double shipping,
    double fee,
    double tax,
    double total,
    a2_c_date_time_t *modified_time,
    char *comment,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_refund_create_internal (
        id,
        shipping,
        fee,
        tax,
        total,
        modified_time,
        comment,
        items,
        additional_fields,
        custom_fields
        );
}

void order_refund_free(order_refund_t *order_refund) {
    if(NULL == order_refund){
        return ;
    }
    if(order_refund->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_refund_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_refund->id) {
        free(order_refund->id);
        order_refund->id = NULL;
    }
    if (order_refund->modified_time) {
        a2_c_date_time_free(order_refund->modified_time);
        order_refund->modified_time = NULL;
    }
    if (order_refund->comment) {
        free(order_refund->comment);
        order_refund->comment = NULL;
    }
    if (order_refund->items) {
        list_ForEach(listEntry, order_refund->items) {
            order_status_refund_item_free(listEntry->data);
        }
        list_freeList(order_refund->items);
        order_refund->items = NULL;
    }
    if (order_refund->additional_fields) {
        object_free(order_refund->additional_fields);
        order_refund->additional_fields = NULL;
    }
    if (order_refund->custom_fields) {
        object_free(order_refund->custom_fields);
        order_refund->custom_fields = NULL;
    }
    free(order_refund);
}

cJSON *order_refund_convertToJSON(order_refund_t *order_refund) {
    cJSON *item = cJSON_CreateObject();

    // order_refund->id
    if(order_refund->id) {
    if(cJSON_AddStringToObject(item, "id", order_refund->id) == NULL) {
    goto fail; //String
    }
    }


    // order_refund->shipping
    if(order_refund->shipping) {
    if(cJSON_AddNumberToObject(item, "shipping", order_refund->shipping) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund->fee
    if(order_refund->fee) {
    if(cJSON_AddNumberToObject(item, "fee", order_refund->fee) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund->tax
    if(order_refund->tax) {
    if(cJSON_AddNumberToObject(item, "tax", order_refund->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund->total
    if(order_refund->total) {
    if(cJSON_AddNumberToObject(item, "total", order_refund->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund->modified_time
    if(order_refund->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(order_refund->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_refund->comment
    if(order_refund->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_refund->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_refund->items
    if(order_refund->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (order_refund->items) {
    list_ForEach(itemsListEntry, order_refund->items) {
    cJSON *itemLocal = order_status_refund_item_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // order_refund->additional_fields
    if(order_refund->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_refund->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_refund->custom_fields
    if(order_refund->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_refund->custom_fields);
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

order_refund_t *order_refund_parseFromJSON(cJSON *order_refundJSON){

    order_refund_t *order_refund_local_var = NULL;

    // define the local variable for order_refund->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // define the local list for order_refund->items
    list_t *itemsList = NULL;

    // order_refund->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_refund->shipping
    cJSON *shipping = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "shipping");
    if (cJSON_IsNull(shipping)) {
        shipping = NULL;
    }
    if (shipping) { 
    if(!cJSON_IsNumber(shipping))
    {
    goto end; //Numeric
    }
    }

    // order_refund->fee
    cJSON *fee = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "fee");
    if (cJSON_IsNull(fee)) {
        fee = NULL;
    }
    if (fee) { 
    if(!cJSON_IsNumber(fee))
    {
    goto end; //Numeric
    }
    }

    // order_refund->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // order_refund->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // order_refund->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // order_refund->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_refund->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "items");
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
        order_status_refund_item_t *itemsItem = order_status_refund_item_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // order_refund->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_refund->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_refundJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_refund_local_var = order_refund_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        shipping ? shipping->valuedouble : 0,
        fee ? fee->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        total ? total->valuedouble : 0,
        modified_time ? modified_time_local_nonprim : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        items ? itemsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_refund_local_var;
end:
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            order_status_refund_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    return NULL;

}
