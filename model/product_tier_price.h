/*
 * product_tier_price.h
 *
 * 
 */

#ifndef _product_tier_price_H_
#define _product_tier_price_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_tier_price_t product_tier_price_t;

#include "object.h"



typedef struct product_tier_price_t {
    double qty; //numeric
    double price; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_tier_price_t;

__attribute__((deprecated)) product_tier_price_t *product_tier_price_create(
    double qty,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_tier_price_free(product_tier_price_t *product_tier_price);

product_tier_price_t *product_tier_price_parseFromJSON(cJSON *product_tier_priceJSON);

cJSON *product_tier_price_convertToJSON(product_tier_price_t *product_tier_price);

#endif /* _product_tier_price_H_ */

