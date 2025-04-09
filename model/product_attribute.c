#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_attribute.h"



static product_attribute_t *product_attribute_create_internal(
    char *attribute_id,
    char *code,
    char *name,
    char *lang_id,
    char *store_id,
    char *value,
    int required,
    int visible,
    char *type,
    int position,
    char *attribute_group_id,
    char *product_id,
    char *variant_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_attribute_t *product_attribute_local_var = malloc(sizeof(product_attribute_t));
    if (!product_attribute_local_var) {
        return NULL;
    }
    product_attribute_local_var->attribute_id = attribute_id;
    product_attribute_local_var->code = code;
    product_attribute_local_var->name = name;
    product_attribute_local_var->lang_id = lang_id;
    product_attribute_local_var->store_id = store_id;
    product_attribute_local_var->value = value;
    product_attribute_local_var->required = required;
    product_attribute_local_var->visible = visible;
    product_attribute_local_var->type = type;
    product_attribute_local_var->position = position;
    product_attribute_local_var->attribute_group_id = attribute_group_id;
    product_attribute_local_var->product_id = product_id;
    product_attribute_local_var->variant_id = variant_id;
    product_attribute_local_var->additional_fields = additional_fields;
    product_attribute_local_var->custom_fields = custom_fields;

    product_attribute_local_var->_library_owned = 1;
    return product_attribute_local_var;
}

__attribute__((deprecated)) product_attribute_t *product_attribute_create(
    char *attribute_id,
    char *code,
    char *name,
    char *lang_id,
    char *store_id,
    char *value,
    int required,
    int visible,
    char *type,
    int position,
    char *attribute_group_id,
    char *product_id,
    char *variant_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_attribute_create_internal (
        attribute_id,
        code,
        name,
        lang_id,
        store_id,
        value,
        required,
        visible,
        type,
        position,
        attribute_group_id,
        product_id,
        variant_id,
        additional_fields,
        custom_fields
        );
}

void product_attribute_free(product_attribute_t *product_attribute) {
    if(NULL == product_attribute){
        return ;
    }
    if(product_attribute->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_attribute_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_attribute->attribute_id) {
        free(product_attribute->attribute_id);
        product_attribute->attribute_id = NULL;
    }
    if (product_attribute->code) {
        free(product_attribute->code);
        product_attribute->code = NULL;
    }
    if (product_attribute->name) {
        free(product_attribute->name);
        product_attribute->name = NULL;
    }
    if (product_attribute->lang_id) {
        free(product_attribute->lang_id);
        product_attribute->lang_id = NULL;
    }
    if (product_attribute->store_id) {
        free(product_attribute->store_id);
        product_attribute->store_id = NULL;
    }
    if (product_attribute->value) {
        free(product_attribute->value);
        product_attribute->value = NULL;
    }
    if (product_attribute->type) {
        free(product_attribute->type);
        product_attribute->type = NULL;
    }
    if (product_attribute->attribute_group_id) {
        free(product_attribute->attribute_group_id);
        product_attribute->attribute_group_id = NULL;
    }
    if (product_attribute->product_id) {
        free(product_attribute->product_id);
        product_attribute->product_id = NULL;
    }
    if (product_attribute->variant_id) {
        free(product_attribute->variant_id);
        product_attribute->variant_id = NULL;
    }
    if (product_attribute->additional_fields) {
        object_free(product_attribute->additional_fields);
        product_attribute->additional_fields = NULL;
    }
    if (product_attribute->custom_fields) {
        object_free(product_attribute->custom_fields);
        product_attribute->custom_fields = NULL;
    }
    free(product_attribute);
}

cJSON *product_attribute_convertToJSON(product_attribute_t *product_attribute) {
    cJSON *item = cJSON_CreateObject();

    // product_attribute->attribute_id
    if(product_attribute->attribute_id) {
    if(cJSON_AddStringToObject(item, "attribute_id", product_attribute->attribute_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->code
    if(product_attribute->code) {
    if(cJSON_AddStringToObject(item, "code", product_attribute->code) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->name
    if(product_attribute->name) {
    if(cJSON_AddStringToObject(item, "name", product_attribute->name) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->lang_id
    if(product_attribute->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_attribute->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->store_id
    if(product_attribute->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_attribute->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->value
    if(product_attribute->value) {
    if(cJSON_AddStringToObject(item, "value", product_attribute->value) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->required
    if(product_attribute->required) {
    if(cJSON_AddBoolToObject(item, "required", product_attribute->required) == NULL) {
    goto fail; //Bool
    }
    }


    // product_attribute->visible
    if(product_attribute->visible) {
    if(cJSON_AddBoolToObject(item, "visible", product_attribute->visible) == NULL) {
    goto fail; //Bool
    }
    }


    // product_attribute->type
    if(product_attribute->type) {
    if(cJSON_AddStringToObject(item, "type", product_attribute->type) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->position
    if(product_attribute->position) {
    if(cJSON_AddNumberToObject(item, "position", product_attribute->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_attribute->attribute_group_id
    if(product_attribute->attribute_group_id) {
    if(cJSON_AddStringToObject(item, "attribute_group_id", product_attribute->attribute_group_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->product_id
    if(product_attribute->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_attribute->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->variant_id
    if(product_attribute->variant_id) {
    if(cJSON_AddStringToObject(item, "variant_id", product_attribute->variant_id) == NULL) {
    goto fail; //String
    }
    }


    // product_attribute->additional_fields
    if(product_attribute->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product_attribute->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_attribute->custom_fields
    if(product_attribute->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product_attribute->custom_fields);
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

product_attribute_t *product_attribute_parseFromJSON(cJSON *product_attributeJSON){

    product_attribute_t *product_attribute_local_var = NULL;

    // product_attribute->attribute_id
    cJSON *attribute_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "attribute_id");
    if (cJSON_IsNull(attribute_id)) {
        attribute_id = NULL;
    }
    if (attribute_id) { 
    if(!cJSON_IsString(attribute_id) && !cJSON_IsNull(attribute_id))
    {
    goto end; //String
    }
    }

    // product_attribute->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // product_attribute->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_attribute->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_attribute->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_attribute->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // product_attribute->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "required");
    if (cJSON_IsNull(required)) {
        required = NULL;
    }
    if (required) { 
    if(!cJSON_IsBool(required))
    {
    goto end; //Bool
    }
    }

    // product_attribute->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsBool(visible))
    {
    goto end; //Bool
    }
    }

    // product_attribute->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_attribute->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // product_attribute->attribute_group_id
    cJSON *attribute_group_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "attribute_group_id");
    if (cJSON_IsNull(attribute_group_id)) {
        attribute_group_id = NULL;
    }
    if (attribute_group_id) { 
    if(!cJSON_IsString(attribute_group_id) && !cJSON_IsNull(attribute_group_id))
    {
    goto end; //String
    }
    }

    // product_attribute->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_attribute->variant_id
    cJSON *variant_id = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "variant_id");
    if (cJSON_IsNull(variant_id)) {
        variant_id = NULL;
    }
    if (variant_id) { 
    if(!cJSON_IsString(variant_id) && !cJSON_IsNull(variant_id))
    {
    goto end; //String
    }
    }

    // product_attribute->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product_attribute->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(product_attributeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_attribute_local_var = product_attribute_create_internal (
        attribute_id && !cJSON_IsNull(attribute_id) ? strdup(attribute_id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        required ? required->valueint : 0,
        visible ? visible->valueint : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        position ? position->valuedouble : 0,
        attribute_group_id && !cJSON_IsNull(attribute_group_id) ? strdup(attribute_group_id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        variant_id && !cJSON_IsNull(variant_id) ? strdup(variant_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_attribute_local_var;
end:
    return NULL;

}
