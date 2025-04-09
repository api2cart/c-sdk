#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "batch_job.h"



static batch_job_t *batch_job_create_internal(
    char *id,
    char *method,
    char *status,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *processed_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    batch_job_t *batch_job_local_var = malloc(sizeof(batch_job_t));
    if (!batch_job_local_var) {
        return NULL;
    }
    batch_job_local_var->id = id;
    batch_job_local_var->method = method;
    batch_job_local_var->status = status;
    batch_job_local_var->created_time = created_time;
    batch_job_local_var->processed_time = processed_time;
    batch_job_local_var->additional_fields = additional_fields;
    batch_job_local_var->custom_fields = custom_fields;

    batch_job_local_var->_library_owned = 1;
    return batch_job_local_var;
}

__attribute__((deprecated)) batch_job_t *batch_job_create(
    char *id,
    char *method,
    char *status,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *processed_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return batch_job_create_internal (
        id,
        method,
        status,
        created_time,
        processed_time,
        additional_fields,
        custom_fields
        );
}

void batch_job_free(batch_job_t *batch_job) {
    if(NULL == batch_job){
        return ;
    }
    if(batch_job->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "batch_job_free");
        return ;
    }
    listEntry_t *listEntry;
    if (batch_job->id) {
        free(batch_job->id);
        batch_job->id = NULL;
    }
    if (batch_job->method) {
        free(batch_job->method);
        batch_job->method = NULL;
    }
    if (batch_job->status) {
        free(batch_job->status);
        batch_job->status = NULL;
    }
    if (batch_job->created_time) {
        a2_c_date_time_free(batch_job->created_time);
        batch_job->created_time = NULL;
    }
    if (batch_job->processed_time) {
        a2_c_date_time_free(batch_job->processed_time);
        batch_job->processed_time = NULL;
    }
    if (batch_job->additional_fields) {
        object_free(batch_job->additional_fields);
        batch_job->additional_fields = NULL;
    }
    if (batch_job->custom_fields) {
        object_free(batch_job->custom_fields);
        batch_job->custom_fields = NULL;
    }
    free(batch_job);
}

cJSON *batch_job_convertToJSON(batch_job_t *batch_job) {
    cJSON *item = cJSON_CreateObject();

    // batch_job->id
    if(batch_job->id) {
    if(cJSON_AddStringToObject(item, "id", batch_job->id) == NULL) {
    goto fail; //String
    }
    }


    // batch_job->method
    if(batch_job->method) {
    if(cJSON_AddStringToObject(item, "method", batch_job->method) == NULL) {
    goto fail; //String
    }
    }


    // batch_job->status
    if(batch_job->status) {
    if(cJSON_AddStringToObject(item, "status", batch_job->status) == NULL) {
    goto fail; //String
    }
    }


    // batch_job->created_time
    if(batch_job->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(batch_job->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // batch_job->processed_time
    if(batch_job->processed_time) {
    cJSON *processed_time_local_JSON = a2_c_date_time_convertToJSON(batch_job->processed_time);
    if(processed_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "processed_time", processed_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // batch_job->additional_fields
    if(batch_job->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(batch_job->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // batch_job->custom_fields
    if(batch_job->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(batch_job->custom_fields);
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

batch_job_t *batch_job_parseFromJSON(cJSON *batch_jobJSON){

    batch_job_t *batch_job_local_var = NULL;

    // define the local variable for batch_job->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for batch_job->processed_time
    a2_c_date_time_t *processed_time_local_nonprim = NULL;

    // batch_job->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // batch_job->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "method");
    if (cJSON_IsNull(method)) {
        method = NULL;
    }
    if (method) { 
    if(!cJSON_IsString(method) && !cJSON_IsNull(method))
    {
    goto end; //String
    }
    }

    // batch_job->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // batch_job->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // batch_job->processed_time
    cJSON *processed_time = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "processed_time");
    if (cJSON_IsNull(processed_time)) {
        processed_time = NULL;
    }
    if (processed_time) { 
    processed_time_local_nonprim = a2_c_date_time_parseFromJSON(processed_time); //nonprimitive
    }

    // batch_job->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // batch_job->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(batch_jobJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    batch_job_local_var = batch_job_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        method && !cJSON_IsNull(method) ? strdup(method->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        created_time ? created_time_local_nonprim : NULL,
        processed_time ? processed_time_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return batch_job_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (processed_time_local_nonprim) {
        a2_c_date_time_free(processed_time_local_nonprim);
        processed_time_local_nonprim = NULL;
    }
    return NULL;

}
