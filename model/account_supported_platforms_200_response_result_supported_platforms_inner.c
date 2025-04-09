#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_supported_platforms_200_response_result_supported_platforms_inner.h"



static account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_create_internal(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    char *cart_method,
    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *params
    ) {
    account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_local_var = malloc(sizeof(account_supported_platforms_200_response_result_supported_platforms_inner_t));
    if (!account_supported_platforms_200_response_result_supported_platforms_inner_local_var) {
        return NULL;
    }
    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->cart_id = cart_id;
    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->cart_name = cart_name;
    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->cart_versions = cart_versions;
    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->cart_method = cart_method;
    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->params = params;

    account_supported_platforms_200_response_result_supported_platforms_inner_local_var->_library_owned = 1;
    return account_supported_platforms_200_response_result_supported_platforms_inner_local_var;
}

__attribute__((deprecated)) account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_create(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    char *cart_method,
    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *params
    ) {
    return account_supported_platforms_200_response_result_supported_platforms_inner_create_internal (
        cart_id,
        cart_name,
        cart_versions,
        cart_method,
        params
        );
}

void account_supported_platforms_200_response_result_supported_platforms_inner_free(account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner) {
    if(NULL == account_supported_platforms_200_response_result_supported_platforms_inner){
        return ;
    }
    if(account_supported_platforms_200_response_result_supported_platforms_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_supported_platforms_200_response_result_supported_platforms_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_supported_platforms_200_response_result_supported_platforms_inner->cart_id) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner->cart_id);
        account_supported_platforms_200_response_result_supported_platforms_inner->cart_id = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner->cart_name) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner->cart_name);
        account_supported_platforms_200_response_result_supported_platforms_inner->cart_name = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions);
        account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner->cart_method) {
        free(account_supported_platforms_200_response_result_supported_platforms_inner->cart_method);
        account_supported_platforms_200_response_result_supported_platforms_inner->cart_method = NULL;
    }
    if (account_supported_platforms_200_response_result_supported_platforms_inner->params) {
        account_supported_platforms_200_response_result_supported_platforms_inner_params_free(account_supported_platforms_200_response_result_supported_platforms_inner->params);
        account_supported_platforms_200_response_result_supported_platforms_inner->params = NULL;
    }
    free(account_supported_platforms_200_response_result_supported_platforms_inner);
}

cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner) {
    cJSON *item = cJSON_CreateObject();

    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_id
    if(account_supported_platforms_200_response_result_supported_platforms_inner->cart_id) {
    if(cJSON_AddStringToObject(item, "cart_id", account_supported_platforms_200_response_result_supported_platforms_inner->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_name
    if(account_supported_platforms_200_response_result_supported_platforms_inner->cart_name) {
    if(cJSON_AddStringToObject(item, "cart_name", account_supported_platforms_200_response_result_supported_platforms_inner->cart_name) == NULL) {
    goto fail; //String
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions
    if(account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions) {
    if(cJSON_AddStringToObject(item, "cart_versions", account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions) == NULL) {
    goto fail; //String
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_method
    if(account_supported_platforms_200_response_result_supported_platforms_inner->cart_method) {
    if(cJSON_AddStringToObject(item, "cart_method", account_supported_platforms_200_response_result_supported_platforms_inner->cart_method) == NULL) {
    goto fail; //String
    }
    }


    // account_supported_platforms_200_response_result_supported_platforms_inner->params
    if(account_supported_platforms_200_response_result_supported_platforms_inner->params) {
    cJSON *params_local_JSON = account_supported_platforms_200_response_result_supported_platforms_inner_params_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner->params);
    if(params_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "params", params_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_parseFromJSON(cJSON *account_supported_platforms_200_response_result_supported_platforms_innerJSON){

    account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_local_var = NULL;

    // define the local variable for account_supported_platforms_200_response_result_supported_platforms_inner->params
    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *params_local_nonprim = NULL;

    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_innerJSON, "cart_id");
    if (cJSON_IsNull(cart_id)) {
        cart_id = NULL;
    }
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_name
    cJSON *cart_name = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_innerJSON, "cart_name");
    if (cJSON_IsNull(cart_name)) {
        cart_name = NULL;
    }
    if (cart_name) { 
    if(!cJSON_IsString(cart_name) && !cJSON_IsNull(cart_name))
    {
    goto end; //String
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_versions
    cJSON *cart_versions = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_innerJSON, "cart_versions");
    if (cJSON_IsNull(cart_versions)) {
        cart_versions = NULL;
    }
    if (cart_versions) { 
    if(!cJSON_IsString(cart_versions) && !cJSON_IsNull(cart_versions))
    {
    goto end; //String
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner->cart_method
    cJSON *cart_method = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_innerJSON, "cart_method");
    if (cJSON_IsNull(cart_method)) {
        cart_method = NULL;
    }
    if (cart_method) { 
    if(!cJSON_IsString(cart_method) && !cJSON_IsNull(cart_method))
    {
    goto end; //String
    }
    }

    // account_supported_platforms_200_response_result_supported_platforms_inner->params
    cJSON *params = cJSON_GetObjectItemCaseSensitive(account_supported_platforms_200_response_result_supported_platforms_innerJSON, "params");
    if (cJSON_IsNull(params)) {
        params = NULL;
    }
    if (params) { 
    params_local_nonprim = account_supported_platforms_200_response_result_supported_platforms_inner_params_parseFromJSON(params); //nonprimitive
    }


    account_supported_platforms_200_response_result_supported_platforms_inner_local_var = account_supported_platforms_200_response_result_supported_platforms_inner_create_internal (
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        cart_name && !cJSON_IsNull(cart_name) ? strdup(cart_name->valuestring) : NULL,
        cart_versions && !cJSON_IsNull(cart_versions) ? strdup(cart_versions->valuestring) : NULL,
        cart_method && !cJSON_IsNull(cart_method) ? strdup(cart_method->valuestring) : NULL,
        params ? params_local_nonprim : NULL
        );

    return account_supported_platforms_200_response_result_supported_platforms_inner_local_var;
end:
    if (params_local_nonprim) {
        account_supported_platforms_200_response_result_supported_platforms_inner_params_free(params_local_nonprim);
        params_local_nonprim = NULL;
    }
    return NULL;

}
