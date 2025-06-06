/*
 * product_price_update.h
 *
 * 
 */

#ifndef _product_price_update_H_
#define _product_price_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_price_update_t product_price_update_t;

#include "product_price_update_group_prices_inner.h"



typedef struct product_price_update_t {
    char *product_id; // string
    list_t *group_prices; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_price_update_t;

__attribute__((deprecated)) product_price_update_t *product_price_update_create(
    char *product_id,
    list_t *group_prices
);

void product_price_update_free(product_price_update_t *product_price_update);

product_price_update_t *product_price_update_parseFromJSON(cJSON *product_price_updateJSON);

cJSON *product_price_update_convertToJSON(product_price_update_t *product_price_update);

#endif /* _product_price_update_H_ */

