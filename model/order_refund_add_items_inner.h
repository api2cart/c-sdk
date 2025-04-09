/*
 * order_refund_add_items_inner.h
 *
 * 
 */

#ifndef _order_refund_add_items_inner_H_
#define _order_refund_add_items_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_refund_add_items_inner_t order_refund_add_items_inner_t;




typedef struct order_refund_add_items_inner_t {
    char *order_product_id; // string
    int quantity; //numeric
    double price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_refund_add_items_inner_t;

__attribute__((deprecated)) order_refund_add_items_inner_t *order_refund_add_items_inner_create(
    char *order_product_id,
    int quantity,
    double price
);

void order_refund_add_items_inner_free(order_refund_add_items_inner_t *order_refund_add_items_inner);

order_refund_add_items_inner_t *order_refund_add_items_inner_parseFromJSON(cJSON *order_refund_add_items_innerJSON);

cJSON *order_refund_add_items_inner_convertToJSON(order_refund_add_items_inner_t *order_refund_add_items_inner);

#endif /* _order_refund_add_items_inner_H_ */

