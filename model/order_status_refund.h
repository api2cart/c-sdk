/*
 * order_status_refund.h
 *
 * 
 */

#ifndef _order_status_refund_H_
#define _order_status_refund_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_status_refund_t order_status_refund_t;

#include "a2_c_date_time.h"
#include "object.h"
#include "order_status_refund_item.h"



typedef struct order_status_refund_t {
    double shipping; //numeric
    double fee; //numeric
    double tax; //numeric
    double total_refunded; //numeric
    struct a2_c_date_time_t *time; //model
    char *comment; // string
    list_t *refunded_items; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_status_refund_t;

__attribute__((deprecated)) order_status_refund_t *order_status_refund_create(
    double shipping,
    double fee,
    double tax,
    double total_refunded,
    a2_c_date_time_t *time,
    char *comment,
    list_t *refunded_items,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_status_refund_free(order_status_refund_t *order_status_refund);

order_status_refund_t *order_status_refund_parseFromJSON(cJSON *order_status_refundJSON);

cJSON *order_status_refund_convertToJSON(order_status_refund_t *order_status_refund);

#endif /* _order_status_refund_H_ */

