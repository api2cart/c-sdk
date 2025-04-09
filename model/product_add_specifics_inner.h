/*
 * product_add_specifics_inner.h
 *
 * 
 */

#ifndef _product_add_specifics_inner_H_
#define _product_add_specifics_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_specifics_inner_t product_add_specifics_inner_t;

#include "product_add_specifics_inner_booking_details.h"
#include "product_add_specifics_inner_food_details.h"
#include "product_add_specifics_inner_group_products_details_inner.h"



typedef struct product_add_specifics_inner_t {
    char *name; // string
    char *value; // string
    list_t *values; //primitive container
    int used_for_variations; //boolean
    int scale_id; //numeric
    struct product_add_specifics_inner_food_details_t *food_details; //model
    list_t *group_products_details; //nonprimitive container
    struct product_add_specifics_inner_booking_details_t *booking_details; //model

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_specifics_inner_t;

__attribute__((deprecated)) product_add_specifics_inner_t *product_add_specifics_inner_create(
    char *name,
    char *value,
    list_t *values,
    int used_for_variations,
    int scale_id,
    product_add_specifics_inner_food_details_t *food_details,
    list_t *group_products_details,
    product_add_specifics_inner_booking_details_t *booking_details
);

void product_add_specifics_inner_free(product_add_specifics_inner_t *product_add_specifics_inner);

product_add_specifics_inner_t *product_add_specifics_inner_parseFromJSON(cJSON *product_add_specifics_innerJSON);

cJSON *product_add_specifics_inner_convertToJSON(product_add_specifics_inner_t *product_add_specifics_inner);

#endif /* _product_add_specifics_inner_H_ */

