/*
 * shipment_tracking_number.h
 *
 * 
 */

#ifndef _shipment_tracking_number_H_
#define _shipment_tracking_number_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_tracking_number_t shipment_tracking_number_t;

#include "object.h"



typedef struct shipment_tracking_number_t {
    char *carrier_id; // string
    char *tracking_number; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} shipment_tracking_number_t;

__attribute__((deprecated)) shipment_tracking_number_t *shipment_tracking_number_create(
    char *carrier_id,
    char *tracking_number,
    object_t *additional_fields,
    object_t *custom_fields
);

void shipment_tracking_number_free(shipment_tracking_number_t *shipment_tracking_number);

shipment_tracking_number_t *shipment_tracking_number_parseFromJSON(cJSON *shipment_tracking_numberJSON);

cJSON *shipment_tracking_number_convertToJSON(shipment_tracking_number_t *shipment_tracking_number);

#endif /* _shipment_tracking_number_H_ */

