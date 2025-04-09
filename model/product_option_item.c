#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option_item.h"



static product_option_item_t *product_option_item_create_internal(
    char *id,
    char *product_option_item_id,
    char *name,
    int sort_order,
    char *price,
    char *weight,
    int quantity,
    char *type_price,
    char *sku,
    int is_default,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_option_item_t *product_option_item_local_var = malloc(sizeof(product_option_item_t));
    if (!product_option_item_local_var) {
        return NULL;
    }
    product_option_item_local_var->id = id;
    product_option_item_local_var->product_option_item_id = product_option_item_id;
    product_option_item_local_var->name = name;
    product_option_item_local_var->sort_order = sort_order;
    product_option_item_local_var->price = price;
    product_option_item_local_var->weight = weight;
    product_option_item_local_var->quantity = quantity;
    product_option_item_local_var->type_price = type_price;
    product_option_item_local_var->sku = sku;
    product_option_item_local_var->is_default = is_default;
    product_option_item_local_var->additional_fields = additional_fields;
    product_option_item_local_var->custom_fields = custom_fields;

    product_option_item_local_var->_library_owned = 1;
    return product_option_item_local_var;
}

__attribute__((deprecated)) product_option_item_t *product_option_item_create(
    char *id,
    char *product_option_item_id,
    char *name,
    int sort_order,
    char *price,
    char *weight,
    int quantity,
    char *type_price,
    char *sku,
    int is_default,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_option_item_create_internal (
        id,
        product_option_item_id,
        name,
        sort_order,
        price,
        weight,
        quantity,
        type_price,
        sku,
        is_default,
        additional_fields,
        custom_fields
        );
}

void product_option_item_free(product_option_item_t *product_option_item) {
    if(NULL == product_option_item){
        return ;
    }
    if(product_option_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option_item->id) {
        free(product_option_item->id);
        product_option_item->id = NULL;
    }
    if (product_option_item->product_option_item_id) {
        free(product_option_item->product_option_item_id);
        product_option_item->product_option_item_id = NULL;
    }
    if (product_option_item->name) {
        free(product_option_item->name);
        product_option_item->name = NULL;
    }
    if (product_option_item->price) {
        free(product_option_item->price);
        product_option_item->price = NULL;
    }
    if (product_option_item->weight) {
        free(product_option_item->weight);
        product_option_item->weight = NULL;
    }
    if (product_option_item->type_price) {
        free(product_option_item->type_price);
        product_option_item->type_price = NULL;
    }
    if (product_option_item->sku) {
        free(product_option_item->sku);
        product_option_item->sku = NULL;
    }
    if (product_option_item->additional_fields) {
        object_free(product_option_item->additional_fields);
        product_option_item->additional_fields = NULL;
    }
    if (product_option_item->custom_fields) {
        object_free(product_option_item->custom_fields);
        product_option_item->custom_fields = NULL;
    }
    free(product_option_item);
}

cJSON *product_option_item_convertToJSON(product_option_item_t *product_option_item) {
    cJSON *item = cJSON_CreateObject();

    // product_option_item->id
    if(product_option_item->id) {
    if(cJSON_AddStringToObject(item, "id", product_option_item->id) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->product_option_item_id
    if(product_option_item->product_option_item_id) {
    if(cJSON_AddStringToObject(item, "product_option_item_id", product_option_item->product_option_item_id) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->name
    if(product_option_item->name) {
    if(cJSON_AddStringToObject(item, "name", product_option_item->name) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->sort_order
    if(product_option_item->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", product_option_item->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_option_item->price
    if(product_option_item->price) {
    if(cJSON_AddStringToObject(item, "price", product_option_item->price) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->weight
    if(product_option_item->weight) {
    if(cJSON_AddStringToObject(item, "weight", product_option_item->weight) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->quantity
    if(product_option_item->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_option_item->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_option_item->type_price
    if(product_option_item->type_price) {
    if(cJSON_AddStringToObject(item, "type_price", product_option_item->type_price) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->sku
    if(product_option_item->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_option_item->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_option_item->is_default
    if(product_option_item->is_default) {
    if(cJSON_AddBoolToObject(item, "is_default", product_option_item->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option_item->additional_fields
    if(product_option_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_option_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_option_item->custom_fields
    if(product_option_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_option_item->custom_fields);
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

product_option_item_t *product_option_item_parseFromJSON(cJSON *product_option_itemJSON){

    product_option_item_t *product_option_item_local_var = NULL;

    // product_option_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_option_item->product_option_item_id
    cJSON *product_option_item_id = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "product_option_item_id");
    if (cJSON_IsNull(product_option_item_id)) {
        product_option_item_id = NULL;
    }
    if (product_option_item_id) { 
    if(!cJSON_IsString(product_option_item_id) && !cJSON_IsNull(product_option_item_id))
    {
    goto end; //String
    }
    }

    // product_option_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_option_item->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // product_option_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsString(price) && !cJSON_IsNull(price))
    {
    goto end; //String
    }
    }

    // product_option_item->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsString(weight) && !cJSON_IsNull(weight))
    {
    goto end; //String
    }
    }

    // product_option_item->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_option_item->type_price
    cJSON *type_price = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "type_price");
    if (cJSON_IsNull(type_price)) {
        type_price = NULL;
    }
    if (type_price) { 
    if(!cJSON_IsString(type_price) && !cJSON_IsNull(type_price))
    {
    goto end; //String
    }
    }

    // product_option_item->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_option_item->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "is_default");
    if (cJSON_IsNull(is_default)) {
        is_default = NULL;
    }
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // product_option_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_option_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_option_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_option_item_local_var = product_option_item_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_option_item_id && !cJSON_IsNull(product_option_item_id) ? strdup(product_option_item_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        price && !cJSON_IsNull(price) ? strdup(price->valuestring) : NULL,
        weight && !cJSON_IsNull(weight) ? strdup(weight->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        type_price && !cJSON_IsNull(type_price) ? strdup(type_price->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        is_default ? is_default->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_option_item_local_var;
end:
    return NULL;

}
