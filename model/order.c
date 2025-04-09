#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order.h"



static order_t *order_create_internal(
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
    ) {
    order_t *order_local_var = malloc(sizeof(order_t));
    if (!order_local_var) {
        return NULL;
    }
    order_local_var->id = id;
    order_local_var->order_id = order_id;
    order_local_var->basket_id = basket_id;
    order_local_var->channel_id = channel_id;
    order_local_var->customer = customer;
    order_local_var->create_at = create_at;
    order_local_var->currency = currency;
    order_local_var->shipping_address = shipping_address;
    order_local_var->billing_address = billing_address;
    order_local_var->payment_method = payment_method;
    order_local_var->shipping_method = shipping_method;
    order_local_var->shipping_methods = shipping_methods;
    order_local_var->status = status;
    order_local_var->totals = totals;
    order_local_var->total = total;
    order_local_var->discounts = discounts;
    order_local_var->order_products = order_products;
    order_local_var->bundles = bundles;
    order_local_var->modified_at = modified_at;
    order_local_var->finished_time = finished_time;
    order_local_var->comment = comment;
    order_local_var->store_id = store_id;
    order_local_var->warehouses_ids = warehouses_ids;
    order_local_var->refunds = refunds;
    order_local_var->gift_message = gift_message;
    order_local_var->order_details_url = order_details_url;
    order_local_var->additional_fields = additional_fields;
    order_local_var->custom_fields = custom_fields;

    order_local_var->_library_owned = 1;
    return order_local_var;
}

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
    ) {
    return order_create_internal (
        id,
        order_id,
        basket_id,
        channel_id,
        customer,
        create_at,
        currency,
        shipping_address,
        billing_address,
        payment_method,
        shipping_method,
        shipping_methods,
        status,
        totals,
        total,
        discounts,
        order_products,
        bundles,
        modified_at,
        finished_time,
        comment,
        store_id,
        warehouses_ids,
        refunds,
        gift_message,
        order_details_url,
        additional_fields,
        custom_fields
        );
}

void order_free(order_t *order) {
    if(NULL == order){
        return ;
    }
    if(order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order->id) {
        free(order->id);
        order->id = NULL;
    }
    if (order->order_id) {
        free(order->order_id);
        order->order_id = NULL;
    }
    if (order->basket_id) {
        free(order->basket_id);
        order->basket_id = NULL;
    }
    if (order->channel_id) {
        free(order->channel_id);
        order->channel_id = NULL;
    }
    if (order->customer) {
        base_customer_free(order->customer);
        order->customer = NULL;
    }
    if (order->create_at) {
        a2_c_date_time_free(order->create_at);
        order->create_at = NULL;
    }
    if (order->currency) {
        currency_free(order->currency);
        order->currency = NULL;
    }
    if (order->shipping_address) {
        customer_address_free(order->shipping_address);
        order->shipping_address = NULL;
    }
    if (order->billing_address) {
        customer_address_free(order->billing_address);
        order->billing_address = NULL;
    }
    if (order->payment_method) {
        order_payment_method_free(order->payment_method);
        order->payment_method = NULL;
    }
    if (order->shipping_method) {
        order_shipping_method_free(order->shipping_method);
        order->shipping_method = NULL;
    }
    if (order->shipping_methods) {
        list_ForEach(listEntry, order->shipping_methods) {
            order_shipping_method_free(listEntry->data);
        }
        list_freeList(order->shipping_methods);
        order->shipping_methods = NULL;
    }
    if (order->status) {
        order_status_free(order->status);
        order->status = NULL;
    }
    if (order->totals) {
        order_totals_free(order->totals);
        order->totals = NULL;
    }
    if (order->total) {
        order_total_free(order->total);
        order->total = NULL;
    }
    if (order->discounts) {
        list_ForEach(listEntry, order->discounts) {
            order_totals_new_discount_free(listEntry->data);
        }
        list_freeList(order->discounts);
        order->discounts = NULL;
    }
    if (order->order_products) {
        list_ForEach(listEntry, order->order_products) {
            order_item_free(listEntry->data);
        }
        list_freeList(order->order_products);
        order->order_products = NULL;
    }
    if (order->bundles) {
        list_ForEach(listEntry, order->bundles) {
            order_item_free(listEntry->data);
        }
        list_freeList(order->bundles);
        order->bundles = NULL;
    }
    if (order->modified_at) {
        a2_c_date_time_free(order->modified_at);
        order->modified_at = NULL;
    }
    if (order->finished_time) {
        a2_c_date_time_free(order->finished_time);
        order->finished_time = NULL;
    }
    if (order->comment) {
        free(order->comment);
        order->comment = NULL;
    }
    if (order->store_id) {
        free(order->store_id);
        order->store_id = NULL;
    }
    if (order->warehouses_ids) {
        list_ForEach(listEntry, order->warehouses_ids) {
            free(listEntry->data);
        }
        list_freeList(order->warehouses_ids);
        order->warehouses_ids = NULL;
    }
    if (order->refunds) {
        list_ForEach(listEntry, order->refunds) {
            order_refund_free(listEntry->data);
        }
        list_freeList(order->refunds);
        order->refunds = NULL;
    }
    if (order->gift_message) {
        free(order->gift_message);
        order->gift_message = NULL;
    }
    if (order->order_details_url) {
        free(order->order_details_url);
        order->order_details_url = NULL;
    }
    if (order->additional_fields) {
        object_free(order->additional_fields);
        order->additional_fields = NULL;
    }
    if (order->custom_fields) {
        object_free(order->custom_fields);
        order->custom_fields = NULL;
    }
    free(order);
}

cJSON *order_convertToJSON(order_t *order) {
    cJSON *item = cJSON_CreateObject();

    // order->id
    if(order->id) {
    if(cJSON_AddStringToObject(item, "id", order->id) == NULL) {
    goto fail; //String
    }
    }


    // order->order_id
    if(order->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order->basket_id
    if(order->basket_id) {
    if(cJSON_AddStringToObject(item, "basket_id", order->basket_id) == NULL) {
    goto fail; //String
    }
    }


    // order->channel_id
    if(order->channel_id) {
    if(cJSON_AddStringToObject(item, "channel_id", order->channel_id) == NULL) {
    goto fail; //String
    }
    }


    // order->customer
    if(order->customer) {
    cJSON *customer_local_JSON = base_customer_convertToJSON(order->customer);
    if(customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "customer", customer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->create_at
    if(order->create_at) {
    cJSON *create_at_local_JSON = a2_c_date_time_convertToJSON(order->create_at);
    if(create_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "create_at", create_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->currency
    if(order->currency) {
    cJSON *currency_local_JSON = currency_convertToJSON(order->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->shipping_address
    if(order->shipping_address) {
    cJSON *shipping_address_local_JSON = customer_address_convertToJSON(order->shipping_address);
    if(shipping_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "shipping_address", shipping_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->billing_address
    if(order->billing_address) {
    cJSON *billing_address_local_JSON = customer_address_convertToJSON(order->billing_address);
    if(billing_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billing_address", billing_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->payment_method
    if(order->payment_method) {
    cJSON *payment_method_local_JSON = order_payment_method_convertToJSON(order->payment_method);
    if(payment_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment_method", payment_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->shipping_method
    if(order->shipping_method) {
    cJSON *shipping_method_local_JSON = order_shipping_method_convertToJSON(order->shipping_method);
    if(shipping_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "shipping_method", shipping_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->shipping_methods
    if(order->shipping_methods) {
    cJSON *shipping_methods = cJSON_AddArrayToObject(item, "shipping_methods");
    if(shipping_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_methodsListEntry;
    if (order->shipping_methods) {
    list_ForEach(shipping_methodsListEntry, order->shipping_methods) {
    cJSON *itemLocal = order_shipping_method_convertToJSON(shipping_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_methods, itemLocal);
    }
    }
    }


    // order->status
    if(order->status) {
    cJSON *status_local_JSON = order_status_convertToJSON(order->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->totals
    if(order->totals) {
    cJSON *totals_local_JSON = order_totals_convertToJSON(order->totals);
    if(totals_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totals", totals_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->total
    if(order->total) {
    cJSON *total_local_JSON = order_total_convertToJSON(order->total);
    if(total_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "total", total_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->discounts
    if(order->discounts) {
    cJSON *discounts = cJSON_AddArrayToObject(item, "discounts");
    if(discounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *discountsListEntry;
    if (order->discounts) {
    list_ForEach(discountsListEntry, order->discounts) {
    cJSON *itemLocal = order_totals_new_discount_convertToJSON(discountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(discounts, itemLocal);
    }
    }
    }


    // order->order_products
    if(order->order_products) {
    cJSON *order_products = cJSON_AddArrayToObject(item, "order_products");
    if(order_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_productsListEntry;
    if (order->order_products) {
    list_ForEach(order_productsListEntry, order->order_products) {
    cJSON *itemLocal = order_item_convertToJSON(order_productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_products, itemLocal);
    }
    }
    }


    // order->bundles
    if(order->bundles) {
    cJSON *bundles = cJSON_AddArrayToObject(item, "bundles");
    if(bundles == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *bundlesListEntry;
    if (order->bundles) {
    list_ForEach(bundlesListEntry, order->bundles) {
    cJSON *itemLocal = order_item_convertToJSON(bundlesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(bundles, itemLocal);
    }
    }
    }


    // order->modified_at
    if(order->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(order->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->finished_time
    if(order->finished_time) {
    cJSON *finished_time_local_JSON = a2_c_date_time_convertToJSON(order->finished_time);
    if(finished_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "finished_time", finished_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->comment
    if(order->comment) {
    if(cJSON_AddStringToObject(item, "comment", order->comment) == NULL) {
    goto fail; //String
    }
    }


    // order->store_id
    if(order->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order->warehouses_ids
    if(order->warehouses_ids) {
    cJSON *warehouses_ids = cJSON_AddArrayToObject(item, "warehouses_ids");
    if(warehouses_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *warehouses_idsListEntry;
    list_ForEach(warehouses_idsListEntry, order->warehouses_ids) {
    if(cJSON_AddStringToObject(warehouses_ids, "", warehouses_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // order->refunds
    if(order->refunds) {
    cJSON *refunds = cJSON_AddArrayToObject(item, "refunds");
    if(refunds == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *refundsListEntry;
    if (order->refunds) {
    list_ForEach(refundsListEntry, order->refunds) {
    cJSON *itemLocal = order_refund_convertToJSON(refundsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(refunds, itemLocal);
    }
    }
    }


    // order->gift_message
    if(order->gift_message) {
    if(cJSON_AddStringToObject(item, "gift_message", order->gift_message) == NULL) {
    goto fail; //String
    }
    }


    // order->order_details_url
    if(order->order_details_url) {
    if(cJSON_AddStringToObject(item, "order_details_url", order->order_details_url) == NULL) {
    goto fail; //String
    }
    }


    // order->additional_fields
    if(order->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order->custom_fields
    if(order->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_t *order_parseFromJSON(cJSON *orderJSON){

    order_t *order_local_var = NULL;

    // define the local variable for order->customer
    base_customer_t *customer_local_nonprim = NULL;

    // define the local variable for order->create_at
    a2_c_date_time_t *create_at_local_nonprim = NULL;

    // define the local variable for order->currency
    currency_t *currency_local_nonprim = NULL;

    // define the local variable for order->shipping_address
    customer_address_t *shipping_address_local_nonprim = NULL;

    // define the local variable for order->billing_address
    customer_address_t *billing_address_local_nonprim = NULL;

    // define the local variable for order->payment_method
    order_payment_method_t *payment_method_local_nonprim = NULL;

    // define the local variable for order->shipping_method
    order_shipping_method_t *shipping_method_local_nonprim = NULL;

    // define the local list for order->shipping_methods
    list_t *shipping_methodsList = NULL;

    // define the local variable for order->status
    order_status_t *status_local_nonprim = NULL;

    // define the local variable for order->totals
    order_totals_t *totals_local_nonprim = NULL;

    // define the local variable for order->total
    order_total_t *total_local_nonprim = NULL;

    // define the local list for order->discounts
    list_t *discountsList = NULL;

    // define the local list for order->order_products
    list_t *order_productsList = NULL;

    // define the local list for order->bundles
    list_t *bundlesList = NULL;

    // define the local variable for order->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local variable for order->finished_time
    a2_c_date_time_t *finished_time_local_nonprim = NULL;

    // define the local list for order->warehouses_ids
    list_t *warehouses_idsList = NULL;

    // define the local list for order->refunds
    list_t *refundsList = NULL;

    // order->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(orderJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(orderJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order->basket_id
    cJSON *basket_id = cJSON_GetObjectItemCaseSensitive(orderJSON, "basket_id");
    if (cJSON_IsNull(basket_id)) {
        basket_id = NULL;
    }
    if (basket_id) { 
    if(!cJSON_IsString(basket_id) && !cJSON_IsNull(basket_id))
    {
    goto end; //String
    }
    }

    // order->channel_id
    cJSON *channel_id = cJSON_GetObjectItemCaseSensitive(orderJSON, "channel_id");
    if (cJSON_IsNull(channel_id)) {
        channel_id = NULL;
    }
    if (channel_id) { 
    if(!cJSON_IsString(channel_id) && !cJSON_IsNull(channel_id))
    {
    goto end; //String
    }
    }

    // order->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(orderJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (customer) { 
    customer_local_nonprim = base_customer_parseFromJSON(customer); //nonprimitive
    }

    // order->create_at
    cJSON *create_at = cJSON_GetObjectItemCaseSensitive(orderJSON, "create_at");
    if (cJSON_IsNull(create_at)) {
        create_at = NULL;
    }
    if (create_at) { 
    create_at_local_nonprim = a2_c_date_time_parseFromJSON(create_at); //nonprimitive
    }

    // order->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(orderJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    currency_local_nonprim = currency_parseFromJSON(currency); //nonprimitive
    }

    // order->shipping_address
    cJSON *shipping_address = cJSON_GetObjectItemCaseSensitive(orderJSON, "shipping_address");
    if (cJSON_IsNull(shipping_address)) {
        shipping_address = NULL;
    }
    if (shipping_address) { 
    shipping_address_local_nonprim = customer_address_parseFromJSON(shipping_address); //nonprimitive
    }

    // order->billing_address
    cJSON *billing_address = cJSON_GetObjectItemCaseSensitive(orderJSON, "billing_address");
    if (cJSON_IsNull(billing_address)) {
        billing_address = NULL;
    }
    if (billing_address) { 
    billing_address_local_nonprim = customer_address_parseFromJSON(billing_address); //nonprimitive
    }

    // order->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(orderJSON, "payment_method");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (payment_method) { 
    payment_method_local_nonprim = order_payment_method_parseFromJSON(payment_method); //nonprimitive
    }

    // order->shipping_method
    cJSON *shipping_method = cJSON_GetObjectItemCaseSensitive(orderJSON, "shipping_method");
    if (cJSON_IsNull(shipping_method)) {
        shipping_method = NULL;
    }
    if (shipping_method) { 
    shipping_method_local_nonprim = order_shipping_method_parseFromJSON(shipping_method); //nonprimitive
    }

    // order->shipping_methods
    cJSON *shipping_methods = cJSON_GetObjectItemCaseSensitive(orderJSON, "shipping_methods");
    if (cJSON_IsNull(shipping_methods)) {
        shipping_methods = NULL;
    }
    if (shipping_methods) { 
    cJSON *shipping_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_methods)){
        goto end; //nonprimitive container
    }

    shipping_methodsList = list_createList();

    cJSON_ArrayForEach(shipping_methods_local_nonprimitive,shipping_methods )
    {
        if(!cJSON_IsObject(shipping_methods_local_nonprimitive)){
            goto end;
        }
        order_shipping_method_t *shipping_methodsItem = order_shipping_method_parseFromJSON(shipping_methods_local_nonprimitive);

        list_addElement(shipping_methodsList, shipping_methodsItem);
    }
    }

    // order->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(orderJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    status_local_nonprim = order_status_parseFromJSON(status); //nonprimitive
    }

    // order->totals
    cJSON *totals = cJSON_GetObjectItemCaseSensitive(orderJSON, "totals");
    if (cJSON_IsNull(totals)) {
        totals = NULL;
    }
    if (totals) { 
    totals_local_nonprim = order_totals_parseFromJSON(totals); //nonprimitive
    }

    // order->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(orderJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (total) { 
    total_local_nonprim = order_total_parseFromJSON(total); //nonprimitive
    }

    // order->discounts
    cJSON *discounts = cJSON_GetObjectItemCaseSensitive(orderJSON, "discounts");
    if (cJSON_IsNull(discounts)) {
        discounts = NULL;
    }
    if (discounts) { 
    cJSON *discounts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(discounts)){
        goto end; //nonprimitive container
    }

    discountsList = list_createList();

    cJSON_ArrayForEach(discounts_local_nonprimitive,discounts )
    {
        if(!cJSON_IsObject(discounts_local_nonprimitive)){
            goto end;
        }
        order_totals_new_discount_t *discountsItem = order_totals_new_discount_parseFromJSON(discounts_local_nonprimitive);

        list_addElement(discountsList, discountsItem);
    }
    }

    // order->order_products
    cJSON *order_products = cJSON_GetObjectItemCaseSensitive(orderJSON, "order_products");
    if (cJSON_IsNull(order_products)) {
        order_products = NULL;
    }
    if (order_products) { 
    cJSON *order_products_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_products)){
        goto end; //nonprimitive container
    }

    order_productsList = list_createList();

    cJSON_ArrayForEach(order_products_local_nonprimitive,order_products )
    {
        if(!cJSON_IsObject(order_products_local_nonprimitive)){
            goto end;
        }
        order_item_t *order_productsItem = order_item_parseFromJSON(order_products_local_nonprimitive);

        list_addElement(order_productsList, order_productsItem);
    }
    }

    // order->bundles
    cJSON *bundles = cJSON_GetObjectItemCaseSensitive(orderJSON, "bundles");
    if (cJSON_IsNull(bundles)) {
        bundles = NULL;
    }
    if (bundles) { 
    cJSON *bundles_local_nonprimitive = NULL;
    if(!cJSON_IsArray(bundles)){
        goto end; //nonprimitive container
    }

    bundlesList = list_createList();

    cJSON_ArrayForEach(bundles_local_nonprimitive,bundles )
    {
        if(!cJSON_IsObject(bundles_local_nonprimitive)){
            goto end;
        }
        order_item_t *bundlesItem = order_item_parseFromJSON(bundles_local_nonprimitive);

        list_addElement(bundlesList, bundlesItem);
    }
    }

    // order->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(orderJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // order->finished_time
    cJSON *finished_time = cJSON_GetObjectItemCaseSensitive(orderJSON, "finished_time");
    if (cJSON_IsNull(finished_time)) {
        finished_time = NULL;
    }
    if (finished_time) { 
    finished_time_local_nonprim = a2_c_date_time_parseFromJSON(finished_time); //nonprimitive
    }

    // order->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(orderJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // order->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(orderJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order->warehouses_ids
    cJSON *warehouses_ids = cJSON_GetObjectItemCaseSensitive(orderJSON, "warehouses_ids");
    if (cJSON_IsNull(warehouses_ids)) {
        warehouses_ids = NULL;
    }
    if (warehouses_ids) { 
    cJSON *warehouses_ids_local = NULL;
    if(!cJSON_IsArray(warehouses_ids)) {
        goto end;//primitive container
    }
    warehouses_idsList = list_createList();

    cJSON_ArrayForEach(warehouses_ids_local, warehouses_ids)
    {
        if(!cJSON_IsString(warehouses_ids_local))
        {
            goto end;
        }
        list_addElement(warehouses_idsList , strdup(warehouses_ids_local->valuestring));
    }
    }

    // order->refunds
    cJSON *refunds = cJSON_GetObjectItemCaseSensitive(orderJSON, "refunds");
    if (cJSON_IsNull(refunds)) {
        refunds = NULL;
    }
    if (refunds) { 
    cJSON *refunds_local_nonprimitive = NULL;
    if(!cJSON_IsArray(refunds)){
        goto end; //nonprimitive container
    }

    refundsList = list_createList();

    cJSON_ArrayForEach(refunds_local_nonprimitive,refunds )
    {
        if(!cJSON_IsObject(refunds_local_nonprimitive)){
            goto end;
        }
        order_refund_t *refundsItem = order_refund_parseFromJSON(refunds_local_nonprimitive);

        list_addElement(refundsList, refundsItem);
    }
    }

    // order->gift_message
    cJSON *gift_message = cJSON_GetObjectItemCaseSensitive(orderJSON, "gift_message");
    if (cJSON_IsNull(gift_message)) {
        gift_message = NULL;
    }
    if (gift_message) { 
    if(!cJSON_IsString(gift_message) && !cJSON_IsNull(gift_message))
    {
    goto end; //String
    }
    }

    // order->order_details_url
    cJSON *order_details_url = cJSON_GetObjectItemCaseSensitive(orderJSON, "order_details_url");
    if (cJSON_IsNull(order_details_url)) {
        order_details_url = NULL;
    }
    if (order_details_url) { 
    if(!cJSON_IsString(order_details_url) && !cJSON_IsNull(order_details_url))
    {
    goto end; //String
    }
    }

    // order->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(orderJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(orderJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_local_var = order_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        basket_id && !cJSON_IsNull(basket_id) ? strdup(basket_id->valuestring) : NULL,
        channel_id && !cJSON_IsNull(channel_id) ? strdup(channel_id->valuestring) : NULL,
        customer ? customer_local_nonprim : NULL,
        create_at ? create_at_local_nonprim : NULL,
        currency ? currency_local_nonprim : NULL,
        shipping_address ? shipping_address_local_nonprim : NULL,
        billing_address ? billing_address_local_nonprim : NULL,
        payment_method ? payment_method_local_nonprim : NULL,
        shipping_method ? shipping_method_local_nonprim : NULL,
        shipping_methods ? shipping_methodsList : NULL,
        status ? status_local_nonprim : NULL,
        totals ? totals_local_nonprim : NULL,
        total ? total_local_nonprim : NULL,
        discounts ? discountsList : NULL,
        order_products ? order_productsList : NULL,
        bundles ? bundlesList : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        finished_time ? finished_time_local_nonprim : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        warehouses_ids ? warehouses_idsList : NULL,
        refunds ? refundsList : NULL,
        gift_message && !cJSON_IsNull(gift_message) ? strdup(gift_message->valuestring) : NULL,
        order_details_url && !cJSON_IsNull(order_details_url) ? strdup(order_details_url->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_local_var;
end:
    if (customer_local_nonprim) {
        base_customer_free(customer_local_nonprim);
        customer_local_nonprim = NULL;
    }
    if (create_at_local_nonprim) {
        a2_c_date_time_free(create_at_local_nonprim);
        create_at_local_nonprim = NULL;
    }
    if (currency_local_nonprim) {
        currency_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (shipping_address_local_nonprim) {
        customer_address_free(shipping_address_local_nonprim);
        shipping_address_local_nonprim = NULL;
    }
    if (billing_address_local_nonprim) {
        customer_address_free(billing_address_local_nonprim);
        billing_address_local_nonprim = NULL;
    }
    if (payment_method_local_nonprim) {
        order_payment_method_free(payment_method_local_nonprim);
        payment_method_local_nonprim = NULL;
    }
    if (shipping_method_local_nonprim) {
        order_shipping_method_free(shipping_method_local_nonprim);
        shipping_method_local_nonprim = NULL;
    }
    if (shipping_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_methodsList) {
            order_shipping_method_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_methodsList);
        shipping_methodsList = NULL;
    }
    if (status_local_nonprim) {
        order_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (totals_local_nonprim) {
        order_totals_free(totals_local_nonprim);
        totals_local_nonprim = NULL;
    }
    if (total_local_nonprim) {
        order_total_free(total_local_nonprim);
        total_local_nonprim = NULL;
    }
    if (discountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, discountsList) {
            order_totals_new_discount_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(discountsList);
        discountsList = NULL;
    }
    if (order_productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_productsList) {
            order_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_productsList);
        order_productsList = NULL;
    }
    if (bundlesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, bundlesList) {
            order_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(bundlesList);
        bundlesList = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (finished_time_local_nonprim) {
        a2_c_date_time_free(finished_time_local_nonprim);
        finished_time_local_nonprim = NULL;
    }
    if (warehouses_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warehouses_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warehouses_idsList);
        warehouses_idsList = NULL;
    }
    if (refundsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, refundsList) {
            order_refund_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(refundsList);
        refundsList = NULL;
    }
    return NULL;

}
