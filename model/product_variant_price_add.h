/*
 * product_variant_price_add.h
 *
 * 
 */

#ifndef _product_variant_price_add_H_
#define _product_variant_price_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_price_add_t product_variant_price_add_t;

#include "product_add_group_prices_inner.h"



typedef struct product_variant_price_add_t {
    char *id; // string
    char *product_id; // string
    list_t *group_prices; //nonprimitive container
    char *store_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_price_add_t;

__attribute__((deprecated)) product_variant_price_add_t *product_variant_price_add_create(
    char *id,
    char *product_id,
    list_t *group_prices,
    char *store_id
);

void product_variant_price_add_free(product_variant_price_add_t *product_variant_price_add);

product_variant_price_add_t *product_variant_price_add_parseFromJSON(cJSON *product_variant_price_addJSON);

cJSON *product_variant_price_add_convertToJSON(product_variant_price_add_t *product_variant_price_add);

#endif /* _product_variant_price_add_H_ */

