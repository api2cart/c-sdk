/*
 * webhook_events_200_response_result.h
 *
 * 
 */

#ifndef _webhook_events_200_response_result_H_
#define _webhook_events_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_events_200_response_result_t webhook_events_200_response_result_t;

#include "webhook_events_200_response_result_events_inner.h"



typedef struct webhook_events_200_response_result_t {
    list_t *events; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_events_200_response_result_t;

__attribute__((deprecated)) webhook_events_200_response_result_t *webhook_events_200_response_result_create(
    list_t *events
);

void webhook_events_200_response_result_free(webhook_events_200_response_result_t *webhook_events_200_response_result);

webhook_events_200_response_result_t *webhook_events_200_response_result_parseFromJSON(cJSON *webhook_events_200_response_resultJSON);

cJSON *webhook_events_200_response_result_convertToJSON(webhook_events_200_response_result_t *webhook_events_200_response_result);

#endif /* _webhook_events_200_response_result_H_ */

