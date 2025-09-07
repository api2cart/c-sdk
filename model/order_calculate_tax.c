#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_tax.h"



static order_calculate_tax_t *order_calculate_tax_create_internal(
    char *code,
    double rate,
    double value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_calculate_tax_t *order_calculate_tax_local_var = malloc(sizeof(order_calculate_tax_t));
    if (!order_calculate_tax_local_var) {
        return NULL;
    }
    order_calculate_tax_local_var->code = code;
    order_calculate_tax_local_var->rate = rate;
    order_calculate_tax_local_var->value = value;
    order_calculate_tax_local_var->additional_fields = additional_fields;
    order_calculate_tax_local_var->custom_fields = custom_fields;

    order_calculate_tax_local_var->_library_owned = 1;
    return order_calculate_tax_local_var;
}

__attribute__((deprecated)) order_calculate_tax_t *order_calculate_tax_create(
    char *code,
    double rate,
    double value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_calculate_tax_create_internal (
        code,
        rate,
        value,
        additional_fields,
        custom_fields
        );
}

void order_calculate_tax_free(order_calculate_tax_t *order_calculate_tax) {
    if(NULL == order_calculate_tax){
        return ;
    }
    if(order_calculate_tax->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_tax_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_tax->code) {
        free(order_calculate_tax->code);
        order_calculate_tax->code = NULL;
    }
    if (order_calculate_tax->additional_fields) {
        object_free(order_calculate_tax->additional_fields);
        order_calculate_tax->additional_fields = NULL;
    }
    if (order_calculate_tax->custom_fields) {
        object_free(order_calculate_tax->custom_fields);
        order_calculate_tax->custom_fields = NULL;
    }
    free(order_calculate_tax);
}

cJSON *order_calculate_tax_convertToJSON(order_calculate_tax_t *order_calculate_tax) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_tax->code
    if(order_calculate_tax->code) {
    if(cJSON_AddStringToObject(item, "code", order_calculate_tax->code) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_tax->rate
    if(order_calculate_tax->rate) {
    if(cJSON_AddNumberToObject(item, "rate", order_calculate_tax->rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_tax->value
    if(order_calculate_tax->value) {
    if(cJSON_AddNumberToObject(item, "value", order_calculate_tax->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_tax->additional_fields
    if(order_calculate_tax->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_calculate_tax->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_calculate_tax->custom_fields
    if(order_calculate_tax->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_calculate_tax->custom_fields);
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

order_calculate_tax_t *order_calculate_tax_parseFromJSON(cJSON *order_calculate_taxJSON){

    order_calculate_tax_t *order_calculate_tax_local_var = NULL;

    // order_calculate_tax->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(order_calculate_taxJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // order_calculate_tax->rate
    cJSON *rate = cJSON_GetObjectItemCaseSensitive(order_calculate_taxJSON, "rate");
    if (cJSON_IsNull(rate)) {
        rate = NULL;
    }
    if (rate) { 
    if(!cJSON_IsNumber(rate))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_tax->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_calculate_taxJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_tax->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_taxJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_calculate_tax->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_taxJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_calculate_tax_local_var = order_calculate_tax_create_internal (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        rate ? rate->valuedouble : 0,
        value ? value->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_calculate_tax_local_var;
end:
    return NULL;

}
