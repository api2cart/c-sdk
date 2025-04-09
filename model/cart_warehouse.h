/*
 * cart_warehouse.h
 *
 * 
 */

#ifndef _cart_warehouse_H_
#define _cart_warehouse_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_warehouse_t cart_warehouse_t;

#include "customer_address.h"
#include "object.h"



typedef struct cart_warehouse_t {
    char *id; // string
    char *name; // string
    char *description; // string
    int avail; //boolean
    struct customer_address_t *address; //model
    list_t *carriers_ids; //primitive container
    list_t *stores_ids; //primitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_warehouse_t;

__attribute__((deprecated)) cart_warehouse_t *cart_warehouse_create(
    char *id,
    char *name,
    char *description,
    int avail,
    customer_address_t *address,
    list_t *carriers_ids,
    list_t *stores_ids,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_warehouse_free(cart_warehouse_t *cart_warehouse);

cart_warehouse_t *cart_warehouse_parseFromJSON(cJSON *cart_warehouseJSON);

cJSON *cart_warehouse_convertToJSON(cart_warehouse_t *cart_warehouse);

#endif /* _cart_warehouse_H_ */

