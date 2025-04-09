/*
 * order_refund_add_200_response.h
 *
 * 
 */

#ifndef _order_refund_add_200_response_H_
#define _order_refund_add_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_refund_add_200_response_t order_refund_add_200_response_t;

#include "order_refund_add_200_response_result.h"



typedef struct order_refund_add_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct order_refund_add_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} order_refund_add_200_response_t;

__attribute__((deprecated)) order_refund_add_200_response_t *order_refund_add_200_response_create(
    int return_code,
    char *return_message,
    order_refund_add_200_response_result_t *result
);

void order_refund_add_200_response_free(order_refund_add_200_response_t *order_refund_add_200_response);

order_refund_add_200_response_t *order_refund_add_200_response_parseFromJSON(cJSON *order_refund_add_200_responseJSON);

cJSON *order_refund_add_200_response_convertToJSON(order_refund_add_200_response_t *order_refund_add_200_response);

#endif /* _order_refund_add_200_response_H_ */

