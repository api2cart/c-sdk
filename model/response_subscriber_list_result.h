/*
 * response_subscriber_list_result.h
 *
 * 
 */

#ifndef _response_subscriber_list_result_H_
#define _response_subscriber_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_subscriber_list_result_t response_subscriber_list_result_t;

#include "object.h"
#include "subscriber.h"



typedef struct response_subscriber_list_result_t {
    int total_count; //numeric
    list_t *subscribers; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_subscriber_list_result_t;

__attribute__((deprecated)) response_subscriber_list_result_t *response_subscriber_list_result_create(
    int total_count,
    list_t *subscribers,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_subscriber_list_result_free(response_subscriber_list_result_t *response_subscriber_list_result);

response_subscriber_list_result_t *response_subscriber_list_result_parseFromJSON(cJSON *response_subscriber_list_resultJSON);

cJSON *response_subscriber_list_result_convertToJSON(response_subscriber_list_result_t *response_subscriber_list_result);

#endif /* _response_subscriber_list_result_H_ */

