/*
 * order_totals.h
 *
 * 
 */

#ifndef _order_totals_H_
#define _order_totals_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_totals_t order_totals_t;

#include "object.h"



typedef struct order_totals_t {
    double total; //numeric
    double subtotal; //numeric
    double shipping; //numeric
    double tax; //numeric
    double discount; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_totals_t;

__attribute__((deprecated)) order_totals_t *order_totals_create(
    double total,
    double subtotal,
    double shipping,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_totals_free(order_totals_t *order_totals);

order_totals_t *order_totals_parseFromJSON(cJSON *order_totalsJSON);

cJSON *order_totals_convertToJSON(order_totals_t *order_totals);

#endif /* _order_totals_H_ */

