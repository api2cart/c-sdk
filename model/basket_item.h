/*
 * basket_item.h
 *
 * 
 */

#ifndef _basket_item_H_
#define _basket_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_item_t basket_item_t;

#include "basket_item_option.h"
#include "object.h"



typedef struct basket_item_t {
    char *id; // string
    char *parent_id; // string
    char *product_id; // string
    char *variant_id; // string
    char *sku; // string
    char *name; // string
    double price; //numeric
    double tax; //numeric
    double quantity; //numeric
    char *weight_unit; // string
    double weight; //numeric
    list_t *options; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} basket_item_t;

__attribute__((deprecated)) basket_item_t *basket_item_create(
    char *id,
    char *parent_id,
    char *product_id,
    char *variant_id,
    char *sku,
    char *name,
    double price,
    double tax,
    double quantity,
    char *weight_unit,
    double weight,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
);

void basket_item_free(basket_item_t *basket_item);

basket_item_t *basket_item_parseFromJSON(cJSON *basket_itemJSON);

cJSON *basket_item_convertToJSON(basket_item_t *basket_item);

#endif /* _basket_item_H_ */

