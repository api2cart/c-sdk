#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_find_200_response_result.h"



static category_find_200_response_result_t *category_find_200_response_result_create_internal(
    list_t *category
    ) {
    category_find_200_response_result_t *category_find_200_response_result_local_var = malloc(sizeof(category_find_200_response_result_t));
    if (!category_find_200_response_result_local_var) {
        return NULL;
    }
    category_find_200_response_result_local_var->category = category;

    category_find_200_response_result_local_var->_library_owned = 1;
    return category_find_200_response_result_local_var;
}

__attribute__((deprecated)) category_find_200_response_result_t *category_find_200_response_result_create(
    list_t *category
    ) {
    return category_find_200_response_result_create_internal (
        category
        );
}

void category_find_200_response_result_free(category_find_200_response_result_t *category_find_200_response_result) {
    if(NULL == category_find_200_response_result){
        return ;
    }
    if(category_find_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_find_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_find_200_response_result->category) {
        list_ForEach(listEntry, category_find_200_response_result->category) {
            category_find_200_response_result_category_inner_free(listEntry->data);
        }
        list_freeList(category_find_200_response_result->category);
        category_find_200_response_result->category = NULL;
    }
    free(category_find_200_response_result);
}

cJSON *category_find_200_response_result_convertToJSON(category_find_200_response_result_t *category_find_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_find_200_response_result->category
    if(category_find_200_response_result->category) {
    cJSON *category = cJSON_AddArrayToObject(item, "category");
    if(category == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *categoryListEntry;
    if (category_find_200_response_result->category) {
    list_ForEach(categoryListEntry, category_find_200_response_result->category) {
    cJSON *itemLocal = category_find_200_response_result_category_inner_convertToJSON(categoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(category, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

category_find_200_response_result_t *category_find_200_response_result_parseFromJSON(cJSON *category_find_200_response_resultJSON){

    category_find_200_response_result_t *category_find_200_response_result_local_var = NULL;

    // define the local list for category_find_200_response_result->category
    list_t *categoryList = NULL;

    // category_find_200_response_result->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(category_find_200_response_resultJSON, "category");
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
        category_find_200_response_result_category_inner_t *categoryItem = category_find_200_response_result_category_inner_parseFromJSON(category_local_nonprimitive);

        list_addElement(categoryList, categoryItem);
    }
    }


    category_find_200_response_result_local_var = category_find_200_response_result_create_internal (
        category ? categoryList : NULL
        );

    return category_find_200_response_result_local_var;
end:
    if (categoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, categoryList) {
            category_find_200_response_result_category_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(categoryList);
        categoryList = NULL;
    }
    return NULL;

}
