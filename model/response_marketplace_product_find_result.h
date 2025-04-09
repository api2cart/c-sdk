/*
 * response_marketplace_product_find_result.h
 *
 * 
 */

#ifndef _response_marketplace_product_find_result_H_
#define _response_marketplace_product_find_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_marketplace_product_find_result_t response_marketplace_product_find_result_t;

#include "marketplace_product.h"
#include "object.h"



typedef struct response_marketplace_product_find_result_t {
    int marketplace_products_count; //numeric
    list_t *marketplace_product; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_marketplace_product_find_result_t;

__attribute__((deprecated)) response_marketplace_product_find_result_t *response_marketplace_product_find_result_create(
    int marketplace_products_count,
    list_t *marketplace_product,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_marketplace_product_find_result_free(response_marketplace_product_find_result_t *response_marketplace_product_find_result);

response_marketplace_product_find_result_t *response_marketplace_product_find_result_parseFromJSON(cJSON *response_marketplace_product_find_resultJSON);

cJSON *response_marketplace_product_find_result_convertToJSON(response_marketplace_product_find_result_t *response_marketplace_product_find_result);

#endif /* _response_marketplace_product_find_result_H_ */

