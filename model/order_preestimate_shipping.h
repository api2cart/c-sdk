/*
 * order_preestimate_shipping.h
 *
 * 
 */

#ifndef _order_preestimate_shipping_H_
#define _order_preestimate_shipping_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_preestimate_shipping_t order_preestimate_shipping_t;

#include "object.h"



typedef struct order_preestimate_shipping_t {
    char *method_code; // string
    char *method_name; // string
    char *carrier_code; // string
    char *carrier_name; // string
    char *description; // string
    double price; //numeric
    double price_inc_tax; //numeric
    char *delivery_time; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_preestimate_shipping_t;

__attribute__((deprecated)) order_preestimate_shipping_t *order_preestimate_shipping_create(
    char *method_code,
    char *method_name,
    char *carrier_code,
    char *carrier_name,
    char *description,
    double price,
    double price_inc_tax,
    char *delivery_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_preestimate_shipping_free(order_preestimate_shipping_t *order_preestimate_shipping);

order_preestimate_shipping_t *order_preestimate_shipping_parseFromJSON(cJSON *order_preestimate_shippingJSON);

cJSON *order_preestimate_shipping_convertToJSON(order_preestimate_shipping_t *order_preestimate_shipping);

#endif /* _order_preestimate_shipping_H_ */

