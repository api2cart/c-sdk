#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_fulfillment_status_list_200_response_result.h"



static order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_create_internal(
    list_t *order_fulfillment_statuses
    ) {
    order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_local_var = malloc(sizeof(order_fulfillment_status_list_200_response_result_t));
    if (!order_fulfillment_status_list_200_response_result_local_var) {
        return NULL;
    }
    order_fulfillment_status_list_200_response_result_local_var->order_fulfillment_statuses = order_fulfillment_statuses;

    order_fulfillment_status_list_200_response_result_local_var->_library_owned = 1;
    return order_fulfillment_status_list_200_response_result_local_var;
}

__attribute__((deprecated)) order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_create(
    list_t *order_fulfillment_statuses
    ) {
    return order_fulfillment_status_list_200_response_result_create_internal (
        order_fulfillment_statuses
        );
}

void order_fulfillment_status_list_200_response_result_free(order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result) {
    if(NULL == order_fulfillment_status_list_200_response_result){
        return ;
    }
    if(order_fulfillment_status_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_fulfillment_status_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_fulfillment_status_list_200_response_result->order_fulfillment_statuses) {
        list_ForEach(listEntry, order_fulfillment_status_list_200_response_result->order_fulfillment_statuses) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
        }
        list_freeList(order_fulfillment_status_list_200_response_result->order_fulfillment_statuses);
        order_fulfillment_status_list_200_response_result->order_fulfillment_statuses = NULL;
    }
    free(order_fulfillment_status_list_200_response_result);
}

cJSON *order_fulfillment_status_list_200_response_result_convertToJSON(order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_fulfillment_status_list_200_response_result->order_fulfillment_statuses
    if(order_fulfillment_status_list_200_response_result->order_fulfillment_statuses) {
    cJSON *order_fulfillment_statuses = cJSON_AddArrayToObject(item, "order_fulfillment_statuses");
    if(order_fulfillment_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_fulfillment_statusesListEntry;
    if (order_fulfillment_status_list_200_response_result->order_fulfillment_statuses) {
    list_ForEach(order_fulfillment_statusesListEntry, order_fulfillment_status_list_200_response_result->order_fulfillment_statuses) {
    cJSON *itemLocal = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(order_fulfillment_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_fulfillment_statuses, itemLocal);
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

order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_parseFromJSON(cJSON *order_fulfillment_status_list_200_response_resultJSON){

    order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_local_var = NULL;

    // define the local list for order_fulfillment_status_list_200_response_result->order_fulfillment_statuses
    list_t *order_fulfillment_statusesList = NULL;

    // order_fulfillment_status_list_200_response_result->order_fulfillment_statuses
    cJSON *order_fulfillment_statuses = cJSON_GetObjectItemCaseSensitive(order_fulfillment_status_list_200_response_resultJSON, "order_fulfillment_statuses");
    if (cJSON_IsNull(order_fulfillment_statuses)) {
        order_fulfillment_statuses = NULL;
    }
    if (order_fulfillment_statuses) { 
    cJSON *order_fulfillment_statuses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_fulfillment_statuses)){
        goto end; //nonprimitive container
    }

    order_fulfillment_statusesList = list_createList();

    cJSON_ArrayForEach(order_fulfillment_statuses_local_nonprimitive,order_fulfillment_statuses )
    {
        if(!cJSON_IsObject(order_fulfillment_statuses_local_nonprimitive)){
            goto end;
        }
        order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_fulfillment_statusesItem = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(order_fulfillment_statuses_local_nonprimitive);

        list_addElement(order_fulfillment_statusesList, order_fulfillment_statusesItem);
    }
    }


    order_fulfillment_status_list_200_response_result_local_var = order_fulfillment_status_list_200_response_result_create_internal (
        order_fulfillment_statuses ? order_fulfillment_statusesList : NULL
        );

    return order_fulfillment_status_list_200_response_result_local_var;
end:
    if (order_fulfillment_statusesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_fulfillment_statusesList) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_fulfillment_statusesList);
        order_fulfillment_statusesList = NULL;
    }
    return NULL;

}
