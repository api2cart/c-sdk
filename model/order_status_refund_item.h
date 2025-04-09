/*
 * order_status_refund_item.h
 *
 * 
 */

#ifndef _order_status_refund_item_H_
#define _order_status_refund_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_status_refund_item_t order_status_refund_item_t;

#include "object.h"



typedef struct order_status_refund_item_t {
    char *product_id; // string
    char *variant_id; // string
    char *order_product_id; // string
    double qty; //numeric
    double refund; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_status_refund_item_t;

__attribute__((deprecated)) order_status_refund_item_t *order_status_refund_item_create(
    char *product_id,
    char *variant_id,
    char *order_product_id,
    double qty,
    double refund,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_status_refund_item_free(order_status_refund_item_t *order_status_refund_item);

order_status_refund_item_t *order_status_refund_item_parseFromJSON(cJSON *order_status_refund_itemJSON);

cJSON *order_status_refund_item_convertToJSON(order_status_refund_item_t *order_status_refund_item);

#endif /* _order_status_refund_item_H_ */

