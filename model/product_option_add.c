#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_option_add.h"


char* product_option_add_type_ToString(api2cart_openapi_product_option_add_TYPE_e type) {
    char* typeArray[] =  { "NULL", "option_type_select", "option_type_text", "option_type_radio", "option_type_checkbox", "option_type_textarea", "option_type_readonly", "option_type_multiselect", "option_type_multicheckbox", "option_type_file", "option_type_date", "option_type_datetime", "option_type_time" };
    return typeArray[type];
}

api2cart_openapi_product_option_add_TYPE_e product_option_add_type_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "option_type_select", "option_type_text", "option_type_radio", "option_type_checkbox", "option_type_textarea", "option_type_readonly", "option_type_multiselect", "option_type_multicheckbox", "option_type_file", "option_type_date", "option_type_datetime", "option_type_time" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static product_option_add_t *product_option_add_create_internal(
    char *name,
    api2cart_openapi_product_option_add_TYPE_e type,
    char *product_id,
    char *default_option_value,
    char *option_values,
    char *description,
    int avail,
    int sort_order,
    int required,
    list_t *values,
    int clear_cache
    ) {
    product_option_add_t *product_option_add_local_var = malloc(sizeof(product_option_add_t));
    if (!product_option_add_local_var) {
        return NULL;
    }
    product_option_add_local_var->name = name;
    product_option_add_local_var->type = type;
    product_option_add_local_var->product_id = product_id;
    product_option_add_local_var->default_option_value = default_option_value;
    product_option_add_local_var->option_values = option_values;
    product_option_add_local_var->description = description;
    product_option_add_local_var->avail = avail;
    product_option_add_local_var->sort_order = sort_order;
    product_option_add_local_var->required = required;
    product_option_add_local_var->values = values;
    product_option_add_local_var->clear_cache = clear_cache;

    product_option_add_local_var->_library_owned = 1;
    return product_option_add_local_var;
}

__attribute__((deprecated)) product_option_add_t *product_option_add_create(
    char *name,
    api2cart_openapi_product_option_add_TYPE_e type,
    char *product_id,
    char *default_option_value,
    char *option_values,
    char *description,
    int avail,
    int sort_order,
    int required,
    list_t *values,
    int clear_cache
    ) {
    return product_option_add_create_internal (
        name,
        type,
        product_id,
        default_option_value,
        option_values,
        description,
        avail,
        sort_order,
        required,
        values,
        clear_cache
        );
}

void product_option_add_free(product_option_add_t *product_option_add) {
    if(NULL == product_option_add){
        return ;
    }
    if(product_option_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_option_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_option_add->name) {
        free(product_option_add->name);
        product_option_add->name = NULL;
    }
    if (product_option_add->product_id) {
        free(product_option_add->product_id);
        product_option_add->product_id = NULL;
    }
    if (product_option_add->default_option_value) {
        free(product_option_add->default_option_value);
        product_option_add->default_option_value = NULL;
    }
    if (product_option_add->option_values) {
        free(product_option_add->option_values);
        product_option_add->option_values = NULL;
    }
    if (product_option_add->description) {
        free(product_option_add->description);
        product_option_add->description = NULL;
    }
    if (product_option_add->values) {
        list_ForEach(listEntry, product_option_add->values) {
            product_option_add_values_inner_free(listEntry->data);
        }
        list_freeList(product_option_add->values);
        product_option_add->values = NULL;
    }
    free(product_option_add);
}

cJSON *product_option_add_convertToJSON(product_option_add_t *product_option_add) {
    cJSON *item = cJSON_CreateObject();

    // product_option_add->name
    if (!product_option_add->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", product_option_add->name) == NULL) {
    goto fail; //String
    }


    // product_option_add->type
    if (api2cart_openapi_product_option_add_TYPE_NULL == product_option_add->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", product_option_add_type_ToString(product_option_add->type)) == NULL)
    {
    goto fail; //Enum
    }


    // product_option_add->product_id
    if(product_option_add->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_option_add->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add->default_option_value
    if(product_option_add->default_option_value) {
    if(cJSON_AddStringToObject(item, "default_option_value", product_option_add->default_option_value) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add->option_values
    if(product_option_add->option_values) {
    if(cJSON_AddStringToObject(item, "option_values", product_option_add->option_values) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add->description
    if(product_option_add->description) {
    if(cJSON_AddStringToObject(item, "description", product_option_add->description) == NULL) {
    goto fail; //String
    }
    }


    // product_option_add->avail
    if(product_option_add->avail) {
    if(cJSON_AddBoolToObject(item, "avail", product_option_add->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option_add->sort_order
    if(product_option_add->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", product_option_add->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_option_add->required
    if(product_option_add->required) {
    if(cJSON_AddBoolToObject(item, "required", product_option_add->required) == NULL) {
    goto fail; //Bool
    }
    }


    // product_option_add->values
    if(product_option_add->values) {
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *valuesListEntry;
    if (product_option_add->values) {
    list_ForEach(valuesListEntry, product_option_add->values) {
    cJSON *itemLocal = product_option_add_values_inner_convertToJSON(valuesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(values, itemLocal);
    }
    }
    }


    // product_option_add->clear_cache
    if(product_option_add->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_option_add->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_option_add_t *product_option_add_parseFromJSON(cJSON *product_option_addJSON){

    product_option_add_t *product_option_add_local_var = NULL;

    // define the local list for product_option_add->values
    list_t *valuesList = NULL;

    // product_option_add->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // product_option_add->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    api2cart_openapi_product_option_add_TYPE_e typeVariable;
    
    if(!cJSON_IsString(type))
    {
    goto end; //Enum
    }
    typeVariable = product_option_add_type_FromString(type->valuestring);

    // product_option_add->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_option_add->default_option_value
    cJSON *default_option_value = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "default_option_value");
    if (cJSON_IsNull(default_option_value)) {
        default_option_value = NULL;
    }
    if (default_option_value) { 
    if(!cJSON_IsString(default_option_value) && !cJSON_IsNull(default_option_value))
    {
    goto end; //String
    }
    }

    // product_option_add->option_values
    cJSON *option_values = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "option_values");
    if (cJSON_IsNull(option_values)) {
        option_values = NULL;
    }
    if (option_values) { 
    if(!cJSON_IsString(option_values) && !cJSON_IsNull(option_values))
    {
    goto end; //String
    }
    }

    // product_option_add->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_option_add->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // product_option_add->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // product_option_add->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "required");
    if (cJSON_IsNull(required)) {
        required = NULL;
    }
    if (required) { 
    if(!cJSON_IsBool(required))
    {
    goto end; //Bool
    }
    }

    // product_option_add->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "values");
    if (cJSON_IsNull(values)) {
        values = NULL;
    }
    if (values) { 
    cJSON *values_local_nonprimitive = NULL;
    if(!cJSON_IsArray(values)){
        goto end; //nonprimitive container
    }

    valuesList = list_createList();

    cJSON_ArrayForEach(values_local_nonprimitive,values )
    {
        if(!cJSON_IsObject(values_local_nonprimitive)){
            goto end;
        }
        product_option_add_values_inner_t *valuesItem = product_option_add_values_inner_parseFromJSON(values_local_nonprimitive);

        list_addElement(valuesList, valuesItem);
    }
    }

    // product_option_add->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_option_addJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }


    product_option_add_local_var = product_option_add_create_internal (
        strdup(name->valuestring),
        typeVariable,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        default_option_value && !cJSON_IsNull(default_option_value) ? strdup(default_option_value->valuestring) : NULL,
        option_values && !cJSON_IsNull(option_values) ? strdup(option_values->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        avail ? avail->valueint : 0,
        sort_order ? sort_order->valuedouble : 0,
        required ? required->valueint : 0,
        values ? valuesList : NULL,
        clear_cache ? clear_cache->valueint : 0
        );

    return product_option_add_local_var;
end:
    if (valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, valuesList) {
            product_option_add_values_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(valuesList);
        valuesList = NULL;
    }
    return NULL;

}
