/*
 * order_refund.h
 *
 * 
 */

#ifndef _order_refund_H_
#define _order_refund_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_refund_t order_refund_t;

#include "a2_c_date_time.h"
#include "object.h"
#include "order_status_refund_item.h"



typedef struct order_refund_t {
    char *id; // string
    double shipping; //numeric
    double fee; //numeric
    double tax; //numeric
    double total; //numeric
    struct a2_c_date_time_t *modified_time; //model
    char *comment; // string
    list_t *items; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_refund_t;

__attribute__((deprecated)) order_refund_t *order_refund_create(
    char *id,
    double shipping,
    double fee,
    double tax,
    double total,
    a2_c_date_time_t *modified_time,
    char *comment,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_refund_free(order_refund_t *order_refund);

order_refund_t *order_refund_parseFromJSON(cJSON *order_refundJSON);

cJSON *order_refund_convertToJSON(order_refund_t *order_refund);

#endif /* _order_refund_H_ */

