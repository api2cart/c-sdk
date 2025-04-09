/*
 * tax_class_countries.h
 *
 * 
 */

#ifndef _tax_class_countries_H_
#define _tax_class_countries_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_countries_t tax_class_countries_t;

#include "object.h"
#include "tax_class_states.h"



typedef struct tax_class_countries_t {
    char *id; // string
    char *name; // string
    char *code; // string
    double tax; //numeric
    int tax_type; //numeric
    list_t *states; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_countries_t;

__attribute__((deprecated)) tax_class_countries_t *tax_class_countries_create(
    char *id,
    char *name,
    char *code,
    double tax,
    int tax_type,
    list_t *states,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_countries_free(tax_class_countries_t *tax_class_countries);

tax_class_countries_t *tax_class_countries_parseFromJSON(cJSON *tax_class_countriesJSON);

cJSON *tax_class_countries_convertToJSON(tax_class_countries_t *tax_class_countries);

#endif /* _tax_class_countries_H_ */

