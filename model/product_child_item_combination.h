/*
 * product_child_item_combination.h
 *
 * 
 */

#ifndef _product_child_item_combination_H_
#define _product_child_item_combination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_child_item_combination_t product_child_item_combination_t;

#include "object.h"



typedef struct product_child_item_combination_t {
    char *option_id; // string
    char *option_value_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_child_item_combination_t;

__attribute__((deprecated)) product_child_item_combination_t *product_child_item_combination_create(
    char *option_id,
    char *option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_child_item_combination_free(product_child_item_combination_t *product_child_item_combination);

product_child_item_combination_t *product_child_item_combination_parseFromJSON(cJSON *product_child_item_combinationJSON);

cJSON *product_child_item_combination_convertToJSON(product_child_item_combination_t *product_child_item_combination);

#endif /* _product_child_item_combination_H_ */

