/*
 * order_calculate_tax.h
 *
 * 
 */

#ifndef _order_calculate_tax_H_
#define _order_calculate_tax_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_tax_t order_calculate_tax_t;

#include "object.h"



typedef struct order_calculate_tax_t {
    char *code; // string
    double rate; //numeric
    double value; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_tax_t;

__attribute__((deprecated)) order_calculate_tax_t *order_calculate_tax_create(
    char *code,
    double rate,
    double value,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_calculate_tax_free(order_calculate_tax_t *order_calculate_tax);

order_calculate_tax_t *order_calculate_tax_parseFromJSON(cJSON *order_calculate_taxJSON);

cJSON *order_calculate_tax_convertToJSON(order_calculate_tax_t *order_calculate_tax);

#endif /* _order_calculate_tax_H_ */

