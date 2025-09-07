#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_subtotal.h"



static order_calculate_subtotal_t *order_calculate_subtotal_create_internal(
    double value,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_calculate_subtotal_t *order_calculate_subtotal_local_var = malloc(sizeof(order_calculate_subtotal_t));
    if (!order_calculate_subtotal_local_var) {
        return NULL;
    }
    order_calculate_subtotal_local_var->value = value;
    order_calculate_subtotal_local_var->tax = tax;
    order_calculate_subtotal_local_var->discount = discount;
    order_calculate_subtotal_local_var->additional_fields = additional_fields;
    order_calculate_subtotal_local_var->custom_fields = custom_fields;

    order_calculate_subtotal_local_var->_library_owned = 1;
    return order_calculate_subtotal_local_var;
}

__attribute__((deprecated)) order_calculate_subtotal_t *order_calculate_subtotal_create(
    double value,
    double tax,
    double discount,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_calculate_subtotal_create_internal (
        value,
        tax,
        discount,
        additional_fields,
        custom_fields
        );
}

void order_calculate_subtotal_free(order_calculate_subtotal_t *order_calculate_subtotal) {
    if(NULL == order_calculate_subtotal){
        return ;
    }
    if(order_calculate_subtotal->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_subtotal_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_subtotal->additional_fields) {
        object_free(order_calculate_subtotal->additional_fields);
        order_calculate_subtotal->additional_fields = NULL;
    }
    if (order_calculate_subtotal->custom_fields) {
        object_free(order_calculate_subtotal->custom_fields);
        order_calculate_subtotal->custom_fields = NULL;
    }
    free(order_calculate_subtotal);
}

cJSON *order_calculate_subtotal_convertToJSON(order_calculate_subtotal_t *order_calculate_subtotal) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_subtotal->value
    if(order_calculate_subtotal->value) {
    if(cJSON_AddNumberToObject(item, "value", order_calculate_subtotal->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_subtotal->tax
    if(order_calculate_subtotal->tax) {
    if(cJSON_AddNumberToObject(item, "tax", order_calculate_subtotal->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_subtotal->discount
    if(order_calculate_subtotal->discount) {
    if(cJSON_AddNumberToObject(item, "discount", order_calculate_subtotal->discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_subtotal->additional_fields
    if(order_calculate_subtotal->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_calculate_subtotal->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_calculate_subtotal->custom_fields
    if(order_calculate_subtotal->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_calculate_subtotal->custom_fields);
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

order_calculate_subtotal_t *order_calculate_subtotal_parseFromJSON(cJSON *order_calculate_subtotalJSON){

    order_calculate_subtotal_t *order_calculate_subtotal_local_var = NULL;

    // order_calculate_subtotal->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_calculate_subtotalJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_subtotal->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(order_calculate_subtotalJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_subtotal->discount
    cJSON *discount = cJSON_GetObjectItemCaseSensitive(order_calculate_subtotalJSON, "discount");
    if (cJSON_IsNull(discount)) {
        discount = NULL;
    }
    if (discount) { 
    if(!cJSON_IsNumber(discount))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_subtotal->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_subtotalJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_calculate_subtotal->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_subtotalJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_calculate_subtotal_local_var = order_calculate_subtotal_create_internal (
        value ? value->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        discount ? discount->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_calculate_subtotal_local_var;
end:
    return NULL;

}
