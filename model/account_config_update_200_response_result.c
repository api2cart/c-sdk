#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_config_update_200_response_result.h"



static account_config_update_200_response_result_t *account_config_update_200_response_result_create_internal(
    int updated_items
    ) {
    account_config_update_200_response_result_t *account_config_update_200_response_result_local_var = malloc(sizeof(account_config_update_200_response_result_t));
    if (!account_config_update_200_response_result_local_var) {
        return NULL;
    }
    account_config_update_200_response_result_local_var->updated_items = updated_items;

    account_config_update_200_response_result_local_var->_library_owned = 1;
    return account_config_update_200_response_result_local_var;
}

__attribute__((deprecated)) account_config_update_200_response_result_t *account_config_update_200_response_result_create(
    int updated_items
    ) {
    return account_config_update_200_response_result_create_internal (
        updated_items
        );
}

void account_config_update_200_response_result_free(account_config_update_200_response_result_t *account_config_update_200_response_result) {
    if(NULL == account_config_update_200_response_result){
        return ;
    }
    if(account_config_update_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_config_update_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(account_config_update_200_response_result);
}

cJSON *account_config_update_200_response_result_convertToJSON(account_config_update_200_response_result_t *account_config_update_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // account_config_update_200_response_result->updated_items
    if(account_config_update_200_response_result->updated_items) {
    if(cJSON_AddNumberToObject(item, "updated_items", account_config_update_200_response_result->updated_items) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_config_update_200_response_result_t *account_config_update_200_response_result_parseFromJSON(cJSON *account_config_update_200_response_resultJSON){

    account_config_update_200_response_result_t *account_config_update_200_response_result_local_var = NULL;

    // account_config_update_200_response_result->updated_items
    cJSON *updated_items = cJSON_GetObjectItemCaseSensitive(account_config_update_200_response_resultJSON, "updated_items");
    if (cJSON_IsNull(updated_items)) {
        updated_items = NULL;
    }
    if (updated_items) { 
    if(!cJSON_IsNumber(updated_items))
    {
    goto end; //Numeric
    }
    }


    account_config_update_200_response_result_local_var = account_config_update_200_response_result_create_internal (
        updated_items ? updated_items->valuedouble : 0
        );

    return account_config_update_200_response_result_local_var;
end:
    return NULL;

}
