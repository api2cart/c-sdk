/*
 * cart_catalog_price_rules_count_200_response_result.h
 *
 * 
 */

#ifndef _cart_catalog_price_rules_count_200_response_result_H_
#define _cart_catalog_price_rules_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_catalog_price_rules_count_200_response_result_t cart_catalog_price_rules_count_200_response_result_t;




typedef struct cart_catalog_price_rules_count_200_response_result_t {
    char *catalog_price_rules_count; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_catalog_price_rules_count_200_response_result_t;

__attribute__((deprecated)) cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_create(
    char *catalog_price_rules_count
);

void cart_catalog_price_rules_count_200_response_result_free(cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result);

cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result_parseFromJSON(cJSON *cart_catalog_price_rules_count_200_response_resultJSON);

cJSON *cart_catalog_price_rules_count_200_response_result_convertToJSON(cart_catalog_price_rules_count_200_response_result_t *cart_catalog_price_rules_count_200_response_result);

#endif /* _cart_catalog_price_rules_count_200_response_result_H_ */

