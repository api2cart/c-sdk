/*
 * response_cart_catalog_price_rules_list_result.h
 *
 * 
 */

#ifndef _response_cart_catalog_price_rules_list_result_H_
#define _response_cart_catalog_price_rules_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_cart_catalog_price_rules_list_result_t response_cart_catalog_price_rules_list_result_t;

#include "catalog_price_rule.h"
#include "object.h"



typedef struct response_cart_catalog_price_rules_list_result_t {
    int catalog_price_rules_count; //numeric
    list_t *catalog_price_rules; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_cart_catalog_price_rules_list_result_t;

__attribute__((deprecated)) response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_create(
    int catalog_price_rules_count,
    list_t *catalog_price_rules,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_cart_catalog_price_rules_list_result_free(response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result);

response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result_parseFromJSON(cJSON *response_cart_catalog_price_rules_list_resultJSON);

cJSON *response_cart_catalog_price_rules_list_result_convertToJSON(response_cart_catalog_price_rules_list_result_t *response_cart_catalog_price_rules_list_result);

#endif /* _response_cart_catalog_price_rules_list_result_H_ */

