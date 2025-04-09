/*
 * order_add_200_response_result.h
 *
 * 
 */

#ifndef _order_add_200_response_result_H_
#define _order_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_200_response_result_t order_add_200_response_result_t;




typedef struct order_add_200_response_result_t {
    char *order_id; // string
    char *id; // string
    char *customer_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_200_response_result_t;

__attribute__((deprecated)) order_add_200_response_result_t *order_add_200_response_result_create(
    char *order_id,
    char *id,
    char *customer_id
);

void order_add_200_response_result_free(order_add_200_response_result_t *order_add_200_response_result);

order_add_200_response_result_t *order_add_200_response_result_parseFromJSON(cJSON *order_add_200_response_resultJSON);

cJSON *order_add_200_response_result_convertToJSON(order_add_200_response_result_t *order_add_200_response_result);

#endif /* _order_add_200_response_result_H_ */

