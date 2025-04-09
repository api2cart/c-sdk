/*
 * webhook_list_200_response.h
 *
 * 
 */

#ifndef _webhook_list_200_response_H_
#define _webhook_list_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_list_200_response_t webhook_list_200_response_t;

#include "webhook_list_200_response_result.h"



typedef struct webhook_list_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct webhook_list_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_list_200_response_t;

__attribute__((deprecated)) webhook_list_200_response_t *webhook_list_200_response_create(
    int return_code,
    char *return_message,
    webhook_list_200_response_result_t *result
);

void webhook_list_200_response_free(webhook_list_200_response_t *webhook_list_200_response);

webhook_list_200_response_t *webhook_list_200_response_parseFromJSON(cJSON *webhook_list_200_responseJSON);

cJSON *webhook_list_200_response_convertToJSON(webhook_list_200_response_t *webhook_list_200_response);

#endif /* _webhook_list_200_response_H_ */

