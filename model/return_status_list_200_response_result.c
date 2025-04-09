#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_status_list_200_response_result.h"



static return_status_list_200_response_result_t *return_status_list_200_response_result_create_internal(
    list_t *return_statuses
    ) {
    return_status_list_200_response_result_t *return_status_list_200_response_result_local_var = malloc(sizeof(return_status_list_200_response_result_t));
    if (!return_status_list_200_response_result_local_var) {
        return NULL;
    }
    return_status_list_200_response_result_local_var->return_statuses = return_statuses;

    return_status_list_200_response_result_local_var->_library_owned = 1;
    return return_status_list_200_response_result_local_var;
}

__attribute__((deprecated)) return_status_list_200_response_result_t *return_status_list_200_response_result_create(
    list_t *return_statuses
    ) {
    return return_status_list_200_response_result_create_internal (
        return_statuses
        );
}

void return_status_list_200_response_result_free(return_status_list_200_response_result_t *return_status_list_200_response_result) {
    if(NULL == return_status_list_200_response_result){
        return ;
    }
    if(return_status_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_status_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_status_list_200_response_result->return_statuses) {
        list_ForEach(listEntry, return_status_list_200_response_result->return_statuses) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
        }
        list_freeList(return_status_list_200_response_result->return_statuses);
        return_status_list_200_response_result->return_statuses = NULL;
    }
    free(return_status_list_200_response_result);
}

cJSON *return_status_list_200_response_result_convertToJSON(return_status_list_200_response_result_t *return_status_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // return_status_list_200_response_result->return_statuses
    if(return_status_list_200_response_result->return_statuses) {
    cJSON *return_statuses = cJSON_AddArrayToObject(item, "return_statuses");
    if(return_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *return_statusesListEntry;
    if (return_status_list_200_response_result->return_statuses) {
    list_ForEach(return_statusesListEntry, return_status_list_200_response_result->return_statuses) {
    cJSON *itemLocal = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(return_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(return_statuses, itemLocal);
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

return_status_list_200_response_result_t *return_status_list_200_response_result_parseFromJSON(cJSON *return_status_list_200_response_resultJSON){

    return_status_list_200_response_result_t *return_status_list_200_response_result_local_var = NULL;

    // define the local list for return_status_list_200_response_result->return_statuses
    list_t *return_statusesList = NULL;

    // return_status_list_200_response_result->return_statuses
    cJSON *return_statuses = cJSON_GetObjectItemCaseSensitive(return_status_list_200_response_resultJSON, "return_statuses");
    if (cJSON_IsNull(return_statuses)) {
        return_statuses = NULL;
    }
    if (return_statuses) { 
    cJSON *return_statuses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(return_statuses)){
        goto end; //nonprimitive container
    }

    return_statusesList = list_createList();

    cJSON_ArrayForEach(return_statuses_local_nonprimitive,return_statuses )
    {
        if(!cJSON_IsObject(return_statuses_local_nonprimitive)){
            goto end;
        }
        order_financial_status_list_200_response_result_order_financial_statuses_inner_t *return_statusesItem = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(return_statuses_local_nonprimitive);

        list_addElement(return_statusesList, return_statusesItem);
    }
    }


    return_status_list_200_response_result_local_var = return_status_list_200_response_result_create_internal (
        return_statuses ? return_statusesList : NULL
        );

    return return_status_list_200_response_result_local_var;
end:
    if (return_statusesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, return_statusesList) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(return_statusesList);
        return_statusesList = NULL;
    }
    return NULL;

}
