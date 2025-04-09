/*
 * order_shipment_add_batch_payload_inner.h
 *
 * 
 */

#ifndef _order_shipment_add_batch_payload_inner_H_
#define _order_shipment_add_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_batch_payload_inner_t order_shipment_add_batch_payload_inner_t;

#include "order_shipment_add_batch_payload_inner_items_inner.h"



typedef struct order_shipment_add_batch_payload_inner_t {
    char *order_id; // string
    char *store_id; // string
    char *warehouse_id; // string
    char *carrier_id; // string
    char *carrier_name; // string
    char *tracking_number; // string
    char *tracking_link; // string
    char *shipment_provider; // string
    list_t *items; //nonprimitive container
    int send_notifications; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_batch_payload_inner_t;

__attribute__((deprecated)) order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_create(
    char *order_id,
    char *store_id,
    char *warehouse_id,
    char *carrier_id,
    char *carrier_name,
    char *tracking_number,
    char *tracking_link,
    char *shipment_provider,
    list_t *items,
    int send_notifications
);

void order_shipment_add_batch_payload_inner_free(order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner);

order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner_parseFromJSON(cJSON *order_shipment_add_batch_payload_innerJSON);

cJSON *order_shipment_add_batch_payload_inner_convertToJSON(order_shipment_add_batch_payload_inner_t *order_shipment_add_batch_payload_inner);

#endif /* _order_shipment_add_batch_payload_inner_H_ */

