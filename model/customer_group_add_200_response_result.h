/*
 * customer_group_add_200_response_result.h
 *
 * 
 */

#ifndef _customer_group_add_200_response_result_H_
#define _customer_group_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_group_add_200_response_result_t customer_group_add_200_response_result_t;




typedef struct customer_group_add_200_response_result_t {
    char *group_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} customer_group_add_200_response_result_t;

__attribute__((deprecated)) customer_group_add_200_response_result_t *customer_group_add_200_response_result_create(
    char *group_id
);

void customer_group_add_200_response_result_free(customer_group_add_200_response_result_t *customer_group_add_200_response_result);

customer_group_add_200_response_result_t *customer_group_add_200_response_result_parseFromJSON(cJSON *customer_group_add_200_response_resultJSON);

cJSON *customer_group_add_200_response_result_convertToJSON(customer_group_add_200_response_result_t *customer_group_add_200_response_result);

#endif /* _customer_group_add_200_response_result_H_ */

