#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount.h"



static discount_t *discount_create_internal(
    char *id,
    char *name,
    char *modifier_type,
    double value,
    char *from_time,
    char *to_time,
    char *customer_group_ids,
    int sort_order,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    discount_t *discount_local_var = malloc(sizeof(discount_t));
    if (!discount_local_var) {
        return NULL;
    }
    discount_local_var->id = id;
    discount_local_var->name = name;
    discount_local_var->modifier_type = modifier_type;
    discount_local_var->value = value;
    discount_local_var->from_time = from_time;
    discount_local_var->to_time = to_time;
    discount_local_var->customer_group_ids = customer_group_ids;
    discount_local_var->sort_order = sort_order;
    discount_local_var->additional_fields = additional_fields;
    discount_local_var->custom_fields = custom_fields;

    discount_local_var->_library_owned = 1;
    return discount_local_var;
}

__attribute__((deprecated)) discount_t *discount_create(
    char *id,
    char *name,
    char *modifier_type,
    double value,
    char *from_time,
    char *to_time,
    char *customer_group_ids,
    int sort_order,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return discount_create_internal (
        id,
        name,
        modifier_type,
        value,
        from_time,
        to_time,
        customer_group_ids,
        sort_order,
        additional_fields,
        custom_fields
        );
}

void discount_free(discount_t *discount) {
    if(NULL == discount){
        return ;
    }
    if(discount->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discount_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discount->id) {
        free(discount->id);
        discount->id = NULL;
    }
    if (discount->name) {
        free(discount->name);
        discount->name = NULL;
    }
    if (discount->modifier_type) {
        free(discount->modifier_type);
        discount->modifier_type = NULL;
    }
    if (discount->from_time) {
        free(discount->from_time);
        discount->from_time = NULL;
    }
    if (discount->to_time) {
        free(discount->to_time);
        discount->to_time = NULL;
    }
    if (discount->customer_group_ids) {
        free(discount->customer_group_ids);
        discount->customer_group_ids = NULL;
    }
    if (discount->additional_fields) {
        object_free(discount->additional_fields);
        discount->additional_fields = NULL;
    }
    if (discount->custom_fields) {
        object_free(discount->custom_fields);
        discount->custom_fields = NULL;
    }
    free(discount);
}

cJSON *discount_convertToJSON(discount_t *discount) {
    cJSON *item = cJSON_CreateObject();

    // discount->id
    if(discount->id) {
    if(cJSON_AddStringToObject(item, "id", discount->id) == NULL) {
    goto fail; //String
    }
    }


    // discount->name
    if(discount->name) {
    if(cJSON_AddStringToObject(item, "name", discount->name) == NULL) {
    goto fail; //String
    }
    }


    // discount->modifier_type
    if(discount->modifier_type) {
    if(cJSON_AddStringToObject(item, "modifier_type", discount->modifier_type) == NULL) {
    goto fail; //String
    }
    }


    // discount->value
    if(discount->value) {
    if(cJSON_AddNumberToObject(item, "value", discount->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount->from_time
    if(discount->from_time) {
    if(cJSON_AddStringToObject(item, "from_time", discount->from_time) == NULL) {
    goto fail; //String
    }
    }


    // discount->to_time
    if(discount->to_time) {
    if(cJSON_AddStringToObject(item, "to_time", discount->to_time) == NULL) {
    goto fail; //String
    }
    }


    // discount->customer_group_ids
    if(discount->customer_group_ids) {
    if(cJSON_AddStringToObject(item, "customer_group_ids", discount->customer_group_ids) == NULL) {
    goto fail; //String
    }
    }


    // discount->sort_order
    if(discount->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", discount->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount->additional_fields
    if(discount->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(discount->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // discount->custom_fields
    if(discount->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(discount->custom_fields);
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

discount_t *discount_parseFromJSON(cJSON *discountJSON){

    discount_t *discount_local_var = NULL;

    // discount->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(discountJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // discount->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(discountJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // discount->modifier_type
    cJSON *modifier_type = cJSON_GetObjectItemCaseSensitive(discountJSON, "modifier_type");
    if (cJSON_IsNull(modifier_type)) {
        modifier_type = NULL;
    }
    if (modifier_type) { 
    if(!cJSON_IsString(modifier_type) && !cJSON_IsNull(modifier_type))
    {
    goto end; //String
    }
    }

    // discount->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(discountJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // discount->from_time
    cJSON *from_time = cJSON_GetObjectItemCaseSensitive(discountJSON, "from_time");
    if (cJSON_IsNull(from_time)) {
        from_time = NULL;
    }
    if (from_time) { 
    if(!cJSON_IsString(from_time) && !cJSON_IsNull(from_time))
    {
    goto end; //String
    }
    }

    // discount->to_time
    cJSON *to_time = cJSON_GetObjectItemCaseSensitive(discountJSON, "to_time");
    if (cJSON_IsNull(to_time)) {
        to_time = NULL;
    }
    if (to_time) { 
    if(!cJSON_IsString(to_time) && !cJSON_IsNull(to_time))
    {
    goto end; //String
    }
    }

    // discount->customer_group_ids
    cJSON *customer_group_ids = cJSON_GetObjectItemCaseSensitive(discountJSON, "customer_group_ids");
    if (cJSON_IsNull(customer_group_ids)) {
        customer_group_ids = NULL;
    }
    if (customer_group_ids) { 
    if(!cJSON_IsString(customer_group_ids) && !cJSON_IsNull(customer_group_ids))
    {
    goto end; //String
    }
    }

    // discount->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(discountJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // discount->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(discountJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // discount->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(discountJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    discount_local_var = discount_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        modifier_type && !cJSON_IsNull(modifier_type) ? strdup(modifier_type->valuestring) : NULL,
        value ? value->valuedouble : 0,
        from_time && !cJSON_IsNull(from_time) ? strdup(from_time->valuestring) : NULL,
        to_time && !cJSON_IsNull(to_time) ? strdup(to_time->valuestring) : NULL,
        customer_group_ids && !cJSON_IsNull(customer_group_ids) ? strdup(customer_group_ids->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return discount_local_var;
end:
    return NULL;

}
