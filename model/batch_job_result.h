/*
 * batch_job_result.h
 *
 * 
 */

#ifndef _batch_job_result_H_
#define _batch_job_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct batch_job_result_t batch_job_result_t;

#include "batch_job_result_item.h"
#include "object.h"



typedef struct batch_job_result_t {
    int job_id; //numeric
    char *job_name; // string
    int items_processed; //numeric
    int items_succeed; //numeric
    list_t *items; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} batch_job_result_t;

__attribute__((deprecated)) batch_job_result_t *batch_job_result_create(
    int job_id,
    char *job_name,
    int items_processed,
    int items_succeed,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
);

void batch_job_result_free(batch_job_result_t *batch_job_result);

batch_job_result_t *batch_job_result_parseFromJSON(cJSON *batch_job_resultJSON);

cJSON *batch_job_result_convertToJSON(batch_job_result_t *batch_job_result);

#endif /* _batch_job_result_H_ */

