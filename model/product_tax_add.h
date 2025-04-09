/*
 * product_tax_add.h
 *
 * 
 */

#ifndef _product_tax_add_H_
#define _product_tax_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_tax_add_t product_tax_add_t;

#include "product_tax_add_tax_rates_inner.h"



typedef struct product_tax_add_t {
    char *product_id; // string
    char *name; // string
    list_t *tax_rates; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_tax_add_t;

__attribute__((deprecated)) product_tax_add_t *product_tax_add_create(
    char *product_id,
    char *name,
    list_t *tax_rates
);

void product_tax_add_free(product_tax_add_t *product_tax_add);

product_tax_add_t *product_tax_add_parseFromJSON(cJSON *product_tax_addJSON);

cJSON *product_tax_add_convertToJSON(product_tax_add_t *product_tax_add);

#endif /* _product_tax_add_H_ */

