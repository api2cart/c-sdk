/*
 * order_calculate_200_response.h
 *
 * 
 */

#ifndef _order_calculate_200_response_H_
#define _order_calculate_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_200_response_t order_calculate_200_response_t;

#include "order_calculate.h"



typedef struct order_calculate_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct order_calculate_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_200_response_t;

__attribute__((deprecated)) order_calculate_200_response_t *order_calculate_200_response_create(
    int return_code,
    char *return_message,
    order_calculate_t *result
);

void order_calculate_200_response_free(order_calculate_200_response_t *order_calculate_200_response);

order_calculate_200_response_t *order_calculate_200_response_parseFromJSON(cJSON *order_calculate_200_responseJSON);

cJSON *order_calculate_200_response_convertToJSON(order_calculate_200_response_t *order_calculate_200_response);

#endif /* _order_calculate_200_response_H_ */

