#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_coupon_count_200_response.h"



static cart_coupon_count_200_response_t *cart_coupon_count_200_response_create_internal(
    int return_code,
    char *return_message,
    cart_coupon_count_200_response_result_t *result
    ) {
    cart_coupon_count_200_response_t *cart_coupon_count_200_response_local_var = malloc(sizeof(cart_coupon_count_200_response_t));
    if (!cart_coupon_count_200_response_local_var) {
        return NULL;
    }
    cart_coupon_count_200_response_local_var->return_code = return_code;
    cart_coupon_count_200_response_local_var->return_message = return_message;
    cart_coupon_count_200_response_local_var->result = result;

    cart_coupon_count_200_response_local_var->_library_owned = 1;
    return cart_coupon_count_200_response_local_var;
}

__attribute__((deprecated)) cart_coupon_count_200_response_t *cart_coupon_count_200_response_create(
    int return_code,
    char *return_message,
    cart_coupon_count_200_response_result_t *result
    ) {
    return cart_coupon_count_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void cart_coupon_count_200_response_free(cart_coupon_count_200_response_t *cart_coupon_count_200_response) {
    if(NULL == cart_coupon_count_200_response){
        return ;
    }
    if(cart_coupon_count_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_coupon_count_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_coupon_count_200_response->return_message) {
        free(cart_coupon_count_200_response->return_message);
        cart_coupon_count_200_response->return_message = NULL;
    }
    if (cart_coupon_count_200_response->result) {
        cart_coupon_count_200_response_result_free(cart_coupon_count_200_response->result);
        cart_coupon_count_200_response->result = NULL;
    }
    free(cart_coupon_count_200_response);
}

cJSON *cart_coupon_count_200_response_convertToJSON(cart_coupon_count_200_response_t *cart_coupon_count_200_response) {
    cJSON *item = cJSON_CreateObject();

    // cart_coupon_count_200_response->return_code
    if(cart_coupon_count_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", cart_coupon_count_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_coupon_count_200_response->return_message
    if(cart_coupon_count_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", cart_coupon_count_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // cart_coupon_count_200_response->result
    if(cart_coupon_count_200_response->result) {
    cJSON *result_local_JSON = cart_coupon_count_200_response_result_convertToJSON(cart_coupon_count_200_response->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
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

cart_coupon_count_200_response_t *cart_coupon_count_200_response_parseFromJSON(cJSON *cart_coupon_count_200_responseJSON){

    cart_coupon_count_200_response_t *cart_coupon_count_200_response_local_var = NULL;

    // define the local variable for cart_coupon_count_200_response->result
    cart_coupon_count_200_response_result_t *result_local_nonprim = NULL;

    // cart_coupon_count_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(cart_coupon_count_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // cart_coupon_count_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(cart_coupon_count_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // cart_coupon_count_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cart_coupon_count_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = cart_coupon_count_200_response_result_parseFromJSON(result); //nonprimitive
    }


    cart_coupon_count_200_response_local_var = cart_coupon_count_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return cart_coupon_count_200_response_local_var;
end:
    if (result_local_nonprim) {
        cart_coupon_count_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
