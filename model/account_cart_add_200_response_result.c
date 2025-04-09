#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_cart_add_200_response_result.h"



static account_cart_add_200_response_result_t *account_cart_add_200_response_result_create_internal(
    char *store_key
    ) {
    account_cart_add_200_response_result_t *account_cart_add_200_response_result_local_var = malloc(sizeof(account_cart_add_200_response_result_t));
    if (!account_cart_add_200_response_result_local_var) {
        return NULL;
    }
    account_cart_add_200_response_result_local_var->store_key = store_key;

    account_cart_add_200_response_result_local_var->_library_owned = 1;
    return account_cart_add_200_response_result_local_var;
}

__attribute__((deprecated)) account_cart_add_200_response_result_t *account_cart_add_200_response_result_create(
    char *store_key
    ) {
    return account_cart_add_200_response_result_create_internal (
        store_key
        );
}

void account_cart_add_200_response_result_free(account_cart_add_200_response_result_t *account_cart_add_200_response_result) {
    if(NULL == account_cart_add_200_response_result){
        return ;
    }
    if(account_cart_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_cart_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_cart_add_200_response_result->store_key) {
        free(account_cart_add_200_response_result->store_key);
        account_cart_add_200_response_result->store_key = NULL;
    }
    free(account_cart_add_200_response_result);
}

cJSON *account_cart_add_200_response_result_convertToJSON(account_cart_add_200_response_result_t *account_cart_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // account_cart_add_200_response_result->store_key
    if(account_cart_add_200_response_result->store_key) {
    if(cJSON_AddStringToObject(item, "store_key", account_cart_add_200_response_result->store_key) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_cart_add_200_response_result_t *account_cart_add_200_response_result_parseFromJSON(cJSON *account_cart_add_200_response_resultJSON){

    account_cart_add_200_response_result_t *account_cart_add_200_response_result_local_var = NULL;

    // account_cart_add_200_response_result->store_key
    cJSON *store_key = cJSON_GetObjectItemCaseSensitive(account_cart_add_200_response_resultJSON, "store_key");
    if (cJSON_IsNull(store_key)) {
        store_key = NULL;
    }
    if (store_key) { 
    if(!cJSON_IsString(store_key) && !cJSON_IsNull(store_key))
    {
    goto end; //String
    }
    }


    account_cart_add_200_response_result_local_var = account_cart_add_200_response_result_create_internal (
        store_key && !cJSON_IsNull(store_key) ? strdup(store_key->valuestring) : NULL
        );

    return account_cart_add_200_response_result_local_var;
end:
    return NULL;

}
