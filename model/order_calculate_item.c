#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_calculate_item.h"



static order_calculate_item_t *order_calculate_item_create_internal(
    char *product_id,
    char *sku,
    char *name,
    int quantity,
    double price,
    double price_inc_tax,
    double tax_rate,
    double unit_discount,
    double weight,
    char *weight_unit,
    char *barcode,
    char *variant_id,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_calculate_item_t *order_calculate_item_local_var = malloc(sizeof(order_calculate_item_t));
    if (!order_calculate_item_local_var) {
        return NULL;
    }
    order_calculate_item_local_var->product_id = product_id;
    order_calculate_item_local_var->sku = sku;
    order_calculate_item_local_var->name = name;
    order_calculate_item_local_var->quantity = quantity;
    order_calculate_item_local_var->price = price;
    order_calculate_item_local_var->price_inc_tax = price_inc_tax;
    order_calculate_item_local_var->tax_rate = tax_rate;
    order_calculate_item_local_var->unit_discount = unit_discount;
    order_calculate_item_local_var->weight = weight;
    order_calculate_item_local_var->weight_unit = weight_unit;
    order_calculate_item_local_var->barcode = barcode;
    order_calculate_item_local_var->variant_id = variant_id;
    order_calculate_item_local_var->options = options;
    order_calculate_item_local_var->additional_fields = additional_fields;
    order_calculate_item_local_var->custom_fields = custom_fields;

    order_calculate_item_local_var->_library_owned = 1;
    return order_calculate_item_local_var;
}

__attribute__((deprecated)) order_calculate_item_t *order_calculate_item_create(
    char *product_id,
    char *sku,
    char *name,
    int quantity,
    double price,
    double price_inc_tax,
    double tax_rate,
    double unit_discount,
    double weight,
    char *weight_unit,
    char *barcode,
    char *variant_id,
    list_t *options,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_calculate_item_create_internal (
        product_id,
        sku,
        name,
        quantity,
        price,
        price_inc_tax,
        tax_rate,
        unit_discount,
        weight,
        weight_unit,
        barcode,
        variant_id,
        options,
        additional_fields,
        custom_fields
        );
}

void order_calculate_item_free(order_calculate_item_t *order_calculate_item) {
    if(NULL == order_calculate_item){
        return ;
    }
    if(order_calculate_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_calculate_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_calculate_item->product_id) {
        free(order_calculate_item->product_id);
        order_calculate_item->product_id = NULL;
    }
    if (order_calculate_item->sku) {
        free(order_calculate_item->sku);
        order_calculate_item->sku = NULL;
    }
    if (order_calculate_item->name) {
        free(order_calculate_item->name);
        order_calculate_item->name = NULL;
    }
    if (order_calculate_item->weight_unit) {
        free(order_calculate_item->weight_unit);
        order_calculate_item->weight_unit = NULL;
    }
    if (order_calculate_item->barcode) {
        free(order_calculate_item->barcode);
        order_calculate_item->barcode = NULL;
    }
    if (order_calculate_item->variant_id) {
        free(order_calculate_item->variant_id);
        order_calculate_item->variant_id = NULL;
    }
    if (order_calculate_item->options) {
        list_ForEach(listEntry, order_calculate_item->options) {
            order_item_option_free(listEntry->data);
        }
        list_freeList(order_calculate_item->options);
        order_calculate_item->options = NULL;
    }
    if (order_calculate_item->additional_fields) {
        object_free(order_calculate_item->additional_fields);
        order_calculate_item->additional_fields = NULL;
    }
    if (order_calculate_item->custom_fields) {
        object_free(order_calculate_item->custom_fields);
        order_calculate_item->custom_fields = NULL;
    }
    free(order_calculate_item);
}

cJSON *order_calculate_item_convertToJSON(order_calculate_item_t *order_calculate_item) {
    cJSON *item = cJSON_CreateObject();

    // order_calculate_item->product_id
    if(order_calculate_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", order_calculate_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->sku
    if(order_calculate_item->sku) {
    if(cJSON_AddStringToObject(item, "sku", order_calculate_item->sku) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->name
    if(order_calculate_item->name) {
    if(cJSON_AddStringToObject(item, "name", order_calculate_item->name) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->quantity
    if(order_calculate_item->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", order_calculate_item->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->price
    if(order_calculate_item->price) {
    if(cJSON_AddNumberToObject(item, "price", order_calculate_item->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->price_inc_tax
    if(order_calculate_item->price_inc_tax) {
    if(cJSON_AddNumberToObject(item, "price_inc_tax", order_calculate_item->price_inc_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->tax_rate
    if(order_calculate_item->tax_rate) {
    if(cJSON_AddNumberToObject(item, "tax_rate", order_calculate_item->tax_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->unit_discount
    if(order_calculate_item->unit_discount) {
    if(cJSON_AddNumberToObject(item, "unit_discount", order_calculate_item->unit_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->weight
    if(order_calculate_item->weight) {
    if(cJSON_AddNumberToObject(item, "weight", order_calculate_item->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_calculate_item->weight_unit
    if(order_calculate_item->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", order_calculate_item->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->barcode
    if(order_calculate_item->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", order_calculate_item->barcode) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->variant_id
    if(order_calculate_item->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", order_calculate_item->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_calculate_item->options
    if(order_calculate_item->options) {
    cJSON *options = cJSON_AddArrayToObject(item, "options");
    if(options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionsListEntry;
    if (order_calculate_item->options) {
    list_ForEach(optionsListEntry, order_calculate_item->options) {
    cJSON *itemLocal = order_item_option_convertToJSON(optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(options, itemLocal);
    }
    }
    }


    // order_calculate_item->additional_fields
    if(order_calculate_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_calculate_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_calculate_item->custom_fields
    if(order_calculate_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_calculate_item->custom_fields);
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

order_calculate_item_t *order_calculate_item_parseFromJSON(cJSON *order_calculate_itemJSON){

    order_calculate_item_t *order_calculate_item_local_var = NULL;

    // define the local list for order_calculate_item->options
    list_t *optionsList = NULL;

    // order_calculate_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // order_calculate_item->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // order_calculate_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_calculate_item->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->price_inc_tax
    cJSON *price_inc_tax = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "price_inc_tax");
    if (cJSON_IsNull(price_inc_tax)) {
        price_inc_tax = NULL;
    }
    if (price_inc_tax) { 
    if(!cJSON_IsNumber(price_inc_tax))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->tax_rate
    cJSON *tax_rate = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "tax_rate");
    if (cJSON_IsNull(tax_rate)) {
        tax_rate = NULL;
    }
    if (tax_rate) { 
    if(!cJSON_IsNumber(tax_rate))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->unit_discount
    cJSON *unit_discount = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "unit_discount");
    if (cJSON_IsNull(unit_discount)) {
        unit_discount = NULL;
    }
    if (unit_discount) { 
    if(!cJSON_IsNumber(unit_discount))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // order_calculate_item->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // order_calculate_item->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // order_calculate_item->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // order_calculate_item->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "options");
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
        order_item_option_t *optionsItem = order_item_option_parseFromJSON(options_local_nonprimitive);

        list_addElement(optionsList, optionsItem);
    }
    }

    // order_calculate_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_calculate_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_calculate_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_calculate_item_local_var = order_calculate_item_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        price ? price->valuedouble : 0,
        price_inc_tax ? price_inc_tax->valuedouble : 0,
        tax_rate ? tax_rate->valuedouble : 0,
        unit_discount ? unit_discount->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        options ? optionsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_calculate_item_local_var;
end:
    if (optionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, optionsList) {
            order_item_option_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(optionsList);
        optionsList = NULL;
    }
    return NULL;

}
