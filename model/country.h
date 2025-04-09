/*
 * country.h
 *
 * 
 */

#ifndef _country_H_
#define _country_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_t country_t;

#include "object.h"



typedef struct country_t {
    char *code2; // string
    char *code3; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} country_t;

__attribute__((deprecated)) country_t *country_create(
    char *code2,
    char *code3,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void country_free(country_t *country);

country_t *country_parseFromJSON(cJSON *countryJSON);

cJSON *country_convertToJSON(country_t *country);

#endif /* _country_H_ */

