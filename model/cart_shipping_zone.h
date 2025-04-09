/*
 * cart_shipping_zone.h
 *
 * 
 */

#ifndef _cart_shipping_zone_H_
#define _cart_shipping_zone_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_shipping_zone_t cart_shipping_zone_t;

#include "object.h"



typedef struct cart_shipping_zone_t {
    char *id; // string
    char *code; // string
    char *name; // string
    char *country; // string
    list_t *country_iso2_codes; //primitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_shipping_zone_t;

__attribute__((deprecated)) cart_shipping_zone_t *cart_shipping_zone_create(
    char *id,
    char *code,
    char *name,
    char *country,
    list_t *country_iso2_codes,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_shipping_zone_free(cart_shipping_zone_t *cart_shipping_zone);

cart_shipping_zone_t *cart_shipping_zone_parseFromJSON(cJSON *cart_shipping_zoneJSON);

cJSON *cart_shipping_zone_convertToJSON(cart_shipping_zone_t *cart_shipping_zone);

#endif /* _cart_shipping_zone_H_ */

