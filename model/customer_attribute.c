#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_attribute.h"



static customer_attribute_t *customer_attribute_create_internal(
    char *attribute_id,
    char *code,
    char *name,
    char *type,
    list_t *values,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_attribute_t *customer_attribute_local_var = malloc(sizeof(customer_attribute_t));
    if (!customer_attribute_local_var) {
        return NULL;
    }
    customer_attribute_local_var->attribute_id = attribute_id;
    customer_attribute_local_var->code = code;
    customer_attribute_local_var->name = name;
    customer_attribute_local_var->type = type;
    customer_attribute_local_var->values = values;
    customer_attribute_local_var->additional_fields = additional_fields;
    customer_attribute_local_var->custom_fields = custom_fields;

    customer_attribute_local_var->_library_owned = 1;
    return customer_attribute_local_var;
}

__attribute__((deprecated)) customer_attribute_t *customer_attribute_create(
    char *attribute_id,
    char *code,
    char *name,
    char *type,
    list_t *values,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_attribute_create_internal (
        attribute_id,
        code,
        name,
        type,
        values,
        additional_fields,
        custom_fields
        );
}

void customer_attribute_free(customer_attribute_t *customer_attribute) {
    if(NULL == customer_attribute){
        return ;
    }
    if(customer_attribute->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_attribute_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_attribute->attribute_id) {
        free(customer_attribute->attribute_id);
        customer_attribute->attribute_id = NULL;
    }
    if (customer_attribute->code) {
        free(customer_attribute->code);
        customer_attribute->code = NULL;
    }
    if (customer_attribute->name) {
        free(customer_attribute->name);
        customer_attribute->name = NULL;
    }
    if (customer_attribute->type) {
        free(customer_attribute->type);
        customer_attribute->type = NULL;
    }
    if (customer_attribute->values) {
        list_ForEach(listEntry, customer_attribute->values) {
            customer_attribute_value_free(listEntry->data);
        }
        list_freeList(customer_attribute->values);
        customer_attribute->values = NULL;
    }
    if (customer_attribute->additional_fields) {
        object_free(customer_attribute->additional_fields);
        customer_attribute->additional_fields = NULL;
    }
    if (customer_attribute->custom_fields) {
        object_free(customer_attribute->custom_fields);
        customer_attribute->custom_fields = NULL;
    }
    free(customer_attribute);
}

cJSON *customer_attribute_convertToJSON(customer_attribute_t *customer_attribute) {
    cJSON *item = cJSON_CreateObject();

    // customer_attribute->attribute_id
    if(customer_attribute->attribute_id) {
    if(cJSON_AddStringToObject(item, "attribute_id", customer_attribute->attribute_id) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute->code
    if(customer_attribute->code) {
    if(cJSON_AddStringToObject(item, "code", customer_attribute->code) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute->name
    if(customer_attribute->name) {
    if(cJSON_AddStringToObject(item, "name", customer_attribute->name) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute->type
    if(customer_attribute->type) {
    if(cJSON_AddStringToObject(item, "type", customer_attribute->type) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute->values
    if(customer_attribute->values) {
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *valuesListEntry;
    if (customer_attribute->values) {
    list_ForEach(valuesListEntry, customer_attribute->values) {
    cJSON *itemLocal = customer_attribute_value_convertToJSON(valuesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(values, itemLocal);
    }
    }
    }


    // customer_attribute->additional_fields
    if(customer_attribute->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_attribute->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_attribute->custom_fields
    if(customer_attribute->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_attribute->custom_fields);
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

customer_attribute_t *customer_attribute_parseFromJSON(cJSON *customer_attributeJSON){

    customer_attribute_t *customer_attribute_local_var = NULL;

    // define the local list for customer_attribute->values
    list_t *valuesList = NULL;

    // customer_attribute->attribute_id
    cJSON *attribute_id = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "attribute_id");
    if (cJSON_IsNull(attribute_id)) {
        attribute_id = NULL;
    }
    if (attribute_id) { 
    if(!cJSON_IsString(attribute_id) && !cJSON_IsNull(attribute_id))
    {
    goto end; //String
    }
    }

    // customer_attribute->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // customer_attribute->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // customer_attribute->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // customer_attribute->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "values");
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
        customer_attribute_value_t *valuesItem = customer_attribute_value_parseFromJSON(values_local_nonprimitive);

        list_addElement(valuesList, valuesItem);
    }
    }

    // customer_attribute->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_attribute->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_attributeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_attribute_local_var = customer_attribute_create_internal (
        attribute_id && !cJSON_IsNull(attribute_id) ? strdup(attribute_id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        values ? valuesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_attribute_local_var;
end:
    if (valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, valuesList) {
            customer_attribute_value_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(valuesList);
        valuesList = NULL;
    }
    return NULL;

}
