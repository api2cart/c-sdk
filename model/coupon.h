/*
 * coupon.h
 *
 * 
 */

#ifndef _coupon_H_
#define _coupon_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct coupon_t coupon_t;

#include "a2_c_date_time.h"
#include "coupon_action.h"
#include "coupon_code.h"
#include "coupon_condition.h"
#include "coupon_history.h"
#include "object.h"



typedef struct coupon_t {
    char *id; // string
    char *code; // string
    list_t *codes; //nonprimitive container
    char *name; // string
    char *description; // string
    list_t *actions; //nonprimitive container
    struct a2_c_date_time_t *date_start; //model
    struct a2_c_date_time_t *date_end; //model
    int avail; //boolean
    int priority; //numeric
    int used_times; //numeric
    int usage_limit; //numeric
    int usage_limit_per_customer; //numeric
    char *logic_operator; // string
    list_t *conditions; //nonprimitive container
    list_t *usage_history; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} coupon_t;

__attribute__((deprecated)) coupon_t *coupon_create(
    char *id,
    char *code,
    list_t *codes,
    char *name,
    char *description,
    list_t *actions,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    int avail,
    int priority,
    int used_times,
    int usage_limit,
    int usage_limit_per_customer,
    char *logic_operator,
    list_t *conditions,
    list_t *usage_history,
    object_t *additional_fields,
    object_t *custom_fields
);

void coupon_free(coupon_t *coupon);

coupon_t *coupon_parseFromJSON(cJSON *couponJSON);

cJSON *coupon_convertToJSON(coupon_t *coupon);

#endif /* _coupon_H_ */

