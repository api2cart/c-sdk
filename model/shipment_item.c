#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_item.h"



static shipment_item_t *shipment_item_create_internal(
    char *order_product_id,
    char *product_id,
    char *variant_id,
    char *model,
    char *name,
    double price,
    double quantity,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    shipment_item_t *shipment_item_local_var = malloc(sizeof(shipment_item_t));
    if (!shipment_item_local_var) {
        return NULL;
    }
    shipment_item_local_var->order_product_id = order_product_id;
    shipment_item_local_var->product_id = product_id;
    shipment_item_local_var->variant_id = variant_id;
    shipment_item_local_var->model = model;
    shipment_item_local_var->name = name;
    shipment_item_local_var->price = price;
    shipment_item_local_var->quantity = quantity;
    shipment_item_local_var->additional_fields = additional_fields;
    shipment_item_local_var->custom_fields = custom_fields;

    shipment_item_local_var->_library_owned = 1;
    return shipment_item_local_var;
}

__attribute__((deprecated)) shipment_item_t *shipment_item_create(
    char *order_product_id,
    char *product_id,
    char *variant_id,
    char *model,
    char *name,
    double price,
    double quantity,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return shipment_item_create_internal (
        order_product_id,
        product_id,
        variant_id,
        model,
        name,
        price,
        quantity,
        additional_fields,
        custom_fields
        );
}

void shipment_item_free(shipment_item_t *shipment_item) {
    if(NULL == shipment_item){
        return ;
    }
    if(shipment_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "shipment_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_item->order_product_id) {
        free(shipment_item->order_product_id);
        shipment_item->order_product_id = NULL;
    }
    if (shipment_item->product_id) {
        free(shipment_item->product_id);
        shipment_item->product_id = NULL;
    }
    if (shipment_item->variant_id) {
        free(shipment_item->variant_id);
        shipment_item->variant_id = NULL;
    }
    if (shipment_item->model) {
        free(shipment_item->model);
        shipment_item->model = NULL;
    }
    if (shipment_item->name) {
        free(shipment_item->name);
        shipment_item->name = NULL;
    }
    if (shipment_item->additional_fields) {
        object_free(shipment_item->additional_fields);
        shipment_item->additional_fields = NULL;
    }
    if (shipment_item->custom_fields) {
        object_free(shipment_item->custom_fields);
        shipment_item->custom_fields = NULL;
    }
    free(shipment_item);
}

cJSON *shipment_item_convertToJSON(shipment_item_t *shipment_item) {
    cJSON *item = cJSON_CreateObject();

    // shipment_item->order_product_id
    if(shipment_item->order_product_id) {
    if(cJSON_AddStringToObject(item, "order_product_id", shipment_item->order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_item->product_id
    if(shipment_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", shipment_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_item->variant_id
    if(shipment_item->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", shipment_item->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_item->model
    if(shipment_item->model) {
    if(cJSON_AddStringToObject(item, "model", shipment_item->model) == NULL) {
    goto fail; //String
    }
    }


    // shipment_item->name
    if(shipment_item->name) {
    if(cJSON_AddStringToObject(item, "name", shipment_item->name) == NULL) {
    goto fail; //String
    }
    }


    // shipment_item->price
    if(shipment_item->price) {
    if(cJSON_AddNumberToObject(item, "price", shipment_item->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipment_item->quantity
    if(shipment_item->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", shipment_item->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // shipment_item->additional_fields
    if(shipment_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(shipment_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment_item->custom_fields
    if(shipment_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(shipment_item->custom_fields);
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

shipment_item_t *shipment_item_parseFromJSON(cJSON *shipment_itemJSON){

    shipment_item_t *shipment_item_local_var = NULL;

    // shipment_item->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (order_product_id) { 
    if(!cJSON_IsString(order_product_id) && !cJSON_IsNull(order_product_id))
    {
    goto end; //String
    }
    }

    // shipment_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // shipment_item->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // shipment_item->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // shipment_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipment_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // shipment_item->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // shipment_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // shipment_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(shipment_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    shipment_item_local_var = shipment_item_create_internal (
        order_product_id && !cJSON_IsNull(order_product_id) ? strdup(order_product_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        price ? price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return shipment_item_local_var;
end:
    return NULL;

}
