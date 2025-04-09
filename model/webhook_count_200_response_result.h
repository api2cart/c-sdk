/*
 * webhook_count_200_response_result.h
 *
 * 
 */

#ifndef _webhook_count_200_response_result_H_
#define _webhook_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_count_200_response_result_t webhook_count_200_response_result_t;




typedef struct webhook_count_200_response_result_t {
    int webhook_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_count_200_response_result_t;

__attribute__((deprecated)) webhook_count_200_response_result_t *webhook_count_200_response_result_create(
    int webhook_count
);

void webhook_count_200_response_result_free(webhook_count_200_response_result_t *webhook_count_200_response_result);

webhook_count_200_response_result_t *webhook_count_200_response_result_parseFromJSON(cJSON *webhook_count_200_response_resultJSON);

cJSON *webhook_count_200_response_result_convertToJSON(webhook_count_200_response_result_t *webhook_count_200_response_result);

#endif /* _webhook_count_200_response_result_H_ */

