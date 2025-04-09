/*
 * product_option.h
 *
 * 
 */

#ifndef _product_option_H_
#define _product_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_t product_option_t;

#include "object.h"
#include "product_option_item.h"



typedef struct product_option_t {
    char *id; // string
    char *product_option_id; // string
    char *name; // string
    char *description; // string
    int sort_order; //numeric
    char *type; // string
    int required; //boolean
    int available; //boolean
    int used_in_combination; //boolean
    list_t *option_items; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_t;

__attribute__((deprecated)) product_option_t *product_option_create(
    char *id,
    char *product_option_id,
    char *name,
    char *description,
    int sort_order,
    char *type,
    int required,
    int available,
    int used_in_combination,
    list_t *option_items,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_option_free(product_option_t *product_option);

product_option_t *product_option_parseFromJSON(cJSON *product_optionJSON);

cJSON *product_option_convertToJSON(product_option_t *product_option);

#endif /* _product_option_H_ */

