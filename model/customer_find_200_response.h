/*
 * customer_find_200_response.h
 *
 * 
 */

#ifndef _customer_find_200_response_H_
#define _customer_find_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_find_200_response_t customer_find_200_response_t;

#include "customer_find_200_response_result.h"



typedef struct customer_find_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct customer_find_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} customer_find_200_response_t;

__attribute__((deprecated)) customer_find_200_response_t *customer_find_200_response_create(
    int return_code,
    char *return_message,
    customer_find_200_response_result_t *result
);

void customer_find_200_response_free(customer_find_200_response_t *customer_find_200_response);

customer_find_200_response_t *customer_find_200_response_parseFromJSON(cJSON *customer_find_200_responseJSON);

cJSON *customer_find_200_response_convertToJSON(customer_find_200_response_t *customer_find_200_response);

#endif /* _customer_find_200_response_H_ */

