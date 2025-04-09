#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_totals_new_discount.h"



static order_totals_new_discount_t *order_totals_new_discount_create_internal(
    char *code,
    double value,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_totals_new_discount_t *order_totals_new_discount_local_var = malloc(sizeof(order_totals_new_discount_t));
    if (!order_totals_new_discount_local_var) {
        return NULL;
    }
    order_totals_new_discount_local_var->code = code;
    order_totals_new_discount_local_var->value = value;
    order_totals_new_discount_local_var->type = type;
    order_totals_new_discount_local_var->additional_fields = additional_fields;
    order_totals_new_discount_local_var->custom_fields = custom_fields;

    order_totals_new_discount_local_var->_library_owned = 1;
    return order_totals_new_discount_local_var;
}

__attribute__((deprecated)) order_totals_new_discount_t *order_totals_new_discount_create(
    char *code,
    double value,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_totals_new_discount_create_internal (
        code,
        value,
        type,
        additional_fields,
        custom_fields
        );
}

void order_totals_new_discount_free(order_totals_new_discount_t *order_totals_new_discount) {
    if(NULL == order_totals_new_discount){
        return ;
    }
    if(order_totals_new_discount->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_totals_new_discount_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_totals_new_discount->code) {
        free(order_totals_new_discount->code);
        order_totals_new_discount->code = NULL;
    }
    if (order_totals_new_discount->type) {
        free(order_totals_new_discount->type);
        order_totals_new_discount->type = NULL;
    }
    if (order_totals_new_discount->additional_fields) {
        object_free(order_totals_new_discount->additional_fields);
        order_totals_new_discount->additional_fields = NULL;
    }
    if (order_totals_new_discount->custom_fields) {
        object_free(order_totals_new_discount->custom_fields);
        order_totals_new_discount->custom_fields = NULL;
    }
    free(order_totals_new_discount);
}

cJSON *order_totals_new_discount_convertToJSON(order_totals_new_discount_t *order_totals_new_discount) {
    cJSON *item = cJSON_CreateObject();

    // order_totals_new_discount->code
    if(order_totals_new_discount->code) {
    if(cJSON_AddStringToObject(item, "code", order_totals_new_discount->code) == NULL) {
    goto fail; //String
    }
    }


    // order_totals_new_discount->value
    if(order_totals_new_discount->value) {
    if(cJSON_AddNumberToObject(item, "value", order_totals_new_discount->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_totals_new_discount->type
    if(order_totals_new_discount->type) {
    if(cJSON_AddStringToObject(item, "type", order_totals_new_discount->type) == NULL) {
    goto fail; //String
    }
    }


    // order_totals_new_discount->additional_fields
    if(order_totals_new_discount->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_totals_new_discount->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_totals_new_discount->custom_fields
    if(order_totals_new_discount->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_totals_new_discount->custom_fields);
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

order_totals_new_discount_t *order_totals_new_discount_parseFromJSON(cJSON *order_totals_new_discountJSON){

    order_totals_new_discount_t *order_totals_new_discount_local_var = NULL;

    // order_totals_new_discount->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(order_totals_new_discountJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // order_totals_new_discount->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_totals_new_discountJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // order_totals_new_discount->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(order_totals_new_discountJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // order_totals_new_discount->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_totals_new_discountJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_totals_new_discount->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_totals_new_discountJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_totals_new_discount_local_var = order_totals_new_discount_create_internal (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        value ? value->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_totals_new_discount_local_var;
end:
    return NULL;

}
