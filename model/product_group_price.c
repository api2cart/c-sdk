#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_group_price.h"



static product_group_price_t *product_group_price_create_internal(
    char *id,
    char *group_id,
    double price,
    char *store_id,
    double quantity,
    char *start_time,
    char *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_group_price_t *product_group_price_local_var = malloc(sizeof(product_group_price_t));
    if (!product_group_price_local_var) {
        return NULL;
    }
    product_group_price_local_var->id = id;
    product_group_price_local_var->group_id = group_id;
    product_group_price_local_var->price = price;
    product_group_price_local_var->store_id = store_id;
    product_group_price_local_var->quantity = quantity;
    product_group_price_local_var->start_time = start_time;
    product_group_price_local_var->expire_time = expire_time;
    product_group_price_local_var->additional_fields = additional_fields;
    product_group_price_local_var->custom_fields = custom_fields;

    product_group_price_local_var->_library_owned = 1;
    return product_group_price_local_var;
}

__attribute__((deprecated)) product_group_price_t *product_group_price_create(
    char *id,
    char *group_id,
    double price,
    char *store_id,
    double quantity,
    char *start_time,
    char *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_group_price_create_internal (
        id,
        group_id,
        price,
        store_id,
        quantity,
        start_time,
        expire_time,
        additional_fields,
        custom_fields
        );
}

void product_group_price_free(product_group_price_t *product_group_price) {
    if(NULL == product_group_price){
        return ;
    }
    if(product_group_price->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_group_price_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_group_price->id) {
        free(product_group_price->id);
        product_group_price->id = NULL;
    }
    if (product_group_price->group_id) {
        free(product_group_price->group_id);
        product_group_price->group_id = NULL;
    }
    if (product_group_price->store_id) {
        free(product_group_price->store_id);
        product_group_price->store_id = NULL;
    }
    if (product_group_price->start_time) {
        free(product_group_price->start_time);
        product_group_price->start_time = NULL;
    }
    if (product_group_price->expire_time) {
        free(product_group_price->expire_time);
        product_group_price->expire_time = NULL;
    }
    if (product_group_price->additional_fields) {
        object_free(product_group_price->additional_fields);
        product_group_price->additional_fields = NULL;
    }
    if (product_group_price->custom_fields) {
        object_free(product_group_price->custom_fields);
        product_group_price->custom_fields = NULL;
    }
    free(product_group_price);
}

cJSON *product_group_price_convertToJSON(product_group_price_t *product_group_price) {
    cJSON *item = cJSON_CreateObject();

    // product_group_price->id
    if(product_group_price->id) {
    if(cJSON_AddStringToObject(item, "id", product_group_price->id) == NULL) {
    goto fail; //String
    }
    }


    // product_group_price->group_id
    if(product_group_price->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", product_group_price->group_id) == NULL) {
    goto fail; //String
    }
    }


    // product_group_price->price
    if(product_group_price->price) {
    if(cJSON_AddNumberToObject(item, "price", product_group_price->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_group_price->store_id
    if(product_group_price->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_group_price->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_group_price->quantity
    if(product_group_price->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_group_price->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_group_price->start_time
    if(product_group_price->start_time) {
    if(cJSON_AddStringToObject(item, "start_time", product_group_price->start_time) == NULL) {
    goto fail; //String
    }
    }


    // product_group_price->expire_time
    if(product_group_price->expire_time) {
    if(cJSON_AddStringToObject(item, "expire_time", product_group_price->expire_time) == NULL) {
    goto fail; //String
    }
    }


    // product_group_price->additional_fields
    if(product_group_price->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_group_price->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_group_price->custom_fields
    if(product_group_price->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_group_price->custom_fields);
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

product_group_price_t *product_group_price_parseFromJSON(cJSON *product_group_priceJSON){

    product_group_price_t *product_group_price_local_var = NULL;

    // product_group_price->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_group_price->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }

    // product_group_price->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_group_price->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_group_price->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_group_price->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "start_time");
    if (cJSON_IsNull(start_time)) {
        start_time = NULL;
    }
    if (start_time) { 
    if(!cJSON_IsString(start_time) && !cJSON_IsNull(start_time))
    {
    goto end; //String
    }
    }

    // product_group_price->expire_time
    cJSON *expire_time = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "expire_time");
    if (cJSON_IsNull(expire_time)) {
        expire_time = NULL;
    }
    if (expire_time) { 
    if(!cJSON_IsString(expire_time) && !cJSON_IsNull(expire_time))
    {
    goto end; //String
    }
    }

    // product_group_price->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_group_price->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_group_priceJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_group_price_local_var = product_group_price_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        start_time && !cJSON_IsNull(start_time) ? strdup(start_time->valuestring) : NULL,
        expire_time && !cJSON_IsNull(expire_time) ? strdup(expire_time->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_group_price_local_var;
end:
    return NULL;

}
