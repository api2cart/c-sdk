/*
 * return_reason.h
 *
 * 
 */

#ifndef _return_reason_H_
#define _return_reason_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_reason_t return_reason_t;

#include "object.h"



typedef struct return_reason_t {
    char *id; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} return_reason_t;

__attribute__((deprecated)) return_reason_t *return_reason_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void return_reason_free(return_reason_t *return_reason);

return_reason_t *return_reason_parseFromJSON(cJSON *return_reasonJSON);

cJSON *return_reason_convertToJSON(return_reason_t *return_reason);

#endif /* _return_reason_H_ */

