/*
 * shipment_item.h
 *
 * 
 */

#ifndef _shipment_item_H_
#define _shipment_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_item_t shipment_item_t;

#include "object.h"



typedef struct shipment_item_t {
    char *order_product_id; // string
    char *product_id; // string
    char *variant_id; // string
    char *model; // string
    char *name; // string
    double price; //numeric
    double quantity; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} shipment_item_t;

__attribute__((deprecated)) shipment_item_t *shipment_item_create(
    char *order_product_id,
    char *product_id,
    char *variant_id,
    char *model,
    char *name,
    double price,
    double quantity,
    object_t *additional_fields,
    object_t *custom_fields
);

void shipment_item_free(shipment_item_t *shipment_item);

shipment_item_t *shipment_item_parseFromJSON(cJSON *shipment_itemJSON);

cJSON *shipment_item_convertToJSON(shipment_item_t *shipment_item);

#endif /* _shipment_item_H_ */

