/*
 * order_shipment_delete_200_response.h
 *
 * 
 */

#ifndef _order_shipment_delete_200_response_H_
#define _order_shipment_delete_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_delete_200_response_t order_shipment_delete_200_response_t;

#include "order_shipment_delete_200_response_result.h"



typedef struct order_shipment_delete_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct order_shipment_delete_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_delete_200_response_t;

__attribute__((deprecated)) order_shipment_delete_200_response_t *order_shipment_delete_200_response_create(
    int return_code,
    char *return_message,
    order_shipment_delete_200_response_result_t *result
);

void order_shipment_delete_200_response_free(order_shipment_delete_200_response_t *order_shipment_delete_200_response);

order_shipment_delete_200_response_t *order_shipment_delete_200_response_parseFromJSON(cJSON *order_shipment_delete_200_responseJSON);

cJSON *order_shipment_delete_200_response_convertToJSON(order_shipment_delete_200_response_t *order_shipment_delete_200_response);

#endif /* _order_shipment_delete_200_response_H_ */

