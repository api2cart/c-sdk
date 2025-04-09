#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_supported_platforms_200_response_result.h"



static account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_create_internal(
    list_t *supported_platforms
    ) {
    account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_local_var = malloc(sizeof(account_supported_platforms_200_response_result_t));
    if (!account_supported_platforms_200_response_result_local_var) {
        return NULL;
    }
    account_supported_platforms_200_response_result_local_var->supported_platforms = supported_platforms;

    account_supported_platforms_200_response_result_local_var->_library_owned = 1;
    return account_supported_platforms_200_response_result_local_var;
}

__attribute__((deprecated)) account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_create(
    list_t *supported_platforms
    ) {
    return account_supported_platforms_200_response_result_create_internal (
        supported_platforms
        );
}

void account_supported_platforms_200_response_result_free(account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result) {
    if(NULL == account_supported_platforms_200_response_result){
        return ;
    }
    if(account_supported_platforms_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_supported_platforms_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_supported_platforms_200_response_result->supported_platforms) {
        list_ForEach(listEntry, account_supported_platforms_200_response_result->supported_platforms) {
            account_supported_platforms_200_response_result_supported_platforms_inner_free(listEntry->data);
        }
        list_freeList(account_supported_platforms_200_response_result->supported_platforms);
        account_supported_platforms_200_response_result->supported_platforms = NULL;
    }
    free(account_supported_platforms_200_response_result);
}

cJSON *account_supported_platforms_200_response_result_convertToJSON(account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // account_supported_platforms_200_response_result->supported_platforms
    if(account_supported_platforms_200_response_result->supported_platforms) {
    cJSON *supported_platforms = cJSON_AddArrayToObject(item, "supported_platforms");
    if(supported_platforms == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *supported_platformsListEntry;
    if (account_supported_platforms_200_response_result->supported_platforms) {
    list_ForEach(supported_platformsListEntry, account_supported_platforms_200_response_result->supported_platforms) {
    cJSON *itemLocal = account_supported_platforms_200_response_result_supported_platforms_inner_convertToJSON(supported_platformsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(supported_platforms, itemLocal);
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

account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_parseFromJSON(cJSON *account_supported_platforms_200_response_resultJSON){

    account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_local_var = NULL;

    // define the local list for account_supported_platforms_200_response_result->supported_platforms
    list_t *supported_platformsList = NULL;

    // account_supported_platforms_200_response_result->supported_platforms
    cJSON *supported_platforms = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_resultJSON, "supported_platforms");
    if (cJSON_IsNull(supported_platforms)) {
        supported_platforms = NULL;
    }
    if (supported_platforms) { 
    cJSON *supported_platforms_local_nonprimitive = NULL;
    if(!cJSON_IsArray(supported_platforms)){
        goto end; //nonprimitive container
    }

    supported_platformsList = list_createList();

    cJSON_ArrayForEach(supported_platforms_local_nonprimitive,supported_platforms )
    {
        if(!cJSON_IsObject(supported_platforms_local_nonprimitive)){
            goto end;
        }
        account_supported_platforms_200_response_result_supported_platforms_inner_t *supported_platformsItem = account_supported_platforms_200_response_result_supported_platforms_inner_parseFromJSON(supported_platforms_local_nonprimitive);

        list_addElement(supported_platformsList, supported_platformsItem);
    }
    }


    account_supported_platforms_200_response_result_local_var = account_supported_platforms_200_response_result_create_internal (
        supported_platforms ? supported_platformsList : NULL
        );

    return account_supported_platforms_200_response_result_local_var;
end:
    if (supported_platformsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, supported_platformsList) {
            account_supported_platforms_200_response_result_supported_platforms_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(supported_platformsList);
        supported_platformsList = NULL;
    }
    return NULL;

}
