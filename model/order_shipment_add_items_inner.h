/*
 * order_shipment_add_items_inner.h
 *
 * 
 */

#ifndef _order_shipment_add_items_inner_H_
#define _order_shipment_add_items_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_items_inner_t order_shipment_add_items_inner_t;




typedef struct order_shipment_add_items_inner_t {
    char *order_product_id; // string
    double quantity; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_items_inner_t;

__attribute__((deprecated)) order_shipment_add_items_inner_t *order_shipment_add_items_inner_create(
    char *order_product_id,
    double quantity
);

void order_shipment_add_items_inner_free(order_shipment_add_items_inner_t *order_shipment_add_items_inner);

order_shipment_add_items_inner_t *order_shipment_add_items_inner_parseFromJSON(cJSON *order_shipment_add_items_innerJSON);

cJSON *order_shipment_add_items_inner_convertToJSON(order_shipment_add_items_inner_t *order_shipment_add_items_inner);

#endif /* _order_shipment_add_items_inner_H_ */

