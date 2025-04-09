/*
 * store_attribute.h
 *
 * 
 */

#ifndef _store_attribute_H_
#define _store_attribute_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_attribute_t store_attribute_t;

#include "object.h"



typedef struct store_attribute_t {
    char *id; // string
    char *code; // string
    char *type; // string
    char *name; // string
    list_t *default_values; //primitive container
    int position; //numeric
    int visible; //boolean
    int required; //boolean
    int system; //boolean
    list_t *values; //primitive container
    char *store_id; // string
    char *lang_id; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} store_attribute_t;

__attribute__((deprecated)) store_attribute_t *store_attribute_create(
    char *id,
    char *code,
    char *type,
    char *name,
    list_t *default_values,
    int position,
    int visible,
    int required,
    int system,
    list_t *values,
    char *store_id,
    char *lang_id,
    object_t *additional_fields,
    object_t *custom_fields
);

void store_attribute_free(store_attribute_t *store_attribute);

store_attribute_t *store_attribute_parseFromJSON(cJSON *store_attributeJSON);

cJSON *store_attribute_convertToJSON(store_attribute_t *store_attribute);

#endif /* _store_attribute_H_ */

