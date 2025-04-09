/*
 * tax_class_zip_codes.h
 *
 * 
 */

#ifndef _tax_class_zip_codes_H_
#define _tax_class_zip_codes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_zip_codes_t tax_class_zip_codes_t;

#include "object.h"
#include "tax_class_zip_codes_range.h"



typedef struct tax_class_zip_codes_t {
    int is_range; //boolean
    list_t *range; //primitive container
    list_t *fields; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_zip_codes_t;

__attribute__((deprecated)) tax_class_zip_codes_t *tax_class_zip_codes_create(
    int is_range,
    list_t *range,
    list_t *fields,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_zip_codes_free(tax_class_zip_codes_t *tax_class_zip_codes);

tax_class_zip_codes_t *tax_class_zip_codes_parseFromJSON(cJSON *tax_class_zip_codesJSON);

cJSON *tax_class_zip_codes_convertToJSON(tax_class_zip_codes_t *tax_class_zip_codes);

#endif /* _tax_class_zip_codes_H_ */

