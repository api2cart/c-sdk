#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_live_shipping_service_delete_200_response.h"



static basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response_create_internal(
    int return_code,
    char *return_message,
    basket_live_shipping_service_delete_200_response_result_t *result
    ) {
    basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response_local_var = malloc(sizeof(basket_live_shipping_service_delete_200_response_t));
    if (!basket_live_shipping_service_delete_200_response_local_var) {
        return NULL;
    }
    basket_live_shipping_service_delete_200_response_local_var->return_code = return_code;
    basket_live_shipping_service_delete_200_response_local_var->return_message = return_message;
    basket_live_shipping_service_delete_200_response_local_var->result = result;

    basket_live_shipping_service_delete_200_response_local_var->_library_owned = 1;
    return basket_live_shipping_service_delete_200_response_local_var;
}

__attribute__((deprecated)) basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response_create(
    int return_code,
    char *return_message,
    basket_live_shipping_service_delete_200_response_result_t *result
    ) {
    return basket_live_shipping_service_delete_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void basket_live_shipping_service_delete_200_response_free(basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response) {
    if(NULL == basket_live_shipping_service_delete_200_response){
        return ;
    }
    if(basket_live_shipping_service_delete_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_live_shipping_service_delete_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket_live_shipping_service_delete_200_response->return_message) {
        free(basket_live_shipping_service_delete_200_response->return_message);
        basket_live_shipping_service_delete_200_response->return_message = NULL;
    }
    if (basket_live_shipping_service_delete_200_response->result) {
        basket_live_shipping_service_delete_200_response_result_free(basket_live_shipping_service_delete_200_response->result);
        basket_live_shipping_service_delete_200_response->result = NULL;
    }
    free(basket_live_shipping_service_delete_200_response);
}

cJSON *basket_live_shipping_service_delete_200_response_convertToJSON(basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response) {
    cJSON *item = cJSON_CreateObject();

    // basket_live_shipping_service_delete_200_response->return_code
    if(basket_live_shipping_service_delete_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", basket_live_shipping_service_delete_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_live_shipping_service_delete_200_response->return_message
    if(basket_live_shipping_service_delete_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", basket_live_shipping_service_delete_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // basket_live_shipping_service_delete_200_response->result
    if(basket_live_shipping_service_delete_200_response->result) {
    cJSON *result_local_JSON = basket_live_shipping_service_delete_200_response_result_convertToJSON(basket_live_shipping_service_delete_200_response->result);
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

basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response_parseFromJSON(cJSON *basket_live_shipping_service_delete_200_responseJSON){

    basket_live_shipping_service_delete_200_response_t *basket_live_shipping_service_delete_200_response_local_var = NULL;

    // define the local variable for basket_live_shipping_service_delete_200_response->result
    basket_live_shipping_service_delete_200_response_result_t *result_local_nonprim = NULL;

    // basket_live_shipping_service_delete_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_delete_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // basket_live_shipping_service_delete_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_delete_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // basket_live_shipping_service_delete_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_delete_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = basket_live_shipping_service_delete_200_response_result_parseFromJSON(result); //nonprimitive
    }


    basket_live_shipping_service_delete_200_response_local_var = basket_live_shipping_service_delete_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return basket_live_shipping_service_delete_200_response_local_var;
end:
    if (result_local_nonprim) {
        basket_live_shipping_service_delete_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
