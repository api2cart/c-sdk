/*
 * customer_group.h
 *
 * 
 */

#ifndef _customer_group_H_
#define _customer_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_group_t customer_group_t;

#include "object.h"



typedef struct customer_group_t {
    char *id; // string
    char *name; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} customer_group_t;

__attribute__((deprecated)) customer_group_t *customer_group_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
);

void customer_group_free(customer_group_t *customer_group);

customer_group_t *customer_group_parseFromJSON(cJSON *customer_groupJSON);

cJSON *customer_group_convertToJSON(customer_group_t *customer_group);

#endif /* _customer_group_H_ */

