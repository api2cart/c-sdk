/*
 * order_return_add_order_products_inner.h
 *
 * 
 */

#ifndef _order_return_add_order_products_inner_H_
#define _order_return_add_order_products_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_return_add_order_products_inner_t order_return_add_order_products_inner_t;




typedef struct order_return_add_order_products_inner_t {
    char *order_product_id; // string
    int order_product_quantity; //numeric
    char *order_product_reason_id; // string
    char *order_product_action_id; // string
    char *order_product_customer_comment; // string
    char *order_product_handling_status; // string
    char *order_product_condition; // string
    char *order_product_reason; // string
    char *order_product_status; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_return_add_order_products_inner_t;

__attribute__((deprecated)) order_return_add_order_products_inner_t *order_return_add_order_products_inner_create(
    char *order_product_id,
    int order_product_quantity,
    char *order_product_reason_id,
    char *order_product_action_id,
    char *order_product_customer_comment,
    char *order_product_handling_status,
    char *order_product_condition,
    char *order_product_reason,
    char *order_product_status
);

void order_return_add_order_products_inner_free(order_return_add_order_products_inner_t *order_return_add_order_products_inner);

order_return_add_order_products_inner_t *order_return_add_order_products_inner_parseFromJSON(cJSON *order_return_add_order_products_innerJSON);

cJSON *order_return_add_order_products_inner_convertToJSON(order_return_add_order_products_inner_t *order_return_add_order_products_inner);

#endif /* _order_return_add_order_products_inner_H_ */

