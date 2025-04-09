/*
 * product_variant_add_batch_payload_inner_combination_inner.h
 *
 * 
 */

#ifndef _product_variant_add_batch_payload_inner_combination_inner_H_
#define _product_variant_add_batch_payload_inner_combination_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_add_batch_payload_inner_combination_inner_t product_variant_add_batch_payload_inner_combination_inner_t;




typedef struct product_variant_add_batch_payload_inner_combination_inner_t {
    char *option_name; // string
    char *option_value_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_batch_payload_inner_combination_inner_t;

__attribute__((deprecated)) product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_create(
    char *option_name,
    char *option_value_name
);

void product_variant_add_batch_payload_inner_combination_inner_free(product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner);

product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner_parseFromJSON(cJSON *product_variant_add_batch_payload_inner_combination_innerJSON);

cJSON *product_variant_add_batch_payload_inner_combination_inner_convertToJSON(product_variant_add_batch_payload_inner_combination_inner_t *product_variant_add_batch_payload_inner_combination_inner);

#endif /* _product_variant_add_batch_payload_inner_combination_inner_H_ */

