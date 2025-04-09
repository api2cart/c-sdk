/*
 * store_attribute_group.h
 *
 * 
 */

#ifndef _store_attribute_group_H_
#define _store_attribute_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_attribute_group_t store_attribute_group_t;

#include "object.h"



typedef struct store_attribute_group_t {
    char *id; // string
    char *name; // string
    int position; //numeric
    char *attribute_set_id; // string
    list_t *assigned_attribute_ids; //primitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} store_attribute_group_t;

__attribute__((deprecated)) store_attribute_group_t *store_attribute_group_create(
    char *id,
    char *name,
    int position,
    char *attribute_set_id,
    list_t *assigned_attribute_ids,
    object_t *additional_fields,
    object_t *custom_fields
);

void store_attribute_group_free(store_attribute_group_t *store_attribute_group);

store_attribute_group_t *store_attribute_group_parseFromJSON(cJSON *store_attribute_groupJSON);

cJSON *store_attribute_group_convertToJSON(store_attribute_group_t *store_attribute_group);

#endif /* _store_attribute_group_H_ */

