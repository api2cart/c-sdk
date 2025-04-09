#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_order_status_list_result.h"



static response_order_status_list_result_t *response_order_status_list_result_create_internal(
    list_t *cart_order_statuses,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_order_status_list_result_t *response_order_status_list_result_local_var = malloc(sizeof(response_order_status_list_result_t));
    if (!response_order_status_list_result_local_var) {
        return NULL;
    }
    response_order_status_list_result_local_var->cart_order_statuses = cart_order_statuses;
    response_order_status_list_result_local_var->additional_fields = additional_fields;
    response_order_status_list_result_local_var->custom_fields = custom_fields;

    response_order_status_list_result_local_var->_library_owned = 1;
    return response_order_status_list_result_local_var;
}

__attribute__((deprecated)) response_order_status_list_result_t *response_order_status_list_result_create(
    list_t *cart_order_statuses,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_order_status_list_result_create_internal (
        cart_order_statuses,
        additional_fields,
        custom_fields
        );
}

void response_order_status_list_result_free(response_order_status_list_result_t *response_order_status_list_result) {
    if(NULL == response_order_status_list_result){
        return ;
    }
    if(response_order_status_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_order_status_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_order_status_list_result->cart_order_statuses) {
        list_ForEach(listEntry, response_order_status_list_result->cart_order_statuses) {
            status_free(listEntry->data);
        }
        list_freeList(response_order_status_list_result->cart_order_statuses);
        response_order_status_list_result->cart_order_statuses = NULL;
    }
    if (response_order_status_list_result->additional_fields) {
        object_free(response_order_status_list_result->additional_fields);
        response_order_status_list_result->additional_fields = NULL;
    }
    if (response_order_status_list_result->custom_fields) {
        object_free(response_order_status_list_result->custom_fields);
        response_order_status_list_result->custom_fields = NULL;
    }
    free(response_order_status_list_result);
}

cJSON *response_order_status_list_result_convertToJSON(response_order_status_list_result_t *response_order_status_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_order_status_list_result->cart_order_statuses
    if(response_order_status_list_result->cart_order_statuses) {
    cJSON *cart_order_statuses = cJSON_AddArrayToObject(item, "cart_order_statuses");
    if(cart_order_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cart_order_statusesListEntry;
    if (response_order_status_list_result->cart_order_statuses) {
    list_ForEach(cart_order_statusesListEntry, response_order_status_list_result->cart_order_statuses) {
    cJSON *itemLocal = status_convertToJSON(cart_order_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cart_order_statuses, itemLocal);
    }
    }
    }


    // response_order_status_list_result->additional_fields
    if(response_order_status_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_order_status_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_order_status_list_result->custom_fields
    if(response_order_status_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_order_status_list_result->custom_fields);
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

response_order_status_list_result_t *response_order_status_list_result_parseFromJSON(cJSON *response_order_status_list_resultJSON){

    response_order_status_list_result_t *response_order_status_list_result_local_var = NULL;

    // define the local list for response_order_status_list_result->cart_order_statuses
    list_t *cart_order_statusesList = NULL;

    // response_order_status_list_result->cart_order_statuses
    cJSON *cart_order_statuses = cJSON_GetObjectItemCaseSensitive(response_order_status_list_resultJSON, "cart_order_statuses");
    if (cJSON_IsNull(cart_order_statuses)) {
        cart_order_statuses = NULL;
    }
    if (cart_order_statuses) { 
    cJSON *cart_order_statuses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(cart_order_statuses)){
        goto end; //nonprimitive container
    }

    cart_order_statusesList = list_createList();

    cJSON_ArrayForEach(cart_order_statuses_local_nonprimitive,cart_order_statuses )
    {
        if(!cJSON_IsObject(cart_order_statuses_local_nonprimitive)){
            goto end;
        }
        status_t *cart_order_statusesItem = status_parseFromJSON(cart_order_statuses_local_nonprimitive);

        list_addElement(cart_order_statusesList, cart_order_statusesItem);
    }
    }

    // response_order_status_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_order_status_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_order_status_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_order_status_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_order_status_list_result_local_var = response_order_status_list_result_create_internal (
        cart_order_statuses ? cart_order_statusesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_order_status_list_result_local_var;
end:
    if (cart_order_statusesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cart_order_statusesList) {
            status_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cart_order_statusesList);
        cart_order_statusesList = NULL;
    }
    return NULL;

}
