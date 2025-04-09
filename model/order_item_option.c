#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_item_option.h"



static order_item_option_t *order_item_option_create_internal(
    char *option_id,
    char *name,
    char *value,
    double price,
    double weight,
    char *type,
    char *product_option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_item_option_t *order_item_option_local_var = malloc(sizeof(order_item_option_t));
    if (!order_item_option_local_var) {
        return NULL;
    }
    order_item_option_local_var->option_id = option_id;
    order_item_option_local_var->name = name;
    order_item_option_local_var->value = value;
    order_item_option_local_var->price = price;
    order_item_option_local_var->weight = weight;
    order_item_option_local_var->type = type;
    order_item_option_local_var->product_option_value_id = product_option_value_id;
    order_item_option_local_var->additional_fields = additional_fields;
    order_item_option_local_var->custom_fields = custom_fields;

    order_item_option_local_var->_library_owned = 1;
    return order_item_option_local_var;
}

__attribute__((deprecated)) order_item_option_t *order_item_option_create(
    char *option_id,
    char *name,
    char *value,
    double price,
    double weight,
    char *type,
    char *product_option_value_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_item_option_create_internal (
        option_id,
        name,
        value,
        price,
        weight,
        type,
        product_option_value_id,
        additional_fields,
        custom_fields
        );
}

void order_item_option_free(order_item_option_t *order_item_option) {
    if(NULL == order_item_option){
        return ;
    }
    if(order_item_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_item_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_item_option->option_id) {
        free(order_item_option->option_id);
        order_item_option->option_id = NULL;
    }
    if (order_item_option->name) {
        free(order_item_option->name);
        order_item_option->name = NULL;
    }
    if (order_item_option->value) {
        free(order_item_option->value);
        order_item_option->value = NULL;
    }
    if (order_item_option->type) {
        free(order_item_option->type);
        order_item_option->type = NULL;
    }
    if (order_item_option->product_option_value_id) {
        free(order_item_option->product_option_value_id);
        order_item_option->product_option_value_id = NULL;
    }
    if (order_item_option->additional_fields) {
        object_free(order_item_option->additional_fields);
        order_item_option->additional_fields = NULL;
    }
    if (order_item_option->custom_fields) {
        object_free(order_item_option->custom_fields);
        order_item_option->custom_fields = NULL;
    }
    free(order_item_option);
}

cJSON *order_item_option_convertToJSON(order_item_option_t *order_item_option) {
    cJSON *item = cJSON_CreateObject();

    // order_item_option->option_id
    if(order_item_option->option_id) {
    if(cJSON_AddStringToObject(item, "option_id", order_item_option->option_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item_option->name
    if(order_item_option->name) {
    if(cJSON_AddStringToObject(item, "name", order_item_option->name) == NULL) {
    goto fail; //String
    }
    }


    // order_item_option->value
    if(order_item_option->value) {
    if(cJSON_AddStringToObject(item, "value", order_item_option->value) == NULL) {
    goto fail; //String
    }
    }


    // order_item_option->price
    if(order_item_option->price) {
    if(cJSON_AddNumberToObject(item, "price", order_item_option->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item_option->weight
    if(order_item_option->weight) {
    if(cJSON_AddNumberToObject(item, "weight", order_item_option->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item_option->type
    if(order_item_option->type) {
    if(cJSON_AddStringToObject(item, "type", order_item_option->type) == NULL) {
    goto fail; //String
    }
    }


    // order_item_option->product_option_value_id
    if(order_item_option->product_option_value_id) {
    if(cJSON_AddStringToObject(item, "product_option_value_id", order_item_option->product_option_value_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item_option->additional_fields
    if(order_item_option->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_item_option->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_item_option->custom_fields
    if(order_item_option->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_item_option->custom_fields);
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

order_item_option_t *order_item_option_parseFromJSON(cJSON *order_item_optionJSON){

    order_item_option_t *order_item_option_local_var = NULL;

    // order_item_option->option_id
    cJSON *option_id = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "option_id");
    if (cJSON_IsNull(option_id)) {
        option_id = NULL;
    }
    if (option_id) { 
    if(!cJSON_IsString(option_id) && !cJSON_IsNull(option_id))
    {
    goto end; //String
    }
    }

    // order_item_option->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_item_option->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // order_item_option->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_item_option->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // order_item_option->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // order_item_option->product_option_value_id
    cJSON *product_option_value_id = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "product_option_value_id");
    if (cJSON_IsNull(product_option_value_id)) {
        product_option_value_id = NULL;
    }
    if (product_option_value_id) { 
    if(!cJSON_IsString(product_option_value_id) && !cJSON_IsNull(product_option_value_id))
    {
    goto end; //String
    }
    }

    // order_item_option->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_item_option->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_item_optionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_item_option_local_var = order_item_option_create_internal (
        option_id && !cJSON_IsNull(option_id) ? strdup(option_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        price ? price->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        product_option_value_id && !cJSON_IsNull(product_option_value_id) ? strdup(product_option_value_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_item_option_local_var;
end:
    return NULL;

}
