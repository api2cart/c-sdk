#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_tax_class_list_result.h"



static response_tax_class_list_result_t *response_tax_class_list_result_create_internal(
    int total_count,
    list_t *tax_classes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_tax_class_list_result_t *response_tax_class_list_result_local_var = malloc(sizeof(response_tax_class_list_result_t));
    if (!response_tax_class_list_result_local_var) {
        return NULL;
    }
    response_tax_class_list_result_local_var->total_count = total_count;
    response_tax_class_list_result_local_var->tax_classes = tax_classes;
    response_tax_class_list_result_local_var->additional_fields = additional_fields;
    response_tax_class_list_result_local_var->custom_fields = custom_fields;

    response_tax_class_list_result_local_var->_library_owned = 1;
    return response_tax_class_list_result_local_var;
}

__attribute__((deprecated)) response_tax_class_list_result_t *response_tax_class_list_result_create(
    int total_count,
    list_t *tax_classes,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_tax_class_list_result_create_internal (
        total_count,
        tax_classes,
        additional_fields,
        custom_fields
        );
}

void response_tax_class_list_result_free(response_tax_class_list_result_t *response_tax_class_list_result) {
    if(NULL == response_tax_class_list_result){
        return ;
    }
    if(response_tax_class_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_tax_class_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_tax_class_list_result->tax_classes) {
        list_ForEach(listEntry, response_tax_class_list_result->tax_classes) {
            tax_class_free(listEntry->data);
        }
        list_freeList(response_tax_class_list_result->tax_classes);
        response_tax_class_list_result->tax_classes = NULL;
    }
    if (response_tax_class_list_result->additional_fields) {
        object_free(response_tax_class_list_result->additional_fields);
        response_tax_class_list_result->additional_fields = NULL;
    }
    if (response_tax_class_list_result->custom_fields) {
        object_free(response_tax_class_list_result->custom_fields);
        response_tax_class_list_result->custom_fields = NULL;
    }
    free(response_tax_class_list_result);
}

cJSON *response_tax_class_list_result_convertToJSON(response_tax_class_list_result_t *response_tax_class_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_tax_class_list_result->total_count
    if(response_tax_class_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_tax_class_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_tax_class_list_result->tax_classes
    if(response_tax_class_list_result->tax_classes) {
    cJSON *tax_classes = cJSON_AddArrayToObject(item, "tax_classes");
    if(tax_classes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tax_classesListEntry;
    if (response_tax_class_list_result->tax_classes) {
    list_ForEach(tax_classesListEntry, response_tax_class_list_result->tax_classes) {
    cJSON *itemLocal = tax_class_convertToJSON(tax_classesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tax_classes, itemLocal);
    }
    }
    }


    // response_tax_class_list_result->additional_fields
    if(response_tax_class_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_tax_class_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_tax_class_list_result->custom_fields
    if(response_tax_class_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_tax_class_list_result->custom_fields);
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

response_tax_class_list_result_t *response_tax_class_list_result_parseFromJSON(cJSON *response_tax_class_list_resultJSON){

    response_tax_class_list_result_t *response_tax_class_list_result_local_var = NULL;

    // define the local list for response_tax_class_list_result->tax_classes
    list_t *tax_classesList = NULL;

    // response_tax_class_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_tax_class_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_tax_class_list_result->tax_classes
    cJSON *tax_classes = cJSON_GetObjectItemCaseSensitive(response_tax_class_list_resultJSON, "tax_classes");
    if (cJSON_IsNull(tax_classes)) {
        tax_classes = NULL;
    }
    if (tax_classes) { 
    cJSON *tax_classes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tax_classes)){
        goto end; //nonprimitive container
    }

    tax_classesList = list_createList();

    cJSON_ArrayForEach(tax_classes_local_nonprimitive,tax_classes )
    {
        if(!cJSON_IsObject(tax_classes_local_nonprimitive)){
            goto end;
        }
        tax_class_t *tax_classesItem = tax_class_parseFromJSON(tax_classes_local_nonprimitive);

        list_addElement(tax_classesList, tax_classesItem);
    }
    }

    // response_tax_class_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_tax_class_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_tax_class_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_tax_class_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_tax_class_list_result_local_var = response_tax_class_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        tax_classes ? tax_classesList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_tax_class_list_result_local_var;
end:
    if (tax_classesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tax_classesList) {
            tax_class_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tax_classesList);
        tax_classesList = NULL;
    }
    return NULL;

}
