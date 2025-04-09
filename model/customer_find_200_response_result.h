/*
 * customer_find_200_response_result.h
 *
 * 
 */

#ifndef _customer_find_200_response_result_H_
#define _customer_find_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_find_200_response_result_t customer_find_200_response_result_t;




typedef struct customer_find_200_response_result_t {
    char *id; // string
    char *email; // string
    char *first_name; // string
    char *last_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_find_200_response_result_t;

__attribute__((deprecated)) customer_find_200_response_result_t *customer_find_200_response_result_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name
);

void customer_find_200_response_result_free(customer_find_200_response_result_t *customer_find_200_response_result);

customer_find_200_response_result_t *customer_find_200_response_result_parseFromJSON(cJSON *customer_find_200_response_resultJSON);

cJSON *customer_find_200_response_result_convertToJSON(customer_find_200_response_result_t *customer_find_200_response_result);

#endif /* _customer_find_200_response_result_H_ */

