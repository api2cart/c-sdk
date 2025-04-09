/*
 * product_attribute.h
 *
 * 
 */

#ifndef _product_attribute_H_
#define _product_attribute_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_attribute_t product_attribute_t;

#include "object.h"



typedef struct product_attribute_t {
    char *attribute_id; // string
    char *code; // string
    char *name; // string
    char *lang_id; // string
    char *store_id; // string
    char *value; // string
    int required; //boolean
    int visible; //boolean
    char *type; // string
    int position; //numeric
    char *attribute_group_id; // string
    char *product_id; // string
    char *variant_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_attribute_t;

__attribute__((deprecated)) product_attribute_t *product_attribute_create(
    char *attribute_id,
    char *code,
    char *name,
    char *lang_id,
    char *store_id,
    char *value,
    int required,
    int visible,
    char *type,
    int position,
    char *attribute_group_id,
    char *product_id,
    char *variant_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_attribute_free(product_attribute_t *product_attribute);

product_attribute_t *product_attribute_parseFromJSON(cJSON *product_attributeJSON);

cJSON *product_attribute_convertToJSON(product_attribute_t *product_attribute);

#endif /* _product_attribute_H_ */

