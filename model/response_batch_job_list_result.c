#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_batch_job_list_result.h"



static response_batch_job_list_result_t *response_batch_job_list_result_create_internal(
    list_t *jobs,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_batch_job_list_result_t *response_batch_job_list_result_local_var = malloc(sizeof(response_batch_job_list_result_t));
    if (!response_batch_job_list_result_local_var) {
        return NULL;
    }
    response_batch_job_list_result_local_var->jobs = jobs;
    response_batch_job_list_result_local_var->additional_fields = additional_fields;
    response_batch_job_list_result_local_var->custom_fields = custom_fields;

    response_batch_job_list_result_local_var->_library_owned = 1;
    return response_batch_job_list_result_local_var;
}

__attribute__((deprecated)) response_batch_job_list_result_t *response_batch_job_list_result_create(
    list_t *jobs,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_batch_job_list_result_create_internal (
        jobs,
        additional_fields,
        custom_fields
        );
}

void response_batch_job_list_result_free(response_batch_job_list_result_t *response_batch_job_list_result) {
    if(NULL == response_batch_job_list_result){
        return ;
    }
    if(response_batch_job_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_batch_job_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_batch_job_list_result->jobs) {
        list_ForEach(listEntry, response_batch_job_list_result->jobs) {
            batch_job_free(listEntry->data);
        }
        list_freeList(response_batch_job_list_result->jobs);
        response_batch_job_list_result->jobs = NULL;
    }
    if (response_batch_job_list_result->additional_fields) {
        object_free(response_batch_job_list_result->additional_fields);
        response_batch_job_list_result->additional_fields = NULL;
    }
    if (response_batch_job_list_result->custom_fields) {
        object_free(response_batch_job_list_result->custom_fields);
        response_batch_job_list_result->custom_fields = NULL;
    }
    free(response_batch_job_list_result);
}

cJSON *response_batch_job_list_result_convertToJSON(response_batch_job_list_result_t *response_batch_job_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_batch_job_list_result->jobs
    if(response_batch_job_list_result->jobs) {
    cJSON *jobs = cJSON_AddArrayToObject(item, "jobs");
    if(jobs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobsListEntry;
    if (response_batch_job_list_result->jobs) {
    list_ForEach(jobsListEntry, response_batch_job_list_result->jobs) {
    cJSON *itemLocal = batch_job_convertToJSON(jobsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(jobs, itemLocal);
    }
    }
    }


    // response_batch_job_list_result->additional_fields
    if(response_batch_job_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_batch_job_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_batch_job_list_result->custom_fields
    if(response_batch_job_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_batch_job_list_result->custom_fields);
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

response_batch_job_list_result_t *response_batch_job_list_result_parseFromJSON(cJSON *response_batch_job_list_resultJSON){

    response_batch_job_list_result_t *response_batch_job_list_result_local_var = NULL;

    // define the local list for response_batch_job_list_result->jobs
    list_t *jobsList = NULL;

    // response_batch_job_list_result->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(response_batch_job_list_resultJSON, "jobs");
    if (cJSON_IsNull(jobs)) {
        jobs = NULL;
    }
    if (jobs) { 
    cJSON *jobs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(jobs)){
        goto end; //nonprimitive container
    }

    jobsList = list_createList();

    cJSON_ArrayForEach(jobs_local_nonprimitive,jobs )
    {
        if(!cJSON_IsObject(jobs_local_nonprimitive)){
            goto end;
        }
        batch_job_t *jobsItem = batch_job_parseFromJSON(jobs_local_nonprimitive);

        list_addElement(jobsList, jobsItem);
    }
    }

    // response_batch_job_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_batch_job_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_batch_job_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_batch_job_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_batch_job_list_result_local_var = response_batch_job_list_result_create_internal (
        jobs ? jobsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_batch_job_list_result_local_var;
end:
    if (jobsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobsList) {
            batch_job_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobsList);
        jobsList = NULL;
    }
    return NULL;

}
