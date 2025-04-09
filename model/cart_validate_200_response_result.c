#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_validate_200_response_result.h"



static cart_validate_200_response_result_t *cart_validate_200_response_result_create_internal(
    char *status
    ) {
    cart_validate_200_response_result_t *cart_validate_200_response_result_local_var = malloc(sizeof(cart_validate_200_response_result_t));
    if (!cart_validate_200_response_result_local_var) {
        return NULL;
    }
    cart_validate_200_response_result_local_var->status = status;

    cart_validate_200_response_result_local_var->_library_owned = 1;
    return cart_validate_200_response_result_local_var;
}

__attribute__((deprecated)) cart_validate_200_response_result_t *cart_validate_200_response_result_create(
    char *status
    ) {
    return cart_validate_200_response_result_create_internal (
        status
        );
}

void cart_validate_200_response_result_free(cart_validate_200_response_result_t *cart_validate_200_response_result) {
    if(NULL == cart_validate_200_response_result){
        return ;
    }
    if(cart_validate_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_validate_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_validate_200_response_result->status) {
        free(cart_validate_200_response_result->status);
        cart_validate_200_response_result->status = NULL;
    }
    free(cart_validate_200_response_result);
}

cJSON *cart_validate_200_response_result_convertToJSON(cart_validate_200_response_result_t *cart_validate_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_validate_200_response_result->status
    if(cart_validate_200_response_result->status) {
    if(cJSON_AddStringToObject(item, "status", cart_validate_200_response_result->status) == NULL) {
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

cart_validate_200_response_result_t *cart_validate_200_response_result_parseFromJSON(cJSON *cart_validate_200_response_resultJSON){

    cart_validate_200_response_result_t *cart_validate_200_response_result_local_var = NULL;

    // cart_validate_200_response_result->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(cart_validate_200_response_resultJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }


    cart_validate_200_response_result_local_var = cart_validate_200_response_result_create_internal (
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL
        );

    return cart_validate_200_response_result_local_var;
end:
    return NULL;

}
