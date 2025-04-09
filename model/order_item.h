/*
 * order_item.h
 *
 * 
 */

#ifndef _order_item_H_
#define _order_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_item_t order_item_t;

#include "object.h"
#include "order_item_option.h"



typedef struct order_item_t {
    char *product_id; // string
    char *order_product_id; // string
    char *model; // string
    char *name; // string
    double price; //numeric
    double price_inc_tax; //numeric
    double quantity; //numeric
    double discount_amount; //numeric
    double total_price; //numeric
    double tax_percent; //numeric
    double tax_value; //numeric
    double tax_value_after_discount; //numeric
    list_t *options; //nonprimitive container
    char *variant_id; // string
    char *weight_unit; // string
    double weight; //numeric
    char *barcode; // string
    char *parent_order_product_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_item_t;

__attribute__((deprecated)) order_item_t *order_item_create(
    char *product_id,
    char *order_product_id,
    char *model,
    char *name,
    double price,
    double price_inc_tax,
    double quantity,
    double discount_amount,
    double total_price,
    double tax_percent,
    double tax_value,
    double tax_value_after_discount,
    list_t *options,
    char *variant_id,
    char *weight_unit,
    double weight,
    char *barcode,
    char *parent_order_product_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_item_free(order_item_t *order_item);

order_item_t *order_item_parseFromJSON(cJSON *order_itemJSON);

cJSON *order_item_convertToJSON(order_item_t *order_item);

#endif /* _order_item_H_ */

