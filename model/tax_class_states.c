#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_states.h"



static tax_class_states_t *tax_class_states_create_internal(
    char *id,
    double tax,
    int tax_type,
    char *name,
    char *code,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_states_t *tax_class_states_local_var = malloc(sizeof(tax_class_states_t));
    if (!tax_class_states_local_var) {
        return NULL;
    }
    tax_class_states_local_var->id = id;
    tax_class_states_local_var->tax = tax;
    tax_class_states_local_var->tax_type = tax_type;
    tax_class_states_local_var->name = name;
    tax_class_states_local_var->code = code;
    tax_class_states_local_var->zip_codes = zip_codes;
    tax_class_states_local_var->additional_fields = additional_fields;
    tax_class_states_local_var->custom_fields = custom_fields;

    tax_class_states_local_var->_library_owned = 1;
    return tax_class_states_local_var;
}

__attribute__((deprecated)) tax_class_states_t *tax_class_states_create(
    char *id,
    double tax,
    int tax_type,
    char *name,
    char *code,
    list_t *zip_codes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_states_create_internal (
        id,
        tax,
        tax_type,
        name,
        code,
        zip_codes,
        additional_fields,
        custom_fields
        );
}

void tax_class_states_free(tax_class_states_t *tax_class_states) {
    if(NULL == tax_class_states){
        return ;
    }
    if(tax_class_states->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_states_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_states->id) {
        free(tax_class_states->id);
        tax_class_states->id = NULL;
    }
    if (tax_class_states->name) {
        free(tax_class_states->name);
        tax_class_states->name = NULL;
    }
    if (tax_class_states->code) {
        free(tax_class_states->code);
        tax_class_states->code = NULL;
    }
    if (tax_class_states->zip_codes) {
        list_ForEach(listEntry, tax_class_states->zip_codes) {
            tax_class_zip_codes_free(listEntry->data);
        }
        list_freeList(tax_class_states->zip_codes);
        tax_class_states->zip_codes = NULL;
    }
    if (tax_class_states->additional_fields) {
        object_free(tax_class_states->additional_fields);
        tax_class_states->additional_fields = NULL;
    }
    if (tax_class_states->custom_fields) {
        object_free(tax_class_states->custom_fields);
        tax_class_states->custom_fields = NULL;
    }
    free(tax_class_states);
}

cJSON *tax_class_states_convertToJSON(tax_class_states_t *tax_class_states) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_states->id
    if(tax_class_states->id) {
    if(cJSON_AddStringToObject(item, "id", tax_class_states->id) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_states->tax
    if(tax_class_states->tax) {
    if(cJSON_AddNumberToObject(item, "tax", tax_class_states->tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_states->tax_type
    if(tax_class_states->tax_type) {
    if(cJSON_AddNumberToObject(item, "tax_type", tax_class_states->tax_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // tax_class_states->name
    if(tax_class_states->name) {
    if(cJSON_AddStringToObject(item, "name", tax_class_states->name) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_states->code
    if(tax_class_states->code) {
    if(cJSON_AddStringToObject(item, "code", tax_class_states->code) == NULL) {
    goto fail; //String
    }
    }


    // tax_class_states->zip_codes
    if(tax_class_states->zip_codes) {
    cJSON *zip_codes = cJSON_AddArrayToObject(item, "zip_codes");
    if(zip_codes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *zip_codesListEntry;
    if (tax_class_states->zip_codes) {
    list_ForEach(zip_codesListEntry, tax_class_states->zip_codes) {
    cJSON *itemLocal = tax_class_zip_codes_convertToJSON(zip_codesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(zip_codes, itemLocal);
    }
    }
    }


    // tax_class_states->additional_fields
    if(tax_class_states->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class_states->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class_states->custom_fields
    if(tax_class_states->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class_states->custom_fields);
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

tax_class_states_t *tax_class_states_parseFromJSON(cJSON *tax_class_statesJSON){

    tax_class_states_t *tax_class_states_local_var = NULL;

    // define the local list for tax_class_states->zip_codes
    list_t *zip_codesList = NULL;

    // tax_class_states->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tax_class_states->tax
    cJSON *tax = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "tax");
    if (cJSON_IsNull(tax)) {
        tax = NULL;
    }
    if (tax) { 
    if(!cJSON_IsNumber(tax))
    {
    goto end; //Numeric
    }
    }

    // tax_class_states->tax_type
    cJSON *tax_type = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "tax_type");
    if (cJSON_IsNull(tax_type)) {
        tax_type = NULL;
    }
    if (tax_type) { 
    if(!cJSON_IsNumber(tax_type))
    {
    goto end; //Numeric
    }
    }

    // tax_class_states->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tax_class_states->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // tax_class_states->zip_codes
    cJSON *zip_codes = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "zip_codes");
    if (cJSON_IsNull(zip_codes)) {
        zip_codes = NULL;
    }
    if (zip_codes) { 
    cJSON *zip_codes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(zip_codes)){
        goto end; //nonprimitive container
    }

    zip_codesList = list_createList();

    cJSON_ArrayForEach(zip_codes_local_nonprimitive,zip_codes )
    {
        if(!cJSON_IsObject(zip_codes_local_nonprimitive)){
            goto end;
        }
        tax_class_zip_codes_t *zip_codesItem = tax_class_zip_codes_parseFromJSON(zip_codes_local_nonprimitive);

        list_addElement(zip_codesList, zip_codesItem);
    }
    }

    // tax_class_states->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class_states->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_class_statesJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_states_local_var = tax_class_states_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tax ? tax->valuedouble : 0,
        tax_type ? tax_type->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        zip_codes ? zip_codesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_states_local_var;
end:
    if (zip_codesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, zip_codesList) {
            tax_class_zip_codes_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(zip_codesList);
        zip_codesList = NULL;
    }
    return NULL;

}
