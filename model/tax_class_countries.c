#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_countries.h"



static tax_class_countries_t *tax_class_countries_create_internal(
    char *id,
    char *name,
    char *code,
    double tax,
    int tax_type,
    list_t *states,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_countries_t *tax_class_countries_local_var = malloc(sizeof(tax_class_countries_t));
    if (!tax_class_countries_local_var) {
        return NULL;
    }
    tax_class_countries_local_var->id = id;
    tax_class_countries_local_var->name = name;
    tax_class_countries_local_var->code = code;
    tax_class_countries_local_var->tax = tax;
    tax_class_countries_local_var->tax_type = tax_type;
    tax_class_countries_local_var->states = states;
    tax_class_countries_local_var->additional_fields = additional_fields;
    tax_class_countries_local_var->custom_fields = custom_fields;

    tax_class_countries_local_var->_library_owned = 1;
    return tax_class_countries_local_var;
}

__attribute__((deprecated)) tax_class_countries_t *tax_class_countries_create(
    char *id,
    char *name,
    char *code,
    double tax,
    int tax_type,
    list_t *states,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_countries_create_internal (
        id,
        name,
        code,
        tax,
        tax_type,
        states,
        additional_fields,
        custom_fields
        );
}

void tax_class_countries_free(tax_class_countries_t *tax_class_countries) {
    if(NULL == tax_class_countries){
        return ;
    }
    if(tax_class_countries->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_countries_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_countries->id) {
        free(tax_class_countries->id);
        tax_class_countries->id = NULL;
    }
    if (tax_class_countries->name) {
        free(tax_class_countries->name);
        tax_class_countries->name = NULL;
    }
    if (tax_class_countries->code) {
        free(tax_class_countries->code);
        tax_class_countries->code = NULL;
    }
    if (tax_class_countries->states) {
        list_ForEach(listEntry, tax_class_countries->states) {
            tax_class_states_free(listEntry->data);
        }
        list_freeList(tax_class_countries->states);
        tax_class_countries->states = NULL;
    }
    if (tax_class_countries->additional_fields) {
        object_free(tax_class_countries->additional_fields);
        tax_class_countries->additional_fields = NULL;
    }
    if (tax_class_countries->custom_fields) {
        object_free(tax_class_countries->custom_fields);
        tax_class_countries->custom_fields = NULL;
    }
    free(tax_class_countries);
}

cJSON *tax_class_countries_convertToJSON(tax_class_countries_t *tax_class_countries) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_countries->id
    if(tax_class_countries->id) {
    if(cJSON_AddStringToObject(item, "id", tax_class_countries->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_countries->name
    if(tax_class_countries->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class_countries->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_countries->code
    if(tax_class_countries->code) {
    if(cJSON_AddStringToObject(item, "code", tax_class_countries->code) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_countries->tax
    if(tax_class_countries->tax) {
    if(cJSON_AddNumberToObject(item, "tax", tax_class_countries->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_countries->tax_type
    if(tax_class_countries->tax_type) {
    if(cJSON_AddNumberToObject(item, "tax_type", tax_class_countries->tax_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_countries->states
    if(tax_class_countries->states) {
    cJSON *states = cJSON_AddArrayToObject(item, "states");
    if(states == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *statesListEntry;
    if (tax_class_countries->states) {
    list_ForEach(statesListEntry, tax_class_countries->states) {
    cJSON *itemLocal = tax_class_states_convertToJSON(statesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(states, itemLocal);
    }
    }
    }


    // tax_class_countries->additional_fields
    if(tax_class_countries->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class_countries->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class_countries->custom_fields
    if(tax_class_countries->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class_countries->custom_fields);
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

tax_class_countries_t *tax_class_countries_parseFromJSON(cJSON *tax_class_countriesJSON){

    tax_class_countries_t *tax_class_countries_local_var = NULL;

    // define the local list for tax_class_countries->states
    list_t *statesList = NULL;

    // tax_class_countries->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_class_countries->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class_countries->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // tax_class_countries->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // tax_class_countries->tax_type
    cJSON *tax_type = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "tax_type");
    if (cJSON_IsNull(tax_type)) {
        tax_type = NULL;
    }
    if (tax_type) { 
    if(!cJSON_IsNumber(tax_type))
    {
    goto end; //Numeric
    }
    }

    // tax_class_countries->states
    cJSON *states = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "states");
    if (cJSON_IsNull(states)) {
        states = NULL;
    }
    if (states) { 
    cJSON *states_local_nonprimitive = NULL;
    if(!cJSON_IsArray(states)){
        goto end; //nonprimitive container
    }

    statesList = list_createList();

    cJSON_ArrayForEach(states_local_nonprimitive,states )
    {
        if(!cJSON_IsObject(states_local_nonprimitive)){
            goto end;
        }
        tax_class_states_t *statesItem = tax_class_states_parseFromJSON(states_local_nonprimitive);

        list_addElement(statesList, statesItem);
    }
    }

    // tax_class_countries->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class_countries->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_class_countriesJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_countries_local_var = tax_class_countries_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        tax ? tax->valuedouble : 0,
        tax_type ? tax_type->valuedouble : 0,
        states ? statesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_countries_local_var;
end:
    if (statesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, statesList) {
            tax_class_states_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(statesList);
        statesList = NULL;
    }
    return NULL;

}
