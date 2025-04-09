/*
 * product_group_item.h
 *
 * 
 */

#ifndef _product_group_item_H_
#define _product_group_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_group_item_t product_group_item_t;

#include "object.h"



typedef struct product_group_item_t {
    char *child_item_id; // string
    char *product_id; // string
    char *default_qty_in_pack; // string
    int is_qty_in_pack_fixed; //boolean
    double price; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_group_item_t;

__attribute__((deprecated)) product_group_item_t *product_group_item_create(
    char *child_item_id,
    char *product_id,
    char *default_qty_in_pack,
    int is_qty_in_pack_fixed,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_group_item_free(product_group_item_t *product_group_item);

product_group_item_t *product_group_item_parseFromJSON(cJSON *product_group_itemJSON);

cJSON *product_group_item_convertToJSON(product_group_item_t *product_group_item);

#endif /* _product_group_item_H_ */

