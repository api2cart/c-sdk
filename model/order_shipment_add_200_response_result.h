/*
 * order_shipment_add_200_response_result.h
 *
 * 
 */

#ifndef _order_shipment_add_200_response_result_H_
#define _order_shipment_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_200_response_result_t order_shipment_add_200_response_result_t;




typedef struct order_shipment_add_200_response_result_t {
    char *shipment_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_200_response_result_t;

__attribute__((deprecated)) order_shipment_add_200_response_result_t *order_shipment_add_200_response_result_create(
    char *shipment_id
);

void order_shipment_add_200_response_result_free(order_shipment_add_200_response_result_t *order_shipment_add_200_response_result);

order_shipment_add_200_response_result_t *order_shipment_add_200_response_result_parseFromJSON(cJSON *order_shipment_add_200_response_resultJSON);

cJSON *order_shipment_add_200_response_result_convertToJSON(order_shipment_add_200_response_result_t *order_shipment_add_200_response_result);

#endif /* _order_shipment_add_200_response_result_H_ */

