/*
 * order_shipment_add_tracking_numbers_inner.h
 *
 * 
 */

#ifndef _order_shipment_add_tracking_numbers_inner_H_
#define _order_shipment_add_tracking_numbers_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_tracking_numbers_inner_t order_shipment_add_tracking_numbers_inner_t;




typedef struct order_shipment_add_tracking_numbers_inner_t {
    char *carrier_id; // string
    char *tracking_number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_tracking_numbers_inner_t;

__attribute__((deprecated)) order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_create(
    char *carrier_id,
    char *tracking_number
);

void order_shipment_add_tracking_numbers_inner_free(order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner);

order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_parseFromJSON(cJSON *order_shipment_add_tracking_numbers_innerJSON);

cJSON *order_shipment_add_tracking_numbers_inner_convertToJSON(order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner);

#endif /* _order_shipment_add_tracking_numbers_inner_H_ */

