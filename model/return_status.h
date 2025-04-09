/*
 * return_status.h
 *
 * 
 */

#ifndef _return_status_H_
#define _return_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_status_t return_status_t;

#include "object.h"



typedef struct return_status_t {
    char *id; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} return_status_t;

__attribute__((deprecated)) return_status_t *return_status_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void return_status_free(return_status_t *return_status);

return_status_t *return_status_parseFromJSON(cJSON *return_statusJSON);

cJSON *return_status_convertToJSON(return_status_t *return_status);

#endif /* _return_status_H_ */

