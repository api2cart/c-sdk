/*
 * tax_class_rate.h
 *
 * 
 */

#ifndef _tax_class_rate_H_
#define _tax_class_rate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_rate_t tax_class_rate_t;

#include "object.h"
#include "tax_class_countries.h"
#include "tax_class_zip_codes.h"



typedef struct tax_class_rate_t {
    char *id; // string
    char *name; // string
    double tax; //numeric
    int tax_type; //numeric
    char *tax_based_on; // string
    list_t *countries; //nonprimitive container
    list_t *cities; //primitive container
    list_t *address; //primitive container
    list_t *zip_codes; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_rate_t;

__attribute__((deprecated)) tax_class_rate_t *tax_class_rate_create(
    char *id,
    char *name,
    double tax,
    int tax_type,
    char *tax_based_on,
    list_t *countries,
    list_t *cities,
    list_t *address,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_rate_free(tax_class_rate_t *tax_class_rate);

tax_class_rate_t *tax_class_rate_parseFromJSON(cJSON *tax_class_rateJSON);

cJSON *tax_class_rate_convertToJSON(tax_class_rate_t *tax_class_rate);

#endif /* _tax_class_rate_H_ */

