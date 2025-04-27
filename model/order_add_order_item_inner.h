/*
 * order_add_order_item_inner.h
 *
 * 
 */

#ifndef _order_add_order_item_inner_H_
#define _order_add_order_item_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_order_item_inner_t order_add_order_item_inner_t;

#include "order_add_order_item_inner_order_item_option_inner.h"
#include "order_add_order_item_inner_order_item_property_inner.h"



typedef struct order_add_order_item_inner_t {
    char *order_item_id; // string
    char *order_item_name; // string
    char *order_item_model; // string
    double order_item_price; //numeric
    int order_item_quantity; //numeric
    double order_item_weight; //numeric
    char *order_item_variant_id; // string
    double order_item_tax; //numeric
    int order_item_price_includes_tax; //boolean
    int order_item_parent; //numeric
    char *order_item_parent_option_name; // string
    int order_item_allow_refund_items_separately; //boolean
    int order_item_allow_ship_items_separately; //boolean
    list_t *order_item_option; //nonprimitive container
    list_t *order_item_property; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_order_item_inner_t;

__attribute__((deprecated)) order_add_order_item_inner_t *order_add_order_item_inner_create(
    char *order_item_id,
    char *order_item_name,
    char *order_item_model,
    double order_item_price,
    int order_item_quantity,
    double order_item_weight,
    char *order_item_variant_id,
    double order_item_tax,
    int order_item_price_includes_tax,
    int order_item_parent,
    char *order_item_parent_option_name,
    int order_item_allow_refund_items_separately,
    int order_item_allow_ship_items_separately,
    list_t *order_item_option,
    list_t *order_item_property
);

void order_add_order_item_inner_free(order_add_order_item_inner_t *order_add_order_item_inner);

order_add_order_item_inner_t *order_add_order_item_inner_parseFromJSON(cJSON *order_add_order_item_innerJSON);

cJSON *order_add_order_item_inner_convertToJSON(order_add_order_item_inner_t *order_add_order_item_inner);

#endif /* _order_add_order_item_inner_H_ */

