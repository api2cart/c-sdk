/*
 * cart.h
 *
 * 
 */

#ifndef _cart_H_
#define _cart_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_t cart_t;

#include "cart_shipping_zone.h"
#include "cart_store_info.h"
#include "cart_warehouse.h"
#include "object.h"



typedef struct cart_t {
    char *name; // string
    char *url; // string
    char *version; // string
    char *db_prefix; // string
    list_t *stores_info; //nonprimitive container
    list_t *warehouses; //nonprimitive container
    list_t *shipping_zones; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_t;

__attribute__((deprecated)) cart_t *cart_create(
    char *name,
    char *url,
    char *version,
    char *db_prefix,
    list_t *stores_info,
    list_t *warehouses,
    list_t *shipping_zones,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_free(cart_t *cart);

cart_t *cart_parseFromJSON(cJSON *cartJSON);

cJSON *cart_convertToJSON(cart_t *cart);

#endif /* _cart_H_ */

