/*
 * order_add_order_item_inner_order_item_option_inner.h
 *
 * 
 */

#ifndef _order_add_order_item_inner_order_item_option_inner_H_
#define _order_add_order_item_inner_order_item_option_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_order_item_inner_order_item_option_inner_t order_add_order_item_inner_order_item_option_inner_t;




typedef struct order_add_order_item_inner_order_item_option_inner_t {
    char *order_item_option_name; // string
    char *order_item_option_value; // string
    double order_item_option_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_order_item_inner_order_item_option_inner_t;

__attribute__((deprecated)) order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_value,
    double order_item_option_price
);

void order_add_order_item_inner_order_item_option_inner_free(order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner);

order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_add_order_item_inner_order_item_option_innerJSON);

cJSON *order_add_order_item_inner_order_item_option_inner_convertToJSON(order_add_order_item_inner_order_item_option_inner_t *order_add_order_item_inner_order_item_option_inner);

#endif /* _order_add_order_item_inner_order_item_option_inner_H_ */

