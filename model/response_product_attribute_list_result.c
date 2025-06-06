#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_product_attribute_list_result.h"



static response_product_attribute_list_result_t *response_product_attribute_list_result_create_internal(
    list_t *attribute,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_product_attribute_list_result_t *response_product_attribute_list_result_local_var = malloc(sizeof(response_product_attribute_list_result_t));
    if (!response_product_attribute_list_result_local_var) {
        return NULL;
    }
    response_product_attribute_list_result_local_var->attribute = attribute;
    response_product_attribute_list_result_local_var->additional_fields = additional_fields;
    response_product_attribute_list_result_local_var->custom_fields = custom_fields;

    response_product_attribute_list_result_local_var->_library_owned = 1;
    return response_product_attribute_list_result_local_var;
}

__attribute__((deprecated)) response_product_attribute_list_result_t *response_product_attribute_list_result_create(
    list_t *attribute,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_product_attribute_list_result_create_internal (
        attribute,
        additional_fields,
        custom_fields
        );
}

void response_product_attribute_list_result_free(response_product_attribute_list_result_t *response_product_attribute_list_result) {
    if(NULL == response_product_attribute_list_result){
        return ;
    }
    if(response_product_attribute_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_product_attribute_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_product_attribute_list_result->attribute) {
        list_ForEach(listEntry, response_product_attribute_list_result->attribute) {
            product_attribute_free(listEntry->data);
        }
        list_freeList(response_product_attribute_list_result->attribute);
        response_product_attribute_list_result->attribute = NULL;
    }
    if (response_product_attribute_list_result->additional_fields) {
        object_free(response_product_attribute_list_result->additional_fields);
        response_product_attribute_list_result->additional_fields = NULL;
    }
    if (response_product_attribute_list_result->custom_fields) {
        object_free(response_product_attribute_list_result->custom_fields);
        response_product_attribute_list_result->custom_fields = NULL;
    }
    free(response_product_attribute_list_result);
}

cJSON *response_product_attribute_list_result_convertToJSON(response_product_attribute_list_result_t *response_product_attribute_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_product_attribute_list_result->attribute
    if(response_product_attribute_list_result->attribute) {
    cJSON *attribute = cJSON_AddArrayToObject(item, "attribute");
    if(attribute == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *attributeListEntry;
    if (response_product_attribute_list_result->attribute) {
    list_ForEach(attributeListEntry, response_product_attribute_list_result->attribute) {
    cJSON *itemLocal = product_attribute_convertToJSON(attributeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(attribute, itemLocal);
    }
    }
    }


    // response_product_attribute_list_result->additional_fields
    if(response_product_attribute_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_product_attribute_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_product_attribute_list_result->custom_fields
    if(response_product_attribute_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_product_attribute_list_result->custom_fields);
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

response_product_attribute_list_result_t *response_product_attribute_list_result_parseFromJSON(cJSON *response_product_attribute_list_resultJSON){

    response_product_attribute_list_result_t *response_product_attribute_list_result_local_var = NULL;

    // define the local list for response_product_attribute_list_result->attribute
    list_t *attributeList = NULL;

    // response_product_attribute_list_result->attribute
    cJSON *attribute = cJSON_GetObjectItemCaseSensitive(response_product_attribute_list_resultJSON, "attribute");
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
        product_attribute_t *attributeItem = product_attribute_parseFromJSON(attribute_local_nonprimitive);

        list_addElement(attributeList, attributeItem);
    }
    }

    // response_product_attribute_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_product_attribute_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_product_attribute_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_product_attribute_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_product_attribute_list_result_local_var = response_product_attribute_list_result_create_internal (
        attribute ? attributeList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_product_attribute_list_result_local_var;
end:
    if (attributeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attributeList) {
            product_attribute_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attributeList);
        attributeList = NULL;
    }
    return NULL;

}
