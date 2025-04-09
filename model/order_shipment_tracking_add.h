/*
 * order_shipment_tracking_add.h
 *
 * 
 */

#ifndef _order_shipment_tracking_add_H_
#define _order_shipment_tracking_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_tracking_add_t order_shipment_tracking_add_t;




typedef struct order_shipment_tracking_add_t {
    char *store_id; // string
    char *order_id; // string
    char *shipment_id; // string
    char *carrier_id; // string
    char *tracking_provider; // string
    char *tracking_number; // string
    char *tracking_link; // string
    int send_notifications; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_tracking_add_t;

__attribute__((deprecated)) order_shipment_tracking_add_t *order_shipment_tracking_add_create(
    char *store_id,
    char *order_id,
    char *shipment_id,
    char *carrier_id,
    char *tracking_provider,
    char *tracking_number,
    char *tracking_link,
    int send_notifications
);

void order_shipment_tracking_add_free(order_shipment_tracking_add_t *order_shipment_tracking_add);

order_shipment_tracking_add_t *order_shipment_tracking_add_parseFromJSON(cJSON *order_shipment_tracking_addJSON);

cJSON *order_shipment_tracking_add_convertToJSON(order_shipment_tracking_add_t *order_shipment_tracking_add);

#endif /* _order_shipment_tracking_add_H_ */

