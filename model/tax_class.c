#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class.h"



static tax_class_t *tax_class_create_internal(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_t *tax_class_local_var = malloc(sizeof(tax_class_t));
    if (!tax_class_local_var) {
        return NULL;
    }
    tax_class_local_var->id = id;
    tax_class_local_var->name = name;
    tax_class_local_var->avail = avail;
    tax_class_local_var->tax = tax;
    tax_class_local_var->tax_type = tax_type;
    tax_class_local_var->created_at = created_at;
    tax_class_local_var->modified_at = modified_at;
    tax_class_local_var->additional_fields = additional_fields;
    tax_class_local_var->custom_fields = custom_fields;

    tax_class_local_var->_library_owned = 1;
    return tax_class_local_var;
}

__attribute__((deprecated)) tax_class_t *tax_class_create(
    char *id,
    char *name,
    int avail,
    double tax,
    int tax_type,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_create_internal (
        id,
        name,
        avail,
        tax,
        tax_type,
        created_at,
        modified_at,
        additional_fields,
        custom_fields
        );
}

void tax_class_free(tax_class_t *tax_class) {
    if(NULL == tax_class){
        return ;
    }
    if(tax_class->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class->id) {
        free(tax_class->id);
        tax_class->id = NULL;
    }
    if (tax_class->name) {
        free(tax_class->name);
        tax_class->name = NULL;
    }
    if (tax_class->created_at) {
        a2_c_date_time_free(tax_class->created_at);
        tax_class->created_at = NULL;
    }
    if (tax_class->modified_at) {
        a2_c_date_time_free(tax_class->modified_at);
        tax_class->modified_at = NULL;
    }
    if (tax_class->additional_fields) {
        object_free(tax_class->additional_fields);
        tax_class->additional_fields = NULL;
    }
    if (tax_class->custom_fields) {
        object_free(tax_class->custom_fields);
        tax_class->custom_fields = NULL;
    }
    free(tax_class);
}

cJSON *tax_class_convertToJSON(tax_class_t *tax_class) {
    cJSON *item = cJSON_CreateObject();

    // tax_class->id
    if(tax_class->id) {
    if(cJSON_AddStringToObject(item, "id", tax_class->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_class->name
    if(tax_class->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class->avail
    if(tax_class->avail) {
    if(cJSON_AddBoolToObject(item, "avail", tax_class->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_class->tax
    if(tax_class->tax) {
    if(cJSON_AddNumberToObject(item, "tax", tax_class->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class->tax_type
    if(tax_class->tax_type) {
    if(cJSON_AddNumberToObject(item, "tax_type", tax_class->tax_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class->created_at
    if(tax_class->created_at) {
    cJSON *created_at_local_JSON = a2_c_date_time_convertToJSON(tax_class->created_at);
    if(created_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_at", created_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class->modified_at
    if(tax_class->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(tax_class->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class->additional_fields
    if(tax_class->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class->custom_fields
    if(tax_class->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class->custom_fields);
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

tax_class_t *tax_class_parseFromJSON(cJSON *tax_classJSON){

    tax_class_t *tax_class_local_var = NULL;

    // define the local variable for tax_class->created_at
    a2_c_date_time_t *created_at_local_nonprim = NULL;

    // define the local variable for tax_class->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // tax_class->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_class->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // tax_class->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // tax_class->tax_type
    cJSON *tax_type = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "tax_type");
    if (cJSON_IsNull(tax_type)) {
        tax_type = NULL;
    }
    if (tax_type) { 
    if(!cJSON_IsNumber(tax_type))
    {
    goto end; //Numeric
    }
    }

    // tax_class->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    created_at_local_nonprim = a2_c_date_time_parseFromJSON(created_at); //nonprimitive
    }

    // tax_class->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // tax_class->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_classJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_local_var = tax_class_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        avail ? avail->valueint : 0,
        tax ? tax->valuedouble : 0,
        tax_type ? tax_type->valuedouble : 0,
        created_at ? created_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_local_var;
end:
    if (created_at_local_nonprim) {
        a2_c_date_time_free(created_at_local_nonprim);
        created_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    return NULL;

}
