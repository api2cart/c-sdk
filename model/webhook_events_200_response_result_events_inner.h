/*
 * webhook_events_200_response_result_events_inner.h
 *
 * 
 */

#ifndef _webhook_events_200_response_result_events_inner_H_
#define _webhook_events_200_response_result_events_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_events_200_response_result_events_inner_t webhook_events_200_response_result_events_inner_t;




typedef struct webhook_events_200_response_result_events_inner_t {
    char *webhook_name; // string
    char *entity; // string
    char *action; // string

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_events_200_response_result_events_inner_t;

__attribute__((deprecated)) webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_create(
    char *webhook_name,
    char *entity,
    char *action
);

void webhook_events_200_response_result_events_inner_free(webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner);

webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner_parseFromJSON(cJSON *webhook_events_200_response_result_events_innerJSON);

cJSON *webhook_events_200_response_result_events_inner_convertToJSON(webhook_events_200_response_result_events_inner_t *webhook_events_200_response_result_events_inner);

#endif /* _webhook_events_200_response_result_events_inner_H_ */

