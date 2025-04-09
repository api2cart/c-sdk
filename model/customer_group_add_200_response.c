#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_group_add_200_response.h"



static customer_group_add_200_response_t *customer_group_add_200_response_create_internal(
    int return_code,
    char *return_message,
    customer_group_add_200_response_result_t *result
    ) {
    customer_group_add_200_response_t *customer_group_add_200_response_local_var = malloc(sizeof(customer_group_add_200_response_t));
    if (!customer_group_add_200_response_local_var) {
        return NULL;
    }
    customer_group_add_200_response_local_var->return_code = return_code;
    customer_group_add_200_response_local_var->return_message = return_message;
    customer_group_add_200_response_local_var->result = result;

    customer_group_add_200_response_local_var->_library_owned = 1;
    return customer_group_add_200_response_local_var;
}

__attribute__((deprecated)) customer_group_add_200_response_t *customer_group_add_200_response_create(
    int return_code,
    char *return_message,
    customer_group_add_200_response_result_t *result
    ) {
    return customer_group_add_200_response_create_internal (
        return_code,
        return_message,
        result
        );
}

void customer_group_add_200_response_free(customer_group_add_200_response_t *customer_group_add_200_response) {
    if(NULL == customer_group_add_200_response){
        return ;
    }
    if(customer_group_add_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_group_add_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_group_add_200_response->return_message) {
        free(customer_group_add_200_response->return_message);
        customer_group_add_200_response->return_message = NULL;
    }
    if (customer_group_add_200_response->result) {
        customer_group_add_200_response_result_free(customer_group_add_200_response->result);
        customer_group_add_200_response->result = NULL;
    }
    free(customer_group_add_200_response);
}

cJSON *customer_group_add_200_response_convertToJSON(customer_group_add_200_response_t *customer_group_add_200_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_group_add_200_response->return_code
    if(customer_group_add_200_response->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", customer_group_add_200_response->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // customer_group_add_200_response->return_message
    if(customer_group_add_200_response->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", customer_group_add_200_response->return_message) == NULL) {
    goto fail; //String
    }
    }


    // customer_group_add_200_response->result
    if(customer_group_add_200_response->result) {
    cJSON *result_local_JSON = customer_group_add_200_response_result_convertToJSON(customer_group_add_200_response->result);
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

customer_group_add_200_response_t *customer_group_add_200_response_parseFromJSON(cJSON *customer_group_add_200_responseJSON){

    customer_group_add_200_response_t *customer_group_add_200_response_local_var = NULL;

    // define the local variable for customer_group_add_200_response->result
    customer_group_add_200_response_result_t *result_local_nonprim = NULL;

    // customer_group_add_200_response->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(customer_group_add_200_responseJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // customer_group_add_200_response->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(customer_group_add_200_responseJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // customer_group_add_200_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(customer_group_add_200_responseJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = customer_group_add_200_response_result_parseFromJSON(result); //nonprimitive
    }


    customer_group_add_200_response_local_var = customer_group_add_200_response_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL
        );

    return customer_group_add_200_response_local_var;
end:
    if (result_local_nonprim) {
        customer_group_add_200_response_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
