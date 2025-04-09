/*
 * state.h
 *
 * 
 */

#ifndef _state_H_
#define _state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct state_t state_t;

#include "object.h"



typedef struct state_t {
    char *code; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} state_t;

__attribute__((deprecated)) state_t *state_create(
    char *code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void state_free(state_t *state);

state_t *state_parseFromJSON(cJSON *stateJSON);

cJSON *state_convertToJSON(state_t *state);

#endif /* _state_H_ */

