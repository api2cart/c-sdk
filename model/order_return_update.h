/*
 * order_return_update.h
 *
 * 
 */

#ifndef _order_return_update_H_
#define _order_return_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_return_update_t order_return_update_t;

#include "order_return_update_order_products_inner.h"



typedef struct order_return_update_t {
    char *return_id; // string
    char *order_id; // string
    char *store_id; // string
    int item_restock; //boolean
    char *return_status_id; // string
    char *staff_note; // string
    char *comment; // string
    int send_notifications; //boolean
    char *reject_reason; // string
    list_t *order_products; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_return_update_t;

__attribute__((deprecated)) order_return_update_t *order_return_update_create(
    char *return_id,
    char *order_id,
    char *store_id,
    int item_restock,
    char *return_status_id,
    char *staff_note,
    char *comment,
    int send_notifications,
    char *reject_reason,
    list_t *order_products
);

void order_return_update_free(order_return_update_t *order_return_update);

order_return_update_t *order_return_update_parseFromJSON(cJSON *order_return_updateJSON);

cJSON *order_return_update_convertToJSON(order_return_update_t *order_return_update);

#endif /* _order_return_update_H_ */

