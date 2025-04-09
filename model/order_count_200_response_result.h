/*
 * order_count_200_response_result.h
 *
 * 
 */

#ifndef _order_count_200_response_result_H_
#define _order_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_count_200_response_result_t order_count_200_response_result_t;




typedef struct order_count_200_response_result_t {
    int orders_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_count_200_response_result_t;

__attribute__((deprecated)) order_count_200_response_result_t *order_count_200_response_result_create(
    int orders_count
);

void order_count_200_response_result_free(order_count_200_response_result_t *order_count_200_response_result);

order_count_200_response_result_t *order_count_200_response_result_parseFromJSON(cJSON *order_count_200_response_resultJSON);

cJSON *order_count_200_response_result_convertToJSON(order_count_200_response_result_t *order_count_200_response_result);

#endif /* _order_count_200_response_result_H_ */

