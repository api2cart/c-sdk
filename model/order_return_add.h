/*
 * order_return_add.h
 *
 * 
 */

#ifndef _order_return_add_H_
#define _order_return_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_return_add_t order_return_add_t;

#include "order_return_add_order_products_inner.h"



typedef struct order_return_add_t {
    char *order_id; // string
    char *store_id; // string
    char *return_status_id; // string
    char *return_action_id; // string
    char *return_reason_id; // string
    char *return_reason; // string
    int item_restock; //boolean
    char *staff_note; // string
    char *comment; // string
    int send_notifications; //boolean
    char *reject_reason; // string
    list_t *order_products; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_return_add_t;

__attribute__((deprecated)) order_return_add_t *order_return_add_create(
    char *order_id,
    char *store_id,
    char *return_status_id,
    char *return_action_id,
    char *return_reason_id,
    char *return_reason,
    int item_restock,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
);

void order_return_add_free(order_return_add_t *order_return_add);

order_return_add_t *order_return_add_parseFromJSON(cJSON *order_return_addJSON);

cJSON *order_return_add_convertToJSON(order_return_add_t *order_return_add);

#endif /* _order_return_add_H_ */

