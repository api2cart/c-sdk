#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_shipping_method_rate.h"



static cart_shipping_method_rate_t *cart_shipping_method_rate_create_internal(
    char *min_weight,
    char *max_weight,
    char *min_order_amount,
    char *max_order_amount,
    char *min_items_count,
    char *max_items_count,
    char *price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    cart_shipping_method_rate_t *cart_shipping_method_rate_local_var = malloc(sizeof(cart_shipping_method_rate_t));
    if (!cart_shipping_method_rate_local_var) {
        return NULL;
    }
    cart_shipping_method_rate_local_var->min_weight = min_weight;
    cart_shipping_method_rate_local_var->max_weight = max_weight;
    cart_shipping_method_rate_local_var->min_order_amount = min_order_amount;
    cart_shipping_method_rate_local_var->max_order_amount = max_order_amount;
    cart_shipping_method_rate_local_var->min_items_count = min_items_count;
    cart_shipping_method_rate_local_var->max_items_count = max_items_count;
    cart_shipping_method_rate_local_var->price = price;
    cart_shipping_method_rate_local_var->additional_fields = additional_fields;
    cart_shipping_method_rate_local_var->custom_fields = custom_fields;

    cart_shipping_method_rate_local_var->_library_owned = 1;
    return cart_shipping_method_rate_local_var;
}

__attribute__((deprecated)) cart_shipping_method_rate_t *cart_shipping_method_rate_create(
    char *min_weight,
    char *max_weight,
    char *min_order_amount,
    char *max_order_amount,
    char *min_items_count,
    char *max_items_count,
    char *price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return cart_shipping_method_rate_create_internal (
        min_weight,
        max_weight,
        min_order_amount,
        max_order_amount,
        min_items_count,
        max_items_count,
        price,
        additional_fields,
        custom_fields
        );
}

void cart_shipping_method_rate_free(cart_shipping_method_rate_t *cart_shipping_method_rate) {
    if(NULL == cart_shipping_method_rate){
        return ;
    }
    if(cart_shipping_method_rate->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_shipping_method_rate_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_shipping_method_rate->min_weight) {
        free(cart_shipping_method_rate->min_weight);
        cart_shipping_method_rate->min_weight = NULL;
    }
    if (cart_shipping_method_rate->max_weight) {
        free(cart_shipping_method_rate->max_weight);
        cart_shipping_method_rate->max_weight = NULL;
    }
    if (cart_shipping_method_rate->min_order_amount) {
        free(cart_shipping_method_rate->min_order_amount);
        cart_shipping_method_rate->min_order_amount = NULL;
    }
    if (cart_shipping_method_rate->max_order_amount) {
        free(cart_shipping_method_rate->max_order_amount);
        cart_shipping_method_rate->max_order_amount = NULL;
    }
    if (cart_shipping_method_rate->min_items_count) {
        free(cart_shipping_method_rate->min_items_count);
        cart_shipping_method_rate->min_items_count = NULL;
    }
    if (cart_shipping_method_rate->max_items_count) {
        free(cart_shipping_method_rate->max_items_count);
        cart_shipping_method_rate->max_items_count = NULL;
    }
    if (cart_shipping_method_rate->price) {
        free(cart_shipping_method_rate->price);
        cart_shipping_method_rate->price = NULL;
    }
    if (cart_shipping_method_rate->additional_fields) {
        object_free(cart_shipping_method_rate->additional_fields);
        cart_shipping_method_rate->additional_fields = NULL;
    }
    if (cart_shipping_method_rate->custom_fields) {
        object_free(cart_shipping_method_rate->custom_fields);
        cart_shipping_method_rate->custom_fields = NULL;
    }
    free(cart_shipping_method_rate);
}

cJSON *cart_shipping_method_rate_convertToJSON(cart_shipping_method_rate_t *cart_shipping_method_rate) {
    cJSON *item = cJSON_CreateObject();

    // cart_shipping_method_rate->min_weight
    if(cart_shipping_method_rate->min_weight) {
    if(cJSON_AddStringToObject(item, "min_weight", cart_shipping_method_rate->min_weight) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->max_weight
    if(cart_shipping_method_rate->max_weight) {
    if(cJSON_AddStringToObject(item, "max_weight", cart_shipping_method_rate->max_weight) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->min_order_amount
    if(cart_shipping_method_rate->min_order_amount) {
    if(cJSON_AddStringToObject(item, "min_order_amount", cart_shipping_method_rate->min_order_amount) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->max_order_amount
    if(cart_shipping_method_rate->max_order_amount) {
    if(cJSON_AddStringToObject(item, "max_order_amount", cart_shipping_method_rate->max_order_amount) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->min_items_count
    if(cart_shipping_method_rate->min_items_count) {
    if(cJSON_AddStringToObject(item, "min_items_count", cart_shipping_method_rate->min_items_count) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->max_items_count
    if(cart_shipping_method_rate->max_items_count) {
    if(cJSON_AddStringToObject(item, "max_items_count", cart_shipping_method_rate->max_items_count) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->price
    if(cart_shipping_method_rate->price) {
    if(cJSON_AddStringToObject(item, "price", cart_shipping_method_rate->price) == NULL) {
    goto fail; //String
    }
    }


    // cart_shipping_method_rate->additional_fields
    if(cart_shipping_method_rate->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(cart_shipping_method_rate->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // cart_shipping_method_rate->custom_fields
    if(cart_shipping_method_rate->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(cart_shipping_method_rate->custom_fields);
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

cart_shipping_method_rate_t *cart_shipping_method_rate_parseFromJSON(cJSON *cart_shipping_method_rateJSON){

    cart_shipping_method_rate_t *cart_shipping_method_rate_local_var = NULL;

    // cart_shipping_method_rate->min_weight
    cJSON *min_weight = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "min_weight");
    if (cJSON_IsNull(min_weight)) {
        min_weight = NULL;
    }
    if (min_weight) { 
    if(!cJSON_IsString(min_weight) && !cJSON_IsNull(min_weight))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->max_weight
    cJSON *max_weight = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "max_weight");
    if (cJSON_IsNull(max_weight)) {
        max_weight = NULL;
    }
    if (max_weight) { 
    if(!cJSON_IsString(max_weight) && !cJSON_IsNull(max_weight))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->min_order_amount
    cJSON *min_order_amount = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "min_order_amount");
    if (cJSON_IsNull(min_order_amount)) {
        min_order_amount = NULL;
    }
    if (min_order_amount) { 
    if(!cJSON_IsString(min_order_amount) && !cJSON_IsNull(min_order_amount))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->max_order_amount
    cJSON *max_order_amount = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "max_order_amount");
    if (cJSON_IsNull(max_order_amount)) {
        max_order_amount = NULL;
    }
    if (max_order_amount) { 
    if(!cJSON_IsString(max_order_amount) && !cJSON_IsNull(max_order_amount))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->min_items_count
    cJSON *min_items_count = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "min_items_count");
    if (cJSON_IsNull(min_items_count)) {
        min_items_count = NULL;
    }
    if (min_items_count) { 
    if(!cJSON_IsString(min_items_count) && !cJSON_IsNull(min_items_count))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->max_items_count
    cJSON *max_items_count = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "max_items_count");
    if (cJSON_IsNull(max_items_count)) {
        max_items_count = NULL;
    }
    if (max_items_count) { 
    if(!cJSON_IsString(max_items_count) && !cJSON_IsNull(max_items_count))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsString(price) && !cJSON_IsNull(price))
    {
    goto end; //String
    }
    }

    // cart_shipping_method_rate->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // cart_shipping_method_rate->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(cart_shipping_method_rateJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    cart_shipping_method_rate_local_var = cart_shipping_method_rate_create_internal (
        min_weight && !cJSON_IsNull(min_weight) ? strdup(min_weight->valuestring) : NULL,
        max_weight && !cJSON_IsNull(max_weight) ? strdup(max_weight->valuestring) : NULL,
        min_order_amount && !cJSON_IsNull(min_order_amount) ? strdup(min_order_amount->valuestring) : NULL,
        max_order_amount && !cJSON_IsNull(max_order_amount) ? strdup(max_order_amount->valuestring) : NULL,
        min_items_count && !cJSON_IsNull(min_items_count) ? strdup(min_items_count->valuestring) : NULL,
        max_items_count && !cJSON_IsNull(max_items_count) ? strdup(max_items_count->valuestring) : NULL,
        price && !cJSON_IsNull(price) ? strdup(price->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return cart_shipping_method_rate_local_var;
end:
    return NULL;

}
