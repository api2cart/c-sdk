#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket.h"



static basket_t *basket_create_internal(
    char *id,
    base_customer_t *customer,
    char *basket_url,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    currency_t *currency,
    list_t *basket_products,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    basket_t *basket_local_var = malloc(sizeof(basket_t));
    if (!basket_local_var) {
        return NULL;
    }
    basket_local_var->id = id;
    basket_local_var->customer = customer;
    basket_local_var->basket_url = basket_url;
    basket_local_var->created_at = created_at;
    basket_local_var->modified_at = modified_at;
    basket_local_var->currency = currency;
    basket_local_var->basket_products = basket_products;
    basket_local_var->additional_fields = additional_fields;
    basket_local_var->custom_fields = custom_fields;

    basket_local_var->_library_owned = 1;
    return basket_local_var;
}

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
    ) {
    return basket_create_internal (
        id,
        customer,
        basket_url,
        created_at,
        modified_at,
        currency,
        basket_products,
        additional_fields,
        custom_fields
        );
}

void basket_free(basket_t *basket) {
    if(NULL == basket){
        return ;
    }
    if(basket->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket->id) {
        free(basket->id);
        basket->id = NULL;
    }
    if (basket->customer) {
        base_customer_free(basket->customer);
        basket->customer = NULL;
    }
    if (basket->basket_url) {
        free(basket->basket_url);
        basket->basket_url = NULL;
    }
    if (basket->created_at) {
        a2_c_date_time_free(basket->created_at);
        basket->created_at = NULL;
    }
    if (basket->modified_at) {
        a2_c_date_time_free(basket->modified_at);
        basket->modified_at = NULL;
    }
    if (basket->currency) {
        currency_free(basket->currency);
        basket->currency = NULL;
    }
    if (basket->basket_products) {
        list_ForEach(listEntry, basket->basket_products) {
            basket_item_free(listEntry->data);
        }
        list_freeList(basket->basket_products);
        basket->basket_products = NULL;
    }
    if (basket->additional_fields) {
        object_free(basket->additional_fields);
        basket->additional_fields = NULL;
    }
    if (basket->custom_fields) {
        object_free(basket->custom_fields);
        basket->custom_fields = NULL;
    }
    free(basket);
}

cJSON *basket_convertToJSON(basket_t *basket) {
    cJSON *item = cJSON_CreateObject();

    // basket->id
    if(basket->id) {
    if(cJSON_AddStringToObject(item, "id", basket->id) == NULL) {
    goto fail; //String
    }
    }


    // basket->customer
    if(basket->customer) {
    cJSON *customer_local_JSON = base_customer_convertToJSON(basket->customer);
    if(customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "customer", customer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket->basket_url
    if(basket->basket_url) {
    if(cJSON_AddStringToObject(item, "basket_url", basket->basket_url) == NULL) {
    goto fail; //String
    }
    }


    // basket->created_at
    if(basket->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(basket->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket->modified_at
    if(basket->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(basket->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket->currency
    if(basket->currency) {
    cJSON *currency_local_JSON = currency_convertToJSON(basket->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket->basket_products
    if(basket->basket_products) {
    cJSON *basket_products = cJSON_AddArrayToObject(item, "basket_products");
    if(basket_products == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *basket_productsListEntry;
    if (basket->basket_products) {
    list_ForEach(basket_productsListEntry, basket->basket_products) {
    cJSON *itemLocal = basket_item_convertToJSON(basket_productsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(basket_products, itemLocal);
    }
    }
    }


    // basket->additional_fields
    if(basket->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(basket->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket->custom_fields
    if(basket->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(basket->custom_fields);
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

basket_t *basket_parseFromJSON(cJSON *basketJSON){

    basket_t *basket_local_var = NULL;

    // define the local variable for basket->customer
    base_customer_t *customer_local_nonprim = NULL;

    // define the local variable for basket->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for basket->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local variable for basket->currency
    currency_t *currency_local_nonprim = NULL;

    // define the local list for basket->basket_products
    list_t *basket_productsList = NULL;

    // basket->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(basketJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // basket->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(basketJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (customer) { 
    customer_local_nonprim = base_customer_parseFromJSON(customer); //nonprimitive
    }

    // basket->basket_url
    cJSON *basket_url = cJSON_GetObjectItemCaseSensitive(basketJSON, "basket_url");
    if (cJSON_IsNull(basket_url)) {
        basket_url = NULL;
    }
    if (basket_url) { 
    if(!cJSON_IsString(basket_url) && !cJSON_IsNull(basket_url))
    {
    goto end; //String
    }
    }

    // basket->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(basketJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // basket->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(basketJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // basket->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(basketJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    currency_local_nonprim = currency_parseFromJSON(currency); //nonprimitive
    }

    // basket->basket_products
    cJSON *basket_products = cJSON_GetObjectItemCaseSensitive(basketJSON, "basket_products");
    if (cJSON_IsNull(basket_products)) {
        basket_products = NULL;
    }
    if (basket_products) { 
    cJSON *basket_products_local_nonprimitive = NULL;
    if(!cJSON_IsArray(basket_products)){
        goto end; //nonprimitive container
    }

    basket_productsList = list_createList();

    cJSON_ArrayForEach(basket_products_local_nonprimitive,basket_products )
    {
        if(!cJSON_IsObject(basket_products_local_nonprimitive)){
            goto end;
        }
        basket_item_t *basket_productsItem = basket_item_parseFromJSON(basket_products_local_nonprimitive);

        list_addElement(basket_productsList, basket_productsItem);
    }
    }

    // basket->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(basketJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // basket->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(basketJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    basket_local_var = basket_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        customer ? customer_local_nonprim : NULL,
        basket_url && !cJSON_IsNull(basket_url) ? strdup(basket_url->valuestring) : NULL,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        currency ? currency_local_nonprim : NULL,
        basket_products ? basket_productsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return basket_local_var;
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
    if (basket_productsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, basket_productsList) {
            basket_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(basket_productsList);
        basket_productsList = NULL;
    }
    return NULL;

}
