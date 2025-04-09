/*
 * order_total.h
 *
 * 
 */

#ifndef _order_total_H_
#define _order_total_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_total_t order_total_t;

#include "object.h"



typedef struct order_total_t {
    double subtotal_ex_tax; //numeric
    double wrapping_ex_tax; //numeric
    double shipping_ex_tax; //numeric
    double total_discount; //numeric
    double total_tax; //numeric
    double total; //numeric
    double total_paid; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_total_t;

__attribute__((deprecated)) order_total_t *order_total_create(
    double subtotal_ex_tax,
    double wrapping_ex_tax,
    double shipping_ex_tax,
    double total_discount,
    double total_tax,
    double total,
    double total_paid,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_total_free(order_total_t *order_total);

order_total_t *order_total_parseFromJSON(cJSON *order_totalJSON);

cJSON *order_total_convertToJSON(order_total_t *order_total);

#endif /* _order_total_H_ */

