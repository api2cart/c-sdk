/*
 * product_tax_add_tax_rates_inner.h
 *
 * 
 */

#ifndef _product_tax_add_tax_rates_inner_H_
#define _product_tax_add_tax_rates_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_tax_add_tax_rates_inner_t product_tax_add_tax_rates_inner_t;




typedef struct product_tax_add_tax_rates_inner_t {
    char *name; // string
    char *type; // string
    double value; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_tax_add_tax_rates_inner_t;

__attribute__((deprecated)) product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_create(
    char *name,
    char *type,
    double value
);

void product_tax_add_tax_rates_inner_free(product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner);

product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner_parseFromJSON(cJSON *product_tax_add_tax_rates_innerJSON);

cJSON *product_tax_add_tax_rates_inner_convertToJSON(product_tax_add_tax_rates_inner_t *product_tax_add_tax_rates_inner);

#endif /* _product_tax_add_tax_rates_inner_H_ */

