#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option.h"



static product_option_t *product_option_create_internal(
    char *id,
    char *product_option_id,
    char *name,
    char *description,
    int sort_order,
    char *type,
    int required,
    int available,
    int used_in_combination,
    list_t *option_items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_option_t *product_option_local_var = malloc(sizeof(product_option_t));
    if (!product_option_local_var) {
        return NULL;
    }
    product_option_local_var->id = id;
    product_option_local_var->product_option_id = product_option_id;
    product_option_local_var->name = name;
    product_option_local_var->description = description;
    product_option_local_var->sort_order = sort_order;
    product_option_local_var->type = type;
    product_option_local_var->required = required;
    product_option_local_var->available = available;
    product_option_local_var->used_in_combination = used_in_combination;
    product_option_local_var->option_items = option_items;
    product_option_local_var->additional_fields = additional_fields;
    product_option_local_var->custom_fields = custom_fields;

    product_option_local_var->_library_owned = 1;
    return product_option_local_var;
}

__attribute__((deprecated)) product_option_t *product_option_create(
    char *id,
    char *product_option_id,
    char *name,
    char *description,
    int sort_order,
    char *type,
    int required,
    int available,
    int used_in_combination,
    list_t *option_items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_option_create_internal (
        id,
        product_option_id,
        name,
        description,
        sort_order,
        type,
        required,
        available,
        used_in_combination,
        option_items,
        additional_fields,
        custom_fields
        );
}

void product_option_free(product_option_t *product_option) {
    if(NULL == product_option){
        return ;
    }
    if(product_option->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option->id) {
        free(product_option->id);
        product_option->id = NULL;
    }
    if (product_option->product_option_id) {
        free(product_option->product_option_id);
        product_option->product_option_id = NULL;
    }
    if (product_option->name) {
        free(product_option->name);
        product_option->name = NULL;
    }
    if (product_option->description) {
        free(product_option->description);
        product_option->description = NULL;
    }
    if (product_option->type) {
        free(product_option->type);
        product_option->type = NULL;
    }
    if (product_option->option_items) {
        list_ForEach(listEntry, product_option->option_items) {
            product_option_item_free(listEntry->data);
        }
        list_freeList(product_option->option_items);
        product_option->option_items = NULL;
    }
    if (product_option->additional_fields) {
        object_free(product_option->additional_fields);
        product_option->additional_fields = NULL;
    }
    if (product_option->custom_fields) {
        object_free(product_option->custom_fields);
        product_option->custom_fields = NULL;
    }
    free(product_option);
}

cJSON *product_option_convertToJSON(product_option_t *product_option) {
    cJSON *item = cJSON_CreateObject();

    // product_option->id
    if(product_option->id) {
    if(cJSON_AddStringToObject(item, "id", product_option->id) == NULL) {
    goto fail; //String
    }
    }


    // product_option->product_option_id
    if(product_option->product_option_id) {
    if(cJSON_AddStringToObject(item, "product_option_id", product_option->product_option_id) == NULL) {
    goto fail; //String
    }
    }


    // product_option->name
    if(product_option->name) {
    if(cJSON_AddStringToObject(item, "name", product_option->name) == NULL) {
    goto fail; //String
    }
    }


    // product_option->description
    if(product_option->description) {
    if(cJSON_AddStringToObject(item, "description", product_option->description) == NULL) {
    goto fail; //String
    }
    }


    // product_option->sort_order
    if(product_option->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", product_option->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_option->type
    if(product_option->type) {
    if(cJSON_AddStringToObject(item, "type", product_option->type) == NULL) {
    goto fail; //String
    }
    }


    // product_option->required
    if(product_option->required) {
    if(cJSON_AddBoolToObject(item, "required", product_option->required) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option->available
    if(product_option->available) {
    if(cJSON_AddBoolToObject(item, "available", product_option->available) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option->used_in_combination
    if(product_option->used_in_combination) {
    if(cJSON_AddBoolToObject(item, "used_in_combination", product_option->used_in_combination) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option->option_items
    if(product_option->option_items) {
    cJSON *option_items = cJSON_AddArrayToObject(item, "option_items");
    if(option_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *option_itemsListEntry;
    if (product_option->option_items) {
    list_ForEach(option_itemsListEntry, product_option->option_items) {
    cJSON *itemLocal = product_option_item_convertToJSON(option_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(option_items, itemLocal);
    }
    }
    }


    // product_option->additional_fields
    if(product_option->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_option->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_option->custom_fields
    if(product_option->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_option->custom_fields);
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

product_option_t *product_option_parseFromJSON(cJSON *product_optionJSON){

    product_option_t *product_option_local_var = NULL;

    // define the local list for product_option->option_items
    list_t *option_itemsList = NULL;

    // product_option->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_option->product_option_id
    cJSON *product_option_id = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "product_option_id");
    if (cJSON_IsNull(product_option_id)) {
        product_option_id = NULL;
    }
    if (product_option_id) { 
    if(!cJSON_IsString(product_option_id) && !cJSON_IsNull(product_option_id))
    {
    goto end; //String
    }
    }

    // product_option->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_option->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_option->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // product_option->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_option->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "required");
    if (cJSON_IsNull(required)) {
        required = NULL;
    }
    if (required) { 
    if(!cJSON_IsBool(required))
    {
    goto end; //Bool
    }
    }

    // product_option->available
    cJSON *available = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "available");
    if (cJSON_IsNull(available)) {
        available = NULL;
    }
    if (available) { 
    if(!cJSON_IsBool(available))
    {
    goto end; //Bool
    }
    }

    // product_option->used_in_combination
    cJSON *used_in_combination = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "used_in_combination");
    if (cJSON_IsNull(used_in_combination)) {
        used_in_combination = NULL;
    }
    if (used_in_combination) { 
    if(!cJSON_IsBool(used_in_combination))
    {
    goto end; //Bool
    }
    }

    // product_option->option_items
    cJSON *option_items = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "option_items");
    if (cJSON_IsNull(option_items)) {
        option_items = NULL;
    }
    if (option_items) { 
    cJSON *option_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(option_items)){
        goto end; //nonprimitive container
    }

    option_itemsList = list_createList();

    cJSON_ArrayForEach(option_items_local_nonprimitive,option_items )
    {
        if(!cJSON_IsObject(option_items_local_nonprimitive)){
            goto end;
        }
        product_option_item_t *option_itemsItem = product_option_item_parseFromJSON(option_items_local_nonprimitive);

        list_addElement(option_itemsList, option_itemsItem);
    }
    }

    // product_option->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_option->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_optionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_option_local_var = product_option_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_option_id && !cJSON_IsNull(product_option_id) ? strdup(product_option_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        required ? required->valueint : 0,
        available ? available->valueint : 0,
        used_in_combination ? used_in_combination->valueint : 0,
        option_items ? option_itemsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_option_local_var;
end:
    if (option_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, option_itemsList) {
            product_option_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(option_itemsList);
        option_itemsList = NULL;
    }
    return NULL;

}
