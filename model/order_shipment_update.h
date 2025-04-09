/*
 * order_shipment_update.h
 *
 * 
 */

#ifndef _order_shipment_update_H_
#define _order_shipment_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_update_t order_shipment_update_t;

#include "order_shipment_add_tracking_numbers_inner.h"



typedef struct order_shipment_update_t {
    char *store_id; // string
    char *shipment_id; // string
    char *order_id; // string
    list_t *tracking_numbers; //nonprimitive container
    int replace; //boolean
    int is_shipped; //boolean
    char *tracking_link; // string
    char *delivered_at; // string
    char *shipment_provider; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_update_t;

__attribute__((deprecated)) order_shipment_update_t *order_shipment_update_create(
    char *store_id,
    char *shipment_id,
    char *order_id,
    list_t *tracking_numbers,
    int replace,
    int is_shipped,
    char *tracking_link,
    char *delivered_at,
    char *shipment_provider
);

void order_shipment_update_free(order_shipment_update_t *order_shipment_update);

order_shipment_update_t *order_shipment_update_parseFromJSON(cJSON *order_shipment_updateJSON);

cJSON *order_shipment_update_convertToJSON(order_shipment_update_t *order_shipment_update);

#endif /* _order_shipment_update_H_ */

