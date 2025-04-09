/*
 * cart_meta_data.h
 *
 * 
 */

#ifndef _cart_meta_data_H_
#define _cart_meta_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_meta_data_t cart_meta_data_t;

#include "object.h"



typedef struct cart_meta_data_t {
    char *id; // string
    char *key; // string
    char *value; // string
    char *_namespace; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_meta_data_t;

__attribute__((deprecated)) cart_meta_data_t *cart_meta_data_create(
    char *id,
    char *key,
    char *value,
    char *_namespace,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_meta_data_free(cart_meta_data_t *cart_meta_data);

cart_meta_data_t *cart_meta_data_parseFromJSON(cJSON *cart_meta_dataJSON);

cJSON *cart_meta_data_convertToJSON(cart_meta_data_t *cart_meta_data);

#endif /* _cart_meta_data_H_ */

