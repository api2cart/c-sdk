/*
 * basket_item_option.h
 *
 * 
 */

#ifndef _basket_item_option_H_
#define _basket_item_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_item_option_t basket_item_option_t;

#include "object.h"



typedef struct basket_item_option_t {
    char *id; // string
    char *value_id; // string
    char *name; // string
    char *value; // string
    int used_in_combination; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} basket_item_option_t;

__attribute__((deprecated)) basket_item_option_t *basket_item_option_create(
    char *id,
    char *value_id,
    char *name,
    char *value,
    int used_in_combination,
    object_t *additional_fields,
    object_t *custom_fields
);

void basket_item_option_free(basket_item_option_t *basket_item_option);

basket_item_option_t *basket_item_option_parseFromJSON(cJSON *basket_item_optionJSON);

cJSON *basket_item_option_convertToJSON(basket_item_option_t *basket_item_option);

#endif /* _basket_item_option_H_ */

