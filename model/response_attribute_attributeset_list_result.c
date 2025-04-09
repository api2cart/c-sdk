#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_attribute_attributeset_list_result.h"



static response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result_create_internal(
    list_t *attribute_set,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result_local_var = malloc(sizeof(response_attribute_attributeset_list_result_t));
    if (!response_attribute_attributeset_list_result_local_var) {
        return NULL;
    }
    response_attribute_attributeset_list_result_local_var->attribute_set = attribute_set;
    response_attribute_attributeset_list_result_local_var->additional_fields = additional_fields;
    response_attribute_attributeset_list_result_local_var->custom_fields = custom_fields;

    response_attribute_attributeset_list_result_local_var->_library_owned = 1;
    return response_attribute_attributeset_list_result_local_var;
}

__attribute__((deprecated)) response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result_create(
    list_t *attribute_set,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_attribute_attributeset_list_result_create_internal (
        attribute_set,
        additional_fields,
        custom_fields
        );
}

void response_attribute_attributeset_list_result_free(response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result) {
    if(NULL == response_attribute_attributeset_list_result){
        return ;
    }
    if(response_attribute_attributeset_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_attribute_attributeset_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_attribute_attributeset_list_result->attribute_set) {
        list_ForEach(listEntry, response_attribute_attributeset_list_result->attribute_set) {
            store_attribute_attribute_set_free(listEntry->data);
        }
        list_freeList(response_attribute_attributeset_list_result->attribute_set);
        response_attribute_attributeset_list_result->attribute_set = NULL;
    }
    if (response_attribute_attributeset_list_result->additional_fields) {
        object_free(response_attribute_attributeset_list_result->additional_fields);
        response_attribute_attributeset_list_result->additional_fields = NULL;
    }
    if (response_attribute_attributeset_list_result->custom_fields) {
        object_free(response_attribute_attributeset_list_result->custom_fields);
        response_attribute_attributeset_list_result->custom_fields = NULL;
    }
    free(response_attribute_attributeset_list_result);
}

cJSON *response_attribute_attributeset_list_result_convertToJSON(response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_attribute_attributeset_list_result->attribute_set
    if(response_attribute_attributeset_list_result->attribute_set) {
    cJSON *attribute_set = cJSON_AddArrayToObject(item, "attribute_set");
    if(attribute_set == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *attribute_setListEntry;
    if (response_attribute_attributeset_list_result->attribute_set) {
    list_ForEach(attribute_setListEntry, response_attribute_attributeset_list_result->attribute_set) {
    cJSON *itemLocal = store_attribute_attribute_set_convertToJSON(attribute_setListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(attribute_set, itemLocal);
    }
    }
    }


    // response_attribute_attributeset_list_result->additional_fields
    if(response_attribute_attributeset_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_attribute_attributeset_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_attribute_attributeset_list_result->custom_fields
    if(response_attribute_attributeset_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_attribute_attributeset_list_result->custom_fields);
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

response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result_parseFromJSON(cJSON *response_attribute_attributeset_list_resultJSON){

    response_attribute_attributeset_list_result_t *response_attribute_attributeset_list_result_local_var = NULL;

    // define the local list for response_attribute_attributeset_list_result->attribute_set
    list_t *attribute_setList = NULL;

    // response_attribute_attributeset_list_result->attribute_set
    cJSON *attribute_set = cJSON_GetObjectItemCaseSensitive(response_attribute_attributeset_list_resultJSON, "attribute_set");
    if (cJSON_IsNull(attribute_set)) {
        attribute_set = NULL;
    }
    if (attribute_set) { 
    cJSON *attribute_set_local_nonprimitive = NULL;
    if(!cJSON_IsArray(attribute_set)){
        goto end; //nonprimitive container
    }

    attribute_setList = list_createList();

    cJSON_ArrayForEach(attribute_set_local_nonprimitive,attribute_set )
    {
        if(!cJSON_IsObject(attribute_set_local_nonprimitive)){
            goto end;
        }
        store_attribute_attribute_set_t *attribute_setItem = store_attribute_attribute_set_parseFromJSON(attribute_set_local_nonprimitive);

        list_addElement(attribute_setList, attribute_setItem);
    }
    }

    // response_attribute_attributeset_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_attribute_attributeset_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_attribute_attributeset_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_attribute_attributeset_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_attribute_attributeset_list_result_local_var = response_attribute_attributeset_list_result_create_internal (
        attribute_set ? attribute_setList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_attribute_attributeset_list_result_local_var;
end:
    if (attribute_setList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attribute_setList) {
            store_attribute_attribute_set_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attribute_setList);
        attribute_setList = NULL;
    }
    return NULL;

}
