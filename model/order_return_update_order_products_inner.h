/*
 * order_return_update_order_products_inner.h
 *
 * 
 */

#ifndef _order_return_update_order_products_inner_H_
#define _order_return_update_order_products_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_return_update_order_products_inner_t order_return_update_order_products_inner_t;




typedef struct order_return_update_order_products_inner_t {
    char *order_product_id; // string
    int order_product_quantity; //numeric
    char *order_product_status; // string
    char *order_product_action_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_return_update_order_products_inner_t;

__attribute__((deprecated)) order_return_update_order_products_inner_t *order_return_update_order_products_inner_create(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_status,
    char *order_product_action_id
);

void order_return_update_order_products_inner_free(order_return_update_order_products_inner_t *order_return_update_order_products_inner);

order_return_update_order_products_inner_t *order_return_update_order_products_inner_parseFromJSON(cJSON *order_return_update_order_products_innerJSON);

cJSON *order_return_update_order_products_inner_convertToJSON(order_return_update_order_products_inner_t *order_return_update_order_products_inner);

#endif /* _order_return_update_order_products_inner_H_ */

