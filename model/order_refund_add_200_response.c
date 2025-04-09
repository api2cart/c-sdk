#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_refund_add_200_response.h"



static order_refund_add_200_response_t *order_refund_add_200_response_create_internal(
    int return_code,
    char *return_message,
    order_refund_add_200_response_result_t *result
    ) {
    order_refund_add_200_response_t *order_refund_add_200_response_local_var = malloc(sizeof(order_refund_add_200_response_t));
    if (!order_refund_add_200_response_local_var) {
        return NULL;
    }
    order_refund_add_200_response_local_var->return_code = return_code;
    order_refund_add_200_response_local_var->return_message = return_message;
    order_refund_add_200_response_local_var->result = result;

    order_refund_add_200_response_local_var->_library_owned = 1;
    return order_refund_add_200_response_local_var;
}

__attribute__((deprecated)) order_refund_add_200_response_t *order_refund_add_200_response_create(
    int return_code,
    char *return_message,
    order_refund_add_200_response_result_t *result
    ) {
    return order_refund_add_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void order_refund_add_200_response_free(order_refund_add_200_response_t *order_refund_add_200_response) {
    if(NULL == order_refund_add_200_response){
        return ;
    }
    if(order_refund_add_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_refund_add_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_refund_add_200_response->return_message) {
        free(order_refund_add_200_response->return_message);
        order_refund_add_200_response->return_message = NULL;
    }
    if (order_refund_add_200_response->result) {
        order_refund_add_200_response_result_free(order_refund_add_200_response->result);
        order_refund_add_200_response->result = NULL;
    }
    free(order_refund_add_200_response);
}

cJSON *order_refund_add_200_response_convertToJSON(order_refund_add_200_response_t *order_refund_add_200_response) {
    cJSON *item = cJSON_CreateObject();

    // order_refund_add_200_response->return_code
    if(order_refund_add_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", order_refund_add_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_refund_add_200_response->return_message
    if(order_refund_add_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", order_refund_add_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add_200_response->result
    if(order_refund_add_200_response->result) {
    cJSON *result_local_JSON = order_refund_add_200_response_result_convertToJSON(order_refund_add_200_response->result);
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

order_refund_add_200_response_t *order_refund_add_200_response_parseFromJSON(cJSON *order_refund_add_200_responseJSON){

    order_refund_add_200_response_t *order_refund_add_200_response_local_var = NULL;

    // define the local variable for order_refund_add_200_response->result
    order_refund_add_200_response_result_t *result_local_nonprim = NULL;

    // order_refund_add_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(order_refund_add_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // order_refund_add_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(order_refund_add_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // order_refund_add_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(order_refund_add_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = order_refund_add_200_response_result_parseFromJSON(result); //nonprimitive
    }


    order_refund_add_200_response_local_var = order_refund_add_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return order_refund_add_200_response_local_var;
end:
    if (result_local_nonprim) {
        order_refund_add_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
