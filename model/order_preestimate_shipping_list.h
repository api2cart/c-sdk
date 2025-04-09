/*
 * order_preestimate_shipping_list.h
 *
 * 
 */

#ifndef _order_preestimate_shipping_list_H_
#define _order_preestimate_shipping_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_preestimate_shipping_list_t order_preestimate_shipping_list_t;

#include "order_preestimate_shipping_list_order_item_inner.h"



typedef struct order_preestimate_shipping_list_t {
    char *store_id; // string
    char *warehouse_id; // string
    char *customer_email; // string
    char *customer_id; // string
    char *shipp_address_1; // string
    char *shipp_city; // string
    char *shipp_postcode; // string
    char *shipp_state; // string
    char *shipp_country; // string
    char *params; // string
    char *exclude; // string
    list_t *order_item; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_preestimate_shipping_list_t;

__attribute__((deprecated)) order_preestimate_shipping_list_t *order_preestimate_shipping_list_create(
    char *store_id,
    char *warehouse_id,
    char *customer_email,
    char *customer_id,
    char *shipp_address_1,
    char *shipp_city,
    char *shipp_postcode,
    char *shipp_state,
    char *shipp_country,
    char *params,
    char *exclude,
    list_t *order_item
);

void order_preestimate_shipping_list_free(order_preestimate_shipping_list_t *order_preestimate_shipping_list);

order_preestimate_shipping_list_t *order_preestimate_shipping_list_parseFromJSON(cJSON *order_preestimate_shipping_listJSON);

cJSON *order_preestimate_shipping_list_convertToJSON(order_preestimate_shipping_list_t *order_preestimate_shipping_list);

#endif /* _order_preestimate_shipping_list_H_ */

