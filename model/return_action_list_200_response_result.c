#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_action_list_200_response_result.h"



static return_action_list_200_response_result_t *return_action_list_200_response_result_create_internal(
    list_t *return_actions
    ) {
    return_action_list_200_response_result_t *return_action_list_200_response_result_local_var = malloc(sizeof(return_action_list_200_response_result_t));
    if (!return_action_list_200_response_result_local_var) {
        return NULL;
    }
    return_action_list_200_response_result_local_var->return_actions = return_actions;

    return_action_list_200_response_result_local_var->_library_owned = 1;
    return return_action_list_200_response_result_local_var;
}

__attribute__((deprecated)) return_action_list_200_response_result_t *return_action_list_200_response_result_create(
    list_t *return_actions
    ) {
    return return_action_list_200_response_result_create_internal (
        return_actions
        );
}

void return_action_list_200_response_result_free(return_action_list_200_response_result_t *return_action_list_200_response_result) {
    if(NULL == return_action_list_200_response_result){
        return ;
    }
    if(return_action_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_action_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_action_list_200_response_result->return_actions) {
        list_ForEach(listEntry, return_action_list_200_response_result->return_actions) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
        }
        list_freeList(return_action_list_200_response_result->return_actions);
        return_action_list_200_response_result->return_actions = NULL;
    }
    free(return_action_list_200_response_result);
}

cJSON *return_action_list_200_response_result_convertToJSON(return_action_list_200_response_result_t *return_action_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // return_action_list_200_response_result->return_actions
    if(return_action_list_200_response_result->return_actions) {
    cJSON *return_actions = cJSON_AddArrayToObject(item, "return_actions");
    if(return_actions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *return_actionsListEntry;
    if (return_action_list_200_response_result->return_actions) {
    list_ForEach(return_actionsListEntry, return_action_list_200_response_result->return_actions) {
    cJSON *itemLocal = order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(return_actionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(return_actions, itemLocal);
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

return_action_list_200_response_result_t *return_action_list_200_response_result_parseFromJSON(cJSON *return_action_list_200_response_resultJSON){

    return_action_list_200_response_result_t *return_action_list_200_response_result_local_var = NULL;

    // define the local list for return_action_list_200_response_result->return_actions
    list_t *return_actionsList = NULL;

    // return_action_list_200_response_result->return_actions
    cJSON *return_actions = cJSON_GetObjectItemCaseSensitive(return_action_list_200_response_resultJSON, "return_actions");
    if (cJSON_IsNull(return_actions)) {
        return_actions = NULL;
    }
    if (return_actions) { 
    cJSON *return_actions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(return_actions)){
        goto end; //nonprimitive container
    }

    return_actionsList = list_createList();

    cJSON_ArrayForEach(return_actions_local_nonprimitive,return_actions )
    {
        if(!cJSON_IsObject(return_actions_local_nonprimitive)){
            goto end;
        }
        order_financial_status_list_200_response_result_order_financial_statuses_inner_t *return_actionsItem = order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(return_actions_local_nonprimitive);

        list_addElement(return_actionsList, return_actionsItem);
    }
    }


    return_action_list_200_response_result_local_var = return_action_list_200_response_result_create_internal (
        return_actions ? return_actionsList : NULL
        );

    return return_action_list_200_response_result_local_var;
end:
    if (return_actionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, return_actionsList) {
            order_financial_status_list_200_response_result_order_financial_statuses_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(return_actionsList);
        return_actionsList = NULL;
    }
    return NULL;

}
