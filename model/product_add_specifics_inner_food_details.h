/*
 * product_add_specifics_inner_food_details.h
 *
 * 
 */

#ifndef _product_add_specifics_inner_food_details_H_
#define _product_add_specifics_inner_food_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_specifics_inner_food_details_t product_add_specifics_inner_food_details_t;




typedef struct product_add_specifics_inner_food_details_t {
    double calories; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_specifics_inner_food_details_t;

__attribute__((deprecated)) product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_create(
    double calories
);

void product_add_specifics_inner_food_details_free(product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details);

product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details_parseFromJSON(cJSON *product_add_specifics_inner_food_detailsJSON);

cJSON *product_add_specifics_inner_food_details_convertToJSON(product_add_specifics_inner_food_details_t *product_add_specifics_inner_food_details);

#endif /* _product_add_specifics_inner_food_details_H_ */

