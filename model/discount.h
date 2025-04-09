/*
 * discount.h
 *
 * 
 */

#ifndef _discount_H_
#define _discount_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_t discount_t;

#include "object.h"



typedef struct discount_t {
    char *id; // string
    char *name; // string
    char *modifier_type; // string
    double value; //numeric
    char *from_time; // string
    char *to_time; // string
    char *customer_group_ids; // string
    int sort_order; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} discount_t;

__attribute__((deprecated)) discount_t *discount_create(
    char *id,
    char *name,
    char *modifier_type,
    double value,
    char *from_time,
    char *to_time,
    char *customer_group_ids,
    int sort_order,
    object_t *additional_fields,
    object_t *custom_fields
);

void discount_free(discount_t *discount);

discount_t *discount_parseFromJSON(cJSON *discountJSON);

cJSON *discount_convertToJSON(discount_t *discount);

#endif /* _discount_H_ */

