#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_customer_wishlist_list_result.h"



static response_customer_wishlist_list_result_t *response_customer_wishlist_list_result_create_internal(
    int total_count,
    list_t *wish_lists,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_customer_wishlist_list_result_t *response_customer_wishlist_list_result_local_var = malloc(sizeof(response_customer_wishlist_list_result_t));
    if (!response_customer_wishlist_list_result_local_var) {
        return NULL;
    }
    response_customer_wishlist_list_result_local_var->total_count = total_count;
    response_customer_wishlist_list_result_local_var->wish_lists = wish_lists;
    response_customer_wishlist_list_result_local_var->additional_fields = additional_fields;
    response_customer_wishlist_list_result_local_var->custom_fields = custom_fields;

    response_customer_wishlist_list_result_local_var->_library_owned = 1;
    return response_customer_wishlist_list_result_local_var;
}

__attribute__((deprecated)) response_customer_wishlist_list_result_t *response_customer_wishlist_list_result_create(
    int total_count,
    list_t *wish_lists,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_customer_wishlist_list_result_create_internal (
        total_count,
        wish_lists,
        additional_fields,
        custom_fields
        );
}

void response_customer_wishlist_list_result_free(response_customer_wishlist_list_result_t *response_customer_wishlist_list_result) {
    if(NULL == response_customer_wishlist_list_result){
        return ;
    }
    if(response_customer_wishlist_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_customer_wishlist_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_customer_wishlist_list_result->wish_lists) {
        list_ForEach(listEntry, response_customer_wishlist_list_result->wish_lists) {
            customer_wish_list_free(listEntry->data);
        }
        list_freeList(response_customer_wishlist_list_result->wish_lists);
        response_customer_wishlist_list_result->wish_lists = NULL;
    }
    if (response_customer_wishlist_list_result->additional_fields) {
        object_free(response_customer_wishlist_list_result->additional_fields);
        response_customer_wishlist_list_result->additional_fields = NULL;
    }
    if (response_customer_wishlist_list_result->custom_fields) {
        object_free(response_customer_wishlist_list_result->custom_fields);
        response_customer_wishlist_list_result->custom_fields = NULL;
    }
    free(response_customer_wishlist_list_result);
}

cJSON *response_customer_wishlist_list_result_convertToJSON(response_customer_wishlist_list_result_t *response_customer_wishlist_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_customer_wishlist_list_result->total_count
    if(response_customer_wishlist_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_customer_wishlist_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_customer_wishlist_list_result->wish_lists
    if(response_customer_wishlist_list_result->wish_lists) {
    cJSON *wish_lists = cJSON_AddArrayToObject(item, "wish_lists");
    if(wish_lists == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *wish_listsListEntry;
    if (response_customer_wishlist_list_result->wish_lists) {
    list_ForEach(wish_listsListEntry, response_customer_wishlist_list_result->wish_lists) {
    cJSON *itemLocal = customer_wish_list_convertToJSON(wish_listsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(wish_lists, itemLocal);
    }
    }
    }


    // response_customer_wishlist_list_result->additional_fields
    if(response_customer_wishlist_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_customer_wishlist_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_customer_wishlist_list_result->custom_fields
    if(response_customer_wishlist_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_customer_wishlist_list_result->custom_fields);
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

response_customer_wishlist_list_result_t *response_customer_wishlist_list_result_parseFromJSON(cJSON *response_customer_wishlist_list_resultJSON){

    response_customer_wishlist_list_result_t *response_customer_wishlist_list_result_local_var = NULL;

    // define the local list for response_customer_wishlist_list_result->wish_lists
    list_t *wish_listsList = NULL;

    // response_customer_wishlist_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_customer_wishlist_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_customer_wishlist_list_result->wish_lists
    cJSON *wish_lists = cJSON_GetObjectItemCaseSensitive(response_customer_wishlist_list_resultJSON, "wish_lists");
    if (cJSON_IsNull(wish_lists)) {
        wish_lists = NULL;
    }
    if (wish_lists) { 
    cJSON *wish_lists_local_nonprimitive = NULL;
    if(!cJSON_IsArray(wish_lists)){
        goto end; //nonprimitive container
    }

    wish_listsList = list_createList();

    cJSON_ArrayForEach(wish_lists_local_nonprimitive,wish_lists )
    {
        if(!cJSON_IsObject(wish_lists_local_nonprimitive)){
            goto end;
        }
        customer_wish_list_t *wish_listsItem = customer_wish_list_parseFromJSON(wish_lists_local_nonprimitive);

        list_addElement(wish_listsList, wish_listsItem);
    }
    }

    // response_customer_wishlist_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_customer_wishlist_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_customer_wishlist_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_customer_wishlist_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_customer_wishlist_list_result_local_var = response_customer_wishlist_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        wish_lists ? wish_listsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_customer_wishlist_list_result_local_var;
end:
    if (wish_listsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, wish_listsList) {
            customer_wish_list_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(wish_listsList);
        wish_listsList = NULL;
    }
    return NULL;

}
