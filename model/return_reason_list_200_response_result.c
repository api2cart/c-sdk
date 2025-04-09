#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_reason_list_200_response_result.h"



static return_reason_list_200_response_result_t *return_reason_list_200_response_result_create_internal(
    list_t *return_reasons
    ) {
    return_reason_list_200_response_result_t *return_reason_list_200_response_result_local_var = malloc(sizeof(return_reason_list_200_response_result_t));
    if (!return_reason_list_200_response_result_local_var) {
        return NULL;
    }
    return_reason_list_200_response_result_local_var->return_reasons = return_reasons;

    return_reason_list_200_response_result_local_var->_library_owned = 1;
    return return_reason_list_200_response_result_local_var;
}

__attribute__((deprecated)) return_reason_list_200_response_result_t *return_reason_list_200_response_result_create(
    list_t *return_reasons
    ) {
    return return_reason_list_200_response_result_create_internal (
        return_reasons
        );
}

void return_reason_list_200_response_result_free(return_reason_list_200_response_result_t *return_reason_list_200_response_result) {
    if(NULL == return_reason_list_200_response_result){
        return ;
    }
    if(return_reason_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_reason_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_reason_list_200_response_result->return_reasons) {
        list_ForEach(listEntry, return_reason_list_200_response_result->return_reasons) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
        }
        list_freeList(return_reason_list_200_response_result->return_reasons);
        return_reason_list_200_response_result->return_reasons = NULL;
    }
    free(return_reason_list_200_response_result);
}

cJSON *return_reason_list_200_response_result_convertToJSON(return_reason_list_200_response_result_t *return_reason_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // return_reason_list_200_response_result->return_reasons
    if(return_reason_list_200_response_result->return_reasons) {
    cJSON *return_reasons = cJSON_AddArrayToObject(item, "return_reasons");
    if(return_reasons == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *return_reasonsListEntry;
    if (return_reason_list_200_response_result->return_reasons) {
    list_ForEach(return_reasonsListEntry, return_reason_list_200_response_result->return_reasons) {
    cJSON *itemLocal = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(return_reasonsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(return_reasons, itemLocal);
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

return_reason_list_200_response_result_t *return_reason_list_200_response_result_parseFromJSON(cJSON *return_reason_list_200_response_resultJSON){

    return_reason_list_200_response_result_t *return_reason_list_200_response_result_local_var = NULL;

    // define the local list for return_reason_list_200_response_result->return_reasons
    list_t *return_reasonsList = NULL;

    // return_reason_list_200_response_result->return_reasons
    cJSON *return_reasons = cJSON_GetObjectItemCaseSensitive(return_reason_list_200_response_resultJSON, "return_reasons");
    if (cJSON_IsNull(return_reasons)) {
        return_reasons = NULL;
    }
    if (return_reasons) { 
    cJSON *return_reasons_local_nonprimitive = NULL;
    if(!cJSON_IsArray(return_reasons)){
        goto end; //nonprimitive container
    }

    return_reasonsList = list_createList();

    cJSON_ArrayForEach(return_reasons_local_nonprimitive,return_reasons )
    {
        if(!cJSON_IsObject(return_reasons_local_nonprimitive)){
            goto end;
        }
        order_financial_status_list_200_response_result_order_financial_statuses_inner_t *return_reasonsItem = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(return_reasons_local_nonprimitive);

        list_addElement(return_reasonsList, return_reasonsItem);
    }
    }


    return_reason_list_200_response_result_local_var = return_reason_list_200_response_result_create_internal (
        return_reasons ? return_reasonsList : NULL
        );

    return return_reason_list_200_response_result_local_var;
end:
    if (return_reasonsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, return_reasonsList) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(return_reasonsList);
        return_reasonsList = NULL;
    }
    return NULL;

}
