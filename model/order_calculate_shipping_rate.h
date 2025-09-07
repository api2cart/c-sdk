/*
 * order_calculate_shipping_rate.h
 *
 * 
 */

#ifndef _order_calculate_shipping_rate_H_
#define _order_calculate_shipping_rate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_shipping_rate_t order_calculate_shipping_rate_t;

#include "object.h"



typedef struct order_calculate_shipping_rate_t {
    char *code; // string
    char *name; // string
    double price; //numeric
    double price_inc_tax; //numeric
    double tax; //numeric
    double tax_rate; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_shipping_rate_t;

__attribute__((deprecated)) order_calculate_shipping_rate_t *order_calculate_shipping_rate_create(
    char *code,
    char *name,
    double price,
    double price_inc_tax,
    double tax,
    double tax_rate,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_calculate_shipping_rate_free(order_calculate_shipping_rate_t *order_calculate_shipping_rate);

order_calculate_shipping_rate_t *order_calculate_shipping_rate_parseFromJSON(cJSON *order_calculate_shipping_rateJSON);

cJSON *order_calculate_shipping_rate_convertToJSON(order_calculate_shipping_rate_t *order_calculate_shipping_rate);

#endif /* _order_calculate_shipping_rate_H_ */

