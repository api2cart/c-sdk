#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_category_list_result.h"



static response_category_list_result_t *response_category_list_result_create_internal(
    int categories_count,
    list_t *category,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_category_list_result_t *response_category_list_result_local_var = malloc(sizeof(response_category_list_result_t));
    if (!response_category_list_result_local_var) {
        return NULL;
    }
    response_category_list_result_local_var->categories_count = categories_count;
    response_category_list_result_local_var->category = category;
    response_category_list_result_local_var->additional_fields = additional_fields;
    response_category_list_result_local_var->custom_fields = custom_fields;

    response_category_list_result_local_var->_library_owned = 1;
    return response_category_list_result_local_var;
}

__attribute__((deprecated)) response_category_list_result_t *response_category_list_result_create(
    int categories_count,
    list_t *category,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_category_list_result_create_internal (
        categories_count,
        category,
        additional_fields,
        custom_fields
        );
}

void response_category_list_result_free(response_category_list_result_t *response_category_list_result) {
    if(NULL == response_category_list_result){
        return ;
    }
    if(response_category_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_category_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_category_list_result->category) {
        list_ForEach(listEntry, response_category_list_result->category) {
            category_free(listEntry->data);
        }
        list_freeList(response_category_list_result->category);
        response_category_list_result->category = NULL;
    }
    if (response_category_list_result->additional_fields) {
        object_free(response_category_list_result->additional_fields);
        response_category_list_result->additional_fields = NULL;
    }
    if (response_category_list_result->custom_fields) {
        object_free(response_category_list_result->custom_fields);
        response_category_list_result->custom_fields = NULL;
    }
    free(response_category_list_result);
}

cJSON *response_category_list_result_convertToJSON(response_category_list_result_t *response_category_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_category_list_result->categories_count
    if(response_category_list_result->categories_count) {
    if(cJSON_AddNumberToObject(item, "categories_count", response_category_list_result->categories_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_category_list_result->category
    if(response_category_list_result->category) {
    cJSON *category = cJSON_AddArrayToObject(item, "category");
    if(category == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *categoryListEntry;
    if (response_category_list_result->category) {
    list_ForEach(categoryListEntry, response_category_list_result->category) {
    cJSON *itemLocal = category_convertToJSON(categoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(category, itemLocal);
    }
    }
    }


    // response_category_list_result->additional_fields
    if(response_category_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_category_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_category_list_result->custom_fields
    if(response_category_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_category_list_result->custom_fields);
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

response_category_list_result_t *response_category_list_result_parseFromJSON(cJSON *response_category_list_resultJSON){

    response_category_list_result_t *response_category_list_result_local_var = NULL;

    // define the local list for response_category_list_result->category
    list_t *categoryList = NULL;

    // response_category_list_result->categories_count
    cJSON *categories_count = cJSON_GetObjectItemCaseSensitive(response_category_list_resultJSON, "categories_count");
    if (cJSON_IsNull(categories_count)) {
        categories_count = NULL;
    }
    if (categories_count) { 
    if(!cJSON_IsNumber(categories_count))
    {
    goto end; //Numeric
    }
    }

    // response_category_list_result->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(response_category_list_resultJSON, "category");
    if (cJSON_IsNull(category)) {
        category = NULL;
    }
    if (category) { 
    cJSON *category_local_nonprimitive = NULL;
    if(!cJSON_IsArray(category)){
        goto end; //nonprimitive container
    }

    categoryList = list_createList();

    cJSON_ArrayForEach(category_local_nonprimitive,category )
    {
        if(!cJSON_IsObject(category_local_nonprimitive)){
            goto end;
        }
        category_t *categoryItem = category_parseFromJSON(category_local_nonprimitive);

        list_addElement(categoryList, categoryItem);
    }
    }

    // response_category_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_category_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_category_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_category_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_category_list_result_local_var = response_category_list_result_create_internal (
        categories_count ? categories_count->valuedouble : 0,
        category ? categoryList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_category_list_result_local_var;
end:
    if (categoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, categoryList) {
            category_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(categoryList);
        categoryList = NULL;
    }
    return NULL;

}
