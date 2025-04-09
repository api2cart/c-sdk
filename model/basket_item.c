#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_item.h"



static basket_item_t *basket_item_create_internal(
    char *id,
    char *parent_id,
    char *product_id,
    char *variant_id,
    char *sku,
    char *name,
    double price,
    double tax,
    double quantity,
    char *weight_unit,
    double weight,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    basket_item_t *basket_item_local_var = malloc(sizeof(basket_item_t));
    if (!basket_item_local_var) {
        return NULL;
    }
    basket_item_local_var->id = id;
    basket_item_local_var->parent_id = parent_id;
    basket_item_local_var->product_id = product_id;
    basket_item_local_var->variant_id = variant_id;
    basket_item_local_var->sku = sku;
    basket_item_local_var->name = name;
    basket_item_local_var->price = price;
    basket_item_local_var->tax = tax;
    basket_item_local_var->quantity = quantity;
    basket_item_local_var->weight_unit = weight_unit;
    basket_item_local_var->weight = weight;
    basket_item_local_var->options = options;
    basket_item_local_var->additional_fields = additional_fields;
    basket_item_local_var->custom_fields = custom_fields;

    basket_item_local_var->_library_owned = 1;
    return basket_item_local_var;
}

__attribute__((deprecated)) basket_item_t *basket_item_create(
    char *id,
    char *parent_id,
    char *product_id,
    char *variant_id,
    char *sku,
    char *name,
    double price,
    double tax,
    double quantity,
    char *weight_unit,
    double weight,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return basket_item_create_internal (
        id,
        parent_id,
        product_id,
        variant_id,
        sku,
        name,
        price,
        tax,
        quantity,
        weight_unit,
        weight,
        options,
        additional_fields,
        custom_fields
        );
}

void basket_item_free(basket_item_t *basket_item) {
    if(NULL == basket_item){
        return ;
    }
    if(basket_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (basket_item->id) {
        free(basket_item->id);
        basket_item->id = NULL;
    }
    if (basket_item->parent_id) {
        free(basket_item->parent_id);
        basket_item->parent_id = NULL;
    }
    if (basket_item->product_id) {
        free(basket_item->product_id);
        basket_item->product_id = NULL;
    }
    if (basket_item->variant_id) {
        free(basket_item->variant_id);
        basket_item->variant_id = NULL;
    }
    if (basket_item->sku) {
        free(basket_item->sku);
        basket_item->sku = NULL;
    }
    if (basket_item->name) {
        free(basket_item->name);
        basket_item->name = NULL;
    }
    if (basket_item->weight_unit) {
        free(basket_item->weight_unit);
        basket_item->weight_unit = NULL;
    }
    if (basket_item->options) {
        list_ForEach(listEntry, basket_item->options) {
            basket_item_option_free(listEntry->data);
        }
        list_freeList(basket_item->options);
        basket_item->options = NULL;
    }
    if (basket_item->additional_fields) {
        object_free(basket_item->additional_fields);
        basket_item->additional_fields = NULL;
    }
    if (basket_item->custom_fields) {
        object_free(basket_item->custom_fields);
        basket_item->custom_fields = NULL;
    }
    free(basket_item);
}

cJSON *basket_item_convertToJSON(basket_item_t *basket_item) {
    cJSON *item = cJSON_CreateObject();

    // basket_item->id
    if(basket_item->id) {
    if(cJSON_AddStringToObject(item, "id", basket_item->id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->parent_id
    if(basket_item->parent_id) {
    if(cJSON_AddStringToObject(item, "parent_id", basket_item->parent_id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->product_id
    if(basket_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", basket_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->variant_id
    if(basket_item->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", basket_item->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->sku
    if(basket_item->sku) {
    if(cJSON_AddStringToObject(item, "sku", basket_item->sku) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->name
    if(basket_item->name) {
    if(cJSON_AddStringToObject(item, "name", basket_item->name) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->price
    if(basket_item->price) {
    if(cJSON_AddNumberToObject(item, "price", basket_item->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_item->tax
    if(basket_item->tax) {
    if(cJSON_AddNumberToObject(item, "tax", basket_item->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_item->quantity
    if(basket_item->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", basket_item->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_item->weight_unit
    if(basket_item->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", basket_item->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // basket_item->weight
    if(basket_item->weight) {
    if(cJSON_AddNumberToObject(item, "weight", basket_item->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // basket_item->options
    if(basket_item->options) {
    cJSON *options = cJSON_AddArrayToObject(item, "options");
    if(options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionsListEntry;
    if (basket_item->options) {
    list_ForEach(optionsListEntry, basket_item->options) {
    cJSON *itemLocal = basket_item_option_convertToJSON(optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(options, itemLocal);
    }
    }
    }


    // basket_item->additional_fields
    if(basket_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(basket_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // basket_item->custom_fields
    if(basket_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(basket_item->custom_fields);
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

basket_item_t *basket_item_parseFromJSON(cJSON *basket_itemJSON){

    basket_item_t *basket_item_local_var = NULL;

    // define the local list for basket_item->options
    list_t *optionsList = NULL;

    // basket_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // basket_item->parent_id
    cJSON *parent_id = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "parent_id");
    if (cJSON_IsNull(parent_id)) {
        parent_id = NULL;
    }
    if (parent_id) { 
    if(!cJSON_IsString(parent_id) && !cJSON_IsNull(parent_id))
    {
    goto end; //String
    }
    }

    // basket_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // basket_item->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // basket_item->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // basket_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // basket_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // basket_item->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // basket_item->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // basket_item->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // basket_item->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // basket_item->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "options");
    if (cJSON_IsNull(options)) {
        options = NULL;
    }
    if (options) { 
    cJSON *options_local_nonprimitive = NULL;
    if(!cJSON_IsArray(options)){
        goto end; //nonprimitive container
    }

    optionsList = list_createList();

    cJSON_ArrayForEach(options_local_nonprimitive,options )
    {
        if(!cJSON_IsObject(options_local_nonprimitive)){
            goto end;
        }
        basket_item_option_t *optionsItem = basket_item_option_parseFromJSON(options_local_nonprimitive);

        list_addElement(optionsList, optionsItem);
    }
    }

    // basket_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // basket_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(basket_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    basket_item_local_var = basket_item_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        parent_id && !cJSON_IsNull(parent_id) ? strdup(parent_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        price ? price->valuedouble : 0,
        tax ? tax->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        options ? optionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return basket_item_local_var;
end:
    if (optionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, optionsList) {
            basket_item_option_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(optionsList);
        optionsList = NULL;
    }
    return NULL;

}
