/*
 * cart_shipping_method.h
 *
 * 
 */

#ifndef _cart_shipping_method_H_
#define _cart_shipping_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_shipping_method_t cart_shipping_method_t;

#include "cart_shipping_method_rate.h"
#include "object.h"



typedef struct cart_shipping_method_t {
    char *name; // string
    char *handling_fee; // string
    char *handling_enabled; // string
    char *handling_type; // string
    char *default_price; // string
    char *default_price_type; // string
    char *type; // string
    char *enabled; // string
    char *min_order_amount; // string
    list_t *rates; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_shipping_method_t;

__attribute__((deprecated)) cart_shipping_method_t *cart_shipping_method_create(
    char *name,
    char *handling_fee,
    char *handling_enabled,
    char *handling_type,
    char *default_price,
    char *default_price_type,
    char *type,
    char *enabled,
    char *min_order_amount,
    list_t *rates,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_shipping_method_free(cart_shipping_method_t *cart_shipping_method);

cart_shipping_method_t *cart_shipping_method_parseFromJSON(cJSON *cart_shipping_methodJSON);

cJSON *cart_shipping_method_convertToJSON(cart_shipping_method_t *cart_shipping_method);

#endif /* _cart_shipping_method_H_ */

