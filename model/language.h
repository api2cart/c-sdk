/*
 * language.h
 *
 * 
 */

#ifndef _language_H_
#define _language_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct language_t language_t;

#include "object.h"



typedef struct language_t {
    char *id; // string
    char *iso_code; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} language_t;

__attribute__((deprecated)) language_t *language_create(
    char *id,
    char *iso_code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void language_free(language_t *language);

language_t *language_parseFromJSON(cJSON *languageJSON);

cJSON *language_convertToJSON(language_t *language);

#endif /* _language_H_ */

