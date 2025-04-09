/*
 * basket.h
 *
 * 
 */

#ifndef _basket_H_
#define _basket_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct basket_t basket_t;

#include "a2_c_date_time.h"
#include "base_customer.h"
#include "basket_item.h"
#include "currency.h"
#include "object.h"



typedef struct basket_t {
    char *id; // string
    struct base_customer_t *customer; //model
    char *basket_url; // string
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    struct currency_t *currency; //model
    list_t *basket_products; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} basket_t;

__attribute__((deprecated)) basket_t *basket_create(
    char *id,
    base_customer_t *customer,
    char *basket_url,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    currency_t *currency,
    list_t *basket_products,
    object_t *additional_fields,
    object_t *custom_fields
);

void basket_free(basket_t *basket);

basket_t *basket_parseFromJSON(cJSON *basketJSON);

cJSON *basket_convertToJSON(basket_t *basket);

#endif /* _basket_H_ */

