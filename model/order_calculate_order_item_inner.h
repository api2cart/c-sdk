/*
 * order_calculate_order_item_inner.h
 *
 * 
 */

#ifndef _order_calculate_order_item_inner_H_
#define _order_calculate_order_item_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_order_item_inner_t order_calculate_order_item_inner_t;

#include "order_calculate_order_item_inner_order_item_option_inner.h"



typedef struct order_calculate_order_item_inner_t {
    char *order_item_id; // string
    int order_item_quantity; //numeric
    char *order_item_variant_id; // string
    list_t *order_item_option; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_order_item_inner_t;

__attribute__((deprecated)) order_calculate_order_item_inner_t *order_calculate_order_item_inner_create(
    char *order_item_id,
    int order_item_quantity,
    char *order_item_variant_id,
    list_t *order_item_option
);

void order_calculate_order_item_inner_free(order_calculate_order_item_inner_t *order_calculate_order_item_inner);

order_calculate_order_item_inner_t *order_calculate_order_item_inner_parseFromJSON(cJSON *order_calculate_order_item_innerJSON);

cJSON *order_calculate_order_item_inner_convertToJSON(order_calculate_order_item_inner_t *order_calculate_order_item_inner);

#endif /* _order_calculate_order_item_inner_H_ */

