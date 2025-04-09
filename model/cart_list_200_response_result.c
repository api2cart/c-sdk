#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_list_200_response_result.h"



static cart_list_200_response_result_t *cart_list_200_response_result_create_internal(
    list_t *supported_carts
    ) {
    cart_list_200_response_result_t *cart_list_200_response_result_local_var = malloc(sizeof(cart_list_200_response_result_t));
    if (!cart_list_200_response_result_local_var) {
        return NULL;
    }
    cart_list_200_response_result_local_var->supported_carts = supported_carts;

    cart_list_200_response_result_local_var->_library_owned = 1;
    return cart_list_200_response_result_local_var;
}

__attribute__((deprecated)) cart_list_200_response_result_t *cart_list_200_response_result_create(
    list_t *supported_carts
    ) {
    return cart_list_200_response_result_create_internal (
        supported_carts
        );
}

void cart_list_200_response_result_free(cart_list_200_response_result_t *cart_list_200_response_result) {
    if(NULL == cart_list_200_response_result){
        return ;
    }
    if(cart_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_list_200_response_result->supported_carts) {
        list_ForEach(listEntry, cart_list_200_response_result->supported_carts) {
            cart_list_200_response_result_supported_carts_inner_free(listEntry->data);
        }
        list_freeList(cart_list_200_response_result->supported_carts);
        cart_list_200_response_result->supported_carts = NULL;
    }
    free(cart_list_200_response_result);
}

cJSON *cart_list_200_response_result_convertToJSON(cart_list_200_response_result_t *cart_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_list_200_response_result->supported_carts
    if(cart_list_200_response_result->supported_carts) {
    cJSON *supported_carts = cJSON_AddArrayToObject(item, "supported_carts");
    if(supported_carts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *supported_cartsListEntry;
    if (cart_list_200_response_result->supported_carts) {
    list_ForEach(supported_cartsListEntry, cart_list_200_response_result->supported_carts) {
    cJSON *itemLocal = cart_list_200_response_result_supported_carts_inner_convertToJSON(supported_cartsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(supported_carts, itemLocal);
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

cart_list_200_response_result_t *cart_list_200_response_result_parseFromJSON(cJSON *cart_list_200_response_resultJSON){

    cart_list_200_response_result_t *cart_list_200_response_result_local_var = NULL;

    // define the local list for cart_list_200_response_result->supported_carts
    list_t *supported_cartsList = NULL;

    // cart_list_200_response_result->supported_carts
    cJSON *supported_carts = cJSON_GetObjectItemCaseSensitive(cart_list_200_response_resultJSON, "supported_carts");
    if (cJSON_IsNull(supported_carts)) {
        supported_carts = NULL;
    }
    if (supported_carts) { 
    cJSON *supported_carts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(supported_carts)){
        goto end; //nonprimitive container
    }

    supported_cartsList = list_createList();

    cJSON_ArrayForEach(supported_carts_local_nonprimitive,supported_carts )
    {
        if(!cJSON_IsObject(supported_carts_local_nonprimitive)){
            goto end;
        }
        cart_list_200_response_result_supported_carts_inner_t *supported_cartsItem = cart_list_200_response_result_supported_carts_inner_parseFromJSON(supported_carts_local_nonprimitive);

        list_addElement(supported_cartsList, supported_cartsItem);
    }
    }


    cart_list_200_response_result_local_var = cart_list_200_response_result_create_internal (
        supported_carts ? supported_cartsList : NULL
        );

    return cart_list_200_response_result_local_var;
end:
    if (supported_cartsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, supported_cartsList) {
            cart_list_200_response_result_supported_carts_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(supported_cartsList);
        supported_cartsList = NULL;
    }
    return NULL;

}
