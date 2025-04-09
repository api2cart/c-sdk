/*
 * order_add_order_item_inner_order_item_property_inner.h
 *
 * 
 */

#ifndef _order_add_order_item_inner_order_item_property_inner_H_
#define _order_add_order_item_inner_order_item_property_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_order_item_inner_order_item_property_inner_t order_add_order_item_inner_order_item_property_inner_t;




typedef struct order_add_order_item_inner_order_item_property_inner_t {
    char *order_item_property_name; // string
    char *order_item_property_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_order_item_inner_order_item_property_inner_t;

__attribute__((deprecated)) order_add_order_item_inner_order_item_property_inner_t *order_add_order_item_inner_order_item_property_inner_create(
    char *order_item_property_name,
    char *order_item_property_value
);

void order_add_order_item_inner_order_item_property_inner_free(order_add_order_item_inner_order_item_property_inner_t *order_add_order_item_inner_order_item_property_inner);

order_add_order_item_inner_order_item_property_inner_t *order_add_order_item_inner_order_item_property_inner_parseFromJSON(cJSON *order_add_order_item_inner_order_item_property_innerJSON);

cJSON *order_add_order_item_inner_order_item_property_inner_convertToJSON(order_add_order_item_inner_order_item_property_inner_t *order_add_order_item_inner_order_item_property_inner);

#endif /* _order_add_order_item_inner_order_item_property_inner_H_ */

