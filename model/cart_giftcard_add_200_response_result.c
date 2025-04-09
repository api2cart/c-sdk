#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_giftcard_add_200_response_result.h"



static cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result_create_internal(
    char *id,
    char *code
    ) {
    cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result_local_var = malloc(sizeof(cart_giftcard_add_200_response_result_t));
    if (!cart_giftcard_add_200_response_result_local_var) {
        return NULL;
    }
    cart_giftcard_add_200_response_result_local_var->id = id;
    cart_giftcard_add_200_response_result_local_var->code = code;

    cart_giftcard_add_200_response_result_local_var->_library_owned = 1;
    return cart_giftcard_add_200_response_result_local_var;
}

__attribute__((deprecated)) cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result_create(
    char *id,
    char *code
    ) {
    return cart_giftcard_add_200_response_result_create_internal (
        id,
        code
        );
}

void cart_giftcard_add_200_response_result_free(cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result) {
    if(NULL == cart_giftcard_add_200_response_result){
        return ;
    }
    if(cart_giftcard_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_giftcard_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_giftcard_add_200_response_result->id) {
        free(cart_giftcard_add_200_response_result->id);
        cart_giftcard_add_200_response_result->id = NULL;
    }
    if (cart_giftcard_add_200_response_result->code) {
        free(cart_giftcard_add_200_response_result->code);
        cart_giftcard_add_200_response_result->code = NULL;
    }
    free(cart_giftcard_add_200_response_result);
}

cJSON *cart_giftcard_add_200_response_result_convertToJSON(cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_giftcard_add_200_response_result->id
    if(cart_giftcard_add_200_response_result->id) {
    if(cJSON_AddStringToObject(item, "id", cart_giftcard_add_200_response_result->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_giftcard_add_200_response_result->code
    if(cart_giftcard_add_200_response_result->code) {
    if(cJSON_AddStringToObject(item, "code", cart_giftcard_add_200_response_result->code) == NULL) {
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

cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result_parseFromJSON(cJSON *cart_giftcard_add_200_response_resultJSON){

    cart_giftcard_add_200_response_result_t *cart_giftcard_add_200_response_result_local_var = NULL;

    // cart_giftcard_add_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_giftcard_add_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_giftcard_add_200_response_result->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(cart_giftcard_add_200_response_resultJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }


    cart_giftcard_add_200_response_result_local_var = cart_giftcard_add_200_response_result_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL
        );

    return cart_giftcard_add_200_response_result_local_var;
end:
    return NULL;

}
