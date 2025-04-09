#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_advanced_price.h"



static product_advanced_price_t *product_advanced_price_create_internal(
    char *id,
    double value,
    int avail,
    char *group_id,
    double quantity_from,
    a2_c_date_time_t *start_time,
    a2_c_date_time_t *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_advanced_price_t *product_advanced_price_local_var = malloc(sizeof(product_advanced_price_t));
    if (!product_advanced_price_local_var) {
        return NULL;
    }
    product_advanced_price_local_var->id = id;
    product_advanced_price_local_var->value = value;
    product_advanced_price_local_var->avail = avail;
    product_advanced_price_local_var->group_id = group_id;
    product_advanced_price_local_var->quantity_from = quantity_from;
    product_advanced_price_local_var->start_time = start_time;
    product_advanced_price_local_var->expire_time = expire_time;
    product_advanced_price_local_var->additional_fields = additional_fields;
    product_advanced_price_local_var->custom_fields = custom_fields;

    product_advanced_price_local_var->_library_owned = 1;
    return product_advanced_price_local_var;
}

__attribute__((deprecated)) product_advanced_price_t *product_advanced_price_create(
    char *id,
    double value,
    int avail,
    char *group_id,
    double quantity_from,
    a2_c_date_time_t *start_time,
    a2_c_date_time_t *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_advanced_price_create_internal (
        id,
        value,
        avail,
        group_id,
        quantity_from,
        start_time,
        expire_time,
        additional_fields,
        custom_fields
        );
}

void product_advanced_price_free(product_advanced_price_t *product_advanced_price) {
    if(NULL == product_advanced_price){
        return ;
    }
    if(product_advanced_price->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_advanced_price_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_advanced_price->id) {
        free(product_advanced_price->id);
        product_advanced_price->id = NULL;
    }
    if (product_advanced_price->group_id) {
        free(product_advanced_price->group_id);
        product_advanced_price->group_id = NULL;
    }
    if (product_advanced_price->start_time) {
        a2_c_date_time_free(product_advanced_price->start_time);
        product_advanced_price->start_time = NULL;
    }
    if (product_advanced_price->expire_time) {
        a2_c_date_time_free(product_advanced_price->expire_time);
        product_advanced_price->expire_time = NULL;
    }
    if (product_advanced_price->additional_fields) {
        object_free(product_advanced_price->additional_fields);
        product_advanced_price->additional_fields = NULL;
    }
    if (product_advanced_price->custom_fields) {
        object_free(product_advanced_price->custom_fields);
        product_advanced_price->custom_fields = NULL;
    }
    free(product_advanced_price);
}

cJSON *product_advanced_price_convertToJSON(product_advanced_price_t *product_advanced_price) {
    cJSON *item = cJSON_CreateObject();

    // product_advanced_price->id
    if(product_advanced_price->id) {
    if(cJSON_AddStringToObject(item, "id", product_advanced_price->id) == NULL) {
    goto fail; //String
    }
    }


    // product_advanced_price->value
    if(product_advanced_price->value) {
    if(cJSON_AddNumberToObject(item, "value", product_advanced_price->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_advanced_price->avail
    if(product_advanced_price->avail) {
    if(cJSON_AddBoolToObject(item, "avail", product_advanced_price->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // product_advanced_price->group_id
    if(product_advanced_price->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", product_advanced_price->group_id) == NULL) {
    goto fail; //String
    }
    }


    // product_advanced_price->quantity_from
    if(product_advanced_price->quantity_from) {
    if(cJSON_AddNumberToObject(item, "quantity_from", product_advanced_price->quantity_from) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_advanced_price->start_time
    if(product_advanced_price->start_time) {
    cJSON *start_time_local_JSON = a2_c_date_time_convertToJSON(product_advanced_price->start_time);
    if(start_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "start_time", start_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_advanced_price->expire_time
    if(product_advanced_price->expire_time) {
    cJSON *expire_time_local_JSON = a2_c_date_time_convertToJSON(product_advanced_price->expire_time);
    if(expire_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expire_time", expire_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_advanced_price->additional_fields
    if(product_advanced_price->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_advanced_price->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_advanced_price->custom_fields
    if(product_advanced_price->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_advanced_price->custom_fields);
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

product_advanced_price_t *product_advanced_price_parseFromJSON(cJSON *product_advanced_priceJSON){

    product_advanced_price_t *product_advanced_price_local_var = NULL;

    // define the local variable for product_advanced_price->start_time
    a2_c_date_time_t *start_time_local_nonprim = NULL;

    // define the local variable for product_advanced_price->expire_time
    a2_c_date_time_t *expire_time_local_nonprim = NULL;

    // product_advanced_price->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_advanced_price->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // product_advanced_price->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // product_advanced_price->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }

    // product_advanced_price->quantity_from
    cJSON *quantity_from = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "quantity_from");
    if (cJSON_IsNull(quantity_from)) {
        quantity_from = NULL;
    }
    if (quantity_from) { 
    if(!cJSON_IsNumber(quantity_from))
    {
    goto end; //Numeric
    }
    }

    // product_advanced_price->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "start_time");
    if (cJSON_IsNull(start_time)) {
        start_time = NULL;
    }
    if (start_time) { 
    start_time_local_nonprim = a2_c_date_time_parseFromJSON(start_time); //nonprimitive
    }

    // product_advanced_price->expire_time
    cJSON *expire_time = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "expire_time");
    if (cJSON_IsNull(expire_time)) {
        expire_time = NULL;
    }
    if (expire_time) { 
    expire_time_local_nonprim = a2_c_date_time_parseFromJSON(expire_time); //nonprimitive
    }

    // product_advanced_price->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_advanced_price->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_advanced_priceJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_advanced_price_local_var = product_advanced_price_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        value ? value->valuedouble : 0,
        avail ? avail->valueint : 0,
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL,
        quantity_from ? quantity_from->valuedouble : 0,
        start_time ? start_time_local_nonprim : NULL,
        expire_time ? expire_time_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_advanced_price_local_var;
end:
    if (start_time_local_nonprim) {
        a2_c_date_time_free(start_time_local_nonprim);
        start_time_local_nonprim = NULL;
    }
    if (expire_time_local_nonprim) {
        a2_c_date_time_free(expire_time_local_nonprim);
        expire_time_local_nonprim = NULL;
    }
    return NULL;

}
