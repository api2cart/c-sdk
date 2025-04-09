/*
 * base_customer.h
 *
 * 
 */

#ifndef _base_customer_H_
#define _base_customer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct base_customer_t base_customer_t;

#include "object.h"



typedef struct base_customer_t {
    char *id; // string
    char *email; // string
    char *first_name; // string
    char *last_name; // string
    char *phone; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} base_customer_t;

__attribute__((deprecated)) base_customer_t *base_customer_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
);

void base_customer_free(base_customer_t *base_customer);

base_customer_t *base_customer_parseFromJSON(cJSON *base_customerJSON);

cJSON *base_customer_convertToJSON(base_customer_t *base_customer);

#endif /* _base_customer_H_ */

