/*
 * cart_coupon_add.h
 *
 * 
 */

#ifndef _cart_coupon_add_H_
#define _cart_coupon_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_coupon_add_t cart_coupon_add_t;


// Enum ACTIONTYPE for cart_coupon_add

typedef enum  { api2cart_openapi_cart_coupon_add_ACTIONTYPE_NULL = 0, api2cart_openapi_cart_coupon_add_ACTIONTYPE_percent, api2cart_openapi_cart_coupon_add_ACTIONTYPE_fixed } api2cart_openapi_cart_coupon_add_ACTIONTYPE_e;

char* cart_coupon_add_action_type_ToString(api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type);

api2cart_openapi_cart_coupon_add_ACTIONTYPE_e cart_coupon_add_action_type_FromString(char* action_type);

// Enum ACTIONAPPLYTO for cart_coupon_add

typedef enum  { api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_NULL = 0, api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_order_total, api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_item_price, api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_shipping } api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e;

char* cart_coupon_add_action_apply_to_ToString(api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to);

api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e cart_coupon_add_action_apply_to_FromString(char* action_apply_to);

// Enum ACTIONSCOPE for cart_coupon_add

typedef enum  { api2cart_openapi_cart_coupon_add_ACTIONSCOPE_NULL = 0, api2cart_openapi_cart_coupon_add_ACTIONSCOPE_order, api2cart_openapi_cart_coupon_add_ACTIONSCOPE_matching_items } api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e;

char* cart_coupon_add_action_scope_ToString(api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope);

api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e cart_coupon_add_action_scope_FromString(char* action_scope);



typedef struct cart_coupon_add_t {
    char *store_id; // string
    char *code; // string
    char *name; // string
    list_t *codes; //primitive container
    api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type; //enum
    api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to; //enum
    api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope; //enum
    double action_amount; //numeric
    char *date_start; // string
    char *date_end; // string
    int usage_limit; //numeric
    int usage_limit_per_customer; //numeric
    char *action_condition_entity; // string
    char *action_condition_key; // string
    char *action_condition_operator; // string
    char *action_condition_value; // string
    int include_tax; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} cart_coupon_add_t;

__attribute__((deprecated)) cart_coupon_add_t *cart_coupon_add_create(
    char *store_id,
    char *code,
    char *name,
    list_t *codes,
    api2cart_openapi_cart_coupon_add_ACTIONTYPE_e action_type,
    api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e action_apply_to,
    api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e action_scope,
    double action_amount,
    char *date_start,
    char *date_end,
    int usage_limit,
    int usage_limit_per_customer,
    char *action_condition_entity,
    char *action_condition_key,
    char *action_condition_operator,
    char *action_condition_value,
    int include_tax
);

void cart_coupon_add_free(cart_coupon_add_t *cart_coupon_add);

cart_coupon_add_t *cart_coupon_add_parseFromJSON(cJSON *cart_coupon_addJSON);

cJSON *cart_coupon_add_convertToJSON(cart_coupon_add_t *cart_coupon_add);

#endif /* _cart_coupon_add_H_ */

