/*
 * webhook_list_200_response_result.h
 *
 * 
 */

#ifndef _webhook_list_200_response_result_H_
#define _webhook_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_list_200_response_result_t webhook_list_200_response_result_t;

#include "webhook.h"



typedef struct webhook_list_200_response_result_t {
    list_t *webhook; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_list_200_response_result_t;

__attribute__((deprecated)) webhook_list_200_response_result_t *webhook_list_200_response_result_create(
    list_t *webhook
);

void webhook_list_200_response_result_free(webhook_list_200_response_result_t *webhook_list_200_response_result);

webhook_list_200_response_result_t *webhook_list_200_response_result_parseFromJSON(cJSON *webhook_list_200_response_resultJSON);

cJSON *webhook_list_200_response_result_convertToJSON(webhook_list_200_response_result_t *webhook_list_200_response_result);

#endif /* _webhook_list_200_response_result_H_ */

