#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_shipping_method.h"



static cart_shipping_method_t *cart_shipping_method_create_internal(
    char *name,
    char *handling_fee,
    char *handling_enabled,
    char *handling_type,
    char *default_price,
    char *default_price_type,
    char *type,
    char *enabled,
    char *min_order_amount,
    list_t *rates,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_shipping_method_t *cart_shipping_method_local_var = malloc(sizeof(cart_shipping_method_t));
    if (!cart_shipping_method_local_var) {
        return NULL;
    }
    cart_shipping_method_local_var->name = name;
    cart_shipping_method_local_var->handling_fee = handling_fee;
    cart_shipping_method_local_var->handling_enabled = handling_enabled;
    cart_shipping_method_local_var->handling_type = handling_type;
    cart_shipping_method_local_var->default_price = default_price;
    cart_shipping_method_local_var->default_price_type = default_price_type;
    cart_shipping_method_local_var->type = type;
    cart_shipping_method_local_var->enabled = enabled;
    cart_shipping_method_local_var->min_order_amount = min_order_amount;
    cart_shipping_method_local_var->rates = rates;
    cart_shipping_method_local_var->additional_fields = additional_fields;
    cart_shipping_method_local_var->custom_fields = custom_fields;

    cart_shipping_method_local_var->_library_owned = 1;
    return cart_shipping_method_local_var;
}

__attribute__((deprecated)) cart_shipping_method_t *cart_shipping_method_create(
    char *name,
    char *handling_fee,
    char *handling_enabled,
    char *handling_type,
    char *default_price,
    char *default_price_type,
    char *type,
    char *enabled,
    char *min_order_amount,
    list_t *rates,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_shipping_method_create_internal (
        name,
        handling_fee,
        handling_enabled,
        handling_type,
        default_price,
        default_price_type,
        type,
        enabled,
        min_order_amount,
        rates,
        additional_fields,
        custom_fields
        );
}

void cart_shipping_method_free(cart_shipping_method_t *cart_shipping_method) {
    if(NULL == cart_shipping_method){
        return ;
    }
    if(cart_shipping_method->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_shipping_method_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_shipping_method->name) {
        free(cart_shipping_method->name);
        cart_shipping_method->name = NULL;
    }
    if (cart_shipping_method->handling_fee) {
        free(cart_shipping_method->handling_fee);
        cart_shipping_method->handling_fee = NULL;
    }
    if (cart_shipping_method->handling_enabled) {
        free(cart_shipping_method->handling_enabled);
        cart_shipping_method->handling_enabled = NULL;
    }
    if (cart_shipping_method->handling_type) {
        free(cart_shipping_method->handling_type);
        cart_shipping_method->handling_type = NULL;
    }
    if (cart_shipping_method->default_price) {
        free(cart_shipping_method->default_price);
        cart_shipping_method->default_price = NULL;
    }
    if (cart_shipping_method->default_price_type) {
        free(cart_shipping_method->default_price_type);
        cart_shipping_method->default_price_type = NULL;
    }
    if (cart_shipping_method->type) {
        free(cart_shipping_method->type);
        cart_shipping_method->type = NULL;
    }
    if (cart_shipping_method->enabled) {
        free(cart_shipping_method->enabled);
        cart_shipping_method->enabled = NULL;
    }
    if (cart_shipping_method->min_order_amount) {
        free(cart_shipping_method->min_order_amount);
        cart_shipping_method->min_order_amount = NULL;
    }
    if (cart_shipping_method->rates) {
        list_ForEach(listEntry, cart_shipping_method->rates) {
            cart_shipping_method_rate_free(listEntry->data);
        }
        list_freeList(cart_shipping_method->rates);
        cart_shipping_method->rates = NULL;
    }
    if (cart_shipping_method->additional_fields) {
        object_free(cart_shipping_method->additional_fields);
        cart_shipping_method->additional_fields = NULL;
    }
    if (cart_shipping_method->custom_fields) {
        object_free(cart_shipping_method->custom_fields);
        cart_shipping_method->custom_fields = NULL;
    }
    free(cart_shipping_method);
}

cJSON *cart_shipping_method_convertToJSON(cart_shipping_method_t *cart_shipping_method) {
    cJSON *item = cJSON_CreateObject();

    // cart_shipping_method->name
    if(cart_shipping_method->name) {
    if(cJSON_AddStringToObject(item, "name", cart_shipping_method->name) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->handling_fee
    if(cart_shipping_method->handling_fee) {
    if(cJSON_AddStringToObject(item, "handling_fee", cart_shipping_method->handling_fee) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->handling_enabled
    if(cart_shipping_method->handling_enabled) {
    if(cJSON_AddStringToObject(item, "handling_enabled", cart_shipping_method->handling_enabled) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->handling_type
    if(cart_shipping_method->handling_type) {
    if(cJSON_AddStringToObject(item, "handling_type", cart_shipping_method->handling_type) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->default_price
    if(cart_shipping_method->default_price) {
    if(cJSON_AddStringToObject(item, "default_price", cart_shipping_method->default_price) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->default_price_type
    if(cart_shipping_method->default_price_type) {
    if(cJSON_AddStringToObject(item, "default_price_type", cart_shipping_method->default_price_type) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->type
    if(cart_shipping_method->type) {
    if(cJSON_AddStringToObject(item, "type", cart_shipping_method->type) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->enabled
    if(cart_shipping_method->enabled) {
    if(cJSON_AddStringToObject(item, "enabled", cart_shipping_method->enabled) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->min_order_amount
    if(cart_shipping_method->min_order_amount) {
    if(cJSON_AddStringToObject(item, "min_order_amount", cart_shipping_method->min_order_amount) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method->rates
    if(cart_shipping_method->rates) {
    cJSON *rates = cJSON_AddArrayToObject(item, "rates");
    if(rates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ratesListEntry;
    if (cart_shipping_method->rates) {
    list_ForEach(ratesListEntry, cart_shipping_method->rates) {
    cJSON *itemLocal = cart_shipping_method_rate_convertToJSON(ratesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rates, itemLocal);
    }
    }
    }


    // cart_shipping_method->additional_fields
    if(cart_shipping_method->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_shipping_method->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_shipping_method->custom_fields
    if(cart_shipping_method->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_shipping_method->custom_fields);
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

cart_shipping_method_t *cart_shipping_method_parseFromJSON(cJSON *cart_shipping_methodJSON){

    cart_shipping_method_t *cart_shipping_method_local_var = NULL;

    // define the local list for cart_shipping_method->rates
    list_t *ratesList = NULL;

    // cart_shipping_method->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->handling_fee
    cJSON *handling_fee = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "handling_fee");
    if (cJSON_IsNull(handling_fee)) {
        handling_fee = NULL;
    }
    if (handling_fee) { 
    if(!cJSON_IsString(handling_fee) && !cJSON_IsNull(handling_fee))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->handling_enabled
    cJSON *handling_enabled = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "handling_enabled");
    if (cJSON_IsNull(handling_enabled)) {
        handling_enabled = NULL;
    }
    if (handling_enabled) { 
    if(!cJSON_IsString(handling_enabled) && !cJSON_IsNull(handling_enabled))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->handling_type
    cJSON *handling_type = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "handling_type");
    if (cJSON_IsNull(handling_type)) {
        handling_type = NULL;
    }
    if (handling_type) { 
    if(!cJSON_IsString(handling_type) && !cJSON_IsNull(handling_type))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->default_price
    cJSON *default_price = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "default_price");
    if (cJSON_IsNull(default_price)) {
        default_price = NULL;
    }
    if (default_price) { 
    if(!cJSON_IsString(default_price) && !cJSON_IsNull(default_price))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->default_price_type
    cJSON *default_price_type = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "default_price_type");
    if (cJSON_IsNull(default_price_type)) {
        default_price_type = NULL;
    }
    if (default_price_type) { 
    if(!cJSON_IsString(default_price_type) && !cJSON_IsNull(default_price_type))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "enabled");
    if (cJSON_IsNull(enabled)) {
        enabled = NULL;
    }
    if (enabled) { 
    if(!cJSON_IsString(enabled) && !cJSON_IsNull(enabled))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->min_order_amount
    cJSON *min_order_amount = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "min_order_amount");
    if (cJSON_IsNull(min_order_amount)) {
        min_order_amount = NULL;
    }
    if (min_order_amount) { 
    if(!cJSON_IsString(min_order_amount) && !cJSON_IsNull(min_order_amount))
    {
    goto end; //String
    }
    }

    // cart_shipping_method->rates
    cJSON *rates = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "rates");
    if (cJSON_IsNull(rates)) {
        rates = NULL;
    }
    if (rates) { 
    cJSON *rates_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rates)){
        goto end; //nonprimitive container
    }

    ratesList = list_createList();

    cJSON_ArrayForEach(rates_local_nonprimitive,rates )
    {
        if(!cJSON_IsObject(rates_local_nonprimitive)){
            goto end;
        }
        cart_shipping_method_rate_t *ratesItem = cart_shipping_method_rate_parseFromJSON(rates_local_nonprimitive);

        list_addElement(ratesList, ratesItem);
    }
    }

    // cart_shipping_method->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_shipping_method->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_methodJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_shipping_method_local_var = cart_shipping_method_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        handling_fee && !cJSON_IsNull(handling_fee) ? strdup(handling_fee->valuestring) : NULL,
        handling_enabled && !cJSON_IsNull(handling_enabled) ? strdup(handling_enabled->valuestring) : NULL,
        handling_type && !cJSON_IsNull(handling_type) ? strdup(handling_type->valuestring) : NULL,
        default_price && !cJSON_IsNull(default_price) ? strdup(default_price->valuestring) : NULL,
        default_price_type && !cJSON_IsNull(default_price_type) ? strdup(default_price_type->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        enabled && !cJSON_IsNull(enabled) ? strdup(enabled->valuestring) : NULL,
        min_order_amount && !cJSON_IsNull(min_order_amount) ? strdup(min_order_amount->valuestring) : NULL,
        rates ? ratesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_shipping_method_local_var;
end:
    if (ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ratesList) {
            cart_shipping_method_rate_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ratesList);
        ratesList = NULL;
    }
    return NULL;

}
