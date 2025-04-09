/*
 * product_advanced_price.h
 *
 * 
 */

#ifndef _product_advanced_price_H_
#define _product_advanced_price_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_advanced_price_t product_advanced_price_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct product_advanced_price_t {
    char *id; // string
    double value; //numeric
    int avail; //boolean
    char *group_id; // string
    double quantity_from; //numeric
    struct a2_c_date_time_t *start_time; //model
    struct a2_c_date_time_t *expire_time; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_advanced_price_t;

__attribute__((deprecated)) product_advanced_price_t *product_advanced_price_create(
    char *id,
    double value,
    int avail,
    char *group_id,
    double quantity_from,
    a2_c_date_time_t *start_time,
    a2_c_date_time_t *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_advanced_price_free(product_advanced_price_t *product_advanced_price);

product_advanced_price_t *product_advanced_price_parseFromJSON(cJSON *product_advanced_priceJSON);

cJSON *product_advanced_price_convertToJSON(product_advanced_price_t *product_advanced_price);

#endif /* _product_advanced_price_H_ */

