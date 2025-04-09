/*
 * coupon_condition.h
 *
 * 
 */

#ifndef _coupon_condition_H_
#define _coupon_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_condition_t coupon_condition_t;

#include "object.h"



typedef struct coupon_condition_t {
    char *id; // string
    char *entity; // string
    char *match_items; // string
    char *key; // string
    char *_operator; // string
    char *value; // string
    char *logic_operator; // string
    list_t *sub_conditions; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_condition_t;

__attribute__((deprecated)) coupon_condition_t *coupon_condition_create(
    char *id,
    char *entity,
    char *match_items,
    char *key,
    char *_operator,
    char *value,
    char *logic_operator,
    list_t *sub_conditions,
    object_t *additional_fields,
    object_t *custom_fields
);

void coupon_condition_free(coupon_condition_t *coupon_condition);

coupon_condition_t *coupon_condition_parseFromJSON(cJSON *coupon_conditionJSON);

cJSON *coupon_condition_convertToJSON(coupon_condition_t *coupon_condition);

#endif /* _coupon_condition_H_ */

