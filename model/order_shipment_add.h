/*
 * order_shipment_add.h
 *
 * 
 */

#ifndef _order_shipment_add_H_
#define _order_shipment_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_shipment_add_t order_shipment_add_t;

#include "order_shipment_add_items_inner.h"
#include "order_shipment_add_tracking_numbers_inner.h"



typedef struct order_shipment_add_t {
    char *order_id; // string
    char *warehouse_id; // string
    char *store_id; // string
    char *shipment_provider; // string
    char *shipping_method; // string
    list_t *items; //nonprimitive container
    list_t *tracking_numbers; //nonprimitive container
    char *tracking_link; // string
    int is_shipped; //boolean
    int send_notifications; //boolean
    int adjust_stock; //boolean
    int enable_cache; //boolean
    int check_process_status; //boolean
    int use_latest_api_version; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} order_shipment_add_t;

__attribute__((deprecated)) order_shipment_add_t *order_shipment_add_create(
    char *order_id,
    char *warehouse_id,
    char *store_id,
    char *shipment_provider,
    char *shipping_method,
    list_t *items,
    list_t *tracking_numbers,
    char *tracking_link,
    int is_shipped,
    int send_notifications,
    int adjust_stock,
    int enable_cache,
    int check_process_status,
    int use_latest_api_version
);

void order_shipment_add_free(order_shipment_add_t *order_shipment_add);

order_shipment_add_t *order_shipment_add_parseFromJSON(cJSON *order_shipment_addJSON);

cJSON *order_shipment_add_convertToJSON(order_shipment_add_t *order_shipment_add);

#endif /* _order_shipment_add_H_ */

