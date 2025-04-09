/*
 * info.h
 *
 * 
 */

#ifndef _info_H_
#define _info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct info_t info_t;

#include "object.h"



typedef struct info_t {
    char *owner; // string
    char *country; // string
    char *state; // string
    char *state_code; // string
    char *city; // string
    char *street_address; // string
    char *street_address_line_2; // string
    char *zip_code; // string
    char *email; // string
    char *phone; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} info_t;

__attribute__((deprecated)) info_t *info_create(
    char *owner,
    char *country,
    char *state,
    char *state_code,
    char *city,
    char *street_address,
    char *street_address_line_2,
    char *zip_code,
    char *email,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
);

void info_free(info_t *info);

info_t *info_parseFromJSON(cJSON *infoJSON);

cJSON *info_convertToJSON(info_t *info);

#endif /* _info_H_ */

