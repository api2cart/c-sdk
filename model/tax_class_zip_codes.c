#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tax_class_zip_codes.h"



static tax_class_zip_codes_t *tax_class_zip_codes_create_internal(
    int is_range,
    list_t *range,
    list_t *fields,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    tax_class_zip_codes_t *tax_class_zip_codes_local_var = malloc(sizeof(tax_class_zip_codes_t));
    if (!tax_class_zip_codes_local_var) {
        return NULL;
    }
    tax_class_zip_codes_local_var->is_range = is_range;
    tax_class_zip_codes_local_var->range = range;
    tax_class_zip_codes_local_var->fields = fields;
    tax_class_zip_codes_local_var->additional_fields = additional_fields;
    tax_class_zip_codes_local_var->custom_fields = custom_fields;

    tax_class_zip_codes_local_var->_library_owned = 1;
    return tax_class_zip_codes_local_var;
}

__attribute__((deprecated)) tax_class_zip_codes_t *tax_class_zip_codes_create(
    int is_range,
    list_t *range,
    list_t *fields,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return tax_class_zip_codes_create_internal (
        is_range,
        range,
        fields,
        additional_fields,
        custom_fields
        );
}

void tax_class_zip_codes_free(tax_class_zip_codes_t *tax_class_zip_codes) {
    if(NULL == tax_class_zip_codes){
        return ;
    }
    if(tax_class_zip_codes->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tax_class_zip_codes_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tax_class_zip_codes->range) {
        list_ForEach(listEntry, tax_class_zip_codes->range) {
            free(listEntry->data);
        }
        list_freeList(tax_class_zip_codes->range);
        tax_class_zip_codes->range = NULL;
    }
    if (tax_class_zip_codes->fields) {
        list_ForEach(listEntry, tax_class_zip_codes->fields) {
            tax_class_zip_codes_range_free(listEntry->data);
        }
        list_freeList(tax_class_zip_codes->fields);
        tax_class_zip_codes->fields = NULL;
    }
    if (tax_class_zip_codes->additional_fields) {
        object_free(tax_class_zip_codes->additional_fields);
        tax_class_zip_codes->additional_fields = NULL;
    }
    if (tax_class_zip_codes->custom_fields) {
        object_free(tax_class_zip_codes->custom_fields);
        tax_class_zip_codes->custom_fields = NULL;
    }
    free(tax_class_zip_codes);
}

cJSON *tax_class_zip_codes_convertToJSON(tax_class_zip_codes_t *tax_class_zip_codes) {
    cJSON *item = cJSON_CreateObject();

    // tax_class_zip_codes->is_range
    if(tax_class_zip_codes->is_range) {
    if(cJSON_AddBoolToObject(item, "is_range", tax_class_zip_codes->is_range) == NULL) {
    goto fail; //Bool
    }
    }


    // tax_class_zip_codes->range
    if(tax_class_zip_codes->range) {
    cJSON *range = cJSON_AddArrayToObject(item, "range");
    if(range == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *rangeListEntry;
    list_ForEach(rangeListEntry, tax_class_zip_codes->range) {
    if(cJSON_AddStringToObject(range, "", rangeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // tax_class_zip_codes->fields
    if(tax_class_zip_codes->fields) {
    cJSON *fields = cJSON_AddArrayToObject(item, "fields");
    if(fields == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *fieldsListEntry;
    if (tax_class_zip_codes->fields) {
    list_ForEach(fieldsListEntry, tax_class_zip_codes->fields) {
    cJSON *itemLocal = tax_class_zip_codes_range_convertToJSON(fieldsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(fields, itemLocal);
    }
    }
    }


    // tax_class_zip_codes->additional_fields
    if(tax_class_zip_codes->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(tax_class_zip_codes->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // tax_class_zip_codes->custom_fields
    if(tax_class_zip_codes->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(tax_class_zip_codes->custom_fields);
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

tax_class_zip_codes_t *tax_class_zip_codes_parseFromJSON(cJSON *tax_class_zip_codesJSON){

    tax_class_zip_codes_t *tax_class_zip_codes_local_var = NULL;

    // define the local list for tax_class_zip_codes->range
    list_t *rangeList = NULL;

    // define the local list for tax_class_zip_codes->fields
    list_t *fieldsList = NULL;

    // tax_class_zip_codes->is_range
    cJSON *is_range = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codesJSON, "is_range");
    if (cJSON_IsNull(is_range)) {
        is_range = NULL;
    }
    if (is_range) { 
    if(!cJSON_IsBool(is_range))
    {
    goto end; //Bool
    }
    }

    // tax_class_zip_codes->range
    cJSON *range = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codesJSON, "range");
    if (cJSON_IsNull(range)) {
        range = NULL;
    }
    if (range) { 
    cJSON *range_local = NULL;
    if(!cJSON_IsArray(range)) {
        goto end;//primitive container
    }
    rangeList = list_createList();

    cJSON_ArrayForEach(range_local, range)
    {
        if(!cJSON_IsString(range_local))
        {
            goto end;
        }
        list_addElement(rangeList , strdup(range_local->valuestring));
    }
    }

    // tax_class_zip_codes->fields
    cJSON *fields = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codesJSON, "fields");
    if (cJSON_IsNull(fields)) {
        fields = NULL;
    }
    if (fields) { 
    cJSON *fields_local_nonprimitive = NULL;
    if(!cJSON_IsArray(fields)){
        goto end; //nonprimitive container
    }

    fieldsList = list_createList();

    cJSON_ArrayForEach(fields_local_nonprimitive,fields )
    {
        if(!cJSON_IsObject(fields_local_nonprimitive)){
            goto end;
        }
        tax_class_zip_codes_range_t *fieldsItem = tax_class_zip_codes_range_parseFromJSON(fields_local_nonprimitive);

        list_addElement(fieldsList, fieldsItem);
    }
    }

    // tax_class_zip_codes->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codesJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // tax_class_zip_codes->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(tax_class_zip_codesJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    tax_class_zip_codes_local_var = tax_class_zip_codes_create_internal (
        is_range ? is_range->valueint : 0,
        range ? rangeList : NULL,
        fields ? fieldsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return tax_class_zip_codes_local_var;
end:
    if (rangeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rangeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rangeList);
        rangeList = NULL;
    }
    if (fieldsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, fieldsList) {
            tax_class_zip_codes_range_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(fieldsList);
        fieldsList = NULL;
    }
    return NULL;

}
