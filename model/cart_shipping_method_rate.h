/*
 * cart_shipping_method_rate.h
 *
 * 
 */

#ifndef _cart_shipping_method_rate_H_
#define _cart_shipping_method_rate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_shipping_method_rate_t cart_shipping_method_rate_t;

#include "object.h"



typedef struct cart_shipping_method_rate_t {
    char *min_weight; // string
    char *max_weight; // string
    char *min_order_amount; // string
    char *max_order_amount; // string
    char *min_items_count; // string
    char *max_items_count; // string
    char *price; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_shipping_method_rate_t;

__attribute__((deprecated)) cart_shipping_method_rate_t *cart_shipping_method_rate_create(
    char *min_weight,
    char *max_weight,
    char *min_order_amount,
    char *max_order_amount,
    char *min_items_count,
    char *max_items_count,
    char *price,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_shipping_method_rate_free(cart_shipping_method_rate_t *cart_shipping_method_rate);

cart_shipping_method_rate_t *cart_shipping_method_rate_parseFromJSON(cJSON *cart_shipping_method_rateJSON);

cJSON *cart_shipping_method_rate_convertToJSON(cart_shipping_method_rate_t *cart_shipping_method_rate);

#endif /* _cart_shipping_method_rate_H_ */

