/*
 * product_option_add.h
 *
 * 
 */

#ifndef _product_option_add_H_
#define _product_option_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_option_add_t product_option_add_t;

#include "product_option_add_values_inner.h"

// Enum TYPE for product_option_add

typedef enum  { api2cart_openapi_product_option_add_TYPE_NULL = 0, api2cart_openapi_product_option_add_TYPE_option_type_select, api2cart_openapi_product_option_add_TYPE_option_type_text, api2cart_openapi_product_option_add_TYPE_option_type_radio, api2cart_openapi_product_option_add_TYPE_option_type_checkbox, api2cart_openapi_product_option_add_TYPE_option_type_textarea, api2cart_openapi_product_option_add_TYPE_option_type_readonly, api2cart_openapi_product_option_add_TYPE_option_type_multiselect, api2cart_openapi_product_option_add_TYPE_option_type_multicheckbox, api2cart_openapi_product_option_add_TYPE_option_type_file, api2cart_openapi_product_option_add_TYPE_option_type_date, api2cart_openapi_product_option_add_TYPE_option_type_datetime, api2cart_openapi_product_option_add_TYPE_option_type_time } api2cart_openapi_product_option_add_TYPE_e;

char* product_option_add_type_ToString(api2cart_openapi_product_option_add_TYPE_e type);

api2cart_openapi_product_option_add_TYPE_e product_option_add_type_FromString(char* type);



typedef struct product_option_add_t {
    char *name; // string
    api2cart_openapi_product_option_add_TYPE_e type; //enum
    char *product_id; // string
    char *default_option_value; // string
    char *option_values; // string
    char *description; // string
    int avail; //boolean
    int sort_order; //numeric
    int required; //boolean
    list_t *values; //nonprimitive container
    int clear_cache; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_option_add_t;

__attribute__((deprecated)) product_option_add_t *product_option_add_create(
    char *name,
    api2cart_openapi_product_option_add_TYPE_e type,
    char *product_id,
    char *default_option_value,
    char *option_values,
    char *description,
    int avail,
    int sort_order,
    int required,
    list_t *values,
    int clear_cache
);

void product_option_add_free(product_option_add_t *product_option_add);

product_option_add_t *product_option_add_parseFromJSON(cJSON *product_option_addJSON);

cJSON *product_option_add_convertToJSON(product_option_add_t *product_option_add);

#endif /* _product_option_add_H_ */

