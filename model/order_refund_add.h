/*
 * order_refund_add.h
 *
 * 
 */

#ifndef _order_refund_add_H_
#define _order_refund_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_refund_add_t order_refund_add_t;

#include "order_refund_add_items_inner.h"



typedef struct order_refund_add_t {
    char *order_id; // string
    list_t *items; //nonprimitive container
    double total_price; //numeric
    double shipping_price; //numeric
    double fee_price; //numeric
    char *message; // string
    int item_restock; //boolean
    int send_notifications; //boolean
    char *date; // string
    int is_online; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} order_refund_add_t;

__attribute__((deprecated)) order_refund_add_t *order_refund_add_create(
    char *order_id,
    list_t *items,
    double total_price,
    double shipping_price,
    double fee_price,
    char *message,
    int item_restock,
    int send_notifications,
    char *date,
    int is_online
);

void order_refund_add_free(order_refund_add_t *order_refund_add);

order_refund_add_t *order_refund_add_parseFromJSON(cJSON *order_refund_addJSON);

cJSON *order_refund_add_convertToJSON(order_refund_add_t *order_refund_add);

#endif /* _order_refund_add_H_ */

