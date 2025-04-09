/*
 * store_attribute_attribute_set.h
 *
 * 
 */

#ifndef _store_attribute_attribute_set_H_
#define _store_attribute_attribute_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_attribute_attribute_set_t store_attribute_attribute_set_t;

#include "object.h"



typedef struct store_attribute_attribute_set_t {
    char *id; // string
    char *name; // string
    list_t *assigned_attribute_ids; //primitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} store_attribute_attribute_set_t;

__attribute__((deprecated)) store_attribute_attribute_set_t *store_attribute_attribute_set_create(
    char *id,
    char *name,
    list_t *assigned_attribute_ids,
    object_t *additional_fields,
    object_t *custom_fields
);

void store_attribute_attribute_set_free(store_attribute_attribute_set_t *store_attribute_attribute_set);

store_attribute_attribute_set_t *store_attribute_attribute_set_parseFromJSON(cJSON *store_attribute_attribute_setJSON);

cJSON *store_attribute_attribute_set_convertToJSON(store_attribute_attribute_set_t *store_attribute_attribute_set);

#endif /* _store_attribute_attribute_set_H_ */

