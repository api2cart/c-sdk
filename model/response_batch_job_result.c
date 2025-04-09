#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_batch_job_result.h"



static response_batch_job_result_t *response_batch_job_result_create_internal(
    int return_code,
    char *return_message,
    batch_job_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_batch_job_result_t *response_batch_job_result_local_var = malloc(sizeof(response_batch_job_result_t));
    if (!response_batch_job_result_local_var) {
        return NULL;
    }
    response_batch_job_result_local_var->return_code = return_code;
    response_batch_job_result_local_var->return_message = return_message;
    response_batch_job_result_local_var->result = result;
    response_batch_job_result_local_var->additional_fields = additional_fields;
    response_batch_job_result_local_var->custom_fields = custom_fields;

    response_batch_job_result_local_var->_library_owned = 1;
    return response_batch_job_result_local_var;
}

__attribute__((deprecated)) response_batch_job_result_t *response_batch_job_result_create(
    int return_code,
    char *return_message,
    batch_job_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_batch_job_result_create_internal (
        return_code,
        return_message,
        result,
        additional_fields,
        custom_fields
        );
}

void response_batch_job_result_free(response_batch_job_result_t *response_batch_job_result) {
    if(NULL == response_batch_job_result){
        return ;
    }
    if(response_batch_job_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_batch_job_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_batch_job_result->return_message) {
        free(response_batch_job_result->return_message);
        response_batch_job_result->return_message = NULL;
    }
    if (response_batch_job_result->result) {
        batch_job_result_free(response_batch_job_result->result);
        response_batch_job_result->result = NULL;
    }
    if (response_batch_job_result->additional_fields) {
        object_free(response_batch_job_result->additional_fields);
        response_batch_job_result->additional_fields = NULL;
    }
    if (response_batch_job_result->custom_fields) {
        object_free(response_batch_job_result->custom_fields);
        response_batch_job_result->custom_fields = NULL;
    }
    free(response_batch_job_result);
}

cJSON *response_batch_job_result_convertToJSON(response_batch_job_result_t *response_batch_job_result) {
    cJSON *item = cJSON_CreateObject();

    // response_batch_job_result->return_code
    if(response_batch_job_result->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", response_batch_job_result->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_batch_job_result->return_message
    if(response_batch_job_result->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", response_batch_job_result->return_message) == NULL) {
    goto fail; //String
    }
    }


    // response_batch_job_result->result
    if(response_batch_job_result->result) {
    cJSON *result_local_JSON = batch_job_result_convertToJSON(response_batch_job_result->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_batch_job_result->additional_fields
    if(response_batch_job_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_batch_job_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_batch_job_result->custom_fields
    if(response_batch_job_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_batch_job_result->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
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

response_batch_job_result_t *response_batch_job_result_parseFromJSON(cJSON *response_batch_job_resultJSON){

    response_batch_job_result_t *response_batch_job_result_local_var = NULL;

    // define the local variable for response_batch_job_result->result
    batch_job_result_t *result_local_nonprim = NULL;

    // response_batch_job_result->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(response_batch_job_resultJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // response_batch_job_result->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(response_batch_job_resultJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // response_batch_job_result->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(response_batch_job_resultJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = batch_job_result_parseFromJSON(result); //nonprimitive
    }

    // response_batch_job_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_batch_job_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_batch_job_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_batch_job_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_batch_job_result_local_var = response_batch_job_result_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_batch_job_result_local_var;
end:
    if (result_local_nonprim) {
        batch_job_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
