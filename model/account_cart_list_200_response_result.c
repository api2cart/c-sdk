#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_cart_list_200_response_result.h"



static account_cart_list_200_response_result_t *account_cart_list_200_response_result_create_internal(
    int carts_count,
    list_t *carts
    ) {
    account_cart_list_200_response_result_t *account_cart_list_200_response_result_local_var = malloc(sizeof(account_cart_list_200_response_result_t));
    if (!account_cart_list_200_response_result_local_var) {
        return NULL;
    }
    account_cart_list_200_response_result_local_var->carts_count = carts_count;
    account_cart_list_200_response_result_local_var->carts = carts;

    account_cart_list_200_response_result_local_var->_library_owned = 1;
    return account_cart_list_200_response_result_local_var;
}

__attribute__((deprecated)) account_cart_list_200_response_result_t *account_cart_list_200_response_result_create(
    int carts_count,
    list_t *carts
    ) {
    return account_cart_list_200_response_result_create_internal (
        carts_count,
        carts
        );
}

void account_cart_list_200_response_result_free(account_cart_list_200_response_result_t *account_cart_list_200_response_result) {
    if(NULL == account_cart_list_200_response_result){
        return ;
    }
    if(account_cart_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_cart_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_cart_list_200_response_result->carts) {
        list_ForEach(listEntry, account_cart_list_200_response_result->carts) {
            account_cart_list_200_response_result_carts_inner_free(listEntry->data);
        }
        list_freeList(account_cart_list_200_response_result->carts);
        account_cart_list_200_response_result->carts = NULL;
    }
    free(account_cart_list_200_response_result);
}

cJSON *account_cart_list_200_response_result_convertToJSON(account_cart_list_200_response_result_t *account_cart_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // account_cart_list_200_response_result->carts_count
    if(account_cart_list_200_response_result->carts_count) {
    if(cJSON_AddNumberToObject(item, "carts_count", account_cart_list_200_response_result->carts_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_list_200_response_result->carts
    if(account_cart_list_200_response_result->carts) {
    cJSON *carts = cJSON_AddArrayToObject(item, "carts");
    if(carts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cartsListEntry;
    if (account_cart_list_200_response_result->carts) {
    list_ForEach(cartsListEntry, account_cart_list_200_response_result->carts) {
    cJSON *itemLocal = account_cart_list_200_response_result_carts_inner_convertToJSON(cartsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(carts, itemLocal);
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

account_cart_list_200_response_result_t *account_cart_list_200_response_result_parseFromJSON(cJSON *account_cart_list_200_response_resultJSON){

    account_cart_list_200_response_result_t *account_cart_list_200_response_result_local_var = NULL;

    // define the local list for account_cart_list_200_response_result->carts
    list_t *cartsList = NULL;

    // account_cart_list_200_response_result->carts_count
    cJSON *carts_count = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_resultJSON, "carts_count");
    if (cJSON_IsNull(carts_count)) {
        carts_count = NULL;
    }
    if (carts_count) { 
    if(!cJSON_IsNumber(carts_count))
    {
    goto end; //Numeric
    }
    }

    // account_cart_list_200_response_result->carts
    cJSON *carts = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_resultJSON, "carts");
    if (cJSON_IsNull(carts)) {
        carts = NULL;
    }
    if (carts) { 
    cJSON *carts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(carts)){
        goto end; //nonprimitive container
    }

    cartsList = list_createList();

    cJSON_ArrayForEach(carts_local_nonprimitive,carts )
    {
        if(!cJSON_IsObject(carts_local_nonprimitive)){
            goto end;
        }
        account_cart_list_200_response_result_carts_inner_t *cartsItem = account_cart_list_200_response_result_carts_inner_parseFromJSON(carts_local_nonprimitive);

        list_addElement(cartsList, cartsItem);
    }
    }


    account_cart_list_200_response_result_local_var = account_cart_list_200_response_result_create_internal (
        carts_count ? carts_count->valuedouble : 0,
        carts ? cartsList : NULL
        );

    return account_cart_list_200_response_result_local_var;
end:
    if (cartsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cartsList) {
            account_cart_list_200_response_result_carts_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cartsList);
        cartsList = NULL;
    }
    return NULL;

}
