#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_list_200_response_result_supported_carts_inner.h"



static cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_create_internal(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    list_t *params
    ) {
    cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_local_var = malloc(sizeof(cart_list_200_response_result_supported_carts_inner_t));
    if (!cart_list_200_response_result_supported_carts_inner_local_var) {
        return NULL;
    }
    cart_list_200_response_result_supported_carts_inner_local_var->cart_id = cart_id;
    cart_list_200_response_result_supported_carts_inner_local_var->cart_name = cart_name;
    cart_list_200_response_result_supported_carts_inner_local_var->cart_versions = cart_versions;
    cart_list_200_response_result_supported_carts_inner_local_var->params = params;

    cart_list_200_response_result_supported_carts_inner_local_var->_library_owned = 1;
    return cart_list_200_response_result_supported_carts_inner_local_var;
}

__attribute__((deprecated)) cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_create(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    list_t *params
    ) {
    return cart_list_200_response_result_supported_carts_inner_create_internal (
        cart_id,
        cart_name,
        cart_versions,
        params
        );
}

void cart_list_200_response_result_supported_carts_inner_free(cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner) {
    if(NULL == cart_list_200_response_result_supported_carts_inner){
        return ;
    }
    if(cart_list_200_response_result_supported_carts_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_list_200_response_result_supported_carts_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_list_200_response_result_supported_carts_inner->cart_id) {
        free(cart_list_200_response_result_supported_carts_inner->cart_id);
        cart_list_200_response_result_supported_carts_inner->cart_id = NULL;
    }
    if (cart_list_200_response_result_supported_carts_inner->cart_name) {
        free(cart_list_200_response_result_supported_carts_inner->cart_name);
        cart_list_200_response_result_supported_carts_inner->cart_name = NULL;
    }
    if (cart_list_200_response_result_supported_carts_inner->cart_versions) {
        free(cart_list_200_response_result_supported_carts_inner->cart_versions);
        cart_list_200_response_result_supported_carts_inner->cart_versions = NULL;
    }
    if (cart_list_200_response_result_supported_carts_inner->params) {
        list_ForEach(listEntry, cart_list_200_response_result_supported_carts_inner->params) {
            free(listEntry->data);
        }
        list_freeList(cart_list_200_response_result_supported_carts_inner->params);
        cart_list_200_response_result_supported_carts_inner->params = NULL;
    }
    free(cart_list_200_response_result_supported_carts_inner);
}

cJSON *cart_list_200_response_result_supported_carts_inner_convertToJSON(cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner) {
    cJSON *item = cJSON_CreateObject();

    // cart_list_200_response_result_supported_carts_inner->cart_id
    if(cart_list_200_response_result_supported_carts_inner->cart_id) {
    if(cJSON_AddStringToObject(item, "cart_id", cart_list_200_response_result_supported_carts_inner->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_list_200_response_result_supported_carts_inner->cart_name
    if(cart_list_200_response_result_supported_carts_inner->cart_name) {
    if(cJSON_AddStringToObject(item, "cart_name", cart_list_200_response_result_supported_carts_inner->cart_name) == NULL) {
    goto fail; //String
    }
    }


    // cart_list_200_response_result_supported_carts_inner->cart_versions
    if(cart_list_200_response_result_supported_carts_inner->cart_versions) {
    if(cJSON_AddStringToObject(item, "cart_versions", cart_list_200_response_result_supported_carts_inner->cart_versions) == NULL) {
    goto fail; //String
    }
    }


    // cart_list_200_response_result_supported_carts_inner->params
    if(cart_list_200_response_result_supported_carts_inner->params) {
    cJSON *params = cJSON_AddArrayToObject(item, "params");
    if(params == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *paramsListEntry;
    list_ForEach(paramsListEntry, cart_list_200_response_result_supported_carts_inner->params) {
    if(cJSON_AddStringToObject(params, "", paramsListEntry->data) == NULL)
    {
        goto fail;
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

cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_parseFromJSON(cJSON *cart_list_200_response_result_supported_carts_innerJSON){

    cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_local_var = NULL;

    // define the local list for cart_list_200_response_result_supported_carts_inner->params
    list_t *paramsList = NULL;

    // cart_list_200_response_result_supported_carts_inner->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(cart_list_200_response_result_supported_carts_innerJSON, "cart_id");
    if (cJSON_IsNull(cart_id)) {
        cart_id = NULL;
    }
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // cart_list_200_response_result_supported_carts_inner->cart_name
    cJSON *cart_name = cJSON_GetObjectItemCaseSensitive(cart_list_200_response_result_supported_carts_innerJSON, "cart_name");
    if (cJSON_IsNull(cart_name)) {
        cart_name = NULL;
    }
    if (cart_name) { 
    if(!cJSON_IsString(cart_name) && !cJSON_IsNull(cart_name))
    {
    goto end; //String
    }
    }

    // cart_list_200_response_result_supported_carts_inner->cart_versions
    cJSON *cart_versions = cJSON_GetObjectItemCaseSensitive(cart_list_200_response_result_supported_carts_innerJSON, "cart_versions");
    if (cJSON_IsNull(cart_versions)) {
        cart_versions = NULL;
    }
    if (cart_versions) { 
    if(!cJSON_IsString(cart_versions) && !cJSON_IsNull(cart_versions))
    {
    goto end; //String
    }
    }

    // cart_list_200_response_result_supported_carts_inner->params
    cJSON *params = cJSON_GetObjectItemCaseSensitive(cart_list_200_response_result_supported_carts_innerJSON, "params");
    if (cJSON_IsNull(params)) {
        params = NULL;
    }
    if (params) { 
    cJSON *params_local = NULL;
    if(!cJSON_IsArray(params)) {
        goto end;//primitive container
    }
    paramsList = list_createList();

    cJSON_ArrayForEach(params_local, params)
    {
        if(!cJSON_IsString(params_local))
        {
            goto end;
        }
        list_addElement(paramsList , strdup(params_local->valuestring));
    }
    }


    cart_list_200_response_result_supported_carts_inner_local_var = cart_list_200_response_result_supported_carts_inner_create_internal (
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        cart_name && !cJSON_IsNull(cart_name) ? strdup(cart_name->valuestring) : NULL,
        cart_versions && !cJSON_IsNull(cart_versions) ? strdup(cart_versions->valuestring) : NULL,
        params ? paramsList : NULL
        );

    return cart_list_200_response_result_supported_carts_inner_local_var;
end:
    if (paramsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, paramsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(paramsList);
        paramsList = NULL;
    }
    return NULL;

}
