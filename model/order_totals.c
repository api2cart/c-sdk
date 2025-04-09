#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_totals.h"



static order_totals_t *order_totals_create_internal(
    double total,
    double subtotal,
    double shipping,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_totals_t *order_totals_local_var = malloc(sizeof(order_totals_t));
    if (!order_totals_local_var) {
        return NULL;
    }
    order_totals_local_var->total = total;
    order_totals_local_var->subtotal = subtotal;
    order_totals_local_var->shipping = shipping;
    order_totals_local_var->tax = tax;
    order_totals_local_var->discount = discount;
    order_totals_local_var->additional_fields = additional_fields;
    order_totals_local_var->custom_fields = custom_fields;

    order_totals_local_var->_library_owned = 1;
    return order_totals_local_var;
}

__attribute__((deprecated)) order_totals_t *order_totals_create(
    double total,
    double subtotal,
    double shipping,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_totals_create_internal (
        total,
        subtotal,
        shipping,
        tax,
        discount,
        additional_fields,
        custom_fields
        );
}

void order_totals_free(order_totals_t *order_totals) {
    if(NULL == order_totals){
        return ;
    }
    if(order_totals->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_totals_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_totals->additional_fields) {
        object_free(order_totals->additional_fields);
        order_totals->additional_fields = NULL;
    }
    if (order_totals->custom_fields) {
        object_free(order_totals->custom_fields);
        order_totals->custom_fields = NULL;
    }
    free(order_totals);
}

cJSON *order_totals_convertToJSON(order_totals_t *order_totals) {
    cJSON *item = cJSON_CreateObject();

    // order_totals->total
    if(order_totals->total) {
    if(cJSON_AddNumberToObject(item, "total", order_totals->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals->subtotal
    if(order_totals->subtotal) {
    if(cJSON_AddNumberToObject(item, "subtotal", order_totals->subtotal) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals->shipping
    if(order_totals->shipping) {
    if(cJSON_AddNumberToObject(item, "shipping", order_totals->shipping) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals->tax
    if(order_totals->tax) {
    if(cJSON_AddNumberToObject(item, "tax", order_totals->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals->discount
    if(order_totals->discount) {
    if(cJSON_AddNumberToObject(item, "discount", order_totals->discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals->additional_fields
    if(order_totals->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_totals->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_totals->custom_fields
    if(order_totals->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_totals->custom_fields);
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

order_totals_t *order_totals_parseFromJSON(cJSON *order_totalsJSON){

    order_totals_t *order_totals_local_var = NULL;

    // order_totals->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "total");
    if (cJSON_IsNull(total)) {
        total = NULL;
    }
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // order_totals->subtotal
    cJSON *subtotal = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "subtotal");
    if (cJSON_IsNull(subtotal)) {
        subtotal = NULL;
    }
    if (subtotal) { 
    if(!cJSON_IsNumber(subtotal))
    {
    goto end; //Numeric
    }
    }

    // order_totals->shipping
    cJSON *shipping = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "shipping");
    if (cJSON_IsNull(shipping)) {
        shipping = NULL;
    }
    if (shipping) { 
    if(!cJSON_IsNumber(shipping))
    {
    goto end; //Numeric
    }
    }

    // order_totals->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // order_totals->discount
    cJSON *discount = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "discount");
    if (cJSON_IsNull(discount)) {
        discount = NULL;
    }
    if (discount) { 
    if(!cJSON_IsNumber(discount))
    {
    goto end; //Numeric
    }
    }

    // order_totals->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_totals->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_totalsJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_totals_local_var = order_totals_create_internal (
        total ? total->valuedouble : 0,
        subtotal ? subtotal->valuedouble : 0,
        shipping ? shipping->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        discount ? discount->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_totals_local_var;
end:
    return NULL;

}
