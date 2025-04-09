#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "base_customer.h"



static base_customer_t *base_customer_create_internal(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    base_customer_t *base_customer_local_var = malloc(sizeof(base_customer_t));
    if (!base_customer_local_var) {
        return NULL;
    }
    base_customer_local_var->id = id;
    base_customer_local_var->email = email;
    base_customer_local_var->first_name = first_name;
    base_customer_local_var->last_name = last_name;
    base_customer_local_var->phone = phone;
    base_customer_local_var->additional_fields = additional_fields;
    base_customer_local_var->custom_fields = custom_fields;

    base_customer_local_var->_library_owned = 1;
    return base_customer_local_var;
}

__attribute__((deprecated)) base_customer_t *base_customer_create(
    char *id,
    char *email,
    char *first_name,
    char *last_name,
    char *phone,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return base_customer_create_internal (
        id,
        email,
        first_name,
        last_name,
        phone,
        additional_fields,
        custom_fields
        );
}

void base_customer_free(base_customer_t *base_customer) {
    if(NULL == base_customer){
        return ;
    }
    if(base_customer->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "base_customer_free");
        return ;
    }
    listEntry_t *listEntry;
    if (base_customer->id) {
        free(base_customer->id);
        base_customer->id = NULL;
    }
    if (base_customer->email) {
        free(base_customer->email);
        base_customer->email = NULL;
    }
    if (base_customer->first_name) {
        free(base_customer->first_name);
        base_customer->first_name = NULL;
    }
    if (base_customer->last_name) {
        free(base_customer->last_name);
        base_customer->last_name = NULL;
    }
    if (base_customer->phone) {
        free(base_customer->phone);
        base_customer->phone = NULL;
    }
    if (base_customer->additional_fields) {
        object_free(base_customer->additional_fields);
        base_customer->additional_fields = NULL;
    }
    if (base_customer->custom_fields) {
        object_free(base_customer->custom_fields);
        base_customer->custom_fields = NULL;
    }
    free(base_customer);
}

cJSON *base_customer_convertToJSON(base_customer_t *base_customer) {
    cJSON *item = cJSON_CreateObject();

    // base_customer->id
    if(base_customer->id) {
    if(cJSON_AddStringToObject(item, "id", base_customer->id) == NULL) {
    goto fail; //String
    }
    }


    // base_customer->email
    if(base_customer->email) {
    if(cJSON_AddStringToObject(item, "email", base_customer->email) == NULL) {
    goto fail; //String
    }
    }


    // base_customer->first_name
    if(base_customer->first_name) {
    if(cJSON_AddStringToObject(item, "first_name", base_customer->first_name) == NULL) {
    goto fail; //String
    }
    }


    // base_customer->last_name
    if(base_customer->last_name) {
    if(cJSON_AddStringToObject(item, "last_name", base_customer->last_name) == NULL) {
    goto fail; //String
    }
    }


    // base_customer->phone
    if(base_customer->phone) {
    if(cJSON_AddStringToObject(item, "phone", base_customer->phone) == NULL) {
    goto fail; //String
    }
    }


    // base_customer->additional_fields
    if(base_customer->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(base_customer->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // base_customer->custom_fields
    if(base_customer->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(base_customer->custom_fields);
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

base_customer_t *base_customer_parseFromJSON(cJSON *base_customerJSON){

    base_customer_t *base_customer_local_var = NULL;

    // base_customer->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // base_customer->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // base_customer->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "first_name");
    if (cJSON_IsNull(first_name)) {
        first_name = NULL;
    }
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // base_customer->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "last_name");
    if (cJSON_IsNull(last_name)) {
        last_name = NULL;
    }
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // base_customer->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // base_customer->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // base_customer->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(base_customerJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    base_customer_local_var = base_customer_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return base_customer_local_var;
end:
    return NULL;

}
