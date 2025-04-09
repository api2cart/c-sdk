/*
 * order_find_200_response_result.h
 *
 * 
 */

#ifndef _order_find_200_response_result_H_
#define _order_find_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_find_200_response_result_t order_find_200_response_result_t;

#include "order.h"



typedef struct order_find_200_response_result_t {
    list_t *order; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_find_200_response_result_t;

__attribute__((deprecated)) order_find_200_response_result_t *order_find_200_response_result_create(
    list_t *order
);

void order_find_200_response_result_free(order_find_200_response_result_t *order_find_200_response_result);

order_find_200_response_result_t *order_find_200_response_result_parseFromJSON(cJSON *order_find_200_response_resultJSON);

cJSON *order_find_200_response_result_convertToJSON(order_find_200_response_result_t *order_find_200_response_result);

#endif /* _order_find_200_response_result_H_ */

