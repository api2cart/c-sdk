/*
 * media.h
 *
 * 
 */

#ifndef _media_H_
#define _media_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct media_t media_t;

#include "object.h"



typedef struct media_t {
    char *id; // string
    char *http_path; // string
    char *file_name; // string
    char *type; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} media_t;

__attribute__((deprecated)) media_t *media_create(
    char *id,
    char *http_path,
    char *file_name,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
);

void media_free(media_t *media);

media_t *media_parseFromJSON(cJSON *mediaJSON);

cJSON *media_convertToJSON(media_t *media);

#endif /* _media_H_ */

