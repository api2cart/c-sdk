/*
 * order_add.h
 *
 * 
 */

#ifndef _order_add_H_
#define _order_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_add_t order_add_t;

#include "order_add_note_attributes_inner.h"
#include "order_add_order_item_inner.h"



typedef struct order_add_t {
    char *id; // string
    char *order_id; // string
    char *store_id; // string
    char *channel_id; // string
    char *order_status; // string
    char *fulfillment_status; // string
    char *financial_status; // string
    char *customer_email; // string
    char *customer_first_name; // string
    char *customer_last_name; // string
    char *customer_phone; // string
    char *customer_country; // string
    char *customer_birthday; // string
    char *customer_fax; // string
    char *order_payment_method; // string
    char *transaction_id; // string
    char *currency; // string
    char *date; // string
    char *date_modified; // string
    char *date_finished; // string
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
    char *bill_fax; // string
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
    char *shipp_fax; // string
    double subtotal_price; //numeric
    double tax_price; //numeric
    double total_price; //numeric
    double total_paid; //numeric
    int total_weight; //numeric
    int prices_inc_tax; //boolean
    double shipping_price; //numeric
    double shipping_tax; //numeric
    double discount; //numeric
    double coupon_discount; //numeric
    double gift_certificate_discount; //numeric
    char *order_shipping_method; // string
    char *carrier_id; // string
    char *warehouse_id; // string
    list_t *coupons; //primitive container
    char *tags; // string
    char *comment; // string
    char *admin_comment; // string
    char *admin_private_comment; // string
    int send_notifications; //boolean
    int send_admin_notifications; //boolean
    char *external_source; // string
    char *inventory_behaviour; // string
    int create_invoice; //boolean
    list_t *note_attributes; //nonprimitive container
    int clear_cache; //boolean
    char *origin; // string
    list_t *order_item; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_add_t;

__attribute__((deprecated)) order_add_t *order_add_create(
    char *id,
    char *order_id,
    char *store_id,
    char *channel_id,
    char *order_status,
    char *fulfillment_status,
    char *financial_status,
    char *customer_email,
    char *customer_first_name,
    char *customer_last_name,
    char *customer_phone,
    char *customer_country,
    char *customer_birthday,
    char *customer_fax,
    char *order_payment_method,
    char *transaction_id,
    char *currency,
    char *date,
    char *date_modified,
    char *date_finished,
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
    char *bill_fax,
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
    char *shipp_fax,
    double subtotal_price,
    double tax_price,
    double total_price,
    double total_paid,
    int total_weight,
    int prices_inc_tax,
    double shipping_price,
    double shipping_tax,
    double discount,
    double coupon_discount,
    double gift_certificate_discount,
    char *order_shipping_method,
    char *carrier_id,
    char *warehouse_id,
    list_t *coupons,
    char *tags,
    char *comment,
    char *admin_comment,
    char *admin_private_comment,
    int send_notifications,
    int send_admin_notifications,
    char *external_source,
    char *inventory_behaviour,
    int create_invoice,
    list_t *note_attributes,
    int clear_cache,
    char *origin,
    list_t *order_item
);

void order_add_free(order_add_t *order_add);

order_add_t *order_add_parseFromJSON(cJSON *order_addJSON);

cJSON *order_add_convertToJSON(order_add_t *order_add);

#endif /* _order_add_H_ */

