/*
 * order_item_option.h
 *
 * 
 */

#ifndef _order_item_option_H_
#define _order_item_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_item_option_t order_item_option_t;

#include "object.h"



typedef struct order_item_option_t {
    char *option_id; // string
    char *name; // string
    char *value; // string
    double price; //numeric
    double weight; //numeric
    char *type; // string
    char *product_option_value_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_item_option_t;

__attribute__((deprecated)) order_item_option_t *order_item_option_create(
    char *option_id,
    char *name,
    char *value,
    double price,
    double weight,
    char *type,
    char *product_option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_item_option_free(order_item_option_t *order_item_option);

order_item_option_t *order_item_option_parseFromJSON(cJSON *order_item_optionJSON);

cJSON *order_item_option_convertToJSON(order_item_option_t *order_item_option);

#endif /* _order_item_option_H_ */

