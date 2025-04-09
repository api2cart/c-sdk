/*
 * order_fulfillment_status_list_200_response_result.h
 *
 * 
 */

#ifndef _order_fulfillment_status_list_200_response_result_H_
#define _order_fulfillment_status_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_fulfillment_status_list_200_response_result_t order_fulfillment_status_list_200_response_result_t;

#include "order_financial_status_list_200_response_result_order_financial_statuses_inner.h"



typedef struct order_fulfillment_status_list_200_response_result_t {
    list_t *order_fulfillment_statuses; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_fulfillment_status_list_200_response_result_t;

__attribute__((deprecated)) order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_create(
    list_t *order_fulfillment_statuses
);

void order_fulfillment_status_list_200_response_result_free(order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result);

order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result_parseFromJSON(cJSON *order_fulfillment_status_list_200_response_resultJSON);

cJSON *order_fulfillment_status_list_200_response_result_convertToJSON(order_fulfillment_status_list_200_response_result_t *order_fulfillment_status_list_200_response_result);

#endif /* _order_fulfillment_status_list_200_response_result_H_ */

