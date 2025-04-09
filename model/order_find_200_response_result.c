#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_find_200_response_result.h"



static order_find_200_response_result_t *order_find_200_response_result_create_internal(
    list_t *order
    ) {
    order_find_200_response_result_t *order_find_200_response_result_local_var = malloc(sizeof(order_find_200_response_result_t));
    if (!order_find_200_response_result_local_var) {
        return NULL;
    }
    order_find_200_response_result_local_var->order = order;

    order_find_200_response_result_local_var->_library_owned = 1;
    return order_find_200_response_result_local_var;
}

__attribute__((deprecated)) order_find_200_response_result_t *order_find_200_response_result_create(
    list_t *order
    ) {
    return order_find_200_response_result_create_internal (
        order
        );
}

void order_find_200_response_result_free(order_find_200_response_result_t *order_find_200_response_result) {
    if(NULL == order_find_200_response_result){
        return ;
    }
    if(order_find_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_find_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_find_200_response_result->order) {
        list_ForEach(listEntry, order_find_200_response_result->order) {
            order_free(listEntry->data);
        }
        list_freeList(order_find_200_response_result->order);
        order_find_200_response_result->order = NULL;
    }
    free(order_find_200_response_result);
}

cJSON *order_find_200_response_result_convertToJSON(order_find_200_response_result_t *order_find_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_find_200_response_result->order
    if(order_find_200_response_result->order) {
    cJSON *order = cJSON_AddArrayToObject(item, "order");
    if(order == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *orderListEntry;
    if (order_find_200_response_result->order) {
    list_ForEach(orderListEntry, order_find_200_response_result->order) {
    cJSON *itemLocal = order_convertToJSON(orderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_find_200_response_result_t *order_find_200_response_result_parseFromJSON(cJSON *order_find_200_response_resultJSON){

    order_find_200_response_result_t *order_find_200_response_result_local_var = NULL;

    // define the local list for order_find_200_response_result->order
    list_t *orderList = NULL;

    // order_find_200_response_result->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(order_find_200_response_resultJSON, "order");
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
        order_t *orderItem = order_parseFromJSON(order_local_nonprimitive);

        list_addElement(orderList, orderItem);
    }
    }


    order_find_200_response_result_local_var = order_find_200_response_result_create_internal (
        order ? orderList : NULL
        );

    return order_find_200_response_result_local_var;
end:
    if (orderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, orderList) {
            order_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(orderList);
        orderList = NULL;
    }
    return NULL;

}
