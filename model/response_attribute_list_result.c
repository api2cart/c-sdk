#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_attribute_list_result.h"



static response_attribute_list_result_t *response_attribute_list_result_create_internal(
    int attributes_count,
    list_t *attribute,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_attribute_list_result_t *response_attribute_list_result_local_var = malloc(sizeof(response_attribute_list_result_t));
    if (!response_attribute_list_result_local_var) {
        return NULL;
    }
    response_attribute_list_result_local_var->attributes_count = attributes_count;
    response_attribute_list_result_local_var->attribute = attribute;
    response_attribute_list_result_local_var->additional_fields = additional_fields;
    response_attribute_list_result_local_var->custom_fields = custom_fields;

    response_attribute_list_result_local_var->_library_owned = 1;
    return response_attribute_list_result_local_var;
}

__attribute__((deprecated)) response_attribute_list_result_t *response_attribute_list_result_create(
    int attributes_count,
    list_t *attribute,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_attribute_list_result_create_internal (
        attributes_count,
        attribute,
        additional_fields,
        custom_fields
        );
}

void response_attribute_list_result_free(response_attribute_list_result_t *response_attribute_list_result) {
    if(NULL == response_attribute_list_result){
        return ;
    }
    if(response_attribute_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_attribute_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_attribute_list_result->attribute) {
        list_ForEach(listEntry, response_attribute_list_result->attribute) {
            store_attribute_free(listEntry->data);
        }
        list_freeList(response_attribute_list_result->attribute);
        response_attribute_list_result->attribute = NULL;
    }
    if (response_attribute_list_result->additional_fields) {
        object_free(response_attribute_list_result->additional_fields);
        response_attribute_list_result->additional_fields = NULL;
    }
    if (response_attribute_list_result->custom_fields) {
        object_free(response_attribute_list_result->custom_fields);
        response_attribute_list_result->custom_fields = NULL;
    }
    free(response_attribute_list_result);
}

cJSON *response_attribute_list_result_convertToJSON(response_attribute_list_result_t *response_attribute_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_attribute_list_result->attributes_count
    if(response_attribute_list_result->attributes_count) {
    if(cJSON_AddNumberToObject(item, "attributes_count", response_attribute_list_result->attributes_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_attribute_list_result->attribute
    if(response_attribute_list_result->attribute) {
    cJSON *attribute = cJSON_AddArrayToObject(item, "attribute");
    if(attribute == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *attributeListEntry;
    if (response_attribute_list_result->attribute) {
    list_ForEach(attributeListEntry, response_attribute_list_result->attribute) {
    cJSON *itemLocal = store_attribute_convertToJSON(attributeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(attribute, itemLocal);
    }
    }
    }


    // response_attribute_list_result->additional_fields
    if(response_attribute_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_attribute_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_attribute_list_result->custom_fields
    if(response_attribute_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_attribute_list_result->custom_fields);
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

response_attribute_list_result_t *response_attribute_list_result_parseFromJSON(cJSON *response_attribute_list_resultJSON){

    response_attribute_list_result_t *response_attribute_list_result_local_var = NULL;

    // define the local list for response_attribute_list_result->attribute
    list_t *attributeList = NULL;

    // response_attribute_list_result->attributes_count
    cJSON *attributes_count = cJSON_GetObjectItemCaseSensitive(response_attribute_list_resultJSON, "attributes_count");
    if (cJSON_IsNull(attributes_count)) {
        attributes_count = NULL;
    }
    if (attributes_count) { 
    if(!cJSON_IsNumber(attributes_count))
    {
    goto end; //Numeric
    }
    }

    // response_attribute_list_result->attribute
    cJSON *attribute = cJSON_GetObjectItemCaseSensitive(response_attribute_list_resultJSON, "attribute");
    if (cJSON_IsNull(attribute)) {
        attribute = NULL;
    }
    if (attribute) { 
    cJSON *attribute_local_nonprimitive = NULL;
    if(!cJSON_IsArray(attribute)){
        goto end; //nonprimitive container
    }

    attributeList = list_createList();

    cJSON_ArrayForEach(attribute_local_nonprimitive,attribute )
    {
        if(!cJSON_IsObject(attribute_local_nonprimitive)){
            goto end;
        }
        store_attribute_t *attributeItem = store_attribute_parseFromJSON(attribute_local_nonprimitive);

        list_addElement(attributeList, attributeItem);
    }
    }

    // response_attribute_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_attribute_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_attribute_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_attribute_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_attribute_list_result_local_var = response_attribute_list_result_create_internal (
        attributes_count ? attributes_count->valuedouble : 0,
        attribute ? attributeList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_attribute_list_result_local_var;
end:
    if (attributeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attributeList) {
            store_attribute_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attributeList);
        attributeList = NULL;
    }
    return NULL;

}
