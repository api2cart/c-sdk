#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_add_order_item_inner.h"



static order_add_order_item_inner_t *order_add_order_item_inner_create_internal(
    char *order_item_id,
    char *order_item_name,
    char *order_item_model,
    double order_item_price,
    int order_item_quantity,
    double order_item_weight,
    char *order_item_variant_id,
    double order_item_tax,
    char *order_item_tax_class,
    int order_item_price_includes_tax,
    int order_item_parent,
    char *order_item_parent_option_name,
    int order_item_allow_refund_items_separately,
    int order_item_allow_ship_items_separately,
    list_t *order_item_option,
    list_t *order_item_property
    ) {
    order_add_order_item_inner_t *order_add_order_item_inner_local_var = malloc(sizeof(order_add_order_item_inner_t));
    if (!order_add_order_item_inner_local_var) {
        return NULL;
    }
    order_add_order_item_inner_local_var->order_item_id = order_item_id;
    order_add_order_item_inner_local_var->order_item_name = order_item_name;
    order_add_order_item_inner_local_var->order_item_model = order_item_model;
    order_add_order_item_inner_local_var->order_item_price = order_item_price;
    order_add_order_item_inner_local_var->order_item_quantity = order_item_quantity;
    order_add_order_item_inner_local_var->order_item_weight = order_item_weight;
    order_add_order_item_inner_local_var->order_item_variant_id = order_item_variant_id;
    order_add_order_item_inner_local_var->order_item_tax = order_item_tax;
    order_add_order_item_inner_local_var->order_item_tax_class = order_item_tax_class;
    order_add_order_item_inner_local_var->order_item_price_includes_tax = order_item_price_includes_tax;
    order_add_order_item_inner_local_var->order_item_parent = order_item_parent;
    order_add_order_item_inner_local_var->order_item_parent_option_name = order_item_parent_option_name;
    order_add_order_item_inner_local_var->order_item_allow_refund_items_separately = order_item_allow_refund_items_separately;
    order_add_order_item_inner_local_var->order_item_allow_ship_items_separately = order_item_allow_ship_items_separately;
    order_add_order_item_inner_local_var->order_item_option = order_item_option;
    order_add_order_item_inner_local_var->order_item_property = order_item_property;

    order_add_order_item_inner_local_var->_library_owned = 1;
    return order_add_order_item_inner_local_var;
}

__attribute__((deprecated)) order_add_order_item_inner_t *order_add_order_item_inner_create(
    char *order_item_id,
    char *order_item_name,
    char *order_item_model,
    double order_item_price,
    int order_item_quantity,
    double order_item_weight,
    char *order_item_variant_id,
    double order_item_tax,
    char *order_item_tax_class,
    int order_item_price_includes_tax,
    int order_item_parent,
    char *order_item_parent_option_name,
    int order_item_allow_refund_items_separately,
    int order_item_allow_ship_items_separately,
    list_t *order_item_option,
    list_t *order_item_property
    ) {
    return order_add_order_item_inner_create_internal (
        order_item_id,
        order_item_name,
        order_item_model,
        order_item_price,
        order_item_quantity,
        order_item_weight,
        order_item_variant_id,
        order_item_tax,
        order_item_tax_class,
        order_item_price_includes_tax,
        order_item_parent,
        order_item_parent_option_name,
        order_item_allow_refund_items_separately,
        order_item_allow_ship_items_separately,
        order_item_option,
        order_item_property
        );
}

void order_add_order_item_inner_free(order_add_order_item_inner_t *order_add_order_item_inner) {
    if(NULL == order_add_order_item_inner){
        return ;
    }
    if(order_add_order_item_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_add_order_item_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_add_order_item_inner->order_item_id) {
        free(order_add_order_item_inner->order_item_id);
        order_add_order_item_inner->order_item_id = NULL;
    }
    if (order_add_order_item_inner->order_item_name) {
        free(order_add_order_item_inner->order_item_name);
        order_add_order_item_inner->order_item_name = NULL;
    }
    if (order_add_order_item_inner->order_item_model) {
        free(order_add_order_item_inner->order_item_model);
        order_add_order_item_inner->order_item_model = NULL;
    }
    if (order_add_order_item_inner->order_item_variant_id) {
        free(order_add_order_item_inner->order_item_variant_id);
        order_add_order_item_inner->order_item_variant_id = NULL;
    }
    if (order_add_order_item_inner->order_item_tax_class) {
        free(order_add_order_item_inner->order_item_tax_class);
        order_add_order_item_inner->order_item_tax_class = NULL;
    }
    if (order_add_order_item_inner->order_item_parent_option_name) {
        free(order_add_order_item_inner->order_item_parent_option_name);
        order_add_order_item_inner->order_item_parent_option_name = NULL;
    }
    if (order_add_order_item_inner->order_item_option) {
        list_ForEach(listEntry, order_add_order_item_inner->order_item_option) {
            order_add_order_item_inner_order_item_option_inner_free(listEntry->data);
        }
        list_freeList(order_add_order_item_inner->order_item_option);
        order_add_order_item_inner->order_item_option = NULL;
    }
    if (order_add_order_item_inner->order_item_property) {
        list_ForEach(listEntry, order_add_order_item_inner->order_item_property) {
            order_add_order_item_inner_order_item_property_inner_free(listEntry->data);
        }
        list_freeList(order_add_order_item_inner->order_item_property);
        order_add_order_item_inner->order_item_property = NULL;
    }
    free(order_add_order_item_inner);
}

cJSON *order_add_order_item_inner_convertToJSON(order_add_order_item_inner_t *order_add_order_item_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_add_order_item_inner->order_item_id
    if (!order_add_order_item_inner->order_item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_item_id", order_add_order_item_inner->order_item_id) == NULL) {
    goto fail; //String
    }


    // order_add_order_item_inner->order_item_name
    if (!order_add_order_item_inner->order_item_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_item_name", order_add_order_item_inner->order_item_name) == NULL) {
    goto fail; //String
    }


    // order_add_order_item_inner->order_item_model
    if(order_add_order_item_inner->order_item_model) {
    if(cJSON_AddStringToObject(item, "order_item_model", order_add_order_item_inner->order_item_model) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner->order_item_price
    if (!order_add_order_item_inner->order_item_price) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "order_item_price", order_add_order_item_inner->order_item_price) == NULL) {
    goto fail; //Numeric
    }


    // order_add_order_item_inner->order_item_quantity
    if (!order_add_order_item_inner->order_item_quantity) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "order_item_quantity", order_add_order_item_inner->order_item_quantity) == NULL) {
    goto fail; //Numeric
    }


    // order_add_order_item_inner->order_item_weight
    if(order_add_order_item_inner->order_item_weight) {
    if(cJSON_AddNumberToObject(item, "order_item_weight", order_add_order_item_inner->order_item_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add_order_item_inner->order_item_variant_id
    if(order_add_order_item_inner->order_item_variant_id) {
    if(cJSON_AddStringToObject(item, "order_item_variant_id", order_add_order_item_inner->order_item_variant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner->order_item_tax
    if(order_add_order_item_inner->order_item_tax) {
    if(cJSON_AddNumberToObject(item, "order_item_tax", order_add_order_item_inner->order_item_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add_order_item_inner->order_item_tax_class
    if(order_add_order_item_inner->order_item_tax_class) {
    if(cJSON_AddStringToObject(item, "order_item_tax_class", order_add_order_item_inner->order_item_tax_class) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner->order_item_price_includes_tax
    if(order_add_order_item_inner->order_item_price_includes_tax) {
    if(cJSON_AddBoolToObject(item, "order_item_price_includes_tax", order_add_order_item_inner->order_item_price_includes_tax) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add_order_item_inner->order_item_parent
    if(order_add_order_item_inner->order_item_parent) {
    if(cJSON_AddNumberToObject(item, "order_item_parent", order_add_order_item_inner->order_item_parent) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_add_order_item_inner->order_item_parent_option_name
    if(order_add_order_item_inner->order_item_parent_option_name) {
    if(cJSON_AddStringToObject(item, "order_item_parent_option_name", order_add_order_item_inner->order_item_parent_option_name) == NULL) {
    goto fail; //String
    }
    }


    // order_add_order_item_inner->order_item_allow_refund_items_separately
    if(order_add_order_item_inner->order_item_allow_refund_items_separately) {
    if(cJSON_AddBoolToObject(item, "order_item_allow_refund_items_separately", order_add_order_item_inner->order_item_allow_refund_items_separately) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add_order_item_inner->order_item_allow_ship_items_separately
    if(order_add_order_item_inner->order_item_allow_ship_items_separately) {
    if(cJSON_AddBoolToObject(item, "order_item_allow_ship_items_separately", order_add_order_item_inner->order_item_allow_ship_items_separately) == NULL) {
    goto fail; //Bool
    }
    }


    // order_add_order_item_inner->order_item_option
    if(order_add_order_item_inner->order_item_option) {
    cJSON *order_item_option = cJSON_AddArrayToObject(item, "order_item_option");
    if(order_item_option == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_item_optionListEntry;
    if (order_add_order_item_inner->order_item_option) {
    list_ForEach(order_item_optionListEntry, order_add_order_item_inner->order_item_option) {
    cJSON *itemLocal = order_add_order_item_inner_order_item_option_inner_convertToJSON(order_item_optionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_item_option, itemLocal);
    }
    }
    }


    // order_add_order_item_inner->order_item_property
    if(order_add_order_item_inner->order_item_property) {
    cJSON *order_item_property = cJSON_AddArrayToObject(item, "order_item_property");
    if(order_item_property == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_item_propertyListEntry;
    if (order_add_order_item_inner->order_item_property) {
    list_ForEach(order_item_propertyListEntry, order_add_order_item_inner->order_item_property) {
    cJSON *itemLocal = order_add_order_item_inner_order_item_property_inner_convertToJSON(order_item_propertyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_item_property, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_add_order_item_inner_t *order_add_order_item_inner_parseFromJSON(cJSON *order_add_order_item_innerJSON){

    order_add_order_item_inner_t *order_add_order_item_inner_local_var = NULL;

    // define the local list for order_add_order_item_inner->order_item_option
    list_t *order_item_optionList = NULL;

    // define the local list for order_add_order_item_inner->order_item_property
    list_t *order_item_propertyList = NULL;

    // order_add_order_item_inner->order_item_id
    cJSON *order_item_id = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_id");
    if (cJSON_IsNull(order_item_id)) {
        order_item_id = NULL;
    }
    if (!order_item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_item_id))
    {
    goto end; //String
    }

    // order_add_order_item_inner->order_item_name
    cJSON *order_item_name = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_name");
    if (cJSON_IsNull(order_item_name)) {
        order_item_name = NULL;
    }
    if (!order_item_name) {
        goto end;
    }

    
    if(!cJSON_IsString(order_item_name))
    {
    goto end; //String
    }

    // order_add_order_item_inner->order_item_model
    cJSON *order_item_model = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_model");
    if (cJSON_IsNull(order_item_model)) {
        order_item_model = NULL;
    }
    if (order_item_model) { 
    if(!cJSON_IsString(order_item_model) && !cJSON_IsNull(order_item_model))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner->order_item_price
    cJSON *order_item_price = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_price");
    if (cJSON_IsNull(order_item_price)) {
        order_item_price = NULL;
    }
    if (!order_item_price) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_item_price))
    {
    goto end; //Numeric
    }

    // order_add_order_item_inner->order_item_quantity
    cJSON *order_item_quantity = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_quantity");
    if (cJSON_IsNull(order_item_quantity)) {
        order_item_quantity = NULL;
    }
    if (!order_item_quantity) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_item_quantity))
    {
    goto end; //Numeric
    }

    // order_add_order_item_inner->order_item_weight
    cJSON *order_item_weight = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_weight");
    if (cJSON_IsNull(order_item_weight)) {
        order_item_weight = NULL;
    }
    if (order_item_weight) { 
    if(!cJSON_IsNumber(order_item_weight))
    {
    goto end; //Numeric
    }
    }

    // order_add_order_item_inner->order_item_variant_id
    cJSON *order_item_variant_id = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_variant_id");
    if (cJSON_IsNull(order_item_variant_id)) {
        order_item_variant_id = NULL;
    }
    if (order_item_variant_id) { 
    if(!cJSON_IsString(order_item_variant_id) && !cJSON_IsNull(order_item_variant_id))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner->order_item_tax
    cJSON *order_item_tax = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_tax");
    if (cJSON_IsNull(order_item_tax)) {
        order_item_tax = NULL;
    }
    if (order_item_tax) { 
    if(!cJSON_IsNumber(order_item_tax))
    {
    goto end; //Numeric
    }
    }

    // order_add_order_item_inner->order_item_tax_class
    cJSON *order_item_tax_class = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_tax_class");
    if (cJSON_IsNull(order_item_tax_class)) {
        order_item_tax_class = NULL;
    }
    if (order_item_tax_class) { 
    if(!cJSON_IsString(order_item_tax_class) && !cJSON_IsNull(order_item_tax_class))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner->order_item_price_includes_tax
    cJSON *order_item_price_includes_tax = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_price_includes_tax");
    if (cJSON_IsNull(order_item_price_includes_tax)) {
        order_item_price_includes_tax = NULL;
    }
    if (order_item_price_includes_tax) { 
    if(!cJSON_IsBool(order_item_price_includes_tax))
    {
    goto end; //Bool
    }
    }

    // order_add_order_item_inner->order_item_parent
    cJSON *order_item_parent = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_parent");
    if (cJSON_IsNull(order_item_parent)) {
        order_item_parent = NULL;
    }
    if (order_item_parent) { 
    if(!cJSON_IsNumber(order_item_parent))
    {
    goto end; //Numeric
    }
    }

    // order_add_order_item_inner->order_item_parent_option_name
    cJSON *order_item_parent_option_name = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_parent_option_name");
    if (cJSON_IsNull(order_item_parent_option_name)) {
        order_item_parent_option_name = NULL;
    }
    if (order_item_parent_option_name) { 
    if(!cJSON_IsString(order_item_parent_option_name) && !cJSON_IsNull(order_item_parent_option_name))
    {
    goto end; //String
    }
    }

    // order_add_order_item_inner->order_item_allow_refund_items_separately
    cJSON *order_item_allow_refund_items_separately = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_allow_refund_items_separately");
    if (cJSON_IsNull(order_item_allow_refund_items_separately)) {
        order_item_allow_refund_items_separately = NULL;
    }
    if (order_item_allow_refund_items_separately) { 
    if(!cJSON_IsBool(order_item_allow_refund_items_separately))
    {
    goto end; //Bool
    }
    }

    // order_add_order_item_inner->order_item_allow_ship_items_separately
    cJSON *order_item_allow_ship_items_separately = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_allow_ship_items_separately");
    if (cJSON_IsNull(order_item_allow_ship_items_separately)) {
        order_item_allow_ship_items_separately = NULL;
    }
    if (order_item_allow_ship_items_separately) { 
    if(!cJSON_IsBool(order_item_allow_ship_items_separately))
    {
    goto end; //Bool
    }
    }

    // order_add_order_item_inner->order_item_option
    cJSON *order_item_option = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_option");
    if (cJSON_IsNull(order_item_option)) {
        order_item_option = NULL;
    }
    if (order_item_option) { 
    cJSON *order_item_option_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_item_option)){
        goto end; //nonprimitive container
    }

    order_item_optionList = list_createList();

    cJSON_ArrayForEach(order_item_option_local_nonprimitive,order_item_option )
    {
        if(!cJSON_IsObject(order_item_option_local_nonprimitive)){
            goto end;
        }
        order_add_order_item_inner_order_item_option_inner_t *order_item_optionItem = order_add_order_item_inner_order_item_option_inner_parseFromJSON(order_item_option_local_nonprimitive);

        list_addElement(order_item_optionList, order_item_optionItem);
    }
    }

    // order_add_order_item_inner->order_item_property
    cJSON *order_item_property = cJSON_GetObjectItemCaseSensitive(order_add_order_item_innerJSON, "order_item_property");
    if (cJSON_IsNull(order_item_property)) {
        order_item_property = NULL;
    }
    if (order_item_property) { 
    cJSON *order_item_property_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_item_property)){
        goto end; //nonprimitive container
    }

    order_item_propertyList = list_createList();

    cJSON_ArrayForEach(order_item_property_local_nonprimitive,order_item_property )
    {
        if(!cJSON_IsObject(order_item_property_local_nonprimitive)){
            goto end;
        }
        order_add_order_item_inner_order_item_property_inner_t *order_item_propertyItem = order_add_order_item_inner_order_item_property_inner_parseFromJSON(order_item_property_local_nonprimitive);

        list_addElement(order_item_propertyList, order_item_propertyItem);
    }
    }


    order_add_order_item_inner_local_var = order_add_order_item_inner_create_internal (
        strdup(order_item_id->valuestring),
        strdup(order_item_name->valuestring),
        order_item_model && !cJSON_IsNull(order_item_model) ? strdup(order_item_model->valuestring) : NULL,
        order_item_price->valuedouble,
        order_item_quantity->valuedouble,
        order_item_weight ? order_item_weight->valuedouble : 0,
        order_item_variant_id && !cJSON_IsNull(order_item_variant_id) ? strdup(order_item_variant_id->valuestring) : NULL,
        order_item_tax ? order_item_tax->valuedouble : 0,
        order_item_tax_class && !cJSON_IsNull(order_item_tax_class) ? strdup(order_item_tax_class->valuestring) : NULL,
        order_item_price_includes_tax ? order_item_price_includes_tax->valueint : 0,
        order_item_parent ? order_item_parent->valuedouble : 0,
        order_item_parent_option_name && !cJSON_IsNull(order_item_parent_option_name) ? strdup(order_item_parent_option_name->valuestring) : NULL,
        order_item_allow_refund_items_separately ? order_item_allow_refund_items_separately->valueint : 0,
        order_item_allow_ship_items_separately ? order_item_allow_ship_items_separately->valueint : 0,
        order_item_option ? order_item_optionList : NULL,
        order_item_property ? order_item_propertyList : NULL
        );

    return order_add_order_item_inner_local_var;
end:
    if (order_item_optionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_item_optionList) {
            order_add_order_item_inner_order_item_option_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_item_optionList);
        order_item_optionList = NULL;
    }
    if (order_item_propertyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_item_propertyList) {
            order_add_order_item_inner_order_item_property_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_item_propertyList);
        order_item_propertyList = NULL;
    }
    return NULL;

}
