#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_bridge_200_response_result.h"



static cart_bridge_200_response_result_t *cart_bridge_200_response_result_create_internal(
    char *store_key,
    char *bridge
    ) {
    cart_bridge_200_response_result_t *cart_bridge_200_response_result_local_var = malloc(sizeof(cart_bridge_200_response_result_t));
    if (!cart_bridge_200_response_result_local_var) {
        return NULL;
    }
    cart_bridge_200_response_result_local_var->store_key = store_key;
    cart_bridge_200_response_result_local_var->bridge = bridge;

    cart_bridge_200_response_result_local_var->_library_owned = 1;
    return cart_bridge_200_response_result_local_var;
}

__attribute__((deprecated)) cart_bridge_200_response_result_t *cart_bridge_200_response_result_create(
    char *store_key,
    char *bridge
    ) {
    return cart_bridge_200_response_result_create_internal (
        store_key,
        bridge
        );
}

void cart_bridge_200_response_result_free(cart_bridge_200_response_result_t *cart_bridge_200_response_result) {
    if(NULL == cart_bridge_200_response_result){
        return ;
    }
    if(cart_bridge_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_bridge_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_bridge_200_response_result->store_key) {
        free(cart_bridge_200_response_result->store_key);
        cart_bridge_200_response_result->store_key = NULL;
    }
    if (cart_bridge_200_response_result->bridge) {
        free(cart_bridge_200_response_result->bridge);
        cart_bridge_200_response_result->bridge = NULL;
    }
    free(cart_bridge_200_response_result);
}

cJSON *cart_bridge_200_response_result_convertToJSON(cart_bridge_200_response_result_t *cart_bridge_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_bridge_200_response_result->store_key
    if(cart_bridge_200_response_result->store_key) {
    if(cJSON_AddStringToObject(item, "store_key", cart_bridge_200_response_result->store_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_bridge_200_response_result->bridge
    if(cart_bridge_200_response_result->bridge) {
    if(cJSON_AddStringToObject(item, "bridge", cart_bridge_200_response_result->bridge) == NULL) {
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

cart_bridge_200_response_result_t *cart_bridge_200_response_result_parseFromJSON(cJSON *cart_bridge_200_response_resultJSON){

    cart_bridge_200_response_result_t *cart_bridge_200_response_result_local_var = NULL;

    // cart_bridge_200_response_result->store_key
    cJSON *store_key = cJSON_GetObjectItemCaseSensitive(cart_bridge_200_response_resultJSON, "store_key");
    if (cJSON_IsNull(store_key)) {
        store_key = NULL;
    }
    if (store_key) { 
    if(!cJSON_IsString(store_key) && !cJSON_IsNull(store_key))
    {
    goto end; //String
    }
    }

    // cart_bridge_200_response_result->bridge
    cJSON *bridge = cJSON_GetObjectItemCaseSensitive(cart_bridge_200_response_resultJSON, "bridge");
    if (cJSON_IsNull(bridge)) {
        bridge = NULL;
    }
    if (bridge) { 
    if(!cJSON_IsString(bridge) && !cJSON_IsNull(bridge))
    {
    goto end; //String
    }
    }


    cart_bridge_200_response_result_local_var = cart_bridge_200_response_result_create_internal (
        store_key && !cJSON_IsNull(store_key) ? strdup(store_key->valuestring) : NULL,
        bridge && !cJSON_IsNull(bridge) ? strdup(bridge->valuestring) : NULL
        );

    return cart_bridge_200_response_result_local_var;
end:
    return NULL;

}
