/*
 * product_child_item_find_200_response_result.h
 *
 * 
 */

#ifndef _product_child_item_find_200_response_result_H_
#define _product_child_item_find_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_child_item_find_200_response_result_t product_child_item_find_200_response_result_t;

#include "any_type.h"



typedef struct product_child_item_find_200_response_result_t {
    any_type_t *children; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} product_child_item_find_200_response_result_t;

__attribute__((deprecated)) product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_create(
    any_type_t *children
);

void product_child_item_find_200_response_result_free(product_child_item_find_200_response_result_t *product_child_item_find_200_response_result);

product_child_item_find_200_response_result_t *product_child_item_find_200_response_result_parseFromJSON(cJSON *product_child_item_find_200_response_resultJSON);

cJSON *product_child_item_find_200_response_result_convertToJSON(product_child_item_find_200_response_result_t *product_child_item_find_200_response_result);

#endif /* _product_child_item_find_200_response_result_H_ */

