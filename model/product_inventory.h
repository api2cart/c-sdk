/*
 * product_inventory.h
 *
 * 
 */

#ifndef _product_inventory_H_
#define _product_inventory_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_inventory_t product_inventory_t;

#include "object.h"



typedef struct product_inventory_t {
    char *warehouse_id; // string
    double quantity; //numeric
    int in_stock; //boolean
    int priority; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_inventory_t;

__attribute__((deprecated)) product_inventory_t *product_inventory_create(
    char *warehouse_id,
    double quantity,
    int in_stock,
    int priority,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_inventory_free(product_inventory_t *product_inventory);

product_inventory_t *product_inventory_parseFromJSON(cJSON *product_inventoryJSON);

cJSON *product_inventory_convertToJSON(product_inventory_t *product_inventory);

#endif /* _product_inventory_H_ */

