/*
 * batch_job.h
 *
 * 
 */

#ifndef _batch_job_H_
#define _batch_job_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct batch_job_t batch_job_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct batch_job_t {
    char *id; // string
    char *method; // string
    char *status; // string
    struct a2_c_date_time_t *created_time; //model
    struct a2_c_date_time_t *processed_time; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} batch_job_t;

__attribute__((deprecated)) batch_job_t *batch_job_create(
    char *id,
    char *method,
    char *status,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *processed_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void batch_job_free(batch_job_t *batch_job);

batch_job_t *batch_job_parseFromJSON(cJSON *batch_jobJSON);

cJSON *batch_job_convertToJSON(batch_job_t *batch_job);

#endif /* _batch_job_H_ */

