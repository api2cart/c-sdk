#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_attribute.h"



static store_attribute_t *store_attribute_create_internal(
    char *id,
    char *code,
    char *type,
    char *name,
    list_t *default_values,
    int position,
    int visible,
    int required,
    int system,
    list_t *values,
    char *store_id,
    char *lang_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    store_attribute_t *store_attribute_local_var = malloc(sizeof(store_attribute_t));
    if (!store_attribute_local_var) {
        return NULL;
    }
    store_attribute_local_var->id = id;
    store_attribute_local_var->code = code;
    store_attribute_local_var->type = type;
    store_attribute_local_var->name = name;
    store_attribute_local_var->default_values = default_values;
    store_attribute_local_var->position = position;
    store_attribute_local_var->visible = visible;
    store_attribute_local_var->required = required;
    store_attribute_local_var->system = system;
    store_attribute_local_var->values = values;
    store_attribute_local_var->store_id = store_id;
    store_attribute_local_var->lang_id = lang_id;
    store_attribute_local_var->additional_fields = additional_fields;
    store_attribute_local_var->custom_fields = custom_fields;

    store_attribute_local_var->_library_owned = 1;
    return store_attribute_local_var;
}

__attribute__((deprecated)) store_attribute_t *store_attribute_create(
    char *id,
    char *code,
    char *type,
    char *name,
    list_t *default_values,
    int position,
    int visible,
    int required,
    int system,
    list_t *values,
    char *store_id,
    char *lang_id,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return store_attribute_create_internal (
        id,
        code,
        type,
        name,
        default_values,
        position,
        visible,
        required,
        system,
        values,
        store_id,
        lang_id,
        additional_fields,
        custom_fields
        );
}

void store_attribute_free(store_attribute_t *store_attribute) {
    if(NULL == store_attribute){
        return ;
    }
    if(store_attribute->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "store_attribute_free");
        return ;
    }
    listEntry_t *listEntry;
    if (store_attribute->id) {
        free(store_attribute->id);
        store_attribute->id = NULL;
    }
    if (store_attribute->code) {
        free(store_attribute->code);
        store_attribute->code = NULL;
    }
    if (store_attribute->type) {
        free(store_attribute->type);
        store_attribute->type = NULL;
    }
    if (store_attribute->name) {
        free(store_attribute->name);
        store_attribute->name = NULL;
    }
    if (store_attribute->default_values) {
        list_ForEach(listEntry, store_attribute->default_values) {
            free(listEntry->data);
        }
        list_freeList(store_attribute->default_values);
        store_attribute->default_values = NULL;
    }
    if (store_attribute->values) {
        list_ForEach(listEntry, store_attribute->values) {
            free(listEntry->data);
        }
        list_freeList(store_attribute->values);
        store_attribute->values = NULL;
    }
    if (store_attribute->store_id) {
        free(store_attribute->store_id);
        store_attribute->store_id = NULL;
    }
    if (store_attribute->lang_id) {
        free(store_attribute->lang_id);
        store_attribute->lang_id = NULL;
    }
    if (store_attribute->additional_fields) {
        object_free(store_attribute->additional_fields);
        store_attribute->additional_fields = NULL;
    }
    if (store_attribute->custom_fields) {
        object_free(store_attribute->custom_fields);
        store_attribute->custom_fields = NULL;
    }
    free(store_attribute);
}

cJSON *store_attribute_convertToJSON(store_attribute_t *store_attribute) {
    cJSON *item = cJSON_CreateObject();

    // store_attribute->id
    if(store_attribute->id) {
    if(cJSON_AddStringToObject(item, "id", store_attribute->id) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->code
    if(store_attribute->code) {
    if(cJSON_AddStringToObject(item, "code", store_attribute->code) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->type
    if(store_attribute->type) {
    if(cJSON_AddStringToObject(item, "type", store_attribute->type) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->name
    if(store_attribute->name) {
    if(cJSON_AddStringToObject(item, "name", store_attribute->name) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->default_values
    if(store_attribute->default_values) {
    cJSON *default_values = cJSON_AddArrayToObject(item, "default_values");
    if(default_values == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *default_valuesListEntry;
    list_ForEach(default_valuesListEntry, store_attribute->default_values) {
    if(cJSON_AddStringToObject(default_values, "", default_valuesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_attribute->position
    if(store_attribute->position) {
    if(cJSON_AddNumberToObject(item, "position", store_attribute->position) == NULL) {
    goto fail; //Numeric
    }
    }


    // store_attribute->visible
    if(store_attribute->visible) {
    if(cJSON_AddBoolToObject(item, "visible", store_attribute->visible) == NULL) {
    goto fail; //Bool
    }
    }


    // store_attribute->required
    if(store_attribute->required) {
    if(cJSON_AddBoolToObject(item, "required", store_attribute->required) == NULL) {
    goto fail; //Bool
    }
    }


    // store_attribute->system
    if(store_attribute->system) {
    if(cJSON_AddBoolToObject(item, "system", store_attribute->system) == NULL) {
    goto fail; //Bool
    }
    }


    // store_attribute->values
    if(store_attribute->values) {
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *valuesListEntry;
    list_ForEach(valuesListEntry, store_attribute->values) {
    if(cJSON_AddStringToObject(values, "", valuesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // store_attribute->store_id
    if(store_attribute->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", store_attribute->store_id) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->lang_id
    if(store_attribute->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", store_attribute->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // store_attribute->additional_fields
    if(store_attribute->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(store_attribute->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // store_attribute->custom_fields
    if(store_attribute->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(store_attribute->custom_fields);
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

store_attribute_t *store_attribute_parseFromJSON(cJSON *store_attributeJSON){

    store_attribute_t *store_attribute_local_var = NULL;

    // define the local list for store_attribute->default_values
    list_t *default_valuesList = NULL;

    // define the local list for store_attribute->values
    list_t *valuesList = NULL;

    // store_attribute->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // store_attribute->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // store_attribute->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // store_attribute->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // store_attribute->default_values
    cJSON *default_values = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "default_values");
    if (cJSON_IsNull(default_values)) {
        default_values = NULL;
    }
    if (default_values) { 
    cJSON *default_values_local = NULL;
    if(!cJSON_IsArray(default_values)) {
        goto end;//primitive container
    }
    default_valuesList = list_createList();

    cJSON_ArrayForEach(default_values_local, default_values)
    {
        if(!cJSON_IsString(default_values_local))
        {
            goto end;
        }
        list_addElement(default_valuesList , strdup(default_values_local->valuestring));
    }
    }

    // store_attribute->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "position");
    if (cJSON_IsNull(position)) {
        position = NULL;
    }
    if (position) { 
    if(!cJSON_IsNumber(position))
    {
    goto end; //Numeric
    }
    }

    // store_attribute->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsBool(visible))
    {
    goto end; //Bool
    }
    }

    // store_attribute->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "required");
    if (cJSON_IsNull(required)) {
        required = NULL;
    }
    if (required) { 
    if(!cJSON_IsBool(required))
    {
    goto end; //Bool
    }
    }

    // store_attribute->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "system");
    if (cJSON_IsNull(system)) {
        system = NULL;
    }
    if (system) { 
    if(!cJSON_IsBool(system))
    {
    goto end; //Bool
    }
    }

    // store_attribute->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "values");
    if (cJSON_IsNull(values)) {
        values = NULL;
    }
    if (values) { 
    cJSON *values_local = NULL;
    if(!cJSON_IsArray(values)) {
        goto end;//primitive container
    }
    valuesList = list_createList();

    cJSON_ArrayForEach(values_local, values)
    {
        if(!cJSON_IsString(values_local))
        {
            goto end;
        }
        list_addElement(valuesList , strdup(values_local->valuestring));
    }
    }

    // store_attribute->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // store_attribute->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // store_attribute->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // store_attribute->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(store_attributeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    store_attribute_local_var = store_attribute_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        default_values ? default_valuesList : NULL,
        position ? position->valuedouble : 0,
        visible ? visible->valueint : 0,
        required ? required->valueint : 0,
        system ? system->valueint : 0,
        values ? valuesList : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return store_attribute_local_var;
end:
    if (default_valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, default_valuesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(default_valuesList);
        default_valuesList = NULL;
    }
    if (valuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, valuesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(valuesList);
        valuesList = NULL;
    }
    return NULL;

}
