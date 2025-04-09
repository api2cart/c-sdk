#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_preestimate_shipping.h"



static order_preestimate_shipping_t *order_preestimate_shipping_create_internal(
    char *method_code,
    char *method_name,
    char *carrier_code,
    char *carrier_name,
    char *description,
    double price,
    double price_inc_tax,
    char *delivery_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_preestimate_shipping_t *order_preestimate_shipping_local_var = malloc(sizeof(order_preestimate_shipping_t));
    if (!order_preestimate_shipping_local_var) {
        return NULL;
    }
    order_preestimate_shipping_local_var->method_code = method_code;
    order_preestimate_shipping_local_var->method_name = method_name;
    order_preestimate_shipping_local_var->carrier_code = carrier_code;
    order_preestimate_shipping_local_var->carrier_name = carrier_name;
    order_preestimate_shipping_local_var->description = description;
    order_preestimate_shipping_local_var->price = price;
    order_preestimate_shipping_local_var->price_inc_tax = price_inc_tax;
    order_preestimate_shipping_local_var->delivery_time = delivery_time;
    order_preestimate_shipping_local_var->additional_fields = additional_fields;
    order_preestimate_shipping_local_var->custom_fields = custom_fields;

    order_preestimate_shipping_local_var->_library_owned = 1;
    return order_preestimate_shipping_local_var;
}

__attribute__((deprecated)) order_preestimate_shipping_t *order_preestimate_shipping_create(
    char *method_code,
    char *method_name,
    char *carrier_code,
    char *carrier_name,
    char *description,
    double price,
    double price_inc_tax,
    char *delivery_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_preestimate_shipping_create_internal (
        method_code,
        method_name,
        carrier_code,
        carrier_name,
        description,
        price,
        price_inc_tax,
        delivery_time,
        additional_fields,
        custom_fields
        );
}

void order_preestimate_shipping_free(order_preestimate_shipping_t *order_preestimate_shipping) {
    if(NULL == order_preestimate_shipping){
        return ;
    }
    if(order_preestimate_shipping->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_preestimate_shipping_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_preestimate_shipping->method_code) {
        free(order_preestimate_shipping->method_code);
        order_preestimate_shipping->method_code = NULL;
    }
    if (order_preestimate_shipping->method_name) {
        free(order_preestimate_shipping->method_name);
        order_preestimate_shipping->method_name = NULL;
    }
    if (order_preestimate_shipping->carrier_code) {
        free(order_preestimate_shipping->carrier_code);
        order_preestimate_shipping->carrier_code = NULL;
    }
    if (order_preestimate_shipping->carrier_name) {
        free(order_preestimate_shipping->carrier_name);
        order_preestimate_shipping->carrier_name = NULL;
    }
    if (order_preestimate_shipping->description) {
        free(order_preestimate_shipping->description);
        order_preestimate_shipping->description = NULL;
    }
    if (order_preestimate_shipping->delivery_time) {
        free(order_preestimate_shipping->delivery_time);
        order_preestimate_shipping->delivery_time = NULL;
    }
    if (order_preestimate_shipping->additional_fields) {
        object_free(order_preestimate_shipping->additional_fields);
        order_preestimate_shipping->additional_fields = NULL;
    }
    if (order_preestimate_shipping->custom_fields) {
        object_free(order_preestimate_shipping->custom_fields);
        order_preestimate_shipping->custom_fields = NULL;
    }
    free(order_preestimate_shipping);
}

cJSON *order_preestimate_shipping_convertToJSON(order_preestimate_shipping_t *order_preestimate_shipping) {
    cJSON *item = cJSON_CreateObject();

    // order_preestimate_shipping->method_code
    if(order_preestimate_shipping->method_code) {
    if(cJSON_AddStringToObject(item, "method_code", order_preestimate_shipping->method_code) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->method_name
    if(order_preestimate_shipping->method_name) {
    if(cJSON_AddStringToObject(item, "method_name", order_preestimate_shipping->method_name) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->carrier_code
    if(order_preestimate_shipping->carrier_code) {
    if(cJSON_AddStringToObject(item, "carrier_code", order_preestimate_shipping->carrier_code) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->carrier_name
    if(order_preestimate_shipping->carrier_name) {
    if(cJSON_AddStringToObject(item, "carrier_name", order_preestimate_shipping->carrier_name) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->description
    if(order_preestimate_shipping->description) {
    if(cJSON_AddStringToObject(item, "description", order_preestimate_shipping->description) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->price
    if(order_preestimate_shipping->price) {
    if(cJSON_AddNumberToObject(item, "price", order_preestimate_shipping->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_preestimate_shipping->price_inc_tax
    if(order_preestimate_shipping->price_inc_tax) {
    if(cJSON_AddNumberToObject(item, "price_inc_tax", order_preestimate_shipping->price_inc_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_preestimate_shipping->delivery_time
    if(order_preestimate_shipping->delivery_time) {
    if(cJSON_AddStringToObject(item, "delivery_time", order_preestimate_shipping->delivery_time) == NULL) {
    goto fail; //String
    }
    }


    // order_preestimate_shipping->additional_fields
    if(order_preestimate_shipping->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_preestimate_shipping->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_preestimate_shipping->custom_fields
    if(order_preestimate_shipping->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_preestimate_shipping->custom_fields);
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

order_preestimate_shipping_t *order_preestimate_shipping_parseFromJSON(cJSON *order_preestimate_shippingJSON){

    order_preestimate_shipping_t *order_preestimate_shipping_local_var = NULL;

    // order_preestimate_shipping->method_code
    cJSON *method_code = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "method_code");
    if (cJSON_IsNull(method_code)) {
        method_code = NULL;
    }
    if (method_code) { 
    if(!cJSON_IsString(method_code) && !cJSON_IsNull(method_code))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->method_name
    cJSON *method_name = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "method_name");
    if (cJSON_IsNull(method_name)) {
        method_name = NULL;
    }
    if (method_name) { 
    if(!cJSON_IsString(method_name) && !cJSON_IsNull(method_name))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->carrier_code
    cJSON *carrier_code = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "carrier_code");
    if (cJSON_IsNull(carrier_code)) {
        carrier_code = NULL;
    }
    if (carrier_code) { 
    if(!cJSON_IsString(carrier_code) && !cJSON_IsNull(carrier_code))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->carrier_name
    cJSON *carrier_name = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "carrier_name");
    if (cJSON_IsNull(carrier_name)) {
        carrier_name = NULL;
    }
    if (carrier_name) { 
    if(!cJSON_IsString(carrier_name) && !cJSON_IsNull(carrier_name))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_preestimate_shipping->price_inc_tax
    cJSON *price_inc_tax = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "price_inc_tax");
    if (cJSON_IsNull(price_inc_tax)) {
        price_inc_tax = NULL;
    }
    if (price_inc_tax) { 
    if(!cJSON_IsNumber(price_inc_tax))
    {
    goto end; //Numeric
    }
    }

    // order_preestimate_shipping->delivery_time
    cJSON *delivery_time = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "delivery_time");
    if (cJSON_IsNull(delivery_time)) {
        delivery_time = NULL;
    }
    if (delivery_time) { 
    if(!cJSON_IsString(delivery_time) && !cJSON_IsNull(delivery_time))
    {
    goto end; //String
    }
    }

    // order_preestimate_shipping->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_preestimate_shipping->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_preestimate_shippingJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_preestimate_shipping_local_var = order_preestimate_shipping_create_internal (
        method_code && !cJSON_IsNull(method_code) ? strdup(method_code->valuestring) : NULL,
        method_name && !cJSON_IsNull(method_name) ? strdup(method_name->valuestring) : NULL,
        carrier_code && !cJSON_IsNull(carrier_code) ? strdup(carrier_code->valuestring) : NULL,
        carrier_name && !cJSON_IsNull(carrier_name) ? strdup(carrier_name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price ? price->valuedouble : 0,
        price_inc_tax ? price_inc_tax->valuedouble : 0,
        delivery_time && !cJSON_IsNull(delivery_time) ? strdup(delivery_time->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_preestimate_shipping_local_var;
end:
    return NULL;

}
