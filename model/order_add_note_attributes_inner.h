/*
 * order_add_note_attributes_inner.h
 *
 * 
 */

#ifndef _order_add_note_attributes_inner_H_
#define _order_add_note_attributes_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_note_attributes_inner_t order_add_note_attributes_inner_t;




typedef struct order_add_note_attributes_inner_t {
    char *name; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_note_attributes_inner_t;

__attribute__((deprecated)) order_add_note_attributes_inner_t *order_add_note_attributes_inner_create(
    char *name,
    char *value
);

void order_add_note_attributes_inner_free(order_add_note_attributes_inner_t *order_add_note_attributes_inner);

order_add_note_attributes_inner_t *order_add_note_attributes_inner_parseFromJSON(cJSON *order_add_note_attributes_innerJSON);

cJSON *order_add_note_attributes_inner_convertToJSON(order_add_note_attributes_inner_t *order_add_note_attributes_inner);

#endif /* _order_add_note_attributes_inner_H_ */

