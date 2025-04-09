#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment.h"



static shipment_t *shipment_create_internal(
    char *id,
    char *order_id,
    char *name,
    char *warehouse_id,
    char *shipment_provider,
    list_t *tracking_numbers,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_time,
    list_t *items,
    int is_shipped,
    a2_c_date_time_t *delivered_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    shipment_t *shipment_local_var = malloc(sizeof(shipment_t));
    if (!shipment_local_var) {
        return NULL;
    }
    shipment_local_var->id = id;
    shipment_local_var->order_id = order_id;
    shipment_local_var->name = name;
    shipment_local_var->warehouse_id = warehouse_id;
    shipment_local_var->shipment_provider = shipment_provider;
    shipment_local_var->tracking_numbers = tracking_numbers;
    shipment_local_var->created_at = created_at;
    shipment_local_var->modified_time = modified_time;
    shipment_local_var->items = items;
    shipment_local_var->is_shipped = is_shipped;
    shipment_local_var->delivered_at = delivered_at;
    shipment_local_var->additional_fields = additional_fields;
    shipment_local_var->custom_fields = custom_fields;

    shipment_local_var->_library_owned = 1;
    return shipment_local_var;
}

__attribute__((deprecated)) shipment_t *shipment_create(
    char *id,
    char *order_id,
    char *name,
    char *warehouse_id,
    char *shipment_provider,
    list_t *tracking_numbers,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_time,
    list_t *items,
    int is_shipped,
    a2_c_date_time_t *delivered_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return shipment_create_internal (
        id,
        order_id,
        name,
        warehouse_id,
        shipment_provider,
        tracking_numbers,
        created_at,
        modified_time,
        items,
        is_shipped,
        delivered_at,
        additional_fields,
        custom_fields
        );
}

void shipment_free(shipment_t *shipment) {
    if(NULL == shipment){
        return ;
    }
    if(shipment->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "shipment_free");
        return ;
    }
    listEntry_t *listEntry;
    if (shipment->id) {
        free(shipment->id);
        shipment->id = NULL;
    }
    if (shipment->order_id) {
        free(shipment->order_id);
        shipment->order_id = NULL;
    }
    if (shipment->name) {
        free(shipment->name);
        shipment->name = NULL;
    }
    if (shipment->warehouse_id) {
        free(shipment->warehouse_id);
        shipment->warehouse_id = NULL;
    }
    if (shipment->shipment_provider) {
        free(shipment->shipment_provider);
        shipment->shipment_provider = NULL;
    }
    if (shipment->tracking_numbers) {
        list_ForEach(listEntry, shipment->tracking_numbers) {
            shipment_tracking_number_free(listEntry->data);
        }
        list_freeList(shipment->tracking_numbers);
        shipment->tracking_numbers = NULL;
    }
    if (shipment->created_at) {
        a2_c_date_time_free(shipment->created_at);
        shipment->created_at = NULL;
    }
    if (shipment->modified_time) {
        a2_c_date_time_free(shipment->modified_time);
        shipment->modified_time = NULL;
    }
    if (shipment->items) {
        list_ForEach(listEntry, shipment->items) {
            shipment_item_free(listEntry->data);
        }
        list_freeList(shipment->items);
        shipment->items = NULL;
    }
    if (shipment->delivered_at) {
        a2_c_date_time_free(shipment->delivered_at);
        shipment->delivered_at = NULL;
    }
    if (shipment->additional_fields) {
        object_free(shipment->additional_fields);
        shipment->additional_fields = NULL;
    }
    if (shipment->custom_fields) {
        object_free(shipment->custom_fields);
        shipment->custom_fields = NULL;
    }
    free(shipment);
}

cJSON *shipment_convertToJSON(shipment_t *shipment) {
    cJSON *item = cJSON_CreateObject();

    // shipment->id
    if(shipment->id) {
    if(cJSON_AddStringToObject(item, "id", shipment->id) == NULL) {
    goto fail; //String
    }
    }


    // shipment->order_id
    if(shipment->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", shipment->order_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment->name
    if(shipment->name) {
    if(cJSON_AddStringToObject(item, "name", shipment->name) == NULL) {
    goto fail; //String
    }
    }


    // shipment->warehouse_id
    if(shipment->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", shipment->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment->shipment_provider
    if(shipment->shipment_provider) {
    if(cJSON_AddStringToObject(item, "shipment_provider", shipment->shipment_provider) == NULL) {
    goto fail; //String
    }
    }


    // shipment->tracking_numbers
    if(shipment->tracking_numbers) {
    cJSON *tracking_numbers = cJSON_AddArrayToObject(item, "tracking_numbers");
    if(tracking_numbers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tracking_numbersListEntry;
    if (shipment->tracking_numbers) {
    list_ForEach(tracking_numbersListEntry, shipment->tracking_numbers) {
    cJSON *itemLocal = shipment_tracking_number_convertToJSON(tracking_numbersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tracking_numbers, itemLocal);
    }
    }
    }


    // shipment->created_at
    if(shipment->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(shipment->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment->modified_time
    if(shipment->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(shipment->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment->items
    if(shipment->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (shipment->items) {
    list_ForEach(itemsListEntry, shipment->items) {
    cJSON *itemLocal = shipment_item_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // shipment->is_shipped
    if(shipment->is_shipped) {
    if(cJSON_AddBoolToObject(item, "is_shipped", shipment->is_shipped) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment->delivered_at
    if(shipment->delivered_at) {
    cJSON *delivered_at_local_JSON = a2_c_date_time_convertToJSON(shipment->delivered_at);
    if(delivered_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "delivered_at", delivered_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment->additional_fields
    if(shipment->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(shipment->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment->custom_fields
    if(shipment->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(shipment->custom_fields);
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

shipment_t *shipment_parseFromJSON(cJSON *shipmentJSON){

    shipment_t *shipment_local_var = NULL;

    // define the local list for shipment->tracking_numbers
    list_t *tracking_numbersList = NULL;

    // define the local variable for shipment->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for shipment->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // define the local list for shipment->items
    list_t *itemsList = NULL;

    // define the local variable for shipment->delivered_at
    a2_c_date_time_t *delivered_at_local_nonprim = NULL;

    // shipment->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipment->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // shipment->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipment->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // shipment->shipment_provider
    cJSON *shipment_provider = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "shipment_provider");
    if (cJSON_IsNull(shipment_provider)) {
        shipment_provider = NULL;
    }
    if (shipment_provider) { 
    if(!cJSON_IsString(shipment_provider) && !cJSON_IsNull(shipment_provider))
    {
    goto end; //String
    }
    }

    // shipment->tracking_numbers
    cJSON *tracking_numbers = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "tracking_numbers");
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
        shipment_tracking_number_t *tracking_numbersItem = shipment_tracking_number_parseFromJSON(tracking_numbers_local_nonprimitive);

        list_addElement(tracking_numbersList, tracking_numbersItem);
    }
    }

    // shipment->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // shipment->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // shipment->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "items");
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
        shipment_item_t *itemsItem = shipment_item_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // shipment->is_shipped
    cJSON *is_shipped = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "is_shipped");
    if (cJSON_IsNull(is_shipped)) {
        is_shipped = NULL;
    }
    if (is_shipped) { 
    if(!cJSON_IsBool(is_shipped))
    {
    goto end; //Bool
    }
    }

    // shipment->delivered_at
    cJSON *delivered_at = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "delivered_at");
    if (cJSON_IsNull(delivered_at)) {
        delivered_at = NULL;
    }
    if (delivered_at) { 
    delivered_at_local_nonprim = a2_c_date_time_parseFromJSON(delivered_at); //nonprimitive
    }

    // shipment->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // shipment->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(shipmentJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    shipment_local_var = shipment_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        shipment_provider && !cJSON_IsNull(shipment_provider) ? strdup(shipment_provider->valuestring) : NULL,
        tracking_numbers ? tracking_numbersList : NULL,
        created_at ? created_at_local_nonprim : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        items ? itemsList : NULL,
        is_shipped ? is_shipped->valueint : 0,
        delivered_at ? delivered_at_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return shipment_local_var;
end:
    if (tracking_numbersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tracking_numbersList) {
            shipment_tracking_number_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tracking_numbersList);
        tracking_numbersList = NULL;
    }
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            shipment_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    if (delivered_at_local_nonprim) {
        a2_c_date_time_free(delivered_at_local_nonprim);
        delivered_at_local_nonprim = NULL;
    }
    return NULL;

}
