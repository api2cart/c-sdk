/*
 * order_calculate_subtotal.h
 *
 * 
 */

#ifndef _order_calculate_subtotal_H_
#define _order_calculate_subtotal_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_subtotal_t order_calculate_subtotal_t;

#include "object.h"



typedef struct order_calculate_subtotal_t {
    double value; //numeric
    double tax; //numeric
    double discount; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_subtotal_t;

__attribute__((deprecated)) order_calculate_subtotal_t *order_calculate_subtotal_create(
    double value,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_calculate_subtotal_free(order_calculate_subtotal_t *order_calculate_subtotal);

order_calculate_subtotal_t *order_calculate_subtotal_parseFromJSON(cJSON *order_calculate_subtotalJSON);

cJSON *order_calculate_subtotal_convertToJSON(order_calculate_subtotal_t *order_calculate_subtotal);

#endif /* _order_calculate_subtotal_H_ */

