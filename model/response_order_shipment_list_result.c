#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_order_shipment_list_result.h"



static response_order_shipment_list_result_t *response_order_shipment_list_result_create_internal(
    int shipment_count,
    list_t *shipment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_order_shipment_list_result_t *response_order_shipment_list_result_local_var = malloc(sizeof(response_order_shipment_list_result_t));
    if (!response_order_shipment_list_result_local_var) {
        return NULL;
    }
    response_order_shipment_list_result_local_var->shipment_count = shipment_count;
    response_order_shipment_list_result_local_var->shipment = shipment;
    response_order_shipment_list_result_local_var->additional_fields = additional_fields;
    response_order_shipment_list_result_local_var->custom_fields = custom_fields;

    response_order_shipment_list_result_local_var->_library_owned = 1;
    return response_order_shipment_list_result_local_var;
}

__attribute__((deprecated)) response_order_shipment_list_result_t *response_order_shipment_list_result_create(
    int shipment_count,
    list_t *shipment,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_order_shipment_list_result_create_internal (
        shipment_count,
        shipment,
        additional_fields,
        custom_fields
        );
}

void response_order_shipment_list_result_free(response_order_shipment_list_result_t *response_order_shipment_list_result) {
    if(NULL == response_order_shipment_list_result){
        return ;
    }
    if(response_order_shipment_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_order_shipment_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_order_shipment_list_result->shipment) {
        list_ForEach(listEntry, response_order_shipment_list_result->shipment) {
            shipment_free(listEntry->data);
        }
        list_freeList(response_order_shipment_list_result->shipment);
        response_order_shipment_list_result->shipment = NULL;
    }
    if (response_order_shipment_list_result->additional_fields) {
        object_free(response_order_shipment_list_result->additional_fields);
        response_order_shipment_list_result->additional_fields = NULL;
    }
    if (response_order_shipment_list_result->custom_fields) {
        object_free(response_order_shipment_list_result->custom_fields);
        response_order_shipment_list_result->custom_fields = NULL;
    }
    free(response_order_shipment_list_result);
}

cJSON *response_order_shipment_list_result_convertToJSON(response_order_shipment_list_result_t *response_order_shipment_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_order_shipment_list_result->shipment_count
    if(response_order_shipment_list_result->shipment_count) {
    if(cJSON_AddNumberToObject(item, "shipment_count", response_order_shipment_list_result->shipment_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_order_shipment_list_result->shipment
    if(response_order_shipment_list_result->shipment) {
    cJSON *shipment = cJSON_AddArrayToObject(item, "shipment");
    if(shipment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipmentListEntry;
    if (response_order_shipment_list_result->shipment) {
    list_ForEach(shipmentListEntry, response_order_shipment_list_result->shipment) {
    cJSON *itemLocal = shipment_convertToJSON(shipmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipment, itemLocal);
    }
    }
    }


    // response_order_shipment_list_result->additional_fields
    if(response_order_shipment_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_order_shipment_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_order_shipment_list_result->custom_fields
    if(response_order_shipment_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_order_shipment_list_result->custom_fields);
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

response_order_shipment_list_result_t *response_order_shipment_list_result_parseFromJSON(cJSON *response_order_shipment_list_resultJSON){

    response_order_shipment_list_result_t *response_order_shipment_list_result_local_var = NULL;

    // define the local list for response_order_shipment_list_result->shipment
    list_t *shipmentList = NULL;

    // response_order_shipment_list_result->shipment_count
    cJSON *shipment_count = cJSON_GetObjectItemCaseSensitive(response_order_shipment_list_resultJSON, "shipment_count");
    if (cJSON_IsNull(shipment_count)) {
        shipment_count = NULL;
    }
    if (shipment_count) { 
    if(!cJSON_IsNumber(shipment_count))
    {
    goto end; //Numeric
    }
    }

    // response_order_shipment_list_result->shipment
    cJSON *shipment = cJSON_GetObjectItemCaseSensitive(response_order_shipment_list_resultJSON, "shipment");
    if (cJSON_IsNull(shipment)) {
        shipment = NULL;
    }
    if (shipment) { 
    cJSON *shipment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipment)){
        goto end; //nonprimitive container
    }

    shipmentList = list_createList();

    cJSON_ArrayForEach(shipment_local_nonprimitive,shipment )
    {
        if(!cJSON_IsObject(shipment_local_nonprimitive)){
            goto end;
        }
        shipment_t *shipmentItem = shipment_parseFromJSON(shipment_local_nonprimitive);

        list_addElement(shipmentList, shipmentItem);
    }
    }

    // response_order_shipment_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_order_shipment_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_order_shipment_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_order_shipment_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_order_shipment_list_result_local_var = response_order_shipment_list_result_create_internal (
        shipment_count ? shipment_count->valuedouble : 0,
        shipment ? shipmentList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_order_shipment_list_result_local_var;
end:
    if (shipmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipmentList) {
            shipment_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipmentList);
        shipmentList = NULL;
    }
    return NULL;

}
