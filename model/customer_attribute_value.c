#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_attribute_value.h"



static customer_attribute_value_t *customer_attribute_value_create_internal(
    char *id,
    char *value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    customer_attribute_value_t *customer_attribute_value_local_var = malloc(sizeof(customer_attribute_value_t));
    if (!customer_attribute_value_local_var) {
        return NULL;
    }
    customer_attribute_value_local_var->id = id;
    customer_attribute_value_local_var->value = value;
    customer_attribute_value_local_var->additional_fields = additional_fields;
    customer_attribute_value_local_var->custom_fields = custom_fields;

    customer_attribute_value_local_var->_library_owned = 1;
    return customer_attribute_value_local_var;
}

__attribute__((deprecated)) customer_attribute_value_t *customer_attribute_value_create(
    char *id,
    char *value,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return customer_attribute_value_create_internal (
        id,
        value,
        additional_fields,
        custom_fields
        );
}

void customer_attribute_value_free(customer_attribute_value_t *customer_attribute_value) {
    if(NULL == customer_attribute_value){
        return ;
    }
    if(customer_attribute_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_attribute_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_attribute_value->id) {
        free(customer_attribute_value->id);
        customer_attribute_value->id = NULL;
    }
    if (customer_attribute_value->value) {
        free(customer_attribute_value->value);
        customer_attribute_value->value = NULL;
    }
    if (customer_attribute_value->additional_fields) {
        object_free(customer_attribute_value->additional_fields);
        customer_attribute_value->additional_fields = NULL;
    }
    if (customer_attribute_value->custom_fields) {
        object_free(customer_attribute_value->custom_fields);
        customer_attribute_value->custom_fields = NULL;
    }
    free(customer_attribute_value);
}

cJSON *customer_attribute_value_convertToJSON(customer_attribute_value_t *customer_attribute_value) {
    cJSON *item = cJSON_CreateObject();

    // customer_attribute_value->id
    if(customer_attribute_value->id) {
    if(cJSON_AddStringToObject(item, "id", customer_attribute_value->id) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute_value->value
    if(customer_attribute_value->value) {
    if(cJSON_AddStringToObject(item, "value", customer_attribute_value->value) == NULL) {
    goto fail; //String
    }
    }


    // customer_attribute_value->additional_fields
    if(customer_attribute_value->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(customer_attribute_value->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // customer_attribute_value->custom_fields
    if(customer_attribute_value->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(customer_attribute_value->custom_fields);
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

customer_attribute_value_t *customer_attribute_value_parseFromJSON(cJSON *customer_attribute_valueJSON){

    customer_attribute_value_t *customer_attribute_value_local_var = NULL;

    // customer_attribute_value->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(customer_attribute_valueJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // customer_attribute_value->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(customer_attribute_valueJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // customer_attribute_value->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(customer_attribute_valueJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // customer_attribute_value->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(customer_attribute_valueJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    customer_attribute_value_local_var = customer_attribute_value_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return customer_attribute_value_local_var;
end:
    return NULL;

}
