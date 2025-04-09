#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_coupon_count_200_response_result.h"



static cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result_create_internal(
    char *coupons_count
    ) {
    cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result_local_var = malloc(sizeof(cart_coupon_count_200_response_result_t));
    if (!cart_coupon_count_200_response_result_local_var) {
        return NULL;
    }
    cart_coupon_count_200_response_result_local_var->coupons_count = coupons_count;

    cart_coupon_count_200_response_result_local_var->_library_owned = 1;
    return cart_coupon_count_200_response_result_local_var;
}

__attribute__((deprecated)) cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result_create(
    char *coupons_count
    ) {
    return cart_coupon_count_200_response_result_create_internal (
        coupons_count
        );
}

void cart_coupon_count_200_response_result_free(cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result) {
    if(NULL == cart_coupon_count_200_response_result){
        return ;
    }
    if(cart_coupon_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_coupon_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_coupon_count_200_response_result->coupons_count) {
        free(cart_coupon_count_200_response_result->coupons_count);
        cart_coupon_count_200_response_result->coupons_count = NULL;
    }
    free(cart_coupon_count_200_response_result);
}

cJSON *cart_coupon_count_200_response_result_convertToJSON(cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_coupon_count_200_response_result->coupons_count
    if(cart_coupon_count_200_response_result->coupons_count) {
    if(cJSON_AddStringToObject(item, "coupons_count", cart_coupon_count_200_response_result->coupons_count) == NULL) {
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

cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result_parseFromJSON(cJSON *cart_coupon_count_200_response_resultJSON){

    cart_coupon_count_200_response_result_t *cart_coupon_count_200_response_result_local_var = NULL;

    // cart_coupon_count_200_response_result->coupons_count
    cJSON *coupons_count = cJSON_GetObjectItemCaseSensitive(cart_coupon_count_200_response_resultJSON, "coupons_count");
    if (cJSON_IsNull(coupons_count)) {
        coupons_count = NULL;
    }
    if (coupons_count) { 
    if(!cJSON_IsString(coupons_count) && !cJSON_IsNull(coupons_count))
    {
    goto end; //String
    }
    }


    cart_coupon_count_200_response_result_local_var = cart_coupon_count_200_response_result_create_internal (
        coupons_count && !cJSON_IsNull(coupons_count) ? strdup(coupons_count->valuestring) : NULL
        );

    return cart_coupon_count_200_response_result_local_var;
end:
    return NULL;

}
