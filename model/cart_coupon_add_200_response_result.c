#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_coupon_add_200_response_result.h"



static cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result_create_internal(
    char *coupon_id
    ) {
    cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result_local_var = malloc(sizeof(cart_coupon_add_200_response_result_t));
    if (!cart_coupon_add_200_response_result_local_var) {
        return NULL;
    }
    cart_coupon_add_200_response_result_local_var->coupon_id = coupon_id;

    cart_coupon_add_200_response_result_local_var->_library_owned = 1;
    return cart_coupon_add_200_response_result_local_var;
}

__attribute__((deprecated)) cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result_create(
    char *coupon_id
    ) {
    return cart_coupon_add_200_response_result_create_internal (
        coupon_id
        );
}

void cart_coupon_add_200_response_result_free(cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result) {
    if(NULL == cart_coupon_add_200_response_result){
        return ;
    }
    if(cart_coupon_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_coupon_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_coupon_add_200_response_result->coupon_id) {
        free(cart_coupon_add_200_response_result->coupon_id);
        cart_coupon_add_200_response_result->coupon_id = NULL;
    }
    free(cart_coupon_add_200_response_result);
}

cJSON *cart_coupon_add_200_response_result_convertToJSON(cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_coupon_add_200_response_result->coupon_id
    if(cart_coupon_add_200_response_result->coupon_id) {
    if(cJSON_AddStringToObject(item, "coupon_id", cart_coupon_add_200_response_result->coupon_id) == NULL) {
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

cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result_parseFromJSON(cJSON *cart_coupon_add_200_response_resultJSON){

    cart_coupon_add_200_response_result_t *cart_coupon_add_200_response_result_local_var = NULL;

    // cart_coupon_add_200_response_result->coupon_id
    cJSON *coupon_id = cJSON_GetObjectItemCaseSensitive(cart_coupon_add_200_response_resultJSON, "coupon_id");
    if (cJSON_IsNull(coupon_id)) {
        coupon_id = NULL;
    }
    if (coupon_id) { 
    if(!cJSON_IsString(coupon_id) && !cJSON_IsNull(coupon_id))
    {
    goto end; //String
    }
    }


    cart_coupon_add_200_response_result_local_var = cart_coupon_add_200_response_result_create_internal (
        coupon_id && !cJSON_IsNull(coupon_id) ? strdup(coupon_id->valuestring) : NULL
        );

    return cart_coupon_add_200_response_result_local_var;
end:
    return NULL;

}
