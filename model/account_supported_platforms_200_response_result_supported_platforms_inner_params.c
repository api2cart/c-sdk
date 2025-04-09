#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_supported_platforms_200_response_result_supported_platforms_inner_params.h"



static account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_create_internal(
    list_t *required,
    list_t *additional
    ) {
    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var = malloc(sizeof(account_supported_platforms_200_response_result_supported_platforms_inner_params_t));
    if (!account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var) {
        return NULL;
    }
    account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var->required = required;
    account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var->additional = additional;

    account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var->_library_owned = 1;
    return account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var;
}

__attribute__((deprecated)) account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_create(
    list_t *required,
    list_t *additional
    ) {
    return account_supported_platforms_200_response_result_supported_platforms_inner_params_create_internal (
        required,
        additional
        );
}

void account_supported_platforms_200_response_result_supported_platforms_inner_params_free(account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params) {
    if(NULL == account_supported_platforms_200_response_result_supported_platforms_inner_params){
        return ;
    }
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_supported_platforms_200_response_result_supported_platforms_inner_params_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_supported_platforms_200_response_result_supported_platforms_inner_params->required) {
        list_ForEach(listEntry, account_supported_platforms_200_response_result_supported_platforms_inner_params->required) {
            free(listEntry->data);
        }
        list_freeList(account_supported_platforms_200_response_result_supported_platforms_inner_params->required);
        account_supported_platforms_200_response_result_supported_platforms_inner_params->required = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner_params->additional) {
        list_ForEach(listEntry, account_supported_platforms_200_response_result_supported_platforms_inner_params->additional) {
            account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_free(listEntry->data);
        }
        list_freeList(account_supported_platforms_200_response_result_supported_platforms_inner_params->additional);
        account_supported_platforms_200_response_result_supported_platforms_inner_params->additional = NULL;
    }
    free(account_supported_platforms_200_response_result_supported_platforms_inner_params);
}

cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_params_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params) {
    cJSON *item = cJSON_CreateObject();

    // account_supported_platforms_200_response_result_supported_platforms_inner_params->required
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params->required) {
    cJSON *required = cJSON_AddArrayToObject(item, "required");
    if(required == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *requiredListEntry;
    list_ForEach(requiredListEntry, account_supported_platforms_200_response_result_supported_platforms_inner_params->required) {
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner_params->additional
    if(account_supported_platforms_200_response_result_supported_platforms_inner_params->additional) {
    cJSON *additional = cJSON_AddArrayToObject(item, "additional");
    if(additional == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *additionalListEntry;
    if (account_supported_platforms_200_response_result_supported_platforms_inner_params->additional) {
    list_ForEach(additionalListEntry, account_supported_platforms_200_response_result_supported_platforms_inner_params->additional) {
    cJSON *itemLocal = account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_convertToJSON(additionalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(additional, itemLocal);
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

account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_parseFromJSON(cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_paramsJSON){

    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var = NULL;

    // define the local list for account_supported_platforms_200_response_result_supported_platforms_inner_params->required
    list_t *requiredList = NULL;

    // define the local list for account_supported_platforms_200_response_result_supported_platforms_inner_params->additional
    list_t *additionalList = NULL;

    // account_supported_platforms_200_response_result_supported_platforms_inner_params->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_inner_paramsJSON, "required");
    if (cJSON_IsNull(required)) {
        required = NULL;
    }
    if (required) { 
    cJSON *required_local = NULL;
    if(!cJSON_IsArray(required)) {
        goto end;//primitive container
    }
    requiredList = list_createList();

    cJSON_ArrayForEach(required_local, required)
    {
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner_params->additional
    cJSON *additional = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_inner_paramsJSON, "additional");
    if (cJSON_IsNull(additional)) {
        additional = NULL;
    }
    if (additional) { 
    cJSON *additional_local_nonprimitive = NULL;
    if(!cJSON_IsArray(additional)){
        goto end; //nonprimitive container
    }

    additionalList = list_createList();

    cJSON_ArrayForEach(additional_local_nonprimitive,additional )
    {
        if(!cJSON_IsObject(additional_local_nonprimitive)){
            goto end;
        }
        account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_t *additionalItem = account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_parseFromJSON(additional_local_nonprimitive);

        list_addElement(additionalList, additionalItem);
    }
    }


    account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var = account_supported_platforms_200_response_result_supported_platforms_inner_params_create_internal (
        required ? requiredList : NULL,
        additional ? additionalList : NULL
        );

    return account_supported_platforms_200_response_result_supported_platforms_inner_params_local_var;
end:
    if (requiredList) {
        list_freeList(requiredList);
        requiredList = NULL;
    }
    if (additionalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, additionalList) {
            account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(additionalList);
        additionalList = NULL;
    }
    return NULL;

}
