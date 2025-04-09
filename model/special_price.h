/*
 * special_price.h
 *
 * 
 */

#ifndef _special_price_H_
#define _special_price_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct special_price_t special_price_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct special_price_t {
    double value; //numeric
    int avail; //boolean
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    struct a2_c_date_time_t *expired_at; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} special_price_t;

__attribute__((deprecated)) special_price_t *special_price_create(
    double value,
    int avail,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    a2_c_date_time_t *expired_at,
    object_t *additional_fields,
    object_t *custom_fields
);

void special_price_free(special_price_t *special_price);

special_price_t *special_price_parseFromJSON(cJSON *special_priceJSON);

cJSON *special_price_convertToJSON(special_price_t *special_price);

#endif /* _special_price_H_ */

