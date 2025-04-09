/*
 * order.h
 *
 * 
 */

#ifndef _order_H_
#define _order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_t order_t;

#include "a2_c_date_time.h"
#include "base_customer.h"
#include "currency.h"
#include "customer_address.h"
#include "object.h"
#include "order_item.h"
#include "order_payment_method.h"
#include "order_refund.h"
#include "order_shipping_method.h"
#include "order_status.h"
#include "order_total.h"
#include "order_totals.h"
#include "order_totals_new_discount.h"



typedef struct order_t {
    char *id; // string
    char *order_id; // string
    char *basket_id; // string
    char *channel_id; // string
    struct base_customer_t *customer; //model
    struct a2_c_date_time_t *create_at; //model
    struct currency_t *currency; //model
    struct customer_address_t *shipping_address; //model
    struct customer_address_t *billing_address; //model
    struct order_payment_method_t *payment_method; //model
    struct order_shipping_method_t *shipping_method; //model
    list_t *shipping_methods; //nonprimitive container
    struct order_status_t *status; //model
    struct order_totals_t *totals; //model
    struct order_total_t *total; //model
    list_t *discounts; //nonprimitive container
    list_t *order_products; //nonprimitive container
    list_t *bundles; //nonprimitive container
    struct a2_c_date_time_t *modified_at; //model
    struct a2_c_date_time_t *finished_time; //model
    char *comment; // string
    char *store_id; // string
    list_t *warehouses_ids; //primitive container
    list_t *refunds; //nonprimitive container
    char *gift_message; // string
    char *order_details_url; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_t;

__attribute__((deprecated)) order_t *order_create(
    char *id,
    char *order_id,
    char *basket_id,
    char *channel_id,
    base_customer_t *customer,
    a2_c_date_time_t *create_at,
    currency_t *currency,
    customer_address_t *shipping_address,
    customer_address_t *billing_address,
    order_payment_method_t *payment_method,
    order_shipping_method_t *shipping_method,
    list_t *shipping_methods,
    order_status_t *status,
    order_totals_t *totals,
    order_total_t *total,
    list_t *discounts,
    list_t *order_products,
    list_t *bundles,
    a2_c_date_time_t *modified_at,
    a2_c_date_time_t *finished_time,
    char *comment,
    char *store_id,
    list_t *warehouses_ids,
    list_t *refunds,
    char *gift_message,
    char *order_details_url,
    object_t *additional_fields,
    object_t *custom_fields
);

void order_free(order_t *order);

order_t *order_parseFromJSON(cJSON *orderJSON);

cJSON *order_convertToJSON(order_t *order);

#endif /* _order_H_ */

