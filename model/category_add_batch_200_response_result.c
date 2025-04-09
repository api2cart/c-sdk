#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_batch_200_response_result.h"



static category_add_batch_200_response_result_t *category_add_batch_200_response_result_create_internal(
    char *job_id
    ) {
    category_add_batch_200_response_result_t *category_add_batch_200_response_result_local_var = malloc(sizeof(category_add_batch_200_response_result_t));
    if (!category_add_batch_200_response_result_local_var) {
        return NULL;
    }
    category_add_batch_200_response_result_local_var->job_id = job_id;

    category_add_batch_200_response_result_local_var->_library_owned = 1;
    return category_add_batch_200_response_result_local_var;
}

__attribute__((deprecated)) category_add_batch_200_response_result_t *category_add_batch_200_response_result_create(
    char *job_id
    ) {
    return category_add_batch_200_response_result_create_internal (
        job_id
        );
}

void category_add_batch_200_response_result_free(category_add_batch_200_response_result_t *category_add_batch_200_response_result) {
    if(NULL == category_add_batch_200_response_result){
        return ;
    }
    if(category_add_batch_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_batch_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_batch_200_response_result->job_id) {
        free(category_add_batch_200_response_result->job_id);
        category_add_batch_200_response_result->job_id = NULL;
    }
    free(category_add_batch_200_response_result);
}

cJSON *category_add_batch_200_response_result_convertToJSON(category_add_batch_200_response_result_t *category_add_batch_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_add_batch_200_response_result->job_id
    if(category_add_batch_200_response_result->job_id) {
    if(cJSON_AddStringToObject(item, "job_id", category_add_batch_200_response_result->job_id) == NULL) {
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

category_add_batch_200_response_result_t *category_add_batch_200_response_result_parseFromJSON(cJSON *category_add_batch_200_response_resultJSON){

    category_add_batch_200_response_result_t *category_add_batch_200_response_result_local_var = NULL;

    // category_add_batch_200_response_result->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(category_add_batch_200_response_resultJSON, "job_id");
    if (cJSON_IsNull(job_id)) {
        job_id = NULL;
    }
    if (job_id) { 
    if(!cJSON_IsString(job_id) && !cJSON_IsNull(job_id))
    {
    goto end; //String
    }
    }


    category_add_batch_200_response_result_local_var = category_add_batch_200_response_result_create_internal (
        job_id && !cJSON_IsNull(job_id) ? strdup(job_id->valuestring) : NULL
        );

    return category_add_batch_200_response_result_local_var;
end:
    return NULL;

}
