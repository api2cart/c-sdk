/*
 * coupon_action.h
 *
 * 
 */

#ifndef _coupon_action_H_
#define _coupon_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_action_t coupon_action_t;

#include "coupon_condition.h"
#include "object.h"



typedef struct coupon_action_t {
    char *scope; // string
    char *apply_to; // string
    double amount; //numeric
    char *currency_code; // string
    int include_tax; //boolean
    char *type; // string
    double discounted_quantity; //numeric
    int discount_quantity_step; //numeric
    char *logic_operator; // string
    list_t *conditions; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_action_t;

__attribute__((deprecated)) coupon_action_t *coupon_action_create(
    char *scope,
    char *apply_to,
    double amount,
    char *currency_code,
    int include_tax,
    char *type,
    double discounted_quantity,
    int discount_quantity_step,
    char *logic_operator,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
);

void coupon_action_free(coupon_action_t *coupon_action);

coupon_action_t *coupon_action_parseFromJSON(cJSON *coupon_actionJSON);

cJSON *coupon_action_convertToJSON(coupon_action_t *coupon_action);

#endif /* _coupon_action_H_ */

