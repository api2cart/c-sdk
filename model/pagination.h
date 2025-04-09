/*
 * pagination.h
 *
 * 
 */

#ifndef _pagination_H_
#define _pagination_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pagination_t pagination_t;

#include "object.h"



typedef struct pagination_t {
    char *previous; // string
    char *next; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} pagination_t;

__attribute__((deprecated)) pagination_t *pagination_create(
    char *previous,
    char *next,
    object_t *additional_fields,
    object_t *custom_fields
);

void pagination_free(pagination_t *pagination);

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON);

cJSON *pagination_convertToJSON(pagination_t *pagination);

#endif /* _pagination_H_ */

