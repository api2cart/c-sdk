/*
 * catalog_price_rule.h
 *
 * 
 */

#ifndef _catalog_price_rule_H_
#define _catalog_price_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalog_price_rule_t catalog_price_rule_t;

#include "a2_c_date_time.h"
#include "catalog_price_rule_action.h"
#include "coupon_condition.h"
#include "object.h"



typedef struct catalog_price_rule_t {
    char *id; // string
    char *gid; // string
    char *type; // string
    char *name; // string
    char *description; // string
    char *short_description; // string
    int avail; //boolean
    list_t *actions; //nonprimitive container
    struct a2_c_date_time_t *created_time; //model
    struct a2_c_date_time_t *date_start; //model
    struct a2_c_date_time_t *date_end; //model
    double usage_count; //numeric
    list_t *conditions; //nonprimitive container
    int uses_per_order_limit; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} catalog_price_rule_t;

__attribute__((deprecated)) catalog_price_rule_t *catalog_price_rule_create(
    char *id,
    char *gid,
    char *type,
    char *name,
    char *description,
    char *short_description,
    int avail,
    list_t *actions,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *date_start,
    a2_c_date_time_t *date_end,
    double usage_count,
    list_t *conditions,
    int uses_per_order_limit,
    object_t *additional_fields,
    object_t *custom_fields
);

void catalog_price_rule_free(catalog_price_rule_t *catalog_price_rule);

catalog_price_rule_t *catalog_price_rule_parseFromJSON(cJSON *catalog_price_ruleJSON);

cJSON *catalog_price_rule_convertToJSON(catalog_price_rule_t *catalog_price_rule);

#endif /* _catalog_price_rule_H_ */

