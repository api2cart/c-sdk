/*
 * cart_shipping_zone2.h
 *
 * 
 */

#ifndef _cart_shipping_zone2_H_
#define _cart_shipping_zone2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_shipping_zone2_t cart_shipping_zone2_t;

#include "cart_shipping_method.h"
#include "country.h"
#include "object.h"



typedef struct cart_shipping_zone2_t {
    char *id; // string
    char *name; // string
    int enabled; //boolean
    list_t *countries; //nonprimitive container
    list_t *shipping_methods; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_shipping_zone2_t;

__attribute__((deprecated)) cart_shipping_zone2_t *cart_shipping_zone2_create(
    char *id,
    char *name,
    int enabled,
    list_t *countries,
    list_t *shipping_methods,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_shipping_zone2_free(cart_shipping_zone2_t *cart_shipping_zone2);

cart_shipping_zone2_t *cart_shipping_zone2_parseFromJSON(cJSON *cart_shipping_zone2JSON);

cJSON *cart_shipping_zone2_convertToJSON(cart_shipping_zone2_t *cart_shipping_zone2);

#endif /* _cart_shipping_zone2_H_ */

