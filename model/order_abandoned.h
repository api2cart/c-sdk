/*
 * order_abandoned.h
 *
 * 
 */

#ifndef _order_abandoned_H_
#define _order_abandoned_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_abandoned_t order_abandoned_t;

#include "a2_c_date_time.h"
#include "base_customer.h"
#include "currency.h"
#include "object.h"
#include "order_item.h"
#include "order_totals.h"



typedef struct order_abandoned_t {
    char *id; // string
    struct base_customer_t *customer; //model
    char *basket_id; // string
    char *basket_url; // string
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    struct currency_t *currency; //model
    struct order_totals_t *totals; //model
    list_t *order_products; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_abandoned_t;

__attribute__((deprecated)) order_abandoned_t *order_abandoned_create(
    char *id,
    base_customer_t *customer,
    char *basket_id,
    char *basket_url,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    currency_t *currency,
    order_totals_t *totals,
    list_t *order_products,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_abandoned_free(order_abandoned_t *order_abandoned);

order_abandoned_t *order_abandoned_parseFromJSON(cJSON *order_abandonedJSON);

cJSON *order_abandoned_convertToJSON(order_abandoned_t *order_abandoned);

#endif /* _order_abandoned_H_ */

