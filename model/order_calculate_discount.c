#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_discount.h"



static order_calculate_discount_t *order_calculate_discount_create_internal(
    char *code,
    double value,
    char *type,
    int free_shipping,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_calculate_discount_t *order_calculate_discount_local_var = malloc(sizeof(order_calculate_discount_t));
    if (!order_calculate_discount_local_var) {
        return NULL;
    }
    order_calculate_discount_local_var->code = code;
    order_calculate_discount_local_var->value = value;
    order_calculate_discount_local_var->type = type;
    order_calculate_discount_local_var->free_shipping = free_shipping;
    order_calculate_discount_local_var->additional_fields = additional_fields;
    order_calculate_discount_local_var->custom_fields = custom_fields;

    order_calculate_discount_local_var->_library_owned = 1;
    return order_calculate_discount_local_var;
}

__attribute__((deprecated)) order_calculate_discount_t *order_calculate_discount_create(
    char *code,
    double value,
    char *type,
    int free_shipping,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_calculate_discount_create_internal (
        code,
        value,
        type,
        free_shipping,
        additional_fields,
        custom_fields
        );
}

void order_calculate_discount_free(order_calculate_discount_t *order_calculate_discount) {
    if(NULL == order_calculate_discount){
        return ;
    }
    if(order_calculate_discount->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_discount_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_discount->code) {
        free(order_calculate_discount->code);
        order_calculate_discount->code = NULL;
    }
    if (order_calculate_discount->type) {
        free(order_calculate_discount->type);
        order_calculate_discount->type = NULL;
    }
    if (order_calculate_discount->additional_fields) {
        object_free(order_calculate_discount->additional_fields);
        order_calculate_discount->additional_fields = NULL;
    }
    if (order_calculate_discount->custom_fields) {
        object_free(order_calculate_discount->custom_fields);
        order_calculate_discount->custom_fields = NULL;
    }
    free(order_calculate_discount);
}

cJSON *order_calculate_discount_convertToJSON(order_calculate_discount_t *order_calculate_discount) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_discount->code
    if(order_calculate_discount->code) {
    if(cJSON_AddStringToObject(item, "code", order_calculate_discount->code) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_discount->value
    if(order_calculate_discount->value) {
    if(cJSON_AddNumberToObject(item, "value", order_calculate_discount->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_discount->type
    if(order_calculate_discount->type) {
    if(cJSON_AddStringToObject(item, "type", order_calculate_discount->type) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_discount->free_shipping
    if(order_calculate_discount->free_shipping) {
    if(cJSON_AddBoolToObject(item, "free_shipping", order_calculate_discount->free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // order_calculate_discount->additional_fields
    if(order_calculate_discount->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_calculate_discount->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_calculate_discount->custom_fields
    if(order_calculate_discount->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_calculate_discount->custom_fields);
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

order_calculate_discount_t *order_calculate_discount_parseFromJSON(cJSON *order_calculate_discountJSON){

    order_calculate_discount_t *order_calculate_discount_local_var = NULL;

    // order_calculate_discount->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // order_calculate_discount->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_discount->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // order_calculate_discount->free_shipping
    cJSON *free_shipping = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "free_shipping");
    if (cJSON_IsNull(free_shipping)) {
        free_shipping = NULL;
    }
    if (free_shipping) { 
    if(!cJSON_IsBool(free_shipping))
    {
    goto end; //Bool
    }
    }

    // order_calculate_discount->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_calculate_discount->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_discountJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_calculate_discount_local_var = order_calculate_discount_create_internal (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        value ? value->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        free_shipping ? free_shipping->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_calculate_discount_local_var;
end:
    return NULL;

}
