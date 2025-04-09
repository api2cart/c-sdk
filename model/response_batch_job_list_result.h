/*
 * response_batch_job_list_result.h
 *
 * 
 */

#ifndef _response_batch_job_list_result_H_
#define _response_batch_job_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_batch_job_list_result_t response_batch_job_list_result_t;

#include "batch_job.h"
#include "object.h"



typedef struct response_batch_job_list_result_t {
    list_t *jobs; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_batch_job_list_result_t;

__attribute__((deprecated)) response_batch_job_list_result_t *response_batch_job_list_result_create(
    list_t *jobs,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_batch_job_list_result_free(response_batch_job_list_result_t *response_batch_job_list_result);

response_batch_job_list_result_t *response_batch_job_list_result_parseFromJSON(cJSON *response_batch_job_list_resultJSON);

cJSON *response_batch_job_list_result_convertToJSON(response_batch_job_list_result_t *response_batch_job_list_result);

#endif /* _response_batch_job_list_result_H_ */

