/*
 * order_refund_add_200_response_result.h
 *
 * 
 */

#ifndef _order_refund_add_200_response_result_H_
#define _order_refund_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_refund_add_200_response_result_t order_refund_add_200_response_result_t;




typedef struct order_refund_add_200_response_result_t {
    char *refund_id; // string
    char *additional_refund_ids; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_refund_add_200_response_result_t;

__attribute__((deprecated)) order_refund_add_200_response_result_t *order_refund_add_200_response_result_create(
    char *refund_id,
    char *additional_refund_ids
);

void order_refund_add_200_response_result_free(order_refund_add_200_response_result_t *order_refund_add_200_response_result);

order_refund_add_200_response_result_t *order_refund_add_200_response_result_parseFromJSON(cJSON *order_refund_add_200_response_resultJSON);

cJSON *order_refund_add_200_response_result_convertToJSON(order_refund_add_200_response_result_t *order_refund_add_200_response_result);

#endif /* _order_refund_add_200_response_result_H_ */

