#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_script_add_200_response_result.h"



static cart_script_add_200_response_result_t *cart_script_add_200_response_result_create_internal(
    char *script_id
    ) {
    cart_script_add_200_response_result_t *cart_script_add_200_response_result_local_var = malloc(sizeof(cart_script_add_200_response_result_t));
    if (!cart_script_add_200_response_result_local_var) {
        return NULL;
    }
    cart_script_add_200_response_result_local_var->script_id = script_id;

    cart_script_add_200_response_result_local_var->_library_owned = 1;
    return cart_script_add_200_response_result_local_var;
}

__attribute__((deprecated)) cart_script_add_200_response_result_t *cart_script_add_200_response_result_create(
    char *script_id
    ) {
    return cart_script_add_200_response_result_create_internal (
        script_id
        );
}

void cart_script_add_200_response_result_free(cart_script_add_200_response_result_t *cart_script_add_200_response_result) {
    if(NULL == cart_script_add_200_response_result){
        return ;
    }
    if(cart_script_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_script_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_script_add_200_response_result->script_id) {
        free(cart_script_add_200_response_result->script_id);
        cart_script_add_200_response_result->script_id = NULL;
    }
    free(cart_script_add_200_response_result);
}

cJSON *cart_script_add_200_response_result_convertToJSON(cart_script_add_200_response_result_t *cart_script_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // cart_script_add_200_response_result->script_id
    if(cart_script_add_200_response_result->script_id) {
    if(cJSON_AddStringToObject(item, "script_id", cart_script_add_200_response_result->script_id) == NULL) {
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

cart_script_add_200_response_result_t *cart_script_add_200_response_result_parseFromJSON(cJSON *cart_script_add_200_response_resultJSON){

    cart_script_add_200_response_result_t *cart_script_add_200_response_result_local_var = NULL;

    // cart_script_add_200_response_result->script_id
    cJSON *script_id = cJSON_GetObjectItemCaseSensitive(cart_script_add_200_response_resultJSON, "script_id");
    if (cJSON_IsNull(script_id)) {
        script_id = NULL;
    }
    if (script_id) { 
    if(!cJSON_IsString(script_id) && !cJSON_IsNull(script_id))
    {
    goto end; //String
    }
    }


    cart_script_add_200_response_result_local_var = cart_script_add_200_response_result_create_internal (
        script_id && !cJSON_IsNull(script_id) ? strdup(script_id->valuestring) : NULL
        );

    return cart_script_add_200_response_result_local_var;
end:
    return NULL;

}
