#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "model_response_tax_class_info.h"



static model_response_tax_class_info_t *model_response_tax_class_info_create_internal(
    int return_code,
    char *return_message,
    response_tax_class_info_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    model_response_tax_class_info_t *model_response_tax_class_info_local_var = malloc(sizeof(model_response_tax_class_info_t));
    if (!model_response_tax_class_info_local_var) {
        return NULL;
    }
    model_response_tax_class_info_local_var->return_code = return_code;
    model_response_tax_class_info_local_var->return_message = return_message;
    model_response_tax_class_info_local_var->result = result;
    model_response_tax_class_info_local_var->additional_fields = additional_fields;
    model_response_tax_class_info_local_var->custom_fields = custom_fields;

    model_response_tax_class_info_local_var->_library_owned = 1;
    return model_response_tax_class_info_local_var;
}

__attribute__((deprecated)) model_response_tax_class_info_t *model_response_tax_class_info_create(
    int return_code,
    char *return_message,
    response_tax_class_info_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return model_response_tax_class_info_create_internal (
        return_code,
        return_message,
        result,
        additional_fields,
        custom_fields
        );
}

void model_response_tax_class_info_free(model_response_tax_class_info_t *model_response_tax_class_info) {
    if(NULL == model_response_tax_class_info){
        return ;
    }
    if(model_response_tax_class_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "model_response_tax_class_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (model_response_tax_class_info->return_message) {
        free(model_response_tax_class_info->return_message);
        model_response_tax_class_info->return_message = NULL;
    }
    if (model_response_tax_class_info->result) {
        response_tax_class_info_result_free(model_response_tax_class_info->result);
        model_response_tax_class_info->result = NULL;
    }
    if (model_response_tax_class_info->additional_fields) {
        object_free(model_response_tax_class_info->additional_fields);
        model_response_tax_class_info->additional_fields = NULL;
    }
    if (model_response_tax_class_info->custom_fields) {
        object_free(model_response_tax_class_info->custom_fields);
        model_response_tax_class_info->custom_fields = NULL;
    }
    free(model_response_tax_class_info);
}

cJSON *model_response_tax_class_info_convertToJSON(model_response_tax_class_info_t *model_response_tax_class_info) {
    cJSON *item = cJSON_CreateObject();

    // model_response_tax_class_info->return_code
    if(model_response_tax_class_info->return_code) {
    if(cJSON_AddNumberToObject(item, "return_code", model_response_tax_class_info->return_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // model_response_tax_class_info->return_message
    if(model_response_tax_class_info->return_message) {
    if(cJSON_AddStringToObject(item, "return_message", model_response_tax_class_info->return_message) == NULL) {
    goto fail; //String
    }
    }


    // model_response_tax_class_info->result
    if(model_response_tax_class_info->result) {
    cJSON *result_local_JSON = response_tax_class_info_result_convertToJSON(model_response_tax_class_info->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // model_response_tax_class_info->additional_fields
    if(model_response_tax_class_info->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(model_response_tax_class_info->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // model_response_tax_class_info->custom_fields
    if(model_response_tax_class_info->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(model_response_tax_class_info->custom_fields);
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

model_response_tax_class_info_t *model_response_tax_class_info_parseFromJSON(cJSON *model_response_tax_class_infoJSON){

    model_response_tax_class_info_t *model_response_tax_class_info_local_var = NULL;

    // define the local variable for model_response_tax_class_info->result
    response_tax_class_info_result_t *result_local_nonprim = NULL;

    // model_response_tax_class_info->return_code
    cJSON *return_code = cJSON_GetObjectItemCaseSensitive(model_response_tax_class_infoJSON, "return_code");
    if (cJSON_IsNull(return_code)) {
        return_code = NULL;
    }
    if (return_code) { 
    if(!cJSON_IsNumber(return_code))
    {
    goto end; //Numeric
    }
    }

    // model_response_tax_class_info->return_message
    cJSON *return_message = cJSON_GetObjectItemCaseSensitive(model_response_tax_class_infoJSON, "return_message");
    if (cJSON_IsNull(return_message)) {
        return_message = NULL;
    }
    if (return_message) { 
    if(!cJSON_IsString(return_message) && !cJSON_IsNull(return_message))
    {
    goto end; //String
    }
    }

    // model_response_tax_class_info->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(model_response_tax_class_infoJSON, "result");
    if (cJSON_IsNull(result)) {
        result = NULL;
    }
    if (result) { 
    result_local_nonprim = response_tax_class_info_result_parseFromJSON(result); //nonprimitive
    }

    // model_response_tax_class_info->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(model_response_tax_class_infoJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // model_response_tax_class_info->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(model_response_tax_class_infoJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    model_response_tax_class_info_local_var = model_response_tax_class_info_create_internal (
        return_code ? return_code->valuedouble : 0,
        return_message && !cJSON_IsNull(return_message) ? strdup(return_message->valuestring) : NULL,
        result ? result_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return model_response_tax_class_info_local_var;
end:
    if (result_local_nonprim) {
        response_tax_class_info_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
