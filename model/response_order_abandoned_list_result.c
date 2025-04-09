#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_order_abandoned_list_result.h"



static response_order_abandoned_list_result_t *response_order_abandoned_list_result_create_internal(
    list_t *order,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_order_abandoned_list_result_t *response_order_abandoned_list_result_local_var = malloc(sizeof(response_order_abandoned_list_result_t));
    if (!response_order_abandoned_list_result_local_var) {
        return NULL;
    }
    response_order_abandoned_list_result_local_var->order = order;
    response_order_abandoned_list_result_local_var->additional_fields = additional_fields;
    response_order_abandoned_list_result_local_var->custom_fields = custom_fields;

    response_order_abandoned_list_result_local_var->_library_owned = 1;
    return response_order_abandoned_list_result_local_var;
}

__attribute__((deprecated)) response_order_abandoned_list_result_t *response_order_abandoned_list_result_create(
    list_t *order,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_order_abandoned_list_result_create_internal (
        order,
        additional_fields,
        custom_fields
        );
}

void response_order_abandoned_list_result_free(response_order_abandoned_list_result_t *response_order_abandoned_list_result) {
    if(NULL == response_order_abandoned_list_result){
        return ;
    }
    if(response_order_abandoned_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_order_abandoned_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_order_abandoned_list_result->order) {
        list_ForEach(listEntry, response_order_abandoned_list_result->order) {
            order_abandoned_free(listEntry->data);
        }
        list_freeList(response_order_abandoned_list_result->order);
        response_order_abandoned_list_result->order = NULL;
    }
    if (response_order_abandoned_list_result->additional_fields) {
        object_free(response_order_abandoned_list_result->additional_fields);
        response_order_abandoned_list_result->additional_fields = NULL;
    }
    if (response_order_abandoned_list_result->custom_fields) {
        object_free(response_order_abandoned_list_result->custom_fields);
        response_order_abandoned_list_result->custom_fields = NULL;
    }
    free(response_order_abandoned_list_result);
}

cJSON *response_order_abandoned_list_result_convertToJSON(response_order_abandoned_list_result_t *response_order_abandoned_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_order_abandoned_list_result->order
    if(response_order_abandoned_list_result->order) {
    cJSON *order = cJSON_AddArrayToObject(item, "order");
    if(order == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *orderListEntry;
    if (response_order_abandoned_list_result->order) {
    list_ForEach(orderListEntry, response_order_abandoned_list_result->order) {
    cJSON *itemLocal = order_abandoned_convertToJSON(orderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order, itemLocal);
    }
    }
    }


    // response_order_abandoned_list_result->additional_fields
    if(response_order_abandoned_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_order_abandoned_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_order_abandoned_list_result->custom_fields
    if(response_order_abandoned_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_order_abandoned_list_result->custom_fields);
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

response_order_abandoned_list_result_t *response_order_abandoned_list_result_parseFromJSON(cJSON *response_order_abandoned_list_resultJSON){

    response_order_abandoned_list_result_t *response_order_abandoned_list_result_local_var = NULL;

    // define the local list for response_order_abandoned_list_result->order
    list_t *orderList = NULL;

    // response_order_abandoned_list_result->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(response_order_abandoned_list_resultJSON, "order");
    if (cJSON_IsNull(order)) {
        order = NULL;
    }
    if (order) { 
    cJSON *order_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order)){
        goto end; //nonprimitive container
    }

    orderList = list_createList();

    cJSON_ArrayForEach(order_local_nonprimitive,order )
    {
        if(!cJSON_IsObject(order_local_nonprimitive)){
            goto end;
        }
        order_abandoned_t *orderItem = order_abandoned_parseFromJSON(order_local_nonprimitive);

        list_addElement(orderList, orderItem);
    }
    }

    // response_order_abandoned_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_order_abandoned_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_order_abandoned_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_order_abandoned_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_order_abandoned_list_result_local_var = response_order_abandoned_list_result_create_internal (
        order ? orderList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_order_abandoned_list_result_local_var;
end:
    if (orderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, orderList) {
            order_abandoned_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(orderList);
        orderList = NULL;
    }
    return NULL;

}
