/*
 * product_option_add_values_inner.h
 *
 * 
 */

#ifndef _product_option_add_values_inner_H_
#define _product_option_add_values_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_add_values_inner_t product_option_add_values_inner_t;




typedef struct product_option_add_values_inner_t {
    char *value; // string
    char *display_value; // string
    int is_default; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_add_values_inner_t;

__attribute__((deprecated)) product_option_add_values_inner_t *product_option_add_values_inner_create(
    char *value,
    char *display_value,
    int is_default
);

void product_option_add_values_inner_free(product_option_add_values_inner_t *product_option_add_values_inner);

product_option_add_values_inner_t *product_option_add_values_inner_parseFromJSON(cJSON *product_option_add_values_innerJSON);

cJSON *product_option_add_values_inner_convertToJSON(product_option_add_values_inner_t *product_option_add_values_inner);

#endif /* _product_option_add_values_inner_H_ */

