/*
 * return_action.h
 *
 * 
 */

#ifndef _return_action_H_
#define _return_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_action_t return_action_t;

#include "object.h"



typedef struct return_action_t {
    char *id; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} return_action_t;

__attribute__((deprecated)) return_action_t *return_action_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void return_action_free(return_action_t *return_action);

return_action_t *return_action_parseFromJSON(cJSON *return_actionJSON);

cJSON *return_action_convertToJSON(return_action_t *return_action);

#endif /* _return_action_H_ */

