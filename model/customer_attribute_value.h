/*
 * customer_attribute_value.h
 *
 * 
 */

#ifndef _customer_attribute_value_H_
#define _customer_attribute_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_attribute_value_t customer_attribute_value_t;

#include "object.h"



typedef struct customer_attribute_value_t {
    char *id; // string
    char *value; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_attribute_value_t;

__attribute__((deprecated)) customer_attribute_value_t *customer_attribute_value_create(
    char *id,
    char *value,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_attribute_value_free(customer_attribute_value_t *customer_attribute_value);

customer_attribute_value_t *customer_attribute_value_parseFromJSON(cJSON *customer_attribute_valueJSON);

cJSON *customer_attribute_value_convertToJSON(customer_attribute_value_t *customer_attribute_value);

#endif /* _customer_attribute_value_H_ */

