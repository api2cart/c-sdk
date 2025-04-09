/*
 * status.h
 *
 * 
 */

#ifndef _status_H_
#define _status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_t status_t;

#include "object.h"



typedef struct status_t {
    char *id; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} status_t;

__attribute__((deprecated)) status_t *status_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void status_free(status_t *status);

status_t *status_parseFromJSON(cJSON *statusJSON);

cJSON *status_convertToJSON(status_t *status);

#endif /* _status_H_ */

