/*
 * order_calculate.h
 *
 * 
 */

#ifndef _order_calculate_H_
#define _order_calculate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_calculate_t order_calculate_t;

#include "order_calculate_order_item_inner.h"



typedef struct order_calculate_t {
    char *customer_email; // string
    char *currency_id; // string
    char *store_id; // string
    list_t *coupons; //primitive container
    char *shipp_first_name; // string
    char *shipp_last_name; // string
    char *shipp_address_1; // string
    char *shipp_address_2; // string
    char *shipp_city; // string
    char *shipp_postcode; // string
    char *shipp_state; // string
    char *shipp_country; // string
    char *shipp_company; // string
    char *shipp_phone; // string
    char *bill_first_name; // string
    char *bill_last_name; // string
    char *bill_address_1; // string
    char *bill_address_2; // string
    char *bill_city; // string
    char *bill_postcode; // string
    char *bill_state; // string
    char *bill_country; // string
    char *bill_company; // string
    char *bill_phone; // string
    char *response_fields; // string
    list_t *order_item; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_calculate_t;

__attribute__((deprecated)) order_calculate_t *order_calculate_create(
    char *customer_email,
    char *currency_id,
    char *store_id,
    list_t *coupons,
    char *shipp_first_name,
    char *shipp_last_name,
    char *shipp_address_1,
    char *shipp_address_2,
    char *shipp_city,
    char *shipp_postcode,
    char *shipp_state,
    char *shipp_country,
    char *shipp_company,
    char *shipp_phone,
    char *bill_first_name,
    char *bill_last_name,
    char *bill_address_1,
    char *bill_address_2,
    char *bill_city,
    char *bill_postcode,
    char *bill_state,
    char *bill_country,
    char *bill_company,
    char *bill_phone,
    char *response_fields,
    list_t *order_item
);

void order_calculate_free(order_calculate_t *order_calculate);

order_calculate_t *order_calculate_parseFromJSON(cJSON *order_calculateJSON);

cJSON *order_calculate_convertToJSON(order_calculate_t *order_calculate);

#endif /* _order_calculate_H_ */

