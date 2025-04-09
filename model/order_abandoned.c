#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_abandoned.h"



static order_abandoned_t *order_abandoned_create_internal(
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
    ) {
    order_abandoned_t *order_abandoned_local_var = malloc(sizeof(order_abandoned_t));
    if (!order_abandoned_local_var) {
        return NULL;
    }
    order_abandoned_local_var->id = id;
    order_abandoned_local_var->customer = customer;
    order_abandoned_local_var->basket_id = basket_id;
    order_abandoned_local_var->basket_url = basket_url;
    order_abandoned_local_var->created_at = created_at;
    order_abandoned_local_var->modified_at = modified_at;
    order_abandoned_local_var->currency = currency;
    order_abandoned_local_var->totals = totals;
    order_abandoned_local_var->order_products = order_products;
    order_abandoned_local_var->additional_fields = additional_fields;
    order_abandoned_local_var->custom_fields = custom_fields;

    order_abandoned_local_var->_library_owned = 1;
    return order_abandoned_local_var;
}

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
    ) {
    return order_abandoned_create_internal (
        id,
        customer,
        basket_id,
        basket_url,
        created_at,
        modified_at,
        currency,
        totals,
        order_products,
        additional_fields,
        custom_fields
        );
}

void order_abandoned_free(order_abandoned_t *order_abandoned) {
    if(NULL == order_abandoned){
        return ;
    }
    if(order_abandoned->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_abandoned_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_abandoned->id) {
        free(order_abandoned->id);
        order_abandoned->id = NULL;
    }
    if (order_abandoned->customer) {
        base_customer_free(order_abandoned->customer);
        order_abandoned->customer = NULL;
    }
    if (order_abandoned->basket_id) {
        free(order_abandoned->basket_id);
        order_abandoned->basket_id = NULL;
    }
    if (order_abandoned->basket_url) {
        free(order_abandoned->basket_url);
        order_abandoned->basket_url = NULL;
    }
    if (order_abandoned->created_at) {
        a2_c_date_time_free(order_abandoned->created_at);
        order_abandoned->created_at = NULL;
    }
    if (order_abandoned->modified_at) {
        a2_c_date_time_free(order_abandoned->modified_at);
        order_abandoned->modified_at = NULL;
    }
    if (order_abandoned->currency) {
        currency_free(order_abandoned->currency);
        order_abandoned->currency = NULL;
    }
    if (order_abandoned->totals) {
        order_totals_free(order_abandoned->totals);
        order_abandoned->totals = NULL;
    }
    if (order_abandoned->order_products) {
        list_ForEach(listEntry, order_abandoned->order_products) {
            order_item_free(listEntry->data);
        }
        list_freeList(order_abandoned->order_products);
        order_abandoned->order_products = NULL;
    }
    if (order_abandoned->additional_fields) {
        object_free(order_abandoned->additional_fields);
        order_abandoned->additional_fields = NULL;
    }
    if (order_abandoned->custom_fields) {
        object_free(order_abandoned->custom_fields);
        order_abandoned->custom_fields = NULL;
    }
    free(order_abandoned);
}

cJSON *order_abandoned_convertToJSON(order_abandoned_t *order_abandoned) {
    cJSON *item = cJSON_CreateObject();

    // order_abandoned->id
    if(order_abandoned->id) {
    if(cJSON_AddStringToObject(item, "id", order_abandoned->id) == NULL) {
    goto fail; //String
    }
    }


    // order_abandoned->customer
    if(order_abandoned->customer) {
    cJSON *customer_local_JSON = base_customer_convertToJSON(order_abandoned->customer);
    if(customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "customer", customer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->basket_id
    if(order_abandoned->basket_id) {
    if(cJSON_AddStringToObject(item, "basket_id", order_abandoned->basket_id) == NULL) {
    goto fail; //String
    }
    }


    // order_abandoned->basket_url
    if(order_abandoned->basket_url) {
    if(cJSON_AddStringToObject(item, "basket_url", order_abandoned->basket_url) == NULL) {
    goto fail; //String
    }
    }


    // order_abandoned->created_at
    if(order_abandoned->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(order_abandoned->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->modified_at
    if(order_abandoned->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(order_abandoned->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->currency
    if(order_abandoned->currency) {
    cJSON *currency_local_JSON = currency_convertToJSON(order_abandoned->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->totals
    if(order_abandoned->totals) {
    cJSON *totals_local_JSON = order_totals_convertToJSON(order_abandoned->totals);
    if(totals_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totals", totals_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->order_products
    if(order_abandoned->order_products) {
    cJSON *order_products = cJSON_AddArrayToObject(item, "order_products");
    if(order_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_productsListEntry;
    if (order_abandoned->order_products) {
    list_ForEach(order_productsListEntry, order_abandoned->order_products) {
    cJSON *itemLocal = order_item_convertToJSON(order_productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_products, itemLocal);
    }
    }
    }


    // order_abandoned->additional_fields
    if(order_abandoned->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_abandoned->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_abandoned->custom_fields
    if(order_abandoned->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_abandoned->custom_fields);
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

order_abandoned_t *order_abandoned_parseFromJSON(cJSON *order_abandonedJSON){

    order_abandoned_t *order_abandoned_local_var = NULL;

    // define the local variable for order_abandoned->customer
    base_customer_t *customer_local_nonprim = NULL;

    // define the local variable for order_abandoned->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for order_abandoned->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local variable for order_abandoned->currency
    currency_t *currency_local_nonprim = NULL;

    // define the local variable for order_abandoned->totals
    order_totals_t *totals_local_nonprim = NULL;

    // define the local list for order_abandoned->order_products
    list_t *order_productsList = NULL;

    // order_abandoned->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_abandoned->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (customer) { 
    customer_local_nonprim = base_customer_parseFromJSON(customer); //nonprimitive
    }

    // order_abandoned->basket_id
    cJSON *basket_id = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "basket_id");
    if (cJSON_IsNull(basket_id)) {
        basket_id = NULL;
    }
    if (basket_id) { 
    if(!cJSON_IsString(basket_id) && !cJSON_IsNull(basket_id))
    {
    goto end; //String
    }
    }

    // order_abandoned->basket_url
    cJSON *basket_url = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "basket_url");
    if (cJSON_IsNull(basket_url)) {
        basket_url = NULL;
    }
    if (basket_url) { 
    if(!cJSON_IsString(basket_url) && !cJSON_IsNull(basket_url))
    {
    goto end; //String
    }
    }

    // order_abandoned->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // order_abandoned->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // order_abandoned->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    currency_local_nonprim = currency_parseFromJSON(currency); //nonprimitive
    }

    // order_abandoned->totals
    cJSON *totals = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "totals");
    if (cJSON_IsNull(totals)) {
        totals = NULL;
    }
    if (totals) { 
    totals_local_nonprim = order_totals_parseFromJSON(totals); //nonprimitive
    }

    // order_abandoned->order_products
    cJSON *order_products = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "order_products");
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

    // order_abandoned->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_abandoned->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_abandonedJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_abandoned_local_var = order_abandoned_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        customer ? customer_local_nonprim : NULL,
        basket_id && !cJSON_IsNull(basket_id) ? strdup(basket_id->valuestring) : NULL,
        basket_url && !cJSON_IsNull(basket_url) ? strdup(basket_url->valuestring) : NULL,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        currency ? currency_local_nonprim : NULL,
        totals ? totals_local_nonprim : NULL,
        order_products ? order_productsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_abandoned_local_var;
end:
    if (customer_local_nonprim) {
        base_customer_free(customer_local_nonprim);
        customer_local_nonprim = NULL;
    }
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (currency_local_nonprim) {
        currency_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (totals_local_nonprim) {
        order_totals_free(totals_local_nonprim);
        totals_local_nonprim = NULL;
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
    return NULL;

}
