/*
 * batch_job_result_item.h
 *
 * 
 */

#ifndef _batch_job_result_item_H_
#define _batch_job_result_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct batch_job_result_item_t batch_job_result_item_t;

#include "object.h"



typedef struct batch_job_result_item_t {
    int id; //numeric
    char *status; // string
    char *entity_id; // string
    list_t *errors; //primitive container
    list_t *warnings; //primitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} batch_job_result_item_t;

__attribute__((deprecated)) batch_job_result_item_t *batch_job_result_item_create(
    int id,
    char *status,
    char *entity_id,
    list_t *errors,
    list_t *warnings,
    object_t *additional_fields,
    object_t *custom_fields
);

void batch_job_result_item_free(batch_job_result_item_t *batch_job_result_item);

batch_job_result_item_t *batch_job_result_item_parseFromJSON(cJSON *batch_job_result_itemJSON);

cJSON *batch_job_result_item_convertToJSON(batch_job_result_item_t *batch_job_result_item);

#endif /* _batch_job_result_item_H_ */

