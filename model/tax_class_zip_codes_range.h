/*
 * tax_class_zip_codes_range.h
 *
 * 
 */

#ifndef _tax_class_zip_codes_range_H_
#define _tax_class_zip_codes_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_zip_codes_range_t tax_class_zip_codes_range_t;

#include "object.h"



typedef struct tax_class_zip_codes_range_t {
    char *from; // string
    char *to; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_zip_codes_range_t;

__attribute__((deprecated)) tax_class_zip_codes_range_t *tax_class_zip_codes_range_create(
    char *from,
    char *to,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_zip_codes_range_free(tax_class_zip_codes_range_t *tax_class_zip_codes_range);

tax_class_zip_codes_range_t *tax_class_zip_codes_range_parseFromJSON(cJSON *tax_class_zip_codes_rangeJSON);

cJSON *tax_class_zip_codes_range_convertToJSON(tax_class_zip_codes_range_t *tax_class_zip_codes_range);

#endif /* _tax_class_zip_codes_range_H_ */

