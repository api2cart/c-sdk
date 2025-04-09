/*
 * order_preestimate_shipping_list_order_item_inner_order_item_option_inner.h
 *
 * 
 */

#ifndef _order_preestimate_shipping_list_order_item_inner_order_item_option_inner_H_
#define _order_preestimate_shipping_list_order_item_inner_order_item_option_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t;




typedef struct order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t {
    char *order_item_option_name; // string
    char *order_item_option_id; // string
    char *order_item_option_value; // string
    char *order_item_option_value_id; // string
    int order_item_option_used_in_combinations; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t;

__attribute__((deprecated)) order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_create(
    char *order_item_option_name,
    char *order_item_option_id,
    char *order_item_option_value,
    char *order_item_option_value_id,
    int order_item_option_used_in_combinations
);

void order_preestimate_shipping_list_order_item_inner_order_item_option_inner_free(order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner);

order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_parseFromJSON(cJSON *order_preestimate_shipping_list_order_item_inner_order_item_option_innerJSON);

cJSON *order_preestimate_shipping_list_order_item_inner_order_item_option_inner_convertToJSON(order_preestimate_shipping_list_order_item_inner_order_item_option_inner_t *order_preestimate_shipping_list_order_item_inner_order_item_option_inner);

#endif /* _order_preestimate_shipping_list_order_item_inner_order_item_option_inner_H_ */

