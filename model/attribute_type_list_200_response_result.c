#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_type_list_200_response_result.h"



static attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_create_internal(
    list_t *attribute_type
    ) {
    attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_local_var = malloc(sizeof(attribute_type_list_200_response_result_t));
    if (!attribute_type_list_200_response_result_local_var) {
        return NULL;
    }
    attribute_type_list_200_response_result_local_var->attribute_type = attribute_type;

    attribute_type_list_200_response_result_local_var->_library_owned = 1;
    return attribute_type_list_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_create(
    list_t *attribute_type
    ) {
    return attribute_type_list_200_response_result_create_internal (
        attribute_type
        );
}

void attribute_type_list_200_response_result_free(attribute_type_list_200_response_result_t *attribute_type_list_200_response_result) {
    if(NULL == attribute_type_list_200_response_result){
        return ;
    }
    if(attribute_type_list_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_type_list_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_type_list_200_response_result->attribute_type) {
        list_ForEach(listEntry, attribute_type_list_200_response_result->attribute_type) {
            free(listEntry->data);
        }
        list_freeList(attribute_type_list_200_response_result->attribute_type);
        attribute_type_list_200_response_result->attribute_type = NULL;
    }
    free(attribute_type_list_200_response_result);
}

cJSON *attribute_type_list_200_response_result_convertToJSON(attribute_type_list_200_response_result_t *attribute_type_list_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_type_list_200_response_result->attribute_type
    if(attribute_type_list_200_response_result->attribute_type) {
    cJSON *attribute_type = cJSON_AddArrayToObject(item, "attribute_type");
    if(attribute_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *attribute_typeListEntry;
    list_ForEach(attribute_typeListEntry, attribute_type_list_200_response_result->attribute_type) {
    if(cJSON_AddStringToObject(attribute_type, "", attribute_typeListEntry->data) == NULL)
    {
        goto fail;
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

attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_parseFromJSON(cJSON *attribute_type_list_200_response_resultJSON){

    attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_local_var = NULL;

    // define the local list for attribute_type_list_200_response_result->attribute_type
    list_t *attribute_typeList = NULL;

    // attribute_type_list_200_response_result->attribute_type
    cJSON *attribute_type = cJSON_GetObjectItemCaseSensitive(attribute_type_list_200_response_resultJSON, "attribute_type");
    if (cJSON_IsNull(attribute_type)) {
        attribute_type = NULL;
    }
    if (attribute_type) { 
    cJSON *attribute_type_local = NULL;
    if(!cJSON_IsArray(attribute_type)) {
        goto end;//primitive container
    }
    attribute_typeList = list_createList();

    cJSON_ArrayForEach(attribute_type_local, attribute_type)
    {
        if(!cJSON_IsString(attribute_type_local))
        {
            goto end;
        }
        list_addElement(attribute_typeList , strdup(attribute_type_local->valuestring));
    }
    }


    attribute_type_list_200_response_result_local_var = attribute_type_list_200_response_result_create_internal (
        attribute_type ? attribute_typeList : NULL
        );

    return attribute_type_list_200_response_result_local_var;
end:
    if (attribute_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attribute_typeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attribute_typeList);
        attribute_typeList = NULL;
    }
    return NULL;

}
