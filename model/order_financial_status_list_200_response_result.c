#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_financial_status_list_200_response_result.h"



static order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result_create_internal(
    list_t *order_financial_statuses
    ) {
    order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result_local_var = malloc(sizeof(order_financial_status_list_200_response_result_t));
    if (!order_financial_status_list_200_response_result_local_var) {
        return NULL;
    }
    order_financial_status_list_200_response_result_local_var->order_financial_statuses = order_financial_statuses;

    order_financial_status_list_200_response_result_local_var->_library_owned = 1;
    return order_financial_status_list_200_response_result_local_var;
}

__attribute__((deprecated)) order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result_create(
    list_t *order_financial_statuses
    ) {
    return order_financial_status_list_200_response_result_create_internal (
        order_financial_statuses
        );
}

void order_financial_status_list_200_response_result_free(order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result) {
    if(NULL == order_financial_status_list_200_response_result){
        return ;
    }
    if(order_financial_status_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_financial_status_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_financial_status_list_200_response_result->order_financial_statuses) {
        list_ForEach(listEntry, order_financial_status_list_200_response_result->order_financial_statuses) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
        }
        list_freeList(order_financial_status_list_200_response_result->order_financial_statuses);
        order_financial_status_list_200_response_result->order_financial_statuses = NULL;
    }
    free(order_financial_status_list_200_response_result);
}

cJSON *order_financial_status_list_200_response_result_convertToJSON(order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_financial_status_list_200_response_result->order_financial_statuses
    if(order_financial_status_list_200_response_result->order_financial_statuses) {
    cJSON *order_financial_statuses = cJSON_AddArrayToObject(item, "order_financial_statuses");
    if(order_financial_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_financial_statusesListEntry;
    if (order_financial_status_list_200_response_result->order_financial_statuses) {
    list_ForEach(order_financial_statusesListEntry, order_financial_status_list_200_response_result->order_financial_statuses) {
    cJSON *itemLocal = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(order_financial_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_financial_statuses, itemLocal);
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

order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result_parseFromJSON(cJSON *order_financial_status_list_200_response_resultJSON){

    order_financial_status_list_200_response_result_t *order_financial_status_list_200_response_result_local_var = NULL;

    // define the local list for order_financial_status_list_200_response_result->order_financial_statuses
    list_t *order_financial_statusesList = NULL;

    // order_financial_status_list_200_response_result->order_financial_statuses
    cJSON *order_financial_statuses = cJSON_GetObjectItemCaseSensitive(order_financial_status_list_200_response_resultJSON, "order_financial_statuses");
    if (cJSON_IsNull(order_financial_statuses)) {
        order_financial_statuses = NULL;
    }
    if (order_financial_statuses) { 
    cJSON *order_financial_statuses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_financial_statuses)){
        goto end; //nonprimitive container
    }

    order_financial_statusesList = list_createList();

    cJSON_ArrayForEach(order_financial_statuses_local_nonprimitive,order_financial_statuses )
    {
        if(!cJSON_IsObject(order_financial_statuses_local_nonprimitive)){
            goto end;
        }
        order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_statusesItem = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(order_financial_statuses_local_nonprimitive);

        list_addElement(order_financial_statusesList, order_financial_statusesItem);
    }
    }


    order_financial_status_list_200_response_result_local_var = order_financial_status_list_200_response_result_create_internal (
        order_financial_statuses ? order_financial_statusesList : NULL
        );

    return order_financial_status_list_200_response_result_local_var;
end:
    if (order_financial_statusesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_financial_statusesList) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_financial_statusesList);
        order_financial_statusesList = NULL;
    }
    return NULL;

}
