/*
 * order_calculate_order_item_inner_order_item_option_inner.h
 *
 * 
 */

#ifndef _order_calculate_order_item_inner_order_item_option_inner_H_
#define _order_calculate_order_item_inner_order_item_option_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_order_item_inner_order_item_option_inner_t order_calculate_order_item_inner_order_item_option_inner_t;




typedef struct order_calculate_order_item_inner_order_item_option_inner_t {
    char *order_item_option_name; // string
    char *order_item_option_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_order_item_inner_order_item_option_inner_t;

__attribute__((deprecated)) order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_value
);

void order_calculate_order_item_inner_order_item_option_inner_free(order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner);

order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_calculate_order_item_inner_order_item_option_innerJSON);

cJSON *order_calculate_order_item_inner_order_item_option_inner_convertToJSON(order_calculate_order_item_inner_order_item_option_inner_t *order_calculate_order_item_inner_order_item_option_inner);

#endif /* _order_calculate_order_item_inner_order_item_option_inner_H_ */

