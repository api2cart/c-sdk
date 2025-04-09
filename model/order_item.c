#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_item.h"



static order_item_t *order_item_create_internal(
    char *product_id,
    char *order_product_id,
    char *model,
    char *name,
    double price,
    double price_inc_tax,
    double quantity,
    double discount_amount,
    double total_price,
    double tax_percent,
    double tax_value,
    double tax_value_after_discount,
    list_t *options,
    char *variant_id,
    char *weight_unit,
    double weight,
    char *barcode,
    char *parent_order_product_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    order_item_t *order_item_local_var = malloc(sizeof(order_item_t));
    if (!order_item_local_var) {
        return NULL;
    }
    order_item_local_var->product_id = product_id;
    order_item_local_var->order_product_id = order_product_id;
    order_item_local_var->model = model;
    order_item_local_var->name = name;
    order_item_local_var->price = price;
    order_item_local_var->price_inc_tax = price_inc_tax;
    order_item_local_var->quantity = quantity;
    order_item_local_var->discount_amount = discount_amount;
    order_item_local_var->total_price = total_price;
    order_item_local_var->tax_percent = tax_percent;
    order_item_local_var->tax_value = tax_value;
    order_item_local_var->tax_value_after_discount = tax_value_after_discount;
    order_item_local_var->options = options;
    order_item_local_var->variant_id = variant_id;
    order_item_local_var->weight_unit = weight_unit;
    order_item_local_var->weight = weight;
    order_item_local_var->barcode = barcode;
    order_item_local_var->parent_order_product_id = parent_order_product_id;
    order_item_local_var->additional_fields = additional_fields;
    order_item_local_var->custom_fields = custom_fields;

    order_item_local_var->_library_owned = 1;
    return order_item_local_var;
}

__attribute__((deprecated)) order_item_t *order_item_create(
    char *product_id,
    char *order_product_id,
    char *model,
    char *name,
    double price,
    double price_inc_tax,
    double quantity,
    double discount_amount,
    double total_price,
    double tax_percent,
    double tax_value,
    double tax_value_after_discount,
    list_t *options,
    char *variant_id,
    char *weight_unit,
    double weight,
    char *barcode,
    char *parent_order_product_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return order_item_create_internal (
        product_id,
        order_product_id,
        model,
        name,
        price,
        price_inc_tax,
        quantity,
        discount_amount,
        total_price,
        tax_percent,
        tax_value,
        tax_value_after_discount,
        options,
        variant_id,
        weight_unit,
        weight,
        barcode,
        parent_order_product_id,
        additional_fields,
        custom_fields
        );
}

void order_item_free(order_item_t *order_item) {
    if(NULL == order_item){
        return ;
    }
    if(order_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_item->product_id) {
        free(order_item->product_id);
        order_item->product_id = NULL;
    }
    if (order_item->order_product_id) {
        free(order_item->order_product_id);
        order_item->order_product_id = NULL;
    }
    if (order_item->model) {
        free(order_item->model);
        order_item->model = NULL;
    }
    if (order_item->name) {
        free(order_item->name);
        order_item->name = NULL;
    }
    if (order_item->options) {
        list_ForEach(listEntry, order_item->options) {
            order_item_option_free(listEntry->data);
        }
        list_freeList(order_item->options);
        order_item->options = NULL;
    }
    if (order_item->variant_id) {
        free(order_item->variant_id);
        order_item->variant_id = NULL;
    }
    if (order_item->weight_unit) {
        free(order_item->weight_unit);
        order_item->weight_unit = NULL;
    }
    if (order_item->barcode) {
        free(order_item->barcode);
        order_item->barcode = NULL;
    }
    if (order_item->parent_order_product_id) {
        free(order_item->parent_order_product_id);
        order_item->parent_order_product_id = NULL;
    }
    if (order_item->additional_fields) {
        object_free(order_item->additional_fields);
        order_item->additional_fields = NULL;
    }
    if (order_item->custom_fields) {
        object_free(order_item->custom_fields);
        order_item->custom_fields = NULL;
    }
    free(order_item);
}

cJSON *order_item_convertToJSON(order_item_t *order_item) {
    cJSON *item = cJSON_CreateObject();

    // order_item->product_id
    if(order_item->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", order_item->product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item->order_product_id
    if(order_item->order_product_id) {
    if(cJSON_AddStringToObject(item, "order_product_id", order_item->order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item->model
    if(order_item->model) {
    if(cJSON_AddStringToObject(item, "model", order_item->model) == NULL) {
    goto fail; //String
    }
    }


    // order_item->name
    if(order_item->name) {
    if(cJSON_AddStringToObject(item, "name", order_item->name) == NULL) {
    goto fail; //String
    }
    }


    // order_item->price
    if(order_item->price) {
    if(cJSON_AddNumberToObject(item, "price", order_item->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->price_inc_tax
    if(order_item->price_inc_tax) {
    if(cJSON_AddNumberToObject(item, "price_inc_tax", order_item->price_inc_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->quantity
    if(order_item->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", order_item->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->discount_amount
    if(order_item->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discount_amount", order_item->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->total_price
    if(order_item->total_price) {
    if(cJSON_AddNumberToObject(item, "total_price", order_item->total_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->tax_percent
    if(order_item->tax_percent) {
    if(cJSON_AddNumberToObject(item, "tax_percent", order_item->tax_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->tax_value
    if(order_item->tax_value) {
    if(cJSON_AddNumberToObject(item, "tax_value", order_item->tax_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->tax_value_after_discount
    if(order_item->tax_value_after_discount) {
    if(cJSON_AddNumberToObject(item, "tax_value_after_discount", order_item->tax_value_after_discount) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->options
    if(order_item->options) {
    cJSON *options = cJSON_AddArrayToObject(item, "options");
    if(options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionsListEntry;
    if (order_item->options) {
    list_ForEach(optionsListEntry, order_item->options) {
    cJSON *itemLocal = order_item_option_convertToJSON(optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(options, itemLocal);
    }
    }
    }


    // order_item->variant_id
    if(order_item->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", order_item->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item->weight_unit
    if(order_item->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", order_item->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // order_item->weight
    if(order_item->weight) {
    if(cJSON_AddNumberToObject(item, "weight", order_item->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_item->barcode
    if(order_item->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", order_item->barcode) == NULL) {
    goto fail; //String
    }
    }


    // order_item->parent_order_product_id
    if(order_item->parent_order_product_id) {
    if(cJSON_AddStringToObject(item, "parent_order_product_id", order_item->parent_order_product_id) == NULL) {
    goto fail; //String
    }
    }


    // order_item->additional_fields
    if(order_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(order_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_item->custom_fields
    if(order_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(order_item->custom_fields);
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

order_item_t *order_item_parseFromJSON(cJSON *order_itemJSON){

    order_item_t *order_item_local_var = NULL;

    // define the local list for order_item->options
    list_t *optionsList = NULL;

    // order_item->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // order_item->order_product_id
    cJSON *order_product_id = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "order_product_id");
    if (cJSON_IsNull(order_product_id)) {
        order_product_id = NULL;
    }
    if (order_product_id) { 
    if(!cJSON_IsString(order_product_id) && !cJSON_IsNull(order_product_id))
    {
    goto end; //String
    }
    }

    // order_item->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // order_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // order_item->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_item->price_inc_tax
    cJSON *price_inc_tax = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "price_inc_tax");
    if (cJSON_IsNull(price_inc_tax)) {
        price_inc_tax = NULL;
    }
    if (price_inc_tax) { 
    if(!cJSON_IsNumber(price_inc_tax))
    {
    goto end; //Numeric
    }
    }

    // order_item->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // order_item->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "discount_amount");
    if (cJSON_IsNull(discount_amount)) {
        discount_amount = NULL;
    }
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // order_item->total_price
    cJSON *total_price = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "total_price");
    if (cJSON_IsNull(total_price)) {
        total_price = NULL;
    }
    if (total_price) { 
    if(!cJSON_IsNumber(total_price))
    {
    goto end; //Numeric
    }
    }

    // order_item->tax_percent
    cJSON *tax_percent = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "tax_percent");
    if (cJSON_IsNull(tax_percent)) {
        tax_percent = NULL;
    }
    if (tax_percent) { 
    if(!cJSON_IsNumber(tax_percent))
    {
    goto end; //Numeric
    }
    }

    // order_item->tax_value
    cJSON *tax_value = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "tax_value");
    if (cJSON_IsNull(tax_value)) {
        tax_value = NULL;
    }
    if (tax_value) { 
    if(!cJSON_IsNumber(tax_value))
    {
    goto end; //Numeric
    }
    }

    // order_item->tax_value_after_discount
    cJSON *tax_value_after_discount = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "tax_value_after_discount");
    if (cJSON_IsNull(tax_value_after_discount)) {
        tax_value_after_discount = NULL;
    }
    if (tax_value_after_discount) { 
    if(!cJSON_IsNumber(tax_value_after_discount))
    {
    goto end; //Numeric
    }
    }

    // order_item->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "options");
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

    // order_item->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // order_item->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // order_item->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // order_item->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // order_item->parent_order_product_id
    cJSON *parent_order_product_id = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "parent_order_product_id");
    if (cJSON_IsNull(parent_order_product_id)) {
        parent_order_product_id = NULL;
    }
    if (parent_order_product_id) { 
    if(!cJSON_IsString(parent_order_product_id) && !cJSON_IsNull(parent_order_product_id))
    {
    goto end; //String
    }
    }

    // order_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // order_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(order_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    order_item_local_var = order_item_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        order_product_id && !cJSON_IsNull(order_product_id) ? strdup(order_product_id->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        price ? price->valuedouble : 0,
        price_inc_tax ? price_inc_tax->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        discount_amount ? discount_amount->valuedouble : 0,
        total_price ? total_price->valuedouble : 0,
        tax_percent ? tax_percent->valuedouble : 0,
        tax_value ? tax_value->valuedouble : 0,
        tax_value_after_discount ? tax_value_after_discount->valuedouble : 0,
        options ? optionsList : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        parent_order_product_id && !cJSON_IsNull(parent_order_product_id) ? strdup(parent_order_product_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return order_item_local_var;
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
