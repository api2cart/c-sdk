/*
 * product_variant_add_attributes_inner.h
 *
 * 
 */

#ifndef _product_variant_add_attributes_inner_H_
#define _product_variant_add_attributes_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_add_attributes_inner_t product_variant_add_attributes_inner_t;




typedef struct product_variant_add_attributes_inner_t {
    char *attribute_name; // string
    char *attribute_value; // string
    double attribute_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_attributes_inner_t;

__attribute__((deprecated)) product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_create(
    char *attribute_name,
    char *attribute_value,
    double attribute_price
);

void product_variant_add_attributes_inner_free(product_variant_add_attributes_inner_t *product_variant_add_attributes_inner);

product_variant_add_attributes_inner_t *product_variant_add_attributes_inner_parseFromJSON(cJSON *product_variant_add_attributes_innerJSON);

cJSON *product_variant_add_attributes_inner_convertToJSON(product_variant_add_attributes_inner_t *product_variant_add_attributes_inner);

#endif /* _product_variant_add_attributes_inner_H_ */

