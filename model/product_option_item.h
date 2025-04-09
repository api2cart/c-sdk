/*
 * product_option_item.h
 *
 * 
 */

#ifndef _product_option_item_H_
#define _product_option_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_item_t product_option_item_t;

#include "object.h"



typedef struct product_option_item_t {
    char *id; // string
    char *product_option_item_id; // string
    char *name; // string
    int sort_order; //numeric
    char *price; // string
    char *weight; // string
    int quantity; //numeric
    char *type_price; // string
    char *sku; // string
    int is_default; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_item_t;

__attribute__((deprecated)) product_option_item_t *product_option_item_create(
    char *id,
    char *product_option_item_id,
    char *name,
    int sort_order,
    char *price,
    char *weight,
    int quantity,
    char *type_price,
    char *sku,
    int is_default,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_option_item_free(product_option_item_t *product_option_item);

product_option_item_t *product_option_item_parseFromJSON(cJSON *product_option_itemJSON);

cJSON *product_option_item_convertToJSON(product_option_item_t *product_option_item);

#endif /* _product_option_item_H_ */

