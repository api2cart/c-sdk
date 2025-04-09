/*
 * catalog_price_rule_action.h
 *
 * 
 */

#ifndef _catalog_price_rule_action_H_
#define _catalog_price_rule_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalog_price_rule_action_t catalog_price_rule_action_t;

#include "coupon_condition.h"
#include "object.h"



typedef struct catalog_price_rule_action_t {
    char *scope; // string
    char *apply_to; // string
    char *type; // string
    double quantity; //numeric
    double value; //numeric
    char *currency_code; // string
    int include_tax; //boolean
    list_t *conditions; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} catalog_price_rule_action_t;

__attribute__((deprecated)) catalog_price_rule_action_t *catalog_price_rule_action_create(
    char *scope,
    char *apply_to,
    char *type,
    double quantity,
    double value,
    char *currency_code,
    int include_tax,
    list_t *conditions,
    object_t *additional_fields,
    object_t *custom_fields
);

void catalog_price_rule_action_free(catalog_price_rule_action_t *catalog_price_rule_action);

catalog_price_rule_action_t *catalog_price_rule_action_parseFromJSON(cJSON *catalog_price_rule_actionJSON);

cJSON *catalog_price_rule_action_convertToJSON(catalog_price_rule_action_t *catalog_price_rule_action);

#endif /* _catalog_price_rule_action_H_ */

