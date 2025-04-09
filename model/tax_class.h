/*
 * tax_class.h
 *
 * 
 */

#ifndef _tax_class_H_
#define _tax_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_t tax_class_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct tax_class_t {
    char *id; // string
    char *name; // string
    int avail; //boolean
    double tax; //numeric
    int tax_type; //numeric
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} tax_class_t;

__attribute__((deprecated)) tax_class_t *tax_class_create(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    object_t *additional_fields,
    object_t *custom_fields
);

void tax_class_free(tax_class_t *tax_class);

tax_class_t *tax_class_parseFromJSON(cJSON *tax_classJSON);

cJSON *tax_class_convertToJSON(tax_class_t *tax_class);

#endif /* _tax_class_H_ */

