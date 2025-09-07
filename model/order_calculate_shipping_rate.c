#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_shipping_rate.h"



static order_calculate_shipping_rate_t *order_calculate_shipping_rate_create_internal(
    char *code,
    char *name,
    double price,
    double price_inc_tax,
    double tax,
    double tax_rate,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_calculate_shipping_rate_t *order_calculate_shipping_rate_local_var = malloc(sizeof(order_calculate_shipping_rate_t));
    if (!order_calculate_shipping_rate_local_var) {
        return NULL;
    }
    order_calculate_shipping_rate_local_var->code = code;
    order_calculate_shipping_rate_local_var->name = name;
    order_calculate_shipping_rate_local_var->price = price;
    order_calculate_shipping_rate_local_var->price_inc_tax = price_inc_tax;
    order_calculate_shipping_rate_local_var->tax = tax;
    order_calculate_shipping_rate_local_var->tax_rate = tax_rate;
    order_calculate_shipping_rate_local_var->additional_fields = additional_fields;
    order_calculate_shipping_rate_local_var->custom_fields = custom_fields;

    order_calculate_shipping_rate_local_var->_library_owned = 1;
    return order_calculate_shipping_rate_local_var;
}

__attribute__((deprecated)) order_calculate_shipping_rate_t *order_calculate_shipping_rate_create(
    char *code,
    char *name,
    double price,
    double price_inc_tax,
    double tax,
    double tax_rate,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_calculate_shipping_rate_create_internal (
        code,
        name,
        price,
        price_inc_tax,
        tax,
        tax_rate,
        additional_fields,
        custom_fields
        );
}

void order_calculate_shipping_rate_free(order_calculate_shipping_rate_t *order_calculate_shipping_rate) {
    if(NULL == order_calculate_shipping_rate){
        return ;
    }
    if(order_calculate_shipping_rate->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_shipping_rate_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_shipping_rate->code) {
        free(order_calculate_shipping_rate->code);
        order_calculate_shipping_rate->code = NULL;
    }
    if (order_calculate_shipping_rate->name) {
        free(order_calculate_shipping_rate->name);
        order_calculate_shipping_rate->name = NULL;
    }
    if (order_calculate_shipping_rate->additional_fields) {
        object_free(order_calculate_shipping_rate->additional_fields);
        order_calculate_shipping_rate->additional_fields = NULL;
    }
    if (order_calculate_shipping_rate->custom_fields) {
        object_free(order_calculate_shipping_rate->custom_fields);
        order_calculate_shipping_rate->custom_fields = NULL;
    }
    free(order_calculate_shipping_rate);
}

cJSON *order_calculate_shipping_rate_convertToJSON(order_calculate_shipping_rate_t *order_calculate_shipping_rate) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_shipping_rate->code
    if(order_calculate_shipping_rate->code) {
    if(cJSON_AddStringToObject(item, "code", order_calculate_shipping_rate->code) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_shipping_rate->name
    if(order_calculate_shipping_rate->name) {
    if(cJSON_AddStringToObject(item, "name", order_calculate_shipping_rate->name) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_shipping_rate->price
    if(order_calculate_shipping_rate->price) {
    if(cJSON_AddNumberToObject(item, "price", order_calculate_shipping_rate->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_shipping_rate->price_inc_tax
    if(order_calculate_shipping_rate->price_inc_tax) {
    if(cJSON_AddNumberToObject(item, "price_inc_tax", order_calculate_shipping_rate->price_inc_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_shipping_rate->tax
    if(order_calculate_shipping_rate->tax) {
    if(cJSON_AddNumberToObject(item, "tax", order_calculate_shipping_rate->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_shipping_rate->tax_rate
    if(order_calculate_shipping_rate->tax_rate) {
    if(cJSON_AddNumberToObject(item, "tax_rate", order_calculate_shipping_rate->tax_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_shipping_rate->additional_fields
    if(order_calculate_shipping_rate->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_calculate_shipping_rate->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_calculate_shipping_rate->custom_fields
    if(order_calculate_shipping_rate->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_calculate_shipping_rate->custom_fields);
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

order_calculate_shipping_rate_t *order_calculate_shipping_rate_parseFromJSON(cJSON *order_calculate_shipping_rateJSON){

    order_calculate_shipping_rate_t *order_calculate_shipping_rate_local_var = NULL;

    // order_calculate_shipping_rate->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // order_calculate_shipping_rate->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_calculate_shipping_rate->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_shipping_rate->price_inc_tax
    cJSON *price_inc_tax = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "price_inc_tax");
    if (cJSON_IsNull(price_inc_tax)) {
        price_inc_tax = NULL;
    }
    if (price_inc_tax) { 
    if(!cJSON_IsNumber(price_inc_tax))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_shipping_rate->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_shipping_rate->tax_rate
    cJSON *tax_rate = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "tax_rate");
    if (cJSON_IsNull(tax_rate)) {
        tax_rate = NULL;
    }
    if (tax_rate) { 
    if(!cJSON_IsNumber(tax_rate))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_shipping_rate->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_calculate_shipping_rate->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_shipping_rateJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_calculate_shipping_rate_local_var = order_calculate_shipping_rate_create_internal (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        price ? price->valuedouble : 0,
        price_inc_tax ? price_inc_tax->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        tax_rate ? tax_rate->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_calculate_shipping_rate_local_var;
end:
    return NULL;

}
