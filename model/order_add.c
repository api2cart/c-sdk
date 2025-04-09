#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_add.h"



static order_add_t *order_add_create_internal(
    char *id,
    char *order_id,
    char *store_id,
    char *channel_id,
    char *order_status,
    int send_notifications,
    int send_admin_notifications,
    char *customer_email,
    char *bill_first_name,
    char *bill_last_name,
    char *bill_address_1,
    char *bill_city,
    char *bill_postcode,
    char *bill_state,
    char *bill_country,
    char *shipp_first_name,
    char *shipp_last_name,
    char *shipp_address_1,
    char *shipp_city,
    char *shipp_postcode,
    char *shipp_state,
    char *shipp_country,
    double total_price,
    char *date,
    char *order_payment_method,
    char *transaction_id,
    char *order_shipping_method,
    char *currency,
    char *bill_address_2,
    char *bill_company,
    char *bill_phone,
    char *bill_fax,
    char *comment,
    char *admin_comment,
    char *admin_private_comment,
    char *customer_first_name,
    char *customer_last_name,
    char *customer_phone,
    char *customer_country,
    char *customer_birthday,
    char *customer_fax,
    char *shipp_address_2,
    char *shipp_company,
    char *shipp_phone,
    char *shipp_fax,
    char *date_modified,
    char *date_finished,
    double subtotal_price,
    double tax_price,
    int prices_inc_tax,
    double shipping_price,
    double shipping_tax,
    char *carrier_id,
    char *warehouse_id,
    double discount,
    double coupon_discount,
    list_t *coupons,
    double gift_certificate_discount,
    char *fulfillment_status,
    char *financial_status,
    double total_paid,
    char *external_source,
    char *tags,
    char *inventory_behaviour,
    int create_invoice,
    list_t *note_attributes,
    int total_weight,
    int clear_cache,
    char *origin,
    list_t *order_item
    ) {
    order_add_t *order_add_local_var = malloc(sizeof(order_add_t));
    if (!order_add_local_var) {
        return NULL;
    }
    order_add_local_var->id = id;
    order_add_local_var->order_id = order_id;
    order_add_local_var->store_id = store_id;
    order_add_local_var->channel_id = channel_id;
    order_add_local_var->order_status = order_status;
    order_add_local_var->send_notifications = send_notifications;
    order_add_local_var->send_admin_notifications = send_admin_notifications;
    order_add_local_var->customer_email = customer_email;
    order_add_local_var->bill_first_name = bill_first_name;
    order_add_local_var->bill_last_name = bill_last_name;
    order_add_local_var->bill_address_1 = bill_address_1;
    order_add_local_var->bill_city = bill_city;
    order_add_local_var->bill_postcode = bill_postcode;
    order_add_local_var->bill_state = bill_state;
    order_add_local_var->bill_country = bill_country;
    order_add_local_var->shipp_first_name = shipp_first_name;
    order_add_local_var->shipp_last_name = shipp_last_name;
    order_add_local_var->shipp_address_1 = shipp_address_1;
    order_add_local_var->shipp_city = shipp_city;
    order_add_local_var->shipp_postcode = shipp_postcode;
    order_add_local_var->shipp_state = shipp_state;
    order_add_local_var->shipp_country = shipp_country;
    order_add_local_var->total_price = total_price;
    order_add_local_var->date = date;
    order_add_local_var->order_payment_method = order_payment_method;
    order_add_local_var->transaction_id = transaction_id;
    order_add_local_var->order_shipping_method = order_shipping_method;
    order_add_local_var->currency = currency;
    order_add_local_var->bill_address_2 = bill_address_2;
    order_add_local_var->bill_company = bill_company;
    order_add_local_var->bill_phone = bill_phone;
    order_add_local_var->bill_fax = bill_fax;
    order_add_local_var->comment = comment;
    order_add_local_var->admin_comment = admin_comment;
    order_add_local_var->admin_private_comment = admin_private_comment;
    order_add_local_var->customer_first_name = customer_first_name;
    order_add_local_var->customer_last_name = customer_last_name;
    order_add_local_var->customer_phone = customer_phone;
    order_add_local_var->customer_country = customer_country;
    order_add_local_var->customer_birthday = customer_birthday;
    order_add_local_var->customer_fax = customer_fax;
    order_add_local_var->shipp_address_2 = shipp_address_2;
    order_add_local_var->shipp_company = shipp_company;
    order_add_local_var->shipp_phone = shipp_phone;
    order_add_local_var->shipp_fax = shipp_fax;
    order_add_local_var->date_modified = date_modified;
    order_add_local_var->date_finished = date_finished;
    order_add_local_var->subtotal_price = subtotal_price;
    order_add_local_var->tax_price = tax_price;
    order_add_local_var->prices_inc_tax = prices_inc_tax;
    order_add_local_var->shipping_price = shipping_price;
    order_add_local_var->shipping_tax = shipping_tax;
    order_add_local_var->carrier_id = carrier_id;
    order_add_local_var->warehouse_id = warehouse_id;
    order_add_local_var->discount = discount;
    order_add_local_var->coupon_discount = coupon_discount;
    order_add_local_var->coupons = coupons;
    order_add_local_var->gift_certificate_discount = gift_certificate_discount;
    order_add_local_var->fulfillment_status = fulfillment_status;
    order_add_local_var->financial_status = financial_status;
    order_add_local_var->total_paid = total_paid;
    order_add_local_var->external_source = external_source;
    order_add_local_var->tags = tags;
    order_add_local_var->inventory_behaviour = inventory_behaviour;
    order_add_local_var->create_invoice = create_invoice;
    order_add_local_var->note_attributes = note_attributes;
    order_add_local_var->total_weight = total_weight;
    order_add_local_var->clear_cache = clear_cache;
    order_add_local_var->origin = origin;
    order_add_local_var->order_item = order_item;

    order_add_local_var->_library_owned = 1;
    return order_add_local_var;
}

__attribute__((deprecated)) order_add_t *order_add_create(
    char *id,
    char *order_id,
    char *store_id,
    char *channel_id,
    char *order_status,
    int send_notifications,
    int send_admin_notifications,
    char *customer_email,
    char *bill_first_name,
    char *bill_last_name,
    char *bill_address_1,
    char *bill_city,
    char *bill_postcode,
    char *bill_state,
    char *bill_country,
    char *shipp_first_name,
    char *shipp_last_name,
    char *shipp_address_1,
    char *shipp_city,
    char *shipp_postcode,
    char *shipp_state,
    char *shipp_country,
    double total_price,
    char *date,
    char *order_payment_method,
    char *transaction_id,
    char *order_shipping_method,
    char *currency,
    char *bill_address_2,
    char *bill_company,
    char *bill_phone,
    char *bill_fax,
    char *comment,
    char *admin_comment,
    char *admin_private_comment,
    char *customer_first_name,
    char *customer_last_name,
    char *customer_phone,
    char *customer_country,
    char *customer_birthday,
    char *customer_fax,
    char *shipp_address_2,
    char *shipp_company,
    char *shipp_phone,
    char *shipp_fax,
    char *date_modified,
    char *date_finished,
    double subtotal_price,
    double tax_price,
    int prices_inc_tax,
    double shipping_price,
    double shipping_tax,
    char *carrier_id,
    char *warehouse_id,
    double discount,
    double coupon_discount,
    list_t *coupons,
    double gift_certificate_discount,
    char *fulfillment_status,
    char *financial_status,
    double total_paid,
    char *external_source,
    char *tags,
    char *inventory_behaviour,
    int create_invoice,
    list_t *note_attributes,
    int total_weight,
    int clear_cache,
    char *origin,
    list_t *order_item
    ) {
    return order_add_create_internal (
        id,
        order_id,
        store_id,
        channel_id,
        order_status,
        send_notifications,
        send_admin_notifications,
        customer_email,
        bill_first_name,
        bill_last_name,
        bill_address_1,
        bill_city,
        bill_postcode,
        bill_state,
        bill_country,
        shipp_first_name,
        shipp_last_name,
        shipp_address_1,
        shipp_city,
        shipp_postcode,
        shipp_state,
        shipp_country,
        total_price,
        date,
        order_payment_method,
        transaction_id,
        order_shipping_method,
        currency,
        bill_address_2,
        bill_company,
        bill_phone,
        bill_fax,
        comment,
        admin_comment,
        admin_private_comment,
        customer_first_name,
        customer_last_name,
        customer_phone,
        customer_country,
        customer_birthday,
        customer_fax,
        shipp_address_2,
        shipp_company,
        shipp_phone,
        shipp_fax,
        date_modified,
        date_finished,
        subtotal_price,
        tax_price,
        prices_inc_tax,
        shipping_price,
        shipping_tax,
        carrier_id,
        warehouse_id,
        discount,
        coupon_discount,
        coupons,
        gift_certificate_discount,
        fulfillment_status,
        financial_status,
        total_paid,
        external_source,
        tags,
        inventory_behaviour,
        create_invoice,
        note_attributes,
        total_weight,
        clear_cache,
        origin,
        order_item
        );
}

void order_add_free(order_add_t *order_add) {
    if(NULL == order_add){
        return ;
    }
    if(order_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_add->id) {
        free(order_add->id);
        order_add->id = NULL;
    }
    if (order_add->order_id) {
        free(order_add->order_id);
        order_add->order_id = NULL;
    }
    if (order_add->store_id) {
        free(order_add->store_id);
        order_add->store_id = NULL;
    }
    if (order_add->channel_id) {
        free(order_add->channel_id);
        order_add->channel_id = NULL;
    }
    if (order_add->order_status) {
        free(order_add->order_status);
        order_add->order_status = NULL;
    }
    if (order_add->customer_email) {
        free(order_add->customer_email);
        order_add->customer_email = NULL;
    }
    if (order_add->bill_first_name) {
        free(order_add->bill_first_name);
        order_add->bill_first_name = NULL;
    }
    if (order_add->bill_last_name) {
        free(order_add->bill_last_name);
        order_add->bill_last_name = NULL;
    }
    if (order_add->bill_address_1) {
        free(order_add->bill_address_1);
        order_add->bill_address_1 = NULL;
    }
    if (order_add->bill_city) {
        free(order_add->bill_city);
        order_add->bill_city = NULL;
    }
    if (order_add->bill_postcode) {
        free(order_add->bill_postcode);
        order_add->bill_postcode = NULL;
    }
    if (order_add->bill_state) {
        free(order_add->bill_state);
        order_add->bill_state = NULL;
    }
    if (order_add->bill_country) {
        free(order_add->bill_country);
        order_add->bill_country = NULL;
    }
    if (order_add->shipp_first_name) {
        free(order_add->shipp_first_name);
        order_add->shipp_first_name = NULL;
    }
    if (order_add->shipp_last_name) {
        free(order_add->shipp_last_name);
        order_add->shipp_last_name = NULL;
    }
    if (order_add->shipp_address_1) {
        free(order_add->shipp_address_1);
        order_add->shipp_address_1 = NULL;
    }
    if (order_add->shipp_city) {
        free(order_add->shipp_city);
        order_add->shipp_city = NULL;
    }
    if (order_add->shipp_postcode) {
        free(order_add->shipp_postcode);
        order_add->shipp_postcode = NULL;
    }
    if (order_add->shipp_state) {
        free(order_add->shipp_state);
        order_add->shipp_state = NULL;
    }
    if (order_add->shipp_country) {
        free(order_add->shipp_country);
        order_add->shipp_country = NULL;
    }
    if (order_add->date) {
        free(order_add->date);
        order_add->date = NULL;
    }
    if (order_add->order_payment_method) {
        free(order_add->order_payment_method);
        order_add->order_payment_method = NULL;
    }
    if (order_add->transaction_id) {
        free(order_add->transaction_id);
        order_add->transaction_id = NULL;
    }
    if (order_add->order_shipping_method) {
        free(order_add->order_shipping_method);
        order_add->order_shipping_method = NULL;
    }
    if (order_add->currency) {
        free(order_add->currency);
        order_add->currency = NULL;
    }
    if (order_add->bill_address_2) {
        free(order_add->bill_address_2);
        order_add->bill_address_2 = NULL;
    }
    if (order_add->bill_company) {
        free(order_add->bill_company);
        order_add->bill_company = NULL;
    }
    if (order_add->bill_phone) {
        free(order_add->bill_phone);
        order_add->bill_phone = NULL;
    }
    if (order_add->bill_fax) {
        free(order_add->bill_fax);
        order_add->bill_fax = NULL;
    }
    if (order_add->comment) {
        free(order_add->comment);
        order_add->comment = NULL;
    }
    if (order_add->admin_comment) {
        free(order_add->admin_comment);
        order_add->admin_comment = NULL;
    }
    if (order_add->admin_private_comment) {
        free(order_add->admin_private_comment);
        order_add->admin_private_comment = NULL;
    }
    if (order_add->customer_first_name) {
        free(order_add->customer_first_name);
        order_add->customer_first_name = NULL;
    }
    if (order_add->customer_last_name) {
        free(order_add->customer_last_name);
        order_add->customer_last_name = NULL;
    }
    if (order_add->customer_phone) {
        free(order_add->customer_phone);
        order_add->customer_phone = NULL;
    }
    if (order_add->customer_country) {
        free(order_add->customer_country);
        order_add->customer_country = NULL;
    }
    if (order_add->customer_birthday) {
        free(order_add->customer_birthday);
        order_add->customer_birthday = NULL;
    }
    if (order_add->customer_fax) {
        free(order_add->customer_fax);
        order_add->customer_fax = NULL;
    }
    if (order_add->shipp_address_2) {
        free(order_add->shipp_address_2);
        order_add->shipp_address_2 = NULL;
    }
    if (order_add->shipp_company) {
        free(order_add->shipp_company);
        order_add->shipp_company = NULL;
    }
    if (order_add->shipp_phone) {
        free(order_add->shipp_phone);
        order_add->shipp_phone = NULL;
    }
    if (order_add->shipp_fax) {
        free(order_add->shipp_fax);
        order_add->shipp_fax = NULL;
    }
    if (order_add->date_modified) {
        free(order_add->date_modified);
        order_add->date_modified = NULL;
    }
    if (order_add->date_finished) {
        free(order_add->date_finished);
        order_add->date_finished = NULL;
    }
    if (order_add->carrier_id) {
        free(order_add->carrier_id);
        order_add->carrier_id = NULL;
    }
    if (order_add->warehouse_id) {
        free(order_add->warehouse_id);
        order_add->warehouse_id = NULL;
    }
    if (order_add->coupons) {
        list_ForEach(listEntry, order_add->coupons) {
            free(listEntry->data);
        }
        list_freeList(order_add->coupons);
        order_add->coupons = NULL;
    }
    if (order_add->fulfillment_status) {
        free(order_add->fulfillment_status);
        order_add->fulfillment_status = NULL;
    }
    if (order_add->financial_status) {
        free(order_add->financial_status);
        order_add->financial_status = NULL;
    }
    if (order_add->external_source) {
        free(order_add->external_source);
        order_add->external_source = NULL;
    }
    if (order_add->tags) {
        free(order_add->tags);
        order_add->tags = NULL;
    }
    if (order_add->inventory_behaviour) {
        free(order_add->inventory_behaviour);
        order_add->inventory_behaviour = NULL;
    }
    if (order_add->note_attributes) {
        list_ForEach(listEntry, order_add->note_attributes) {
            order_add_note_attributes_inner_free(listEntry->data);
        }
        list_freeList(order_add->note_attributes);
        order_add->note_attributes = NULL;
    }
    if (order_add->origin) {
        free(order_add->origin);
        order_add->origin = NULL;
    }
    if (order_add->order_item) {
        list_ForEach(listEntry, order_add->order_item) {
            order_add_order_item_inner_free(listEntry->data);
        }
        list_freeList(order_add->order_item);
        order_add->order_item = NULL;
    }
    free(order_add);
}

cJSON *order_add_convertToJSON(order_add_t *order_add) {
    cJSON *item = cJSON_CreateObject();

    // order_add->id
    if(order_add->id) {
    if(cJSON_AddStringToObject(item, "id", order_add->id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->order_id
    if(order_add->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_add->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->store_id
    if(order_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->channel_id
    if(order_add->channel_id) {
    if(cJSON_AddStringToObject(item, "channel_id", order_add->channel_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->order_status
    if (!order_add->order_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_status", order_add->order_status) == NULL) {
    goto fail; //String
    }


    // order_add->send_notifications
    if(order_add->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_add->send_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add->send_admin_notifications
    if(order_add->send_admin_notifications) {
    if(cJSON_AddBoolToObject(item, "send_admin_notifications", order_add->send_admin_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add->customer_email
    if (!order_add->customer_email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "customer_email", order_add->customer_email) == NULL) {
    goto fail; //String
    }


    // order_add->bill_first_name
    if (!order_add->bill_first_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_first_name", order_add->bill_first_name) == NULL) {
    goto fail; //String
    }


    // order_add->bill_last_name
    if (!order_add->bill_last_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_last_name", order_add->bill_last_name) == NULL) {
    goto fail; //String
    }


    // order_add->bill_address_1
    if (!order_add->bill_address_1) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_address_1", order_add->bill_address_1) == NULL) {
    goto fail; //String
    }


    // order_add->bill_city
    if (!order_add->bill_city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_city", order_add->bill_city) == NULL) {
    goto fail; //String
    }


    // order_add->bill_postcode
    if (!order_add->bill_postcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_postcode", order_add->bill_postcode) == NULL) {
    goto fail; //String
    }


    // order_add->bill_state
    if (!order_add->bill_state) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_state", order_add->bill_state) == NULL) {
    goto fail; //String
    }


    // order_add->bill_country
    if (!order_add->bill_country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bill_country", order_add->bill_country) == NULL) {
    goto fail; //String
    }


    // order_add->shipp_first_name
    if(order_add->shipp_first_name) {
    if(cJSON_AddStringToObject(item, "shipp_first_name", order_add->shipp_first_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_last_name
    if(order_add->shipp_last_name) {
    if(cJSON_AddStringToObject(item, "shipp_last_name", order_add->shipp_last_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_address_1
    if(order_add->shipp_address_1) {
    if(cJSON_AddStringToObject(item, "shipp_address_1", order_add->shipp_address_1) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_city
    if(order_add->shipp_city) {
    if(cJSON_AddStringToObject(item, "shipp_city", order_add->shipp_city) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_postcode
    if(order_add->shipp_postcode) {
    if(cJSON_AddStringToObject(item, "shipp_postcode", order_add->shipp_postcode) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_state
    if(order_add->shipp_state) {
    if(cJSON_AddStringToObject(item, "shipp_state", order_add->shipp_state) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_country
    if(order_add->shipp_country) {
    if(cJSON_AddStringToObject(item, "shipp_country", order_add->shipp_country) == NULL) {
    goto fail; //String
    }
    }


    // order_add->total_price
    if(order_add->total_price) {
    if(cJSON_AddNumberToObject(item, "total_price", order_add->total_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->date
    if(order_add->date) {
    if(cJSON_AddStringToObject(item, "date", order_add->date) == NULL) {
    goto fail; //String
    }
    }


    // order_add->order_payment_method
    if(order_add->order_payment_method) {
    if(cJSON_AddStringToObject(item, "order_payment_method", order_add->order_payment_method) == NULL) {
    goto fail; //String
    }
    }


    // order_add->transaction_id
    if(order_add->transaction_id) {
    if(cJSON_AddStringToObject(item, "transaction_id", order_add->transaction_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->order_shipping_method
    if(order_add->order_shipping_method) {
    if(cJSON_AddStringToObject(item, "order_shipping_method", order_add->order_shipping_method) == NULL) {
    goto fail; //String
    }
    }


    // order_add->currency
    if(order_add->currency) {
    if(cJSON_AddStringToObject(item, "currency", order_add->currency) == NULL) {
    goto fail; //String
    }
    }


    // order_add->bill_address_2
    if(order_add->bill_address_2) {
    if(cJSON_AddStringToObject(item, "bill_address_2", order_add->bill_address_2) == NULL) {
    goto fail; //String
    }
    }


    // order_add->bill_company
    if(order_add->bill_company) {
    if(cJSON_AddStringToObject(item, "bill_company", order_add->bill_company) == NULL) {
    goto fail; //String
    }
    }


    // order_add->bill_phone
    if(order_add->bill_phone) {
    if(cJSON_AddStringToObject(item, "bill_phone", order_add->bill_phone) == NULL) {
    goto fail; //String
    }
    }


    // order_add->bill_fax
    if(order_add->bill_fax) {
    if(cJSON_AddStringToObject(item, "bill_fax", order_add->bill_fax) == NULL) {
    goto fail; //String
    }
    }


    // order_add->comment
    if(order_add->comment) {
    if(cJSON_AddStringToObject(item, "comment", order_add->comment) == NULL) {
    goto fail; //String
    }
    }


    // order_add->admin_comment
    if(order_add->admin_comment) {
    if(cJSON_AddStringToObject(item, "admin_comment", order_add->admin_comment) == NULL) {
    goto fail; //String
    }
    }


    // order_add->admin_private_comment
    if(order_add->admin_private_comment) {
    if(cJSON_AddStringToObject(item, "admin_private_comment", order_add->admin_private_comment) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_first_name
    if(order_add->customer_first_name) {
    if(cJSON_AddStringToObject(item, "customer_first_name", order_add->customer_first_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_last_name
    if(order_add->customer_last_name) {
    if(cJSON_AddStringToObject(item, "customer_last_name", order_add->customer_last_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_phone
    if(order_add->customer_phone) {
    if(cJSON_AddStringToObject(item, "customer_phone", order_add->customer_phone) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_country
    if(order_add->customer_country) {
    if(cJSON_AddStringToObject(item, "customer_country", order_add->customer_country) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_birthday
    if(order_add->customer_birthday) {
    if(cJSON_AddStringToObject(item, "customer_birthday", order_add->customer_birthday) == NULL) {
    goto fail; //String
    }
    }


    // order_add->customer_fax
    if(order_add->customer_fax) {
    if(cJSON_AddStringToObject(item, "customer_fax", order_add->customer_fax) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_address_2
    if(order_add->shipp_address_2) {
    if(cJSON_AddStringToObject(item, "shipp_address_2", order_add->shipp_address_2) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_company
    if(order_add->shipp_company) {
    if(cJSON_AddStringToObject(item, "shipp_company", order_add->shipp_company) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_phone
    if(order_add->shipp_phone) {
    if(cJSON_AddStringToObject(item, "shipp_phone", order_add->shipp_phone) == NULL) {
    goto fail; //String
    }
    }


    // order_add->shipp_fax
    if(order_add->shipp_fax) {
    if(cJSON_AddStringToObject(item, "shipp_fax", order_add->shipp_fax) == NULL) {
    goto fail; //String
    }
    }


    // order_add->date_modified
    if(order_add->date_modified) {
    if(cJSON_AddStringToObject(item, "date_modified", order_add->date_modified) == NULL) {
    goto fail; //String
    }
    }


    // order_add->date_finished
    if(order_add->date_finished) {
    if(cJSON_AddStringToObject(item, "date_finished", order_add->date_finished) == NULL) {
    goto fail; //String
    }
    }


    // order_add->subtotal_price
    if(order_add->subtotal_price) {
    if(cJSON_AddNumberToObject(item, "subtotal_price", order_add->subtotal_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->tax_price
    if(order_add->tax_price) {
    if(cJSON_AddNumberToObject(item, "tax_price", order_add->tax_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->prices_inc_tax
    if(order_add->prices_inc_tax) {
    if(cJSON_AddBoolToObject(item, "prices_inc_tax", order_add->prices_inc_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add->shipping_price
    if(order_add->shipping_price) {
    if(cJSON_AddNumberToObject(item, "shipping_price", order_add->shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->shipping_tax
    if(order_add->shipping_tax) {
    if(cJSON_AddNumberToObject(item, "shipping_tax", order_add->shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->carrier_id
    if(order_add->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrier_id", order_add->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->warehouse_id
    if(order_add->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", order_add->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add->discount
    if(order_add->discount) {
    if(cJSON_AddNumberToObject(item, "discount", order_add->discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->coupon_discount
    if(order_add->coupon_discount) {
    if(cJSON_AddNumberToObject(item, "coupon_discount", order_add->coupon_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->coupons
    if(order_add->coupons) {
    cJSON *coupons = cJSON_AddArrayToObject(item, "coupons");
    if(coupons == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *couponsListEntry;
    list_ForEach(couponsListEntry, order_add->coupons) {
    if(cJSON_AddStringToObject(coupons, "", couponsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // order_add->gift_certificate_discount
    if(order_add->gift_certificate_discount) {
    if(cJSON_AddNumberToObject(item, "gift_certificate_discount", order_add->gift_certificate_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->fulfillment_status
    if(order_add->fulfillment_status) {
    if(cJSON_AddStringToObject(item, "fulfillment_status", order_add->fulfillment_status) == NULL) {
    goto fail; //String
    }
    }


    // order_add->financial_status
    if(order_add->financial_status) {
    if(cJSON_AddStringToObject(item, "financial_status", order_add->financial_status) == NULL) {
    goto fail; //String
    }
    }


    // order_add->total_paid
    if(order_add->total_paid) {
    if(cJSON_AddNumberToObject(item, "total_paid", order_add->total_paid) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->external_source
    if(order_add->external_source) {
    if(cJSON_AddStringToObject(item, "external_source", order_add->external_source) == NULL) {
    goto fail; //String
    }
    }


    // order_add->tags
    if(order_add->tags) {
    if(cJSON_AddStringToObject(item, "tags", order_add->tags) == NULL) {
    goto fail; //String
    }
    }


    // order_add->inventory_behaviour
    if(order_add->inventory_behaviour) {
    if(cJSON_AddStringToObject(item, "inventory_behaviour", order_add->inventory_behaviour) == NULL) {
    goto fail; //String
    }
    }


    // order_add->create_invoice
    if(order_add->create_invoice) {
    if(cJSON_AddBoolToObject(item, "create_invoice", order_add->create_invoice) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add->note_attributes
    if(order_add->note_attributes) {
    cJSON *note_attributes = cJSON_AddArrayToObject(item, "note_attributes");
    if(note_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *note_attributesListEntry;
    if (order_add->note_attributes) {
    list_ForEach(note_attributesListEntry, order_add->note_attributes) {
    cJSON *itemLocal = order_add_note_attributes_inner_convertToJSON(note_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(note_attributes, itemLocal);
    }
    }
    }


    // order_add->total_weight
    if(order_add->total_weight) {
    if(cJSON_AddNumberToObject(item, "total_weight", order_add->total_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add->clear_cache
    if(order_add->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", order_add->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add->origin
    if(order_add->origin) {
    if(cJSON_AddStringToObject(item, "origin", order_add->origin) == NULL) {
    goto fail; //String
    }
    }


    // order_add->order_item
    if (!order_add->order_item) {
        goto fail;
    }
    cJSON *order_item = cJSON_AddArrayToObject(item, "order_item");
    if(order_item == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_itemListEntry;
    if (order_add->order_item) {
    list_ForEach(order_itemListEntry, order_add->order_item) {
    cJSON *itemLocal = order_add_order_item_inner_convertToJSON(order_itemListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_item, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_add_t *order_add_parseFromJSON(cJSON *order_addJSON){

    order_add_t *order_add_local_var = NULL;

    // define the local list for order_add->coupons
    list_t *couponsList = NULL;

    // define the local list for order_add->note_attributes
    list_t *note_attributesList = NULL;

    // define the local list for order_add->order_item
    list_t *order_itemList = NULL;

    // order_add->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_add->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_add->channel_id
    cJSON *channel_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "channel_id");
    if (cJSON_IsNull(channel_id)) {
        channel_id = NULL;
    }
    if (channel_id) { 
    if(!cJSON_IsString(channel_id) && !cJSON_IsNull(channel_id))
    {
    goto end; //String
    }
    }

    // order_add->order_status
    cJSON *order_status = cJSON_GetObjectItemCaseSensitive(order_addJSON, "order_status");
    if (cJSON_IsNull(order_status)) {
        order_status = NULL;
    }
    if (!order_status) {
        goto end;
    }

    
    if(!cJSON_IsString(order_status))
    {
    goto end; //String
    }

    // order_add->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_addJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }

    // order_add->send_admin_notifications
    cJSON *send_admin_notifications = cJSON_GetObjectItemCaseSensitive(order_addJSON, "send_admin_notifications");
    if (cJSON_IsNull(send_admin_notifications)) {
        send_admin_notifications = NULL;
    }
    if (send_admin_notifications) { 
    if(!cJSON_IsBool(send_admin_notifications))
    {
    goto end; //Bool
    }
    }

    // order_add->customer_email
    cJSON *customer_email = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_email");
    if (cJSON_IsNull(customer_email)) {
        customer_email = NULL;
    }
    if (!customer_email) {
        goto end;
    }

    
    if(!cJSON_IsString(customer_email))
    {
    goto end; //String
    }

    // order_add->bill_first_name
    cJSON *bill_first_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_first_name");
    if (cJSON_IsNull(bill_first_name)) {
        bill_first_name = NULL;
    }
    if (!bill_first_name) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_first_name))
    {
    goto end; //String
    }

    // order_add->bill_last_name
    cJSON *bill_last_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_last_name");
    if (cJSON_IsNull(bill_last_name)) {
        bill_last_name = NULL;
    }
    if (!bill_last_name) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_last_name))
    {
    goto end; //String
    }

    // order_add->bill_address_1
    cJSON *bill_address_1 = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_address_1");
    if (cJSON_IsNull(bill_address_1)) {
        bill_address_1 = NULL;
    }
    if (!bill_address_1) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_address_1))
    {
    goto end; //String
    }

    // order_add->bill_city
    cJSON *bill_city = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_city");
    if (cJSON_IsNull(bill_city)) {
        bill_city = NULL;
    }
    if (!bill_city) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_city))
    {
    goto end; //String
    }

    // order_add->bill_postcode
    cJSON *bill_postcode = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_postcode");
    if (cJSON_IsNull(bill_postcode)) {
        bill_postcode = NULL;
    }
    if (!bill_postcode) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_postcode))
    {
    goto end; //String
    }

    // order_add->bill_state
    cJSON *bill_state = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_state");
    if (cJSON_IsNull(bill_state)) {
        bill_state = NULL;
    }
    if (!bill_state) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_state))
    {
    goto end; //String
    }

    // order_add->bill_country
    cJSON *bill_country = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_country");
    if (cJSON_IsNull(bill_country)) {
        bill_country = NULL;
    }
    if (!bill_country) {
        goto end;
    }

    
    if(!cJSON_IsString(bill_country))
    {
    goto end; //String
    }

    // order_add->shipp_first_name
    cJSON *shipp_first_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_first_name");
    if (cJSON_IsNull(shipp_first_name)) {
        shipp_first_name = NULL;
    }
    if (shipp_first_name) { 
    if(!cJSON_IsString(shipp_first_name) && !cJSON_IsNull(shipp_first_name))
    {
    goto end; //String
    }
    }

    // order_add->shipp_last_name
    cJSON *shipp_last_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_last_name");
    if (cJSON_IsNull(shipp_last_name)) {
        shipp_last_name = NULL;
    }
    if (shipp_last_name) { 
    if(!cJSON_IsString(shipp_last_name) && !cJSON_IsNull(shipp_last_name))
    {
    goto end; //String
    }
    }

    // order_add->shipp_address_1
    cJSON *shipp_address_1 = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_address_1");
    if (cJSON_IsNull(shipp_address_1)) {
        shipp_address_1 = NULL;
    }
    if (shipp_address_1) { 
    if(!cJSON_IsString(shipp_address_1) && !cJSON_IsNull(shipp_address_1))
    {
    goto end; //String
    }
    }

    // order_add->shipp_city
    cJSON *shipp_city = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_city");
    if (cJSON_IsNull(shipp_city)) {
        shipp_city = NULL;
    }
    if (shipp_city) { 
    if(!cJSON_IsString(shipp_city) && !cJSON_IsNull(shipp_city))
    {
    goto end; //String
    }
    }

    // order_add->shipp_postcode
    cJSON *shipp_postcode = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_postcode");
    if (cJSON_IsNull(shipp_postcode)) {
        shipp_postcode = NULL;
    }
    if (shipp_postcode) { 
    if(!cJSON_IsString(shipp_postcode) && !cJSON_IsNull(shipp_postcode))
    {
    goto end; //String
    }
    }

    // order_add->shipp_state
    cJSON *shipp_state = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_state");
    if (cJSON_IsNull(shipp_state)) {
        shipp_state = NULL;
    }
    if (shipp_state) { 
    if(!cJSON_IsString(shipp_state) && !cJSON_IsNull(shipp_state))
    {
    goto end; //String
    }
    }

    // order_add->shipp_country
    cJSON *shipp_country = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_country");
    if (cJSON_IsNull(shipp_country)) {
        shipp_country = NULL;
    }
    if (shipp_country) { 
    if(!cJSON_IsString(shipp_country) && !cJSON_IsNull(shipp_country))
    {
    goto end; //String
    }
    }

    // order_add->total_price
    cJSON *total_price = cJSON_GetObjectItemCaseSensitive(order_addJSON, "total_price");
    if (cJSON_IsNull(total_price)) {
        total_price = NULL;
    }
    if (total_price) { 
    if(!cJSON_IsNumber(total_price))
    {
    goto end; //Numeric
    }
    }

    // order_add->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(order_addJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // order_add->order_payment_method
    cJSON *order_payment_method = cJSON_GetObjectItemCaseSensitive(order_addJSON, "order_payment_method");
    if (cJSON_IsNull(order_payment_method)) {
        order_payment_method = NULL;
    }
    if (order_payment_method) { 
    if(!cJSON_IsString(order_payment_method) && !cJSON_IsNull(order_payment_method))
    {
    goto end; //String
    }
    }

    // order_add->transaction_id
    cJSON *transaction_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "transaction_id");
    if (cJSON_IsNull(transaction_id)) {
        transaction_id = NULL;
    }
    if (transaction_id) { 
    if(!cJSON_IsString(transaction_id) && !cJSON_IsNull(transaction_id))
    {
    goto end; //String
    }
    }

    // order_add->order_shipping_method
    cJSON *order_shipping_method = cJSON_GetObjectItemCaseSensitive(order_addJSON, "order_shipping_method");
    if (cJSON_IsNull(order_shipping_method)) {
        order_shipping_method = NULL;
    }
    if (order_shipping_method) { 
    if(!cJSON_IsString(order_shipping_method) && !cJSON_IsNull(order_shipping_method))
    {
    goto end; //String
    }
    }

    // order_add->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(order_addJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // order_add->bill_address_2
    cJSON *bill_address_2 = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_address_2");
    if (cJSON_IsNull(bill_address_2)) {
        bill_address_2 = NULL;
    }
    if (bill_address_2) { 
    if(!cJSON_IsString(bill_address_2) && !cJSON_IsNull(bill_address_2))
    {
    goto end; //String
    }
    }

    // order_add->bill_company
    cJSON *bill_company = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_company");
    if (cJSON_IsNull(bill_company)) {
        bill_company = NULL;
    }
    if (bill_company) { 
    if(!cJSON_IsString(bill_company) && !cJSON_IsNull(bill_company))
    {
    goto end; //String
    }
    }

    // order_add->bill_phone
    cJSON *bill_phone = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_phone");
    if (cJSON_IsNull(bill_phone)) {
        bill_phone = NULL;
    }
    if (bill_phone) { 
    if(!cJSON_IsString(bill_phone) && !cJSON_IsNull(bill_phone))
    {
    goto end; //String
    }
    }

    // order_add->bill_fax
    cJSON *bill_fax = cJSON_GetObjectItemCaseSensitive(order_addJSON, "bill_fax");
    if (cJSON_IsNull(bill_fax)) {
        bill_fax = NULL;
    }
    if (bill_fax) { 
    if(!cJSON_IsString(bill_fax) && !cJSON_IsNull(bill_fax))
    {
    goto end; //String
    }
    }

    // order_add->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(order_addJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order_add->admin_comment
    cJSON *admin_comment = cJSON_GetObjectItemCaseSensitive(order_addJSON, "admin_comment");
    if (cJSON_IsNull(admin_comment)) {
        admin_comment = NULL;
    }
    if (admin_comment) { 
    if(!cJSON_IsString(admin_comment) && !cJSON_IsNull(admin_comment))
    {
    goto end; //String
    }
    }

    // order_add->admin_private_comment
    cJSON *admin_private_comment = cJSON_GetObjectItemCaseSensitive(order_addJSON, "admin_private_comment");
    if (cJSON_IsNull(admin_private_comment)) {
        admin_private_comment = NULL;
    }
    if (admin_private_comment) { 
    if(!cJSON_IsString(admin_private_comment) && !cJSON_IsNull(admin_private_comment))
    {
    goto end; //String
    }
    }

    // order_add->customer_first_name
    cJSON *customer_first_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_first_name");
    if (cJSON_IsNull(customer_first_name)) {
        customer_first_name = NULL;
    }
    if (customer_first_name) { 
    if(!cJSON_IsString(customer_first_name) && !cJSON_IsNull(customer_first_name))
    {
    goto end; //String
    }
    }

    // order_add->customer_last_name
    cJSON *customer_last_name = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_last_name");
    if (cJSON_IsNull(customer_last_name)) {
        customer_last_name = NULL;
    }
    if (customer_last_name) { 
    if(!cJSON_IsString(customer_last_name) && !cJSON_IsNull(customer_last_name))
    {
    goto end; //String
    }
    }

    // order_add->customer_phone
    cJSON *customer_phone = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_phone");
    if (cJSON_IsNull(customer_phone)) {
        customer_phone = NULL;
    }
    if (customer_phone) { 
    if(!cJSON_IsString(customer_phone) && !cJSON_IsNull(customer_phone))
    {
    goto end; //String
    }
    }

    // order_add->customer_country
    cJSON *customer_country = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_country");
    if (cJSON_IsNull(customer_country)) {
        customer_country = NULL;
    }
    if (customer_country) { 
    if(!cJSON_IsString(customer_country) && !cJSON_IsNull(customer_country))
    {
    goto end; //String
    }
    }

    // order_add->customer_birthday
    cJSON *customer_birthday = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_birthday");
    if (cJSON_IsNull(customer_birthday)) {
        customer_birthday = NULL;
    }
    if (customer_birthday) { 
    if(!cJSON_IsString(customer_birthday) && !cJSON_IsNull(customer_birthday))
    {
    goto end; //String
    }
    }

    // order_add->customer_fax
    cJSON *customer_fax = cJSON_GetObjectItemCaseSensitive(order_addJSON, "customer_fax");
    if (cJSON_IsNull(customer_fax)) {
        customer_fax = NULL;
    }
    if (customer_fax) { 
    if(!cJSON_IsString(customer_fax) && !cJSON_IsNull(customer_fax))
    {
    goto end; //String
    }
    }

    // order_add->shipp_address_2
    cJSON *shipp_address_2 = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_address_2");
    if (cJSON_IsNull(shipp_address_2)) {
        shipp_address_2 = NULL;
    }
    if (shipp_address_2) { 
    if(!cJSON_IsString(shipp_address_2) && !cJSON_IsNull(shipp_address_2))
    {
    goto end; //String
    }
    }

    // order_add->shipp_company
    cJSON *shipp_company = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_company");
    if (cJSON_IsNull(shipp_company)) {
        shipp_company = NULL;
    }
    if (shipp_company) { 
    if(!cJSON_IsString(shipp_company) && !cJSON_IsNull(shipp_company))
    {
    goto end; //String
    }
    }

    // order_add->shipp_phone
    cJSON *shipp_phone = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_phone");
    if (cJSON_IsNull(shipp_phone)) {
        shipp_phone = NULL;
    }
    if (shipp_phone) { 
    if(!cJSON_IsString(shipp_phone) && !cJSON_IsNull(shipp_phone))
    {
    goto end; //String
    }
    }

    // order_add->shipp_fax
    cJSON *shipp_fax = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipp_fax");
    if (cJSON_IsNull(shipp_fax)) {
        shipp_fax = NULL;
    }
    if (shipp_fax) { 
    if(!cJSON_IsString(shipp_fax) && !cJSON_IsNull(shipp_fax))
    {
    goto end; //String
    }
    }

    // order_add->date_modified
    cJSON *date_modified = cJSON_GetObjectItemCaseSensitive(order_addJSON, "date_modified");
    if (cJSON_IsNull(date_modified)) {
        date_modified = NULL;
    }
    if (date_modified) { 
    if(!cJSON_IsString(date_modified) && !cJSON_IsNull(date_modified))
    {
    goto end; //String
    }
    }

    // order_add->date_finished
    cJSON *date_finished = cJSON_GetObjectItemCaseSensitive(order_addJSON, "date_finished");
    if (cJSON_IsNull(date_finished)) {
        date_finished = NULL;
    }
    if (date_finished) { 
    if(!cJSON_IsString(date_finished) && !cJSON_IsNull(date_finished))
    {
    goto end; //String
    }
    }

    // order_add->subtotal_price
    cJSON *subtotal_price = cJSON_GetObjectItemCaseSensitive(order_addJSON, "subtotal_price");
    if (cJSON_IsNull(subtotal_price)) {
        subtotal_price = NULL;
    }
    if (subtotal_price) { 
    if(!cJSON_IsNumber(subtotal_price))
    {
    goto end; //Numeric
    }
    }

    // order_add->tax_price
    cJSON *tax_price = cJSON_GetObjectItemCaseSensitive(order_addJSON, "tax_price");
    if (cJSON_IsNull(tax_price)) {
        tax_price = NULL;
    }
    if (tax_price) { 
    if(!cJSON_IsNumber(tax_price))
    {
    goto end; //Numeric
    }
    }

    // order_add->prices_inc_tax
    cJSON *prices_inc_tax = cJSON_GetObjectItemCaseSensitive(order_addJSON, "prices_inc_tax");
    if (cJSON_IsNull(prices_inc_tax)) {
        prices_inc_tax = NULL;
    }
    if (prices_inc_tax) { 
    if(!cJSON_IsBool(prices_inc_tax))
    {
    goto end; //Bool
    }
    }

    // order_add->shipping_price
    cJSON *shipping_price = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipping_price");
    if (cJSON_IsNull(shipping_price)) {
        shipping_price = NULL;
    }
    if (shipping_price) { 
    if(!cJSON_IsNumber(shipping_price))
    {
    goto end; //Numeric
    }
    }

    // order_add->shipping_tax
    cJSON *shipping_tax = cJSON_GetObjectItemCaseSensitive(order_addJSON, "shipping_tax");
    if (cJSON_IsNull(shipping_tax)) {
        shipping_tax = NULL;
    }
    if (shipping_tax) { 
    if(!cJSON_IsNumber(shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // order_add->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "carrier_id");
    if (cJSON_IsNull(carrier_id)) {
        carrier_id = NULL;
    }
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // order_add->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(order_addJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // order_add->discount
    cJSON *discount = cJSON_GetObjectItemCaseSensitive(order_addJSON, "discount");
    if (cJSON_IsNull(discount)) {
        discount = NULL;
    }
    if (discount) { 
    if(!cJSON_IsNumber(discount))
    {
    goto end; //Numeric
    }
    }

    // order_add->coupon_discount
    cJSON *coupon_discount = cJSON_GetObjectItemCaseSensitive(order_addJSON, "coupon_discount");
    if (cJSON_IsNull(coupon_discount)) {
        coupon_discount = NULL;
    }
    if (coupon_discount) { 
    if(!cJSON_IsNumber(coupon_discount))
    {
    goto end; //Numeric
    }
    }

    // order_add->coupons
    cJSON *coupons = cJSON_GetObjectItemCaseSensitive(order_addJSON, "coupons");
    if (cJSON_IsNull(coupons)) {
        coupons = NULL;
    }
    if (coupons) { 
    cJSON *coupons_local = NULL;
    if(!cJSON_IsArray(coupons)) {
        goto end;//primitive container
    }
    couponsList = list_createList();

    cJSON_ArrayForEach(coupons_local, coupons)
    {
        if(!cJSON_IsString(coupons_local))
        {
            goto end;
        }
        list_addElement(couponsList , strdup(coupons_local->valuestring));
    }
    }

    // order_add->gift_certificate_discount
    cJSON *gift_certificate_discount = cJSON_GetObjectItemCaseSensitive(order_addJSON, "gift_certificate_discount");
    if (cJSON_IsNull(gift_certificate_discount)) {
        gift_certificate_discount = NULL;
    }
    if (gift_certificate_discount) { 
    if(!cJSON_IsNumber(gift_certificate_discount))
    {
    goto end; //Numeric
    }
    }

    // order_add->fulfillment_status
    cJSON *fulfillment_status = cJSON_GetObjectItemCaseSensitive(order_addJSON, "fulfillment_status");
    if (cJSON_IsNull(fulfillment_status)) {
        fulfillment_status = NULL;
    }
    if (fulfillment_status) { 
    if(!cJSON_IsString(fulfillment_status) && !cJSON_IsNull(fulfillment_status))
    {
    goto end; //String
    }
    }

    // order_add->financial_status
    cJSON *financial_status = cJSON_GetObjectItemCaseSensitive(order_addJSON, "financial_status");
    if (cJSON_IsNull(financial_status)) {
        financial_status = NULL;
    }
    if (financial_status) { 
    if(!cJSON_IsString(financial_status) && !cJSON_IsNull(financial_status))
    {
    goto end; //String
    }
    }

    // order_add->total_paid
    cJSON *total_paid = cJSON_GetObjectItemCaseSensitive(order_addJSON, "total_paid");
    if (cJSON_IsNull(total_paid)) {
        total_paid = NULL;
    }
    if (total_paid) { 
    if(!cJSON_IsNumber(total_paid))
    {
    goto end; //Numeric
    }
    }

    // order_add->external_source
    cJSON *external_source = cJSON_GetObjectItemCaseSensitive(order_addJSON, "external_source");
    if (cJSON_IsNull(external_source)) {
        external_source = NULL;
    }
    if (external_source) { 
    if(!cJSON_IsString(external_source) && !cJSON_IsNull(external_source))
    {
    goto end; //String
    }
    }

    // order_add->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(order_addJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }

    // order_add->inventory_behaviour
    cJSON *inventory_behaviour = cJSON_GetObjectItemCaseSensitive(order_addJSON, "inventory_behaviour");
    if (cJSON_IsNull(inventory_behaviour)) {
        inventory_behaviour = NULL;
    }
    if (inventory_behaviour) { 
    if(!cJSON_IsString(inventory_behaviour) && !cJSON_IsNull(inventory_behaviour))
    {
    goto end; //String
    }
    }

    // order_add->create_invoice
    cJSON *create_invoice = cJSON_GetObjectItemCaseSensitive(order_addJSON, "create_invoice");
    if (cJSON_IsNull(create_invoice)) {
        create_invoice = NULL;
    }
    if (create_invoice) { 
    if(!cJSON_IsBool(create_invoice))
    {
    goto end; //Bool
    }
    }

    // order_add->note_attributes
    cJSON *note_attributes = cJSON_GetObjectItemCaseSensitive(order_addJSON, "note_attributes");
    if (cJSON_IsNull(note_attributes)) {
        note_attributes = NULL;
    }
    if (note_attributes) { 
    cJSON *note_attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(note_attributes)){
        goto end; //nonprimitive container
    }

    note_attributesList = list_createList();

    cJSON_ArrayForEach(note_attributes_local_nonprimitive,note_attributes )
    {
        if(!cJSON_IsObject(note_attributes_local_nonprimitive)){
            goto end;
        }
        order_add_note_attributes_inner_t *note_attributesItem = order_add_note_attributes_inner_parseFromJSON(note_attributes_local_nonprimitive);

        list_addElement(note_attributesList, note_attributesItem);
    }
    }

    // order_add->total_weight
    cJSON *total_weight = cJSON_GetObjectItemCaseSensitive(order_addJSON, "total_weight");
    if (cJSON_IsNull(total_weight)) {
        total_weight = NULL;
    }
    if (total_weight) { 
    if(!cJSON_IsNumber(total_weight))
    {
    goto end; //Numeric
    }
    }

    // order_add->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(order_addJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }

    // order_add->origin
    cJSON *origin = cJSON_GetObjectItemCaseSensitive(order_addJSON, "origin");
    if (cJSON_IsNull(origin)) {
        origin = NULL;
    }
    if (origin) { 
    if(!cJSON_IsString(origin) && !cJSON_IsNull(origin))
    {
    goto end; //String
    }
    }

    // order_add->order_item
    cJSON *order_item = cJSON_GetObjectItemCaseSensitive(order_addJSON, "order_item");
    if (cJSON_IsNull(order_item)) {
        order_item = NULL;
    }
    if (!order_item) {
        goto end;
    }

    
    cJSON *order_item_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_item)){
        goto end; //nonprimitive container
    }

    order_itemList = list_createList();

    cJSON_ArrayForEach(order_item_local_nonprimitive,order_item )
    {
        if(!cJSON_IsObject(order_item_local_nonprimitive)){
            goto end;
        }
        order_add_order_item_inner_t *order_itemItem = order_add_order_item_inner_parseFromJSON(order_item_local_nonprimitive);

        list_addElement(order_itemList, order_itemItem);
    }


    order_add_local_var = order_add_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        channel_id && !cJSON_IsNull(channel_id) ? strdup(channel_id->valuestring) : NULL,
        strdup(order_status->valuestring),
        send_notifications ? send_notifications->valueint : 0,
        send_admin_notifications ? send_admin_notifications->valueint : 0,
        strdup(customer_email->valuestring),
        strdup(bill_first_name->valuestring),
        strdup(bill_last_name->valuestring),
        strdup(bill_address_1->valuestring),
        strdup(bill_city->valuestring),
        strdup(bill_postcode->valuestring),
        strdup(bill_state->valuestring),
        strdup(bill_country->valuestring),
        shipp_first_name && !cJSON_IsNull(shipp_first_name) ? strdup(shipp_first_name->valuestring) : NULL,
        shipp_last_name && !cJSON_IsNull(shipp_last_name) ? strdup(shipp_last_name->valuestring) : NULL,
        shipp_address_1 && !cJSON_IsNull(shipp_address_1) ? strdup(shipp_address_1->valuestring) : NULL,
        shipp_city && !cJSON_IsNull(shipp_city) ? strdup(shipp_city->valuestring) : NULL,
        shipp_postcode && !cJSON_IsNull(shipp_postcode) ? strdup(shipp_postcode->valuestring) : NULL,
        shipp_state && !cJSON_IsNull(shipp_state) ? strdup(shipp_state->valuestring) : NULL,
        shipp_country && !cJSON_IsNull(shipp_country) ? strdup(shipp_country->valuestring) : NULL,
        total_price ? total_price->valuedouble : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        order_payment_method && !cJSON_IsNull(order_payment_method) ? strdup(order_payment_method->valuestring) : NULL,
        transaction_id && !cJSON_IsNull(transaction_id) ? strdup(transaction_id->valuestring) : NULL,
        order_shipping_method && !cJSON_IsNull(order_shipping_method) ? strdup(order_shipping_method->valuestring) : NULL,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL,
        bill_address_2 && !cJSON_IsNull(bill_address_2) ? strdup(bill_address_2->valuestring) : NULL,
        bill_company && !cJSON_IsNull(bill_company) ? strdup(bill_company->valuestring) : NULL,
        bill_phone && !cJSON_IsNull(bill_phone) ? strdup(bill_phone->valuestring) : NULL,
        bill_fax && !cJSON_IsNull(bill_fax) ? strdup(bill_fax->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        admin_comment && !cJSON_IsNull(admin_comment) ? strdup(admin_comment->valuestring) : NULL,
        admin_private_comment && !cJSON_IsNull(admin_private_comment) ? strdup(admin_private_comment->valuestring) : NULL,
        customer_first_name && !cJSON_IsNull(customer_first_name) ? strdup(customer_first_name->valuestring) : NULL,
        customer_last_name && !cJSON_IsNull(customer_last_name) ? strdup(customer_last_name->valuestring) : NULL,
        customer_phone && !cJSON_IsNull(customer_phone) ? strdup(customer_phone->valuestring) : NULL,
        customer_country && !cJSON_IsNull(customer_country) ? strdup(customer_country->valuestring) : NULL,
        customer_birthday && !cJSON_IsNull(customer_birthday) ? strdup(customer_birthday->valuestring) : NULL,
        customer_fax && !cJSON_IsNull(customer_fax) ? strdup(customer_fax->valuestring) : NULL,
        shipp_address_2 && !cJSON_IsNull(shipp_address_2) ? strdup(shipp_address_2->valuestring) : NULL,
        shipp_company && !cJSON_IsNull(shipp_company) ? strdup(shipp_company->valuestring) : NULL,
        shipp_phone && !cJSON_IsNull(shipp_phone) ? strdup(shipp_phone->valuestring) : NULL,
        shipp_fax && !cJSON_IsNull(shipp_fax) ? strdup(shipp_fax->valuestring) : NULL,
        date_modified && !cJSON_IsNull(date_modified) ? strdup(date_modified->valuestring) : NULL,
        date_finished && !cJSON_IsNull(date_finished) ? strdup(date_finished->valuestring) : NULL,
        subtotal_price ? subtotal_price->valuedouble : 0,
        tax_price ? tax_price->valuedouble : 0,
        prices_inc_tax ? prices_inc_tax->valueint : 0,
        shipping_price ? shipping_price->valuedouble : 0,
        shipping_tax ? shipping_tax->valuedouble : 0,
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        discount ? discount->valuedouble : 0,
        coupon_discount ? coupon_discount->valuedouble : 0,
        coupons ? couponsList : NULL,
        gift_certificate_discount ? gift_certificate_discount->valuedouble : 0,
        fulfillment_status && !cJSON_IsNull(fulfillment_status) ? strdup(fulfillment_status->valuestring) : NULL,
        financial_status && !cJSON_IsNull(financial_status) ? strdup(financial_status->valuestring) : NULL,
        total_paid ? total_paid->valuedouble : 0,
        external_source && !cJSON_IsNull(external_source) ? strdup(external_source->valuestring) : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL,
        inventory_behaviour && !cJSON_IsNull(inventory_behaviour) ? strdup(inventory_behaviour->valuestring) : NULL,
        create_invoice ? create_invoice->valueint : 0,
        note_attributes ? note_attributesList : NULL,
        total_weight ? total_weight->valuedouble : 0,
        clear_cache ? clear_cache->valueint : 0,
        origin && !cJSON_IsNull(origin) ? strdup(origin->valuestring) : NULL,
        order_itemList
        );

    return order_add_local_var;
end:
    if (couponsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, couponsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(couponsList);
        couponsList = NULL;
    }
    if (note_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, note_attributesList) {
            order_add_note_attributes_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(note_attributesList);
        note_attributesList = NULL;
    }
    if (order_itemList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_itemList) {
            order_add_order_item_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_itemList);
        order_itemList = NULL;
    }
    return NULL;

}
