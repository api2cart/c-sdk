/*
 * tax_class_states.h
 *
 * 
 */

#ifndef _tax_class_states_H_
#define _tax_class_states_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_states_t tax_class_states_t;

#include "object.h"
#include "tax_class_zip_codes.h"



typedef struct tax_class_states_t {
    char *id; // string
    double tax; //numeric
    int tax_type; //numeric
    char *name; // string
    char *code; // string
    list_t *zip_codes; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_states_t;

__attribute__((deprecated)) tax_class_states_t *tax_class_states_create(
    char *id,
    double tax,
    int tax_type,
    char *name,
    char *code,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_states_free(tax_class_states_t *tax_class_states);

tax_class_states_t *tax_class_states_parseFromJSON(cJSON *tax_class_statesJSON);

cJSON *tax_class_states_convertToJSON(tax_class_states_t *tax_class_states);

#endif /* _tax_class_states_H_ */

