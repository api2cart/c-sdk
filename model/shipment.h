/*
 * shipment.h
 *
 * 
 */

#ifndef _shipment_H_
#define _shipment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_t shipment_t;

#include "a2_c_date_time.h"
#include "object.h"
#include "shipment_item.h"
#include "shipment_tracking_number.h"



typedef struct shipment_t {
    char *id; // string
    char *order_id; // string
    char *name; // string
    char *warehouse_id; // string
    char *shipment_provider; // string
    list_t *tracking_numbers; //nonprimitive container
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_time; //model
    list_t *items; //nonprimitive container
    int is_shipped; //boolean
    struct a2_c_date_time_t *delivered_at; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} shipment_t;

__attribute__((deprecated)) shipment_t *shipment_create(
    char *id,
    char *order_id,
    char *name,
    char *warehouse_id,
    char *shipment_provider,
    list_t *tracking_numbers,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_time,
    list_t *items,
    int is_shipped,
    a2_c_date_time_t *delivered_at,
    object_t *additional_fields,
    object_t *custom_fields
);

void shipment_free(shipment_t *shipment);

shipment_t *shipment_parseFromJSON(cJSON *shipmentJSON);

cJSON *shipment_convertToJSON(shipment_t *shipment);

#endif /* _shipment_H_ */

