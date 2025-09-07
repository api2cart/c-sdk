/*
 * order_calculate_item.h
 *
 * 
 */

#ifndef _order_calculate_item_H_
#define _order_calculate_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_item_t order_calculate_item_t;

#include "object.h"
#include "order_item_option.h"



typedef struct order_calculate_item_t {
    char *product_id; // string
    char *sku; // string
    char *name; // string
    int quantity; //numeric
    double price; //numeric
    double price_inc_tax; //numeric
    double tax_rate; //numeric
    double unit_discount; //numeric
    double weight; //numeric
    char *weight_unit; // string
    char *barcode; // string
    char *variant_id; // string
    list_t *options; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_item_t;

__attribute__((deprecated)) order_calculate_item_t *order_calculate_item_create(
    char *product_id,
    char *sku,
    char *name,
    int quantity,
    double price,
    double price_inc_tax,
    double tax_rate,
    double unit_discount,
    double weight,
    char *weight_unit,
    char *barcode,
    char *variant_id,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_calculate_item_free(order_calculate_item_t *order_calculate_item);

order_calculate_item_t *order_calculate_item_parseFromJSON(cJSON *order_calculate_itemJSON);

cJSON *order_calculate_item_convertToJSON(order_calculate_item_t *order_calculate_item);

#endif /* _order_calculate_item_H_ */

