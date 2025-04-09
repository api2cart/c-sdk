/*
 * order_totals_new_discount.h
 *
 * 
 */

#ifndef _order_totals_new_discount_H_
#define _order_totals_new_discount_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_totals_new_discount_t order_totals_new_discount_t;

#include "object.h"



typedef struct order_totals_new_discount_t {
    char *code; // string
    double value; //numeric
    char *type; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_totals_new_discount_t;

__attribute__((deprecated)) order_totals_new_discount_t *order_totals_new_discount_create(
    char *code,
    double value,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_totals_new_discount_free(order_totals_new_discount_t *order_totals_new_discount);

order_totals_new_discount_t *order_totals_new_discount_parseFromJSON(cJSON *order_totals_new_discountJSON);

cJSON *order_totals_new_discount_convertToJSON(order_totals_new_discount_t *order_totals_new_discount);

#endif /* _order_totals_new_discount_H_ */

