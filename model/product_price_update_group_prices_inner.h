/*
 * product_price_update_group_prices_inner.h
 *
 * 
 */

#ifndef _product_price_update_group_prices_inner_H_
#define _product_price_update_group_prices_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_price_update_group_prices_inner_t product_price_update_group_prices_inner_t;




typedef struct product_price_update_group_prices_inner_t {
    int id; //numeric
    char *group_id; // string
    double price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_price_update_group_prices_inner_t;

__attribute__((deprecated)) product_price_update_group_prices_inner_t *product_price_update_group_prices_inner_create(
    int id,
    char *group_id,
    double price
);

void product_price_update_group_prices_inner_free(product_price_update_group_prices_inner_t *product_price_update_group_prices_inner);

product_price_update_group_prices_inner_t *product_price_update_group_prices_inner_parseFromJSON(cJSON *product_price_update_group_prices_innerJSON);

cJSON *product_price_update_group_prices_inner_convertToJSON(product_price_update_group_prices_inner_t *product_price_update_group_prices_inner);

#endif /* _product_price_update_group_prices_inner_H_ */

