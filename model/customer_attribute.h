/*
 * customer_attribute.h
 *
 * 
 */

#ifndef _customer_attribute_H_
#define _customer_attribute_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_attribute_t customer_attribute_t;

#include "customer_attribute_value.h"
#include "object.h"



typedef struct customer_attribute_t {
    char *attribute_id; // string
    char *code; // string
    char *name; // string
    char *type; // string
    list_t *values; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_attribute_t;

__attribute__((deprecated)) customer_attribute_t *customer_attribute_create(
    char *attribute_id,
    char *code,
    char *name,
    char *type,
    list_t *values,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_attribute_free(customer_attribute_t *customer_attribute);

customer_attribute_t *customer_attribute_parseFromJSON(cJSON *customer_attributeJSON);

cJSON *customer_attribute_convertToJSON(customer_attribute_t *customer_attribute);

#endif /* _customer_attribute_H_ */

