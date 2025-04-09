#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_customer_attribute_list_result.h"



static response_customer_attribute_list_result_t *response_customer_attribute_list_result_create_internal(
    int total_count,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_customer_attribute_list_result_t *response_customer_attribute_list_result_local_var = malloc(sizeof(response_customer_attribute_list_result_t));
    if (!response_customer_attribute_list_result_local_var) {
        return NULL;
    }
    response_customer_attribute_list_result_local_var->total_count = total_count;
    response_customer_attribute_list_result_local_var->items = items;
    response_customer_attribute_list_result_local_var->additional_fields = additional_fields;
    response_customer_attribute_list_result_local_var->custom_fields = custom_fields;

    response_customer_attribute_list_result_local_var->_library_owned = 1;
    return response_customer_attribute_list_result_local_var;
}

__attribute__((deprecated)) response_customer_attribute_list_result_t *response_customer_attribute_list_result_create(
    int total_count,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_customer_attribute_list_result_create_internal (
        total_count,
        items,
        additional_fields,
        custom_fields
        );
}

void response_customer_attribute_list_result_free(response_customer_attribute_list_result_t *response_customer_attribute_list_result) {
    if(NULL == response_customer_attribute_list_result){
        return ;
    }
    if(response_customer_attribute_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_customer_attribute_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_customer_attribute_list_result->items) {
        list_ForEach(listEntry, response_customer_attribute_list_result->items) {
            customer_attribute_free(listEntry->data);
        }
        list_freeList(response_customer_attribute_list_result->items);
        response_customer_attribute_list_result->items = NULL;
    }
    if (response_customer_attribute_list_result->additional_fields) {
        object_free(response_customer_attribute_list_result->additional_fields);
        response_customer_attribute_list_result->additional_fields = NULL;
    }
    if (response_customer_attribute_list_result->custom_fields) {
        object_free(response_customer_attribute_list_result->custom_fields);
        response_customer_attribute_list_result->custom_fields = NULL;
    }
    free(response_customer_attribute_list_result);
}

cJSON *response_customer_attribute_list_result_convertToJSON(response_customer_attribute_list_result_t *response_customer_attribute_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_customer_attribute_list_result->total_count
    if(response_customer_attribute_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_customer_attribute_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_customer_attribute_list_result->items
    if(response_customer_attribute_list_result->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (response_customer_attribute_list_result->items) {
    list_ForEach(itemsListEntry, response_customer_attribute_list_result->items) {
    cJSON *itemLocal = customer_attribute_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // response_customer_attribute_list_result->additional_fields
    if(response_customer_attribute_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_customer_attribute_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_customer_attribute_list_result->custom_fields
    if(response_customer_attribute_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_customer_attribute_list_result->custom_fields);
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

response_customer_attribute_list_result_t *response_customer_attribute_list_result_parseFromJSON(cJSON *response_customer_attribute_list_resultJSON){

    response_customer_attribute_list_result_t *response_customer_attribute_list_result_local_var = NULL;

    // define the local list for response_customer_attribute_list_result->items
    list_t *itemsList = NULL;

    // response_customer_attribute_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_customer_attribute_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_customer_attribute_list_result->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(response_customer_attribute_list_resultJSON, "items");
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
        customer_attribute_t *itemsItem = customer_attribute_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // response_customer_attribute_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_customer_attribute_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_customer_attribute_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_customer_attribute_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_customer_attribute_list_result_local_var = response_customer_attribute_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        items ? itemsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_customer_attribute_list_result_local_var;
end:
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            customer_attribute_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    return NULL;

}
