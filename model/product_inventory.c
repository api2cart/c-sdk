#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_inventory.h"



static product_inventory_t *product_inventory_create_internal(
    char *warehouse_id,
    double quantity,
    int in_stock,
    int priority,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_inventory_t *product_inventory_local_var = malloc(sizeof(product_inventory_t));
    if (!product_inventory_local_var) {
        return NULL;
    }
    product_inventory_local_var->warehouse_id = warehouse_id;
    product_inventory_local_var->quantity = quantity;
    product_inventory_local_var->in_stock = in_stock;
    product_inventory_local_var->priority = priority;
    product_inventory_local_var->additional_fields = additional_fields;
    product_inventory_local_var->custom_fields = custom_fields;

    product_inventory_local_var->_library_owned = 1;
    return product_inventory_local_var;
}

__attribute__((deprecated)) product_inventory_t *product_inventory_create(
    char *warehouse_id,
    double quantity,
    int in_stock,
    int priority,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_inventory_create_internal (
        warehouse_id,
        quantity,
        in_stock,
        priority,
        additional_fields,
        custom_fields
        );
}

void product_inventory_free(product_inventory_t *product_inventory) {
    if(NULL == product_inventory){
        return ;
    }
    if(product_inventory->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_inventory_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_inventory->warehouse_id) {
        free(product_inventory->warehouse_id);
        product_inventory->warehouse_id = NULL;
    }
    if (product_inventory->additional_fields) {
        object_free(product_inventory->additional_fields);
        product_inventory->additional_fields = NULL;
    }
    if (product_inventory->custom_fields) {
        object_free(product_inventory->custom_fields);
        product_inventory->custom_fields = NULL;
    }
    free(product_inventory);
}

cJSON *product_inventory_convertToJSON(product_inventory_t *product_inventory) {
    cJSON *item = cJSON_CreateObject();

    // product_inventory->warehouse_id
    if(product_inventory->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_inventory->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_inventory->quantity
    if(product_inventory->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_inventory->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_inventory->in_stock
    if(product_inventory->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_inventory->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_inventory->priority
    if(product_inventory->priority) {
    if(cJSON_AddNumberToObject(item, "priority", product_inventory->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_inventory->additional_fields
    if(product_inventory->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_inventory->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_inventory->custom_fields
    if(product_inventory->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_inventory->custom_fields);
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

product_inventory_t *product_inventory_parseFromJSON(cJSON *product_inventoryJSON){

    product_inventory_t *product_inventory_local_var = NULL;

    // product_inventory->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_inventory->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_inventory->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_inventory->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "priority");
    if (cJSON_IsNull(priority)) {
        priority = NULL;
    }
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // product_inventory->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_inventory->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_inventoryJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_inventory_local_var = product_inventory_create_internal (
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        in_stock ? in_stock->valueint : 0,
        priority ? priority->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_inventory_local_var;
end:
    return NULL;

}
