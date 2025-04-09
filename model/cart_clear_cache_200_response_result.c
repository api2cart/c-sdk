#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_clear_cache_200_response_result.h"



static cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_create_internal(
    char *cache_cleared
    ) {
    cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_local_var = malloc(sizeof(cart_clear_cache_200_response_result_t));
    if (!cart_clear_cache_200_response_result_local_var) {
        return NULL;
    }
    cart_clear_cache_200_response_result_local_var->cache_cleared = cache_cleared;

    cart_clear_cache_200_response_result_local_var->_library_owned = 1;
    return cart_clear_cache_200_response_result_local_var;
}

__attribute__((deprecated)) cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_create(
    char *cache_cleared
    ) {
    return cart_clear_cache_200_response_result_create_internal (
        cache_cleared
        );
}

void cart_clear_cache_200_response_result_free(cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result) {
    if(NULL == cart_clear_cache_200_response_result){
        return ;
    }
    if(cart_clear_cache_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_clear_cache_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_clear_cache_200_response_result->cache_cleared) {
        free(cart_clear_cache_200_response_result->cache_cleared);
        cart_clear_cache_200_response_result->cache_cleared = NULL;
    }
    free(cart_clear_cache_200_response_result);
}

cJSON *cart_clear_cache_200_response_result_convertToJSON(cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_clear_cache_200_response_result->cache_cleared
    if(cart_clear_cache_200_response_result->cache_cleared) {
    if(cJSON_AddStringToObject(item, "cache_cleared", cart_clear_cache_200_response_result->cache_cleared) == NULL) {
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

cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_parseFromJSON(cJSON *cart_clear_cache_200_response_resultJSON){

    cart_clear_cache_200_response_result_t *cart_clear_cache_200_response_result_local_var = NULL;

    // cart_clear_cache_200_response_result->cache_cleared
    cJSON *cache_cleared = cJSON_GetObjectItemCaseSensitive(cart_clear_cache_200_response_resultJSON, "cache_cleared");
    if (cJSON_IsNull(cache_cleared)) {
        cache_cleared = NULL;
    }
    if (cache_cleared) { 
    if(!cJSON_IsString(cache_cleared) && !cJSON_IsNull(cache_cleared))
    {
    goto end; //String
    }
    }


    cart_clear_cache_200_response_result_local_var = cart_clear_cache_200_response_result_create_internal (
        cache_cleared && !cJSON_IsNull(cache_cleared) ? strdup(cache_cleared->valuestring) : NULL
        );

    return cart_clear_cache_200_response_result_local_var;
end:
    return NULL;

}
