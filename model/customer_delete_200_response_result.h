/*
 * customer_delete_200_response_result.h
 *
 * 
 */

#ifndef _customer_delete_200_response_result_H_
#define _customer_delete_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_delete_200_response_result_t customer_delete_200_response_result_t;




typedef struct customer_delete_200_response_result_t {
    int delete_items; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} customer_delete_200_response_result_t;

__attribute__((deprecated)) customer_delete_200_response_result_t *customer_delete_200_response_result_create(
    int delete_items
);

void customer_delete_200_response_result_free(customer_delete_200_response_result_t *customer_delete_200_response_result);

customer_delete_200_response_result_t *customer_delete_200_response_result_parseFromJSON(cJSON *customer_delete_200_response_resultJSON);

cJSON *customer_delete_200_response_result_convertToJSON(customer_delete_200_response_result_t *customer_delete_200_response_result);

#endif /* _customer_delete_200_response_result_H_ */

