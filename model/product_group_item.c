#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_group_item.h"



static product_group_item_t *product_group_item_create_internal(
    char *child_item_id,
    char *product_id,
    char *default_qty_in_pack,
    int is_qty_in_pack_fixed,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_group_item_t *product_group_item_local_var = malloc(sizeof(product_group_item_t));
    if (!product_group_item_local_var) {
        return NULL;
    }
    product_group_item_local_var->child_item_id = child_item_id;
    product_group_item_local_var->product_id = product_id;
    product_group_item_local_var->default_qty_in_pack = default_qty_in_pack;
    product_group_item_local_var->is_qty_in_pack_fixed = is_qty_in_pack_fixed;
    product_group_item_local_var->price = price;
    product_group_item_local_var->additional_fields = additional_fields;
    product_group_item_local_var->custom_fields = custom_fields;

    product_group_item_local_var->_library_owned = 1;
    return product_group_item_local_var;
}

__attribute__((deprecated)) product_group_item_t *product_group_item_create(
    char *child_item_id,
    char *product_id,
    char *default_qty_in_pack,
    int is_qty_in_pack_fixed,
    double price,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_group_item_create_internal (
        child_item_id,
        product_id,
        default_qty_in_pack,
        is_qty_in_pack_fixed,
        price,
        additional_fields,
        custom_fields
        );
}

void product_group_item_free(product_group_item_t *product_group_item) {
    if(NULL == product_group_item){
        return ;
    }
    if(product_group_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_group_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_group_item->child_item_id) {
        free(product_group_item->child_item_id);
        product_group_item->child_item_id = NULL;
    }
    if (product_group_item->product_id) {
        free(product_group_item->product_id);
        product_group_item->product_id = NULL;
    }
    if (product_group_item->default_qty_in_pack) {
        free(product_group_item->default_qty_in_pack);
        product_group_item->default_qty_in_pack = NULL;
    }
    if (product_group_item->additional_fields) {
        object_free(product_group_item->additional_fields);
        product_group_item->additional_fields = NULL;
    }
    if (product_group_item->custom_fields) {
        object_free(product_group_item->custom_fields);
        product_group_item->custom_fields = NULL;
    }
    free(product_group_item);
}

cJSON *product_group_item_convertToJSON(product_group_item_t *product_group_item) {
    cJSON *item = cJSON_CreateObject();

    // product_group_item->child_item_id
    if(product_group_item->child_item_id) {
    if(cJSON_AddStringToObject(item, "child_item_id", product_group_item->child_item_id) == NULL) {
    goto fail; //String
    }
    }


    // product_group_item->product_id
    if(product_group_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_group_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_group_item->default_qty_in_pack
    if(product_group_item->default_qty_in_pack) {
    if(cJSON_AddStringToObject(item, "default_qty_in_pack", product_group_item->default_qty_in_pack) == NULL) {
    goto fail; //String
    }
    }


    // product_group_item->is_qty_in_pack_fixed
    if(product_group_item->is_qty_in_pack_fixed) {
    if(cJSON_AddBoolToObject(item, "is_qty_in_pack_fixed", product_group_item->is_qty_in_pack_fixed) == NULL) {
    goto fail; //Bool
    }
    }


    // product_group_item->price
    if(product_group_item->price) {
    if(cJSON_AddNumberToObject(item, "price", product_group_item->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_group_item->additional_fields
    if(product_group_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_group_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_group_item->custom_fields
    if(product_group_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_group_item->custom_fields);
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

product_group_item_t *product_group_item_parseFromJSON(cJSON *product_group_itemJSON){

    product_group_item_t *product_group_item_local_var = NULL;

    // product_group_item->child_item_id
    cJSON *child_item_id = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "child_item_id");
    if (cJSON_IsNull(child_item_id)) {
        child_item_id = NULL;
    }
    if (child_item_id) { 
    if(!cJSON_IsString(child_item_id) && !cJSON_IsNull(child_item_id))
    {
    goto end; //String
    }
    }

    // product_group_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_group_item->default_qty_in_pack
    cJSON *default_qty_in_pack = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "default_qty_in_pack");
    if (cJSON_IsNull(default_qty_in_pack)) {
        default_qty_in_pack = NULL;
    }
    if (default_qty_in_pack) { 
    if(!cJSON_IsString(default_qty_in_pack) && !cJSON_IsNull(default_qty_in_pack))
    {
    goto end; //String
    }
    }

    // product_group_item->is_qty_in_pack_fixed
    cJSON *is_qty_in_pack_fixed = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "is_qty_in_pack_fixed");
    if (cJSON_IsNull(is_qty_in_pack_fixed)) {
        is_qty_in_pack_fixed = NULL;
    }
    if (is_qty_in_pack_fixed) { 
    if(!cJSON_IsBool(is_qty_in_pack_fixed))
    {
    goto end; //Bool
    }
    }

    // product_group_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_group_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_group_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_group_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_group_item_local_var = product_group_item_create_internal (
        child_item_id && !cJSON_IsNull(child_item_id) ? strdup(child_item_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        default_qty_in_pack && !cJSON_IsNull(default_qty_in_pack) ? strdup(default_qty_in_pack->valuestring) : NULL,
        is_qty_in_pack_fixed ? is_qty_in_pack_fixed->valueint : 0,
        price ? price->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_group_item_local_var;
end:
    return NULL;

}
