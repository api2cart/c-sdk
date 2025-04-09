#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_tier_price.h"



static product_tier_price_t *product_tier_price_create_internal(
    double qty,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_tier_price_t *product_tier_price_local_var = malloc(sizeof(product_tier_price_t));
    if (!product_tier_price_local_var) {
        return NULL;
    }
    product_tier_price_local_var->qty = qty;
    product_tier_price_local_var->price = price;
    product_tier_price_local_var->additional_fields = additional_fields;
    product_tier_price_local_var->custom_fields = custom_fields;

    product_tier_price_local_var->_library_owned = 1;
    return product_tier_price_local_var;
}

__attribute__((deprecated)) product_tier_price_t *product_tier_price_create(
    double qty,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_tier_price_create_internal (
        qty,
        price,
        additional_fields,
        custom_fields
        );
}

void product_tier_price_free(product_tier_price_t *product_tier_price) {
    if(NULL == product_tier_price){
        return ;
    }
    if(product_tier_price->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_tier_price_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_tier_price->additional_fields) {
        object_free(product_tier_price->additional_fields);
        product_tier_price->additional_fields = NULL;
    }
    if (product_tier_price->custom_fields) {
        object_free(product_tier_price->custom_fields);
        product_tier_price->custom_fields = NULL;
    }
    free(product_tier_price);
}

cJSON *product_tier_price_convertToJSON(product_tier_price_t *product_tier_price) {
    cJSON *item = cJSON_CreateObject();

    // product_tier_price->qty
    if(product_tier_price->qty) {
    if(cJSON_AddNumberToObject(item, "qty", product_tier_price->qty) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_tier_price->price
    if(product_tier_price->price) {
    if(cJSON_AddNumberToObject(item, "price", product_tier_price->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_tier_price->additional_fields
    if(product_tier_price->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_tier_price->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_tier_price->custom_fields
    if(product_tier_price->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_tier_price->custom_fields);
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

product_tier_price_t *product_tier_price_parseFromJSON(cJSON *product_tier_priceJSON){

    product_tier_price_t *product_tier_price_local_var = NULL;

    // product_tier_price->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(product_tier_priceJSON, "qty");
    if (cJSON_IsNull(qty)) {
        qty = NULL;
    }
    if (qty) { 
    if(!cJSON_IsNumber(qty))
    {
    goto end; //Numeric
    }
    }

    // product_tier_price->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_tier_priceJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_tier_price->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_tier_priceJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_tier_price->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_tier_priceJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_tier_price_local_var = product_tier_price_create_internal (
        qty ? qty->valuedouble : 0,
        price ? price->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_tier_price_local_var;
end:
    return NULL;

}
