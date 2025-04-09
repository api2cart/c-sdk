/*
 * return_order_product.h
 *
 * 
 */

#ifndef _return_order_product_H_
#define _return_order_product_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_order_product_t return_order_product_t;

#include "object.h"
#include "return_action.h"
#include "return_reason.h"



typedef struct return_order_product_t {
    char *product_id; // string
    char *order_product_id; // string
    char *sku; // string
    char *name; // string
    int quantity; //numeric
    struct return_reason_t *reason; //model
    struct return_action_t *action; //model
    char *condition; // string
    char *customer_comment; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} return_order_product_t;

__attribute__((deprecated)) return_order_product_t *return_order_product_create(
    char *product_id,
    char *order_product_id,
    char *sku,
    char *name,
    int quantity,
    return_reason_t *reason,
    return_action_t *action,
    char *condition,
    char *customer_comment,
    object_t *additional_fields,
    object_t *custom_fields
);

void return_order_product_free(return_order_product_t *return_order_product);

return_order_product_t *return_order_product_parseFromJSON(cJSON *return_order_productJSON);

cJSON *return_order_product_convertToJSON(return_order_product_t *return_order_product);

#endif /* _return_order_product_H_ */

