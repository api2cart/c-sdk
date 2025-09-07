#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate.h"



static order_calculate_t *order_calculate_create_internal(
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
    ) {
    order_calculate_t *order_calculate_local_var = malloc(sizeof(order_calculate_t));
    if (!order_calculate_local_var) {
        return NULL;
    }
    order_calculate_local_var->customer_email = customer_email;
    order_calculate_local_var->currency_id = currency_id;
    order_calculate_local_var->store_id = store_id;
    order_calculate_local_var->coupons = coupons;
    order_calculate_local_var->shipp_first_name = shipp_first_name;
    order_calculate_local_var->shipp_last_name = shipp_last_name;
    order_calculate_local_var->shipp_address_1 = shipp_address_1;
    order_calculate_local_var->shipp_address_2 = shipp_address_2;
    order_calculate_local_var->shipp_city = shipp_city;
    order_calculate_local_var->shipp_postcode = shipp_postcode;
    order_calculate_local_var->shipp_state = shipp_state;
    order_calculate_local_var->shipp_country = shipp_country;
    order_calculate_local_var->shipp_company = shipp_company;
    order_calculate_local_var->shipp_phone = shipp_phone;
    order_calculate_local_var->bill_first_name = bill_first_name;
    order_calculate_local_var->bill_last_name = bill_last_name;
    order_calculate_local_var->bill_address_1 = bill_address_1;
    order_calculate_local_var->bill_address_2 = bill_address_2;
    order_calculate_local_var->bill_city = bill_city;
    order_calculate_local_var->bill_postcode = bill_postcode;
    order_calculate_local_var->bill_state = bill_state;
    order_calculate_local_var->bill_country = bill_country;
    order_calculate_local_var->bill_company = bill_company;
    order_calculate_local_var->bill_phone = bill_phone;
    order_calculate_local_var->response_fields = response_fields;
    order_calculate_local_var->order_item = order_item;

    order_calculate_local_var->_library_owned = 1;
    return order_calculate_local_var;
}

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
    ) {
    return order_calculate_create_internal (
        customer_email,
        currency_id,
        store_id,
        coupons,
        shipp_first_name,
        shipp_last_name,
        shipp_address_1,
        shipp_address_2,
        shipp_city,
        shipp_postcode,
        shipp_state,
        shipp_country,
        shipp_company,
        shipp_phone,
        bill_first_name,
        bill_last_name,
        bill_address_1,
        bill_address_2,
        bill_city,
        bill_postcode,
        bill_state,
        bill_country,
        bill_company,
        bill_phone,
        response_fields,
        order_item
        );
}

void order_calculate_free(order_calculate_t *order_calculate) {
    if(NULL == order_calculate){
        return ;
    }
    if(order_calculate->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate->customer_email) {
        free(order_calculate->customer_email);
        order_calculate->customer_email = NULL;
    }
    if (order_calculate->currency_id) {
        free(order_calculate->currency_id);
        order_calculate->currency_id = NULL;
    }
    if (order_calculate->store_id) {
        free(order_calculate->store_id);
        order_calculate->store_id = NULL;
    }
    if (order_calculate->coupons) {
        list_ForEach(listEntry, order_calculate->coupons) {
            free(listEntry->data);
        }
        list_freeList(order_calculate->coupons);
        order_calculate->coupons = NULL;
    }
    if (order_calculate->shipp_first_name) {
        free(order_calculate->shipp_first_name);
        order_calculate->shipp_first_name = NULL;
    }
    if (order_calculate->shipp_last_name) {
        free(order_calculate->shipp_last_name);
        order_calculate->shipp_last_name = NULL;
    }
    if (order_calculate->shipp_address_1) {
        free(order_calculate->shipp_address_1);
        order_calculate->shipp_address_1 = NULL;
    }
    if (order_calculate->shipp_address_2) {
        free(order_calculate->shipp_address_2);
        order_calculate->shipp_address_2 = NULL;
    }
    if (order_calculate->shipp_city) {
        free(order_calculate->shipp_city);
        order_calculate->shipp_city = NULL;
    }
    if (order_calculate->shipp_postcode) {
        free(order_calculate->shipp_postcode);
        order_calculate->shipp_postcode = NULL;
    }
    if (order_calculate->shipp_state) {
        free(order_calculate->shipp_state);
        order_calculate->shipp_state = NULL;
    }
    if (order_calculate->shipp_country) {
        free(order_calculate->shipp_country);
        order_calculate->shipp_country = NULL;
    }
    if (order_calculate->shipp_company) {
        free(order_calculate->shipp_company);
        order_calculate->shipp_company = NULL;
    }
    if (order_calculate->shipp_phone) {
        free(order_calculate->shipp_phone);
        order_calculate->shipp_phone = NULL;
    }
    if (order_calculate->bill_first_name) {
        free(order_calculate->bill_first_name);
        order_calculate->bill_first_name = NULL;
    }
    if (order_calculate->bill_last_name) {
        free(order_calculate->bill_last_name);
        order_calculate->bill_last_name = NULL;
    }
    if (order_calculate->bill_address_1) {
        free(order_calculate->bill_address_1);
        order_calculate->bill_address_1 = NULL;
    }
    if (order_calculate->bill_address_2) {
        free(order_calculate->bill_address_2);
        order_calculate->bill_address_2 = NULL;
    }
    if (order_calculate->bill_city) {
        free(order_calculate->bill_city);
        order_calculate->bill_city = NULL;
    }
    if (order_calculate->bill_postcode) {
        free(order_calculate->bill_postcode);
        order_calculate->bill_postcode = NULL;
    }
    if (order_calculate->bill_state) {
        free(order_calculate->bill_state);
        order_calculate->bill_state = NULL;
    }
    if (order_calculate->bill_country) {
        free(order_calculate->bill_country);
        order_calculate->bill_country = NULL;
    }
    if (order_calculate->bill_company) {
        free(order_calculate->bill_company);
        order_calculate->bill_company = NULL;
    }
    if (order_calculate->bill_phone) {
        free(order_calculate->bill_phone);
        order_calculate->bill_phone = NULL;
    }
    if (order_calculate->response_fields) {
        free(order_calculate->response_fields);
        order_calculate->response_fields = NULL;
    }
    if (order_calculate->order_item) {
        list_ForEach(listEntry, order_calculate->order_item) {
            order_calculate_order_item_inner_free(listEntry->data);
        }
        list_freeList(order_calculate->order_item);
        order_calculate->order_item = NULL;
    }
    free(order_calculate);
}

cJSON *order_calculate_convertToJSON(order_calculate_t *order_calculate) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate->customer_email
    if (!order_calculate->customer_email) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "customer_email", order_calculate->customer_email) == NULL) {
    goto fail; //String
    }


    // order_calculate->currency_id
    if(order_calculate->currency_id) {
    if(cJSON_AddStringToObject(item, "currency_id", order_calculate->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->store_id
    if(order_calculate->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_calculate->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->coupons
    if(order_calculate->coupons) {
    cJSON *coupons = cJSON_AddArrayToObject(item, "coupons");
    if(coupons == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *couponsListEntry;
    list_ForEach(couponsListEntry, order_calculate->coupons) {
    if(cJSON_AddStringToObject(coupons, "", couponsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // order_calculate->shipp_first_name
    if (!order_calculate->shipp_first_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_first_name", order_calculate->shipp_first_name) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_last_name
    if (!order_calculate->shipp_last_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_last_name", order_calculate->shipp_last_name) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_address_1
    if (!order_calculate->shipp_address_1) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_address_1", order_calculate->shipp_address_1) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_address_2
    if(order_calculate->shipp_address_2) {
    if(cJSON_AddStringToObject(item, "shipp_address_2", order_calculate->shipp_address_2) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->shipp_city
    if (!order_calculate->shipp_city) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_city", order_calculate->shipp_city) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_postcode
    if (!order_calculate->shipp_postcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_postcode", order_calculate->shipp_postcode) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_state
    if(order_calculate->shipp_state) {
    if(cJSON_AddStringToObject(item, "shipp_state", order_calculate->shipp_state) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->shipp_country
    if (!order_calculate->shipp_country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_country", order_calculate->shipp_country) == NULL) {
    goto fail; //String
    }


    // order_calculate->shipp_company
    if(order_calculate->shipp_company) {
    if(cJSON_AddStringToObject(item, "shipp_company", order_calculate->shipp_company) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->shipp_phone
    if(order_calculate->shipp_phone) {
    if(cJSON_AddStringToObject(item, "shipp_phone", order_calculate->shipp_phone) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_first_name
    if(order_calculate->bill_first_name) {
    if(cJSON_AddStringToObject(item, "bill_first_name", order_calculate->bill_first_name) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_last_name
    if(order_calculate->bill_last_name) {
    if(cJSON_AddStringToObject(item, "bill_last_name", order_calculate->bill_last_name) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_address_1
    if(order_calculate->bill_address_1) {
    if(cJSON_AddStringToObject(item, "bill_address_1", order_calculate->bill_address_1) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_address_2
    if(order_calculate->bill_address_2) {
    if(cJSON_AddStringToObject(item, "bill_address_2", order_calculate->bill_address_2) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_city
    if(order_calculate->bill_city) {
    if(cJSON_AddStringToObject(item, "bill_city", order_calculate->bill_city) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_postcode
    if(order_calculate->bill_postcode) {
    if(cJSON_AddStringToObject(item, "bill_postcode", order_calculate->bill_postcode) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_state
    if(order_calculate->bill_state) {
    if(cJSON_AddStringToObject(item, "bill_state", order_calculate->bill_state) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_country
    if(order_calculate->bill_country) {
    if(cJSON_AddStringToObject(item, "bill_country", order_calculate->bill_country) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_company
    if(order_calculate->bill_company) {
    if(cJSON_AddStringToObject(item, "bill_company", order_calculate->bill_company) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->bill_phone
    if(order_calculate->bill_phone) {
    if(cJSON_AddStringToObject(item, "bill_phone", order_calculate->bill_phone) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->response_fields
    if(order_calculate->response_fields) {
    if(cJSON_AddStringToObject(item, "response_fields", order_calculate->response_fields) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate->order_item
    if (!order_calculate->order_item) {
        goto fail;
    }
    cJSON *order_item = cJSON_AddArrayToObject(item, "order_item");
    if(order_item == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_itemListEntry;
    if (order_calculate->order_item) {
    list_ForEach(order_itemListEntry, order_calculate->order_item) {
    cJSON *itemLocal = order_calculate_order_item_inner_convertToJSON(order_itemListEntry->data);
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

order_calculate_t *order_calculate_parseFromJSON(cJSON *order_calculateJSON){

    order_calculate_t *order_calculate_local_var = NULL;

    // define the local list for order_calculate->coupons
    list_t *couponsList = NULL;

    // define the local list for order_calculate->order_item
    list_t *order_itemList = NULL;

    // order_calculate->customer_email
    cJSON *customer_email = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "customer_email");
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

    // order_calculate->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "currency_id");
    if (cJSON_IsNull(currency_id)) {
        currency_id = NULL;
    }
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // order_calculate->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_calculate->coupons
    cJSON *coupons = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "coupons");
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

    // order_calculate->shipp_first_name
    cJSON *shipp_first_name = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_first_name");
    if (cJSON_IsNull(shipp_first_name)) {
        shipp_first_name = NULL;
    }
    if (!shipp_first_name) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_first_name))
    {
    goto end; //String
    }

    // order_calculate->shipp_last_name
    cJSON *shipp_last_name = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_last_name");
    if (cJSON_IsNull(shipp_last_name)) {
        shipp_last_name = NULL;
    }
    if (!shipp_last_name) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_last_name))
    {
    goto end; //String
    }

    // order_calculate->shipp_address_1
    cJSON *shipp_address_1 = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_address_1");
    if (cJSON_IsNull(shipp_address_1)) {
        shipp_address_1 = NULL;
    }
    if (!shipp_address_1) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_address_1))
    {
    goto end; //String
    }

    // order_calculate->shipp_address_2
    cJSON *shipp_address_2 = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_address_2");
    if (cJSON_IsNull(shipp_address_2)) {
        shipp_address_2 = NULL;
    }
    if (shipp_address_2) { 
    if(!cJSON_IsString(shipp_address_2) && !cJSON_IsNull(shipp_address_2))
    {
    goto end; //String
    }
    }

    // order_calculate->shipp_city
    cJSON *shipp_city = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_city");
    if (cJSON_IsNull(shipp_city)) {
        shipp_city = NULL;
    }
    if (!shipp_city) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_city))
    {
    goto end; //String
    }

    // order_calculate->shipp_postcode
    cJSON *shipp_postcode = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_postcode");
    if (cJSON_IsNull(shipp_postcode)) {
        shipp_postcode = NULL;
    }
    if (!shipp_postcode) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_postcode))
    {
    goto end; //String
    }

    // order_calculate->shipp_state
    cJSON *shipp_state = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_state");
    if (cJSON_IsNull(shipp_state)) {
        shipp_state = NULL;
    }
    if (shipp_state) { 
    if(!cJSON_IsString(shipp_state) && !cJSON_IsNull(shipp_state))
    {
    goto end; //String
    }
    }

    // order_calculate->shipp_country
    cJSON *shipp_country = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_country");
    if (cJSON_IsNull(shipp_country)) {
        shipp_country = NULL;
    }
    if (!shipp_country) {
        goto end;
    }

    
    if(!cJSON_IsString(shipp_country))
    {
    goto end; //String
    }

    // order_calculate->shipp_company
    cJSON *shipp_company = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_company");
    if (cJSON_IsNull(shipp_company)) {
        shipp_company = NULL;
    }
    if (shipp_company) { 
    if(!cJSON_IsString(shipp_company) && !cJSON_IsNull(shipp_company))
    {
    goto end; //String
    }
    }

    // order_calculate->shipp_phone
    cJSON *shipp_phone = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "shipp_phone");
    if (cJSON_IsNull(shipp_phone)) {
        shipp_phone = NULL;
    }
    if (shipp_phone) { 
    if(!cJSON_IsString(shipp_phone) && !cJSON_IsNull(shipp_phone))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_first_name
    cJSON *bill_first_name = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_first_name");
    if (cJSON_IsNull(bill_first_name)) {
        bill_first_name = NULL;
    }
    if (bill_first_name) { 
    if(!cJSON_IsString(bill_first_name) && !cJSON_IsNull(bill_first_name))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_last_name
    cJSON *bill_last_name = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_last_name");
    if (cJSON_IsNull(bill_last_name)) {
        bill_last_name = NULL;
    }
    if (bill_last_name) { 
    if(!cJSON_IsString(bill_last_name) && !cJSON_IsNull(bill_last_name))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_address_1
    cJSON *bill_address_1 = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_address_1");
    if (cJSON_IsNull(bill_address_1)) {
        bill_address_1 = NULL;
    }
    if (bill_address_1) { 
    if(!cJSON_IsString(bill_address_1) && !cJSON_IsNull(bill_address_1))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_address_2
    cJSON *bill_address_2 = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_address_2");
    if (cJSON_IsNull(bill_address_2)) {
        bill_address_2 = NULL;
    }
    if (bill_address_2) { 
    if(!cJSON_IsString(bill_address_2) && !cJSON_IsNull(bill_address_2))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_city
    cJSON *bill_city = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_city");
    if (cJSON_IsNull(bill_city)) {
        bill_city = NULL;
    }
    if (bill_city) { 
    if(!cJSON_IsString(bill_city) && !cJSON_IsNull(bill_city))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_postcode
    cJSON *bill_postcode = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_postcode");
    if (cJSON_IsNull(bill_postcode)) {
        bill_postcode = NULL;
    }
    if (bill_postcode) { 
    if(!cJSON_IsString(bill_postcode) && !cJSON_IsNull(bill_postcode))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_state
    cJSON *bill_state = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_state");
    if (cJSON_IsNull(bill_state)) {
        bill_state = NULL;
    }
    if (bill_state) { 
    if(!cJSON_IsString(bill_state) && !cJSON_IsNull(bill_state))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_country
    cJSON *bill_country = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_country");
    if (cJSON_IsNull(bill_country)) {
        bill_country = NULL;
    }
    if (bill_country) { 
    if(!cJSON_IsString(bill_country) && !cJSON_IsNull(bill_country))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_company
    cJSON *bill_company = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_company");
    if (cJSON_IsNull(bill_company)) {
        bill_company = NULL;
    }
    if (bill_company) { 
    if(!cJSON_IsString(bill_company) && !cJSON_IsNull(bill_company))
    {
    goto end; //String
    }
    }

    // order_calculate->bill_phone
    cJSON *bill_phone = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "bill_phone");
    if (cJSON_IsNull(bill_phone)) {
        bill_phone = NULL;
    }
    if (bill_phone) { 
    if(!cJSON_IsString(bill_phone) && !cJSON_IsNull(bill_phone))
    {
    goto end; //String
    }
    }

    // order_calculate->response_fields
    cJSON *response_fields = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "response_fields");
    if (cJSON_IsNull(response_fields)) {
        response_fields = NULL;
    }
    if (response_fields) { 
    if(!cJSON_IsString(response_fields) && !cJSON_IsNull(response_fields))
    {
    goto end; //String
    }
    }

    // order_calculate->order_item
    cJSON *order_item = cJSON_GetObjectItemCaseSensitive(order_calculateJSON, "order_item");
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
        order_calculate_order_item_inner_t *order_itemItem = order_calculate_order_item_inner_parseFromJSON(order_item_local_nonprimitive);

        list_addElement(order_itemList, order_itemItem);
    }


    order_calculate_local_var = order_calculate_create_internal (
        strdup(customer_email->valuestring),
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        coupons ? couponsList : NULL,
        strdup(shipp_first_name->valuestring),
        strdup(shipp_last_name->valuestring),
        strdup(shipp_address_1->valuestring),
        shipp_address_2 && !cJSON_IsNull(shipp_address_2) ? strdup(shipp_address_2->valuestring) : NULL,
        strdup(shipp_city->valuestring),
        strdup(shipp_postcode->valuestring),
        shipp_state && !cJSON_IsNull(shipp_state) ? strdup(shipp_state->valuestring) : NULL,
        strdup(shipp_country->valuestring),
        shipp_company && !cJSON_IsNull(shipp_company) ? strdup(shipp_company->valuestring) : NULL,
        shipp_phone && !cJSON_IsNull(shipp_phone) ? strdup(shipp_phone->valuestring) : NULL,
        bill_first_name && !cJSON_IsNull(bill_first_name) ? strdup(bill_first_name->valuestring) : NULL,
        bill_last_name && !cJSON_IsNull(bill_last_name) ? strdup(bill_last_name->valuestring) : NULL,
        bill_address_1 && !cJSON_IsNull(bill_address_1) ? strdup(bill_address_1->valuestring) : NULL,
        bill_address_2 && !cJSON_IsNull(bill_address_2) ? strdup(bill_address_2->valuestring) : NULL,
        bill_city && !cJSON_IsNull(bill_city) ? strdup(bill_city->valuestring) : NULL,
        bill_postcode && !cJSON_IsNull(bill_postcode) ? strdup(bill_postcode->valuestring) : NULL,
        bill_state && !cJSON_IsNull(bill_state) ? strdup(bill_state->valuestring) : NULL,
        bill_country && !cJSON_IsNull(bill_country) ? strdup(bill_country->valuestring) : NULL,
        bill_company && !cJSON_IsNull(bill_company) ? strdup(bill_company->valuestring) : NULL,
        bill_phone && !cJSON_IsNull(bill_phone) ? strdup(bill_phone->valuestring) : NULL,
        response_fields && !cJSON_IsNull(response_fields) ? strdup(response_fields->valuestring) : NULL,
        order_itemList
        );

    return order_calculate_local_var;
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
    if (order_itemList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_itemList) {
            order_calculate_order_item_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_itemList);
        order_itemList = NULL;
    }
    return NULL;

}
