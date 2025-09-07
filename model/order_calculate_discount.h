/*
 * order_calculate_discount.h
 *
 * 
 */

#ifndef _order_calculate_discount_H_
#define _order_calculate_discount_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_discount_t order_calculate_discount_t;

#include "object.h"



typedef struct order_calculate_discount_t {
    char *code; // string
    double value; //numeric
    char *type; // string
    int free_shipping; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_discount_t;

__attribute__((deprecated)) order_calculate_discount_t *order_calculate_discount_create(
    char *code,
    double value,
    char *type,
    int free_shipping,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_calculate_discount_free(order_calculate_discount_t *order_calculate_discount);

order_calculate_discount_t *order_calculate_discount_parseFromJSON(cJSON *order_calculate_discountJSON);

cJSON *order_calculate_discount_convertToJSON(order_calculate_discount_t *order_calculate_discount);

#endif /* _order_calculate_discount_H_ */

