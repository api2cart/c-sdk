#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_preestimate_shipping_list.h"



static order_preestimate_shipping_list_t *order_preestimate_shipping_list_create_internal(
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
    ) {
    order_preestimate_shipping_list_t *order_preestimate_shipping_list_local_var = malloc(sizeof(order_preestimate_shipping_list_t));
    if (!order_preestimate_shipping_list_local_var) {
        return NULL;
    }
    order_preestimate_shipping_list_local_var->store_id = store_id;
    order_preestimate_shipping_list_local_var->warehouse_id = warehouse_id;
    order_preestimate_shipping_list_local_var->customer_email = customer_email;
    order_preestimate_shipping_list_local_var->customer_id = customer_id;
    order_preestimate_shipping_list_local_var->shipp_address_1 = shipp_address_1;
    order_preestimate_shipping_list_local_var->shipp_city = shipp_city;
    order_preestimate_shipping_list_local_var->shipp_postcode = shipp_postcode;
    order_preestimate_shipping_list_local_var->shipp_state = shipp_state;
    order_preestimate_shipping_list_local_var->shipp_country = shipp_country;
    order_preestimate_shipping_list_local_var->params = params;
    order_preestimate_shipping_list_local_var->exclude = exclude;
    order_preestimate_shipping_list_local_var->order_item = order_item;

    order_preestimate_shipping_list_local_var->_library_owned = 1;
    return order_preestimate_shipping_list_local_var;
}

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
    ) {
    return order_preestimate_shipping_list_create_internal (
        store_id,
        warehouse_id,
        customer_email,
        customer_id,
        shipp_address_1,
        shipp_city,
        shipp_postcode,
        shipp_state,
        shipp_country,
        params,
        exclude,
        order_item
        );
}

void order_preestimate_shipping_list_free(order_preestimate_shipping_list_t *order_preestimate_shipping_list) {
    if(NULL == order_preestimate_shipping_list){
        return ;
    }
    if(order_preestimate_shipping_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_preestimate_shipping_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_preestimate_shipping_list->store_id) {
        free(order_preestimate_shipping_list->store_id);
        order_preestimate_shipping_list->store_id = NULL;
    }
    if (order_preestimate_shipping_list->warehouse_id) {
        free(order_preestimate_shipping_list->warehouse_id);
        order_preestimate_shipping_list->warehouse_id = NULL;
    }
    if (order_preestimate_shipping_list->customer_email) {
        free(order_preestimate_shipping_list->customer_email);
        order_preestimate_shipping_list->customer_email = NULL;
    }
    if (order_preestimate_shipping_list->customer_id) {
        free(order_preestimate_shipping_list->customer_id);
        order_preestimate_shipping_list->customer_id = NULL;
    }
    if (order_preestimate_shipping_list->shipp_address_1) {
        free(order_preestimate_shipping_list->shipp_address_1);
        order_preestimate_shipping_list->shipp_address_1 = NULL;
    }
    if (order_preestimate_shipping_list->shipp_city) {
        free(order_preestimate_shipping_list->shipp_city);
        order_preestimate_shipping_list->shipp_city = NULL;
    }
    if (order_preestimate_shipping_list->shipp_postcode) {
        free(order_preestimate_shipping_list->shipp_postcode);
        order_preestimate_shipping_list->shipp_postcode = NULL;
    }
    if (order_preestimate_shipping_list->shipp_state) {
        free(order_preestimate_shipping_list->shipp_state);
        order_preestimate_shipping_list->shipp_state = NULL;
    }
    if (order_preestimate_shipping_list->shipp_country) {
        free(order_preestimate_shipping_list->shipp_country);
        order_preestimate_shipping_list->shipp_country = NULL;
    }
    if (order_preestimate_shipping_list->params) {
        free(order_preestimate_shipping_list->params);
        order_preestimate_shipping_list->params = NULL;
    }
    if (order_preestimate_shipping_list->exclude) {
        free(order_preestimate_shipping_list->exclude);
        order_preestimate_shipping_list->exclude = NULL;
    }
    if (order_preestimate_shipping_list->order_item) {
        list_ForEach(listEntry, order_preestimate_shipping_list->order_item) {
            order_preestimate_shipping_list_order_item_inner_free(listEntry->data);
        }
        list_freeList(order_preestimate_shipping_list->order_item);
        order_preestimate_shipping_list->order_item = NULL;
    }
    free(order_preestimate_shipping_list);
}

cJSON *order_preestimate_shipping_list_convertToJSON(order_preestimate_shipping_list_t *order_preestimate_shipping_list) {
    cJSON *item = cJSON_CreateObject();

    // order_preestimate_shipping_list->store_id
    if(order_preestimate_shipping_list->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_preestimate_shipping_list->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->warehouse_id
    if(order_preestimate_shipping_list->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", order_preestimate_shipping_list->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->customer_email
    if(order_preestimate_shipping_list->customer_email) {
    if(cJSON_AddStringToObject(item, "customer_email", order_preestimate_shipping_list->customer_email) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->customer_id
    if(order_preestimate_shipping_list->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", order_preestimate_shipping_list->customer_id) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->shipp_address_1
    if(order_preestimate_shipping_list->shipp_address_1) {
    if(cJSON_AddStringToObject(item, "shipp_address_1", order_preestimate_shipping_list->shipp_address_1) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->shipp_city
    if(order_preestimate_shipping_list->shipp_city) {
    if(cJSON_AddStringToObject(item, "shipp_city", order_preestimate_shipping_list->shipp_city) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->shipp_postcode
    if(order_preestimate_shipping_list->shipp_postcode) {
    if(cJSON_AddStringToObject(item, "shipp_postcode", order_preestimate_shipping_list->shipp_postcode) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->shipp_state
    if(order_preestimate_shipping_list->shipp_state) {
    if(cJSON_AddStringToObject(item, "shipp_state", order_preestimate_shipping_list->shipp_state) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->shipp_country
    if (!order_preestimate_shipping_list->shipp_country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipp_country", order_preestimate_shipping_list->shipp_country) == NULL) {
    goto fail; //String
    }


    // order_preestimate_shipping_list->params
    if(order_preestimate_shipping_list->params) {
    if(cJSON_AddStringToObject(item, "params", order_preestimate_shipping_list->params) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->exclude
    if(order_preestimate_shipping_list->exclude) {
    if(cJSON_AddStringToObject(item, "exclude", order_preestimate_shipping_list->exclude) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping_list->order_item
    if (!order_preestimate_shipping_list->order_item) {
        goto fail;
    }
    cJSON *order_item = cJSON_AddArrayToObject(item, "order_item");
    if(order_item == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_itemListEntry;
    if (order_preestimate_shipping_list->order_item) {
    list_ForEach(order_itemListEntry, order_preestimate_shipping_list->order_item) {
    cJSON *itemLocal = order_preestimate_shipping_list_order_item_inner_convertToJSON(order_itemListEntry->data);
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

order_preestimate_shipping_list_t *order_preestimate_shipping_list_parseFromJSON(cJSON *order_preestimate_shipping_listJSON){

    order_preestimate_shipping_list_t *order_preestimate_shipping_list_local_var = NULL;

    // define the local list for order_preestimate_shipping_list->order_item
    list_t *order_itemList = NULL;

    // order_preestimate_shipping_list->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->customer_email
    cJSON *customer_email = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "customer_email");
    if (cJSON_IsNull(customer_email)) {
        customer_email = NULL;
    }
    if (customer_email) { 
    if(!cJSON_IsString(customer_email) && !cJSON_IsNull(customer_email))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->shipp_address_1
    cJSON *shipp_address_1 = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "shipp_address_1");
    if (cJSON_IsNull(shipp_address_1)) {
        shipp_address_1 = NULL;
    }
    if (shipp_address_1) { 
    if(!cJSON_IsString(shipp_address_1) && !cJSON_IsNull(shipp_address_1))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->shipp_city
    cJSON *shipp_city = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "shipp_city");
    if (cJSON_IsNull(shipp_city)) {
        shipp_city = NULL;
    }
    if (shipp_city) { 
    if(!cJSON_IsString(shipp_city) && !cJSON_IsNull(shipp_city))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->shipp_postcode
    cJSON *shipp_postcode = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "shipp_postcode");
    if (cJSON_IsNull(shipp_postcode)) {
        shipp_postcode = NULL;
    }
    if (shipp_postcode) { 
    if(!cJSON_IsString(shipp_postcode) && !cJSON_IsNull(shipp_postcode))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->shipp_state
    cJSON *shipp_state = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "shipp_state");
    if (cJSON_IsNull(shipp_state)) {
        shipp_state = NULL;
    }
    if (shipp_state) { 
    if(!cJSON_IsString(shipp_state) && !cJSON_IsNull(shipp_state))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->shipp_country
    cJSON *shipp_country = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "shipp_country");
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

    // order_preestimate_shipping_list->params
    cJSON *params = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "params");
    if (cJSON_IsNull(params)) {
        params = NULL;
    }
    if (params) { 
    if(!cJSON_IsString(params) && !cJSON_IsNull(params))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->exclude
    cJSON *exclude = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "exclude");
    if (cJSON_IsNull(exclude)) {
        exclude = NULL;
    }
    if (exclude) { 
    if(!cJSON_IsString(exclude) && !cJSON_IsNull(exclude))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping_list->order_item
    cJSON *order_item = cJSON_GetObjectItemCaseSensitive(order_preestimate_shipping_listJSON, "order_item");
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
        order_preestimate_shipping_list_order_item_inner_t *order_itemItem = order_preestimate_shipping_list_order_item_inner_parseFromJSON(order_item_local_nonprimitive);

        list_addElement(order_itemList, order_itemItem);
    }


    order_preestimate_shipping_list_local_var = order_preestimate_shipping_list_create_internal (
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        customer_email && !cJSON_IsNull(customer_email) ? strdup(customer_email->valuestring) : NULL,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL,
        shipp_address_1 && !cJSON_IsNull(shipp_address_1) ? strdup(shipp_address_1->valuestring) : NULL,
        shipp_city && !cJSON_IsNull(shipp_city) ? strdup(shipp_city->valuestring) : NULL,
        shipp_postcode && !cJSON_IsNull(shipp_postcode) ? strdup(shipp_postcode->valuestring) : NULL,
        shipp_state && !cJSON_IsNull(shipp_state) ? strdup(shipp_state->valuestring) : NULL,
        strdup(shipp_country->valuestring),
        params && !cJSON_IsNull(params) ? strdup(params->valuestring) : NULL,
        exclude && !cJSON_IsNull(exclude) ? strdup(exclude->valuestring) : NULL,
        order_itemList
        );

    return order_preestimate_shipping_list_local_var;
end:
    if (order_itemList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_itemList) {
            order_preestimate_shipping_list_order_item_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_itemList);
        order_itemList = NULL;
    }
    return NULL;

}
