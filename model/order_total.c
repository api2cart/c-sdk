#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_total.h"



static order_total_t *order_total_create_internal(
    double subtotal_ex_tax,
    double wrapping_ex_tax,
    double shipping_ex_tax,
    double total_discount,
    double total_tax,
    double total,
    double total_paid,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_total_t *order_total_local_var = malloc(sizeof(order_total_t));
    if (!order_total_local_var) {
        return NULL;
    }
    order_total_local_var->subtotal_ex_tax = subtotal_ex_tax;
    order_total_local_var->wrapping_ex_tax = wrapping_ex_tax;
    order_total_local_var->shipping_ex_tax = shipping_ex_tax;
    order_total_local_var->total_discount = total_discount;
    order_total_local_var->total_tax = total_tax;
    order_total_local_var->total = total;
    order_total_local_var->total_paid = total_paid;
    order_total_local_var->additional_fields = additional_fields;
    order_total_local_var->custom_fields = custom_fields;

    order_total_local_var->_library_owned = 1;
    return order_total_local_var;
}

__attribute__((deprecated)) order_total_t *order_total_create(
    double subtotal_ex_tax,
    double wrapping_ex_tax,
    double shipping_ex_tax,
    double total_discount,
    double total_tax,
    double total,
    double total_paid,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_total_create_internal (
        subtotal_ex_tax,
        wrapping_ex_tax,
        shipping_ex_tax,
        total_discount,
        total_tax,
        total,
        total_paid,
        additional_fields,
        custom_fields
        );
}

void order_total_free(order_total_t *order_total) {
    if(NULL == order_total){
        return ;
    }
    if(order_total->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_total_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_total->additional_fields) {
        object_free(order_total->additional_fields);
        order_total->additional_fields = NULL;
    }
    if (order_total->custom_fields) {
        object_free(order_total->custom_fields);
        order_total->custom_fields = NULL;
    }
    free(order_total);
}

cJSON *order_total_convertToJSON(order_total_t *order_total) {
    cJSON *item = cJSON_CreateObject();

    // order_total->subtotal_ex_tax
    if(order_total->subtotal_ex_tax) {
    if(cJSON_AddNumberToObject(item, "subtotal_ex_tax", order_total->subtotal_ex_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->wrapping_ex_tax
    if(order_total->wrapping_ex_tax) {
    if(cJSON_AddNumberToObject(item, "wrapping_ex_tax", order_total->wrapping_ex_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->shipping_ex_tax
    if(order_total->shipping_ex_tax) {
    if(cJSON_AddNumberToObject(item, "shipping_ex_tax", order_total->shipping_ex_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->total_discount
    if(order_total->total_discount) {
    if(cJSON_AddNumberToObject(item, "total_discount", order_total->total_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->total_tax
    if(order_total->total_tax) {
    if(cJSON_AddNumberToObject(item, "total_tax", order_total->total_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->total
    if(order_total->total) {
    if(cJSON_AddNumberToObject(item, "total", order_total->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->total_paid
    if(order_total->total_paid) {
    if(cJSON_AddNumberToObject(item, "total_paid", order_total->total_paid) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_total->additional_fields
    if(order_total->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_total->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_total->custom_fields
    if(order_total->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_total->custom_fields);
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

order_total_t *order_total_parseFromJSON(cJSON *order_totalJSON){

    order_total_t *order_total_local_var = NULL;

    // order_total->subtotal_ex_tax
    cJSON *subtotal_ex_tax = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "subtotal_ex_tax");
    if (cJSON_IsNull(subtotal_ex_tax)) {
        subtotal_ex_tax = NULL;
    }
    if (subtotal_ex_tax) { 
    if(!cJSON_IsNumber(subtotal_ex_tax))
    {
    goto end; //Numeric
    }
    }

    // order_total->wrapping_ex_tax
    cJSON *wrapping_ex_tax = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "wrapping_ex_tax");
    if (cJSON_IsNull(wrapping_ex_tax)) {
        wrapping_ex_tax = NULL;
    }
    if (wrapping_ex_tax) { 
    if(!cJSON_IsNumber(wrapping_ex_tax))
    {
    goto end; //Numeric
    }
    }

    // order_total->shipping_ex_tax
    cJSON *shipping_ex_tax = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "shipping_ex_tax");
    if (cJSON_IsNull(shipping_ex_tax)) {
        shipping_ex_tax = NULL;
    }
    if (shipping_ex_tax) { 
    if(!cJSON_IsNumber(shipping_ex_tax))
    {
    goto end; //Numeric
    }
    }

    // order_total->total_discount
    cJSON *total_discount = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "total_discount");
    if (cJSON_IsNull(total_discount)) {
        total_discount = NULL;
    }
    if (total_discount) { 
    if(!cJSON_IsNumber(total_discount))
    {
    goto end; //Numeric
    }
    }

    // order_total->total_tax
    cJSON *total_tax = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "total_tax");
    if (cJSON_IsNull(total_tax)) {
        total_tax = NULL;
    }
    if (total_tax) { 
    if(!cJSON_IsNumber(total_tax))
    {
    goto end; //Numeric
    }
    }

    // order_total->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // order_total->total_paid
    cJSON *total_paid = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "total_paid");
    if (cJSON_IsNull(total_paid)) {
        total_paid = NULL;
    }
    if (total_paid) { 
    if(!cJSON_IsNumber(total_paid))
    {
    goto end; //Numeric
    }
    }

    // order_total->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_total->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_totalJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_total_local_var = order_total_create_internal (
        subtotal_ex_tax ? subtotal_ex_tax->valuedouble : 0,
        wrapping_ex_tax ? wrapping_ex_tax->valuedouble : 0,
        shipping_ex_tax ? shipping_ex_tax->valuedouble : 0,
        total_discount ? total_discount->valuedouble : 0,
        total_tax ? total_tax->valuedouble : 0,
        total ? total->valuedouble : 0,
        total_paid ? total_paid->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_total_local_var;
end:
    return NULL;

}
