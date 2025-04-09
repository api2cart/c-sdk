#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_cart_list_200_response_result_carts_inner.h"



static account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_create_internal(
    char *id,
    char *url,
    char *store_key,
    char *cart_id,
    char *total_calls
    ) {
    account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_local_var = malloc(sizeof(account_cart_list_200_response_result_carts_inner_t));
    if (!account_cart_list_200_response_result_carts_inner_local_var) {
        return NULL;
    }
    account_cart_list_200_response_result_carts_inner_local_var->id = id;
    account_cart_list_200_response_result_carts_inner_local_var->url = url;
    account_cart_list_200_response_result_carts_inner_local_var->store_key = store_key;
    account_cart_list_200_response_result_carts_inner_local_var->cart_id = cart_id;
    account_cart_list_200_response_result_carts_inner_local_var->total_calls = total_calls;

    account_cart_list_200_response_result_carts_inner_local_var->_library_owned = 1;
    return account_cart_list_200_response_result_carts_inner_local_var;
}

__attribute__((deprecated)) account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_create(
    char *id,
    char *url,
    char *store_key,
    char *cart_id,
    char *total_calls
    ) {
    return account_cart_list_200_response_result_carts_inner_create_internal (
        id,
        url,
        store_key,
        cart_id,
        total_calls
        );
}

void account_cart_list_200_response_result_carts_inner_free(account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner) {
    if(NULL == account_cart_list_200_response_result_carts_inner){
        return ;
    }
    if(account_cart_list_200_response_result_carts_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_cart_list_200_response_result_carts_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_cart_list_200_response_result_carts_inner->id) {
        free(account_cart_list_200_response_result_carts_inner->id);
        account_cart_list_200_response_result_carts_inner->id = NULL;
    }
    if (account_cart_list_200_response_result_carts_inner->url) {
        free(account_cart_list_200_response_result_carts_inner->url);
        account_cart_list_200_response_result_carts_inner->url = NULL;
    }
    if (account_cart_list_200_response_result_carts_inner->store_key) {
        free(account_cart_list_200_response_result_carts_inner->store_key);
        account_cart_list_200_response_result_carts_inner->store_key = NULL;
    }
    if (account_cart_list_200_response_result_carts_inner->cart_id) {
        free(account_cart_list_200_response_result_carts_inner->cart_id);
        account_cart_list_200_response_result_carts_inner->cart_id = NULL;
    }
    if (account_cart_list_200_response_result_carts_inner->total_calls) {
        free(account_cart_list_200_response_result_carts_inner->total_calls);
        account_cart_list_200_response_result_carts_inner->total_calls = NULL;
    }
    free(account_cart_list_200_response_result_carts_inner);
}

cJSON *account_cart_list_200_response_result_carts_inner_convertToJSON(account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_cart_list_200_response_result_carts_inner->id
    if(account_cart_list_200_response_result_carts_inner->id) {
    if(cJSON_AddStringToObject(item, "id", account_cart_list_200_response_result_carts_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_list_200_response_result_carts_inner->url
    if(account_cart_list_200_response_result_carts_inner->url) {
    if(cJSON_AddStringToObject(item, "url", account_cart_list_200_response_result_carts_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_list_200_response_result_carts_inner->store_key
    if(account_cart_list_200_response_result_carts_inner->store_key) {
    if(cJSON_AddStringToObject(item, "store_key", account_cart_list_200_response_result_carts_inner->store_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_list_200_response_result_carts_inner->cart_id
    if(account_cart_list_200_response_result_carts_inner->cart_id) {
    if(cJSON_AddStringToObject(item, "cart_id", account_cart_list_200_response_result_carts_inner->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_list_200_response_result_carts_inner->total_calls
    if(account_cart_list_200_response_result_carts_inner->total_calls) {
    if(cJSON_AddStringToObject(item, "total_calls", account_cart_list_200_response_result_carts_inner->total_calls) == NULL) {
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

account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_parseFromJSON(cJSON *account_cart_list_200_response_result_carts_innerJSON){

    account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_local_var = NULL;

    // account_cart_list_200_response_result_carts_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_result_carts_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_cart_list_200_response_result_carts_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_result_carts_innerJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // account_cart_list_200_response_result_carts_inner->store_key
    cJSON *store_key = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_result_carts_innerJSON, "store_key");
    if (cJSON_IsNull(store_key)) {
        store_key = NULL;
    }
    if (store_key) { 
    if(!cJSON_IsString(store_key) && !cJSON_IsNull(store_key))
    {
    goto end; //String
    }
    }

    // account_cart_list_200_response_result_carts_inner->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_result_carts_innerJSON, "cart_id");
    if (cJSON_IsNull(cart_id)) {
        cart_id = NULL;
    }
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // account_cart_list_200_response_result_carts_inner->total_calls
    cJSON *total_calls = cJSON_GetObjectItemCaseSensitive(account_cart_list_200_response_result_carts_innerJSON, "total_calls");
    if (cJSON_IsNull(total_calls)) {
        total_calls = NULL;
    }
    if (total_calls) { 
    if(!cJSON_IsString(total_calls) && !cJSON_IsNull(total_calls))
    {
    goto end; //String
    }
    }


    account_cart_list_200_response_result_carts_inner_local_var = account_cart_list_200_response_result_carts_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        store_key && !cJSON_IsNull(store_key) ? strdup(store_key->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        total_calls && !cJSON_IsNull(total_calls) ? strdup(total_calls->valuestring) : NULL
        );

    return account_cart_list_200_response_result_carts_inner_local_var;
end:
    return NULL;

}
