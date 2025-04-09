/*
 * customer_add_200_response_result.h
 *
 * 
 */

#ifndef _customer_add_200_response_result_H_
#define _customer_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_add_200_response_result_t customer_add_200_response_result_t;




typedef struct customer_add_200_response_result_t {
    char *customer_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_add_200_response_result_t;

__attribute__((deprecated)) customer_add_200_response_result_t *customer_add_200_response_result_create(
    char *customer_id
);

void customer_add_200_response_result_free(customer_add_200_response_result_t *customer_add_200_response_result);

customer_add_200_response_result_t *customer_add_200_response_result_parseFromJSON(cJSON *customer_add_200_response_resultJSON);

cJSON *customer_add_200_response_result_convertToJSON(customer_add_200_response_result_t *customer_add_200_response_result);

#endif /* _customer_add_200_response_result_H_ */

