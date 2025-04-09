#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_delete_200_response_result.h"



static cart_delete_200_response_result_t *cart_delete_200_response_result_create_internal(
    char *store
    ) {
    cart_delete_200_response_result_t *cart_delete_200_response_result_local_var = malloc(sizeof(cart_delete_200_response_result_t));
    if (!cart_delete_200_response_result_local_var) {
        return NULL;
    }
    cart_delete_200_response_result_local_var->store = store;

    cart_delete_200_response_result_local_var->_library_owned = 1;
    return cart_delete_200_response_result_local_var;
}

__attribute__((deprecated)) cart_delete_200_response_result_t *cart_delete_200_response_result_create(
    char *store
    ) {
    return cart_delete_200_response_result_create_internal (
        store
        );
}

void cart_delete_200_response_result_free(cart_delete_200_response_result_t *cart_delete_200_response_result) {
    if(NULL == cart_delete_200_response_result){
        return ;
    }
    if(cart_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_delete_200_response_result->store) {
        free(cart_delete_200_response_result->store);
        cart_delete_200_response_result->store = NULL;
    }
    free(cart_delete_200_response_result);
}

cJSON *cart_delete_200_response_result_convertToJSON(cart_delete_200_response_result_t *cart_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_delete_200_response_result->store
    if(cart_delete_200_response_result->store) {
    if(cJSON_AddStringToObject(item, "store", cart_delete_200_response_result->store) == NULL) {
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

cart_delete_200_response_result_t *cart_delete_200_response_result_parseFromJSON(cJSON *cart_delete_200_response_resultJSON){

    cart_delete_200_response_result_t *cart_delete_200_response_result_local_var = NULL;

    // cart_delete_200_response_result->store
    cJSON *store = cJSON_GetObjectItemCaseSensitive(cart_delete_200_response_resultJSON, "store");
    if (cJSON_IsNull(store)) {
        store = NULL;
    }
    if (store) { 
    if(!cJSON_IsString(store) && !cJSON_IsNull(store))
    {
    goto end; //String
    }
    }


    cart_delete_200_response_result_local_var = cart_delete_200_response_result_create_internal (
        store && !cJSON_IsNull(store) ? strdup(store->valuestring) : NULL
        );

    return cart_delete_200_response_result_local_var;
end:
    return NULL;

}
