/*
 * order_shipment_add_batch.h
 *
 * 
 */

#ifndef _order_shipment_add_batch_H_
#define _order_shipment_add_batch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_batch_t order_shipment_add_batch_t;

#include "order_shipment_add_batch_payload_inner.h"



typedef struct order_shipment_add_batch_t {
    list_t *payload; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_batch_t;

__attribute__((deprecated)) order_shipment_add_batch_t *order_shipment_add_batch_create(
    list_t *payload
);

void order_shipment_add_batch_free(order_shipment_add_batch_t *order_shipment_add_batch);

order_shipment_add_batch_t *order_shipment_add_batch_parseFromJSON(cJSON *order_shipment_add_batchJSON);

cJSON *order_shipment_add_batch_convertToJSON(order_shipment_add_batch_t *order_shipment_add_batch);

#endif /* _order_shipment_add_batch_H_ */

