/*
 * product_add_specifics_inner_booking_details.h
 *
 * 
 */

#ifndef _product_add_specifics_inner_booking_details_H_
#define _product_add_specifics_inner_booking_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_specifics_inner_booking_details_t product_add_specifics_inner_booking_details_t;

#include "product_add_specifics_inner_booking_details_availabilities_inner.h"
#include "product_add_specifics_inner_booking_details_overrides_inner.h"

// Enum TYPE for product_add_specifics_inner_booking_details

typedef enum  { api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_NULL = 0, api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_date, api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_date_time } api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e;

char* product_add_specifics_inner_booking_details_type_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type);

api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e product_add_specifics_inner_booking_details_type_FromString(char* type);

// Enum TIMESTRICTTYPE for product_add_specifics_inner_booking_details

typedef enum  { api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_NULL = 0, api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_days, api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_hours, api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_minutes } api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e;

char* product_add_specifics_inner_booking_details_time_strict_type_ToString(api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type);

api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e product_add_specifics_inner_booking_details_time_strict_type_FromString(char* time_strict_type);



typedef struct product_add_specifics_inner_booking_details_t {
    char *location; // string
    api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type; //enum
    int session_duration; //numeric
    int session_gap; //numeric
    int sessions_count; //numeric
    double time_strict_value; //numeric
    api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type; //enum
    list_t *availabilities; //nonprimitive container
    list_t *overrides; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_specifics_inner_booking_details_t;

__attribute__((deprecated)) product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_create(
    char *location,
    api2cart_openapi_product_add_specifics_inner_booking_details_TYPE_e type,
    int session_duration,
    int session_gap,
    int sessions_count,
    double time_strict_value,
    api2cart_openapi_product_add_specifics_inner_booking_details_TIMESTRICTTYPE_e time_strict_type,
    list_t *availabilities,
    list_t *overrides
);

void product_add_specifics_inner_booking_details_free(product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details);

product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details_parseFromJSON(cJSON *product_add_specifics_inner_booking_detailsJSON);

cJSON *product_add_specifics_inner_booking_details_convertToJSON(product_add_specifics_inner_booking_details_t *product_add_specifics_inner_booking_details);

#endif /* _product_add_specifics_inner_booking_details_H_ */

