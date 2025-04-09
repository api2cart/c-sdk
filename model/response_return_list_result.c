#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_return_list_result.h"



static response_return_list_result_t *response_return_list_result_create_internal(
    int total_count,
    list_t *returns,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_return_list_result_t *response_return_list_result_local_var = malloc(sizeof(response_return_list_result_t));
    if (!response_return_list_result_local_var) {
        return NULL;
    }
    response_return_list_result_local_var->total_count = total_count;
    response_return_list_result_local_var->returns = returns;
    response_return_list_result_local_var->additional_fields = additional_fields;
    response_return_list_result_local_var->custom_fields = custom_fields;

    response_return_list_result_local_var->_library_owned = 1;
    return response_return_list_result_local_var;
}

__attribute__((deprecated)) response_return_list_result_t *response_return_list_result_create(
    int total_count,
    list_t *returns,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_return_list_result_create_internal (
        total_count,
        returns,
        additional_fields,
        custom_fields
        );
}

void response_return_list_result_free(response_return_list_result_t *response_return_list_result) {
    if(NULL == response_return_list_result){
        return ;
    }
    if(response_return_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_return_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_return_list_result->returns) {
        list_ForEach(listEntry, response_return_list_result->returns) {
            ModelReturn_free(listEntry->data);
        }
        list_freeList(response_return_list_result->returns);
        response_return_list_result->returns = NULL;
    }
    if (response_return_list_result->additional_fields) {
        object_free(response_return_list_result->additional_fields);
        response_return_list_result->additional_fields = NULL;
    }
    if (response_return_list_result->custom_fields) {
        object_free(response_return_list_result->custom_fields);
        response_return_list_result->custom_fields = NULL;
    }
    free(response_return_list_result);
}

cJSON *response_return_list_result_convertToJSON(response_return_list_result_t *response_return_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_return_list_result->total_count
    if(response_return_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_return_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_return_list_result->returns
    if(response_return_list_result->returns) {
    cJSON *returns = cJSON_AddArrayToObject(item, "returns");
    if(returns == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *returnsListEntry;
    if (response_return_list_result->returns) {
    list_ForEach(returnsListEntry, response_return_list_result->returns) {
    cJSON *itemLocal = ModelReturn_convertToJSON(returnsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(returns, itemLocal);
    }
    }
    }


    // response_return_list_result->additional_fields
    if(response_return_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_return_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_return_list_result->custom_fields
    if(response_return_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_return_list_result->custom_fields);
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

response_return_list_result_t *response_return_list_result_parseFromJSON(cJSON *response_return_list_resultJSON){

    response_return_list_result_t *response_return_list_result_local_var = NULL;

    // define the local list for response_return_list_result->returns
    list_t *returnsList = NULL;

    // response_return_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_return_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_return_list_result->returns
    cJSON *returns = cJSON_GetObjectItemCaseSensitive(response_return_list_resultJSON, "returns");
    if (cJSON_IsNull(returns)) {
        returns = NULL;
    }
    if (returns) { 
    cJSON *returns_local_nonprimitive = NULL;
    if(!cJSON_IsArray(returns)){
        goto end; //nonprimitive container
    }

    returnsList = list_createList();

    cJSON_ArrayForEach(returns_local_nonprimitive,returns )
    {
        if(!cJSON_IsObject(returns_local_nonprimitive)){
            goto end;
        }
        ModelReturn_t *returnsItem = ModelReturn_parseFromJSON(returns_local_nonprimitive);

        list_addElement(returnsList, returnsItem);
    }
    }

    // response_return_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_return_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_return_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_return_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_return_list_result_local_var = response_return_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        returns ? returnsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_return_list_result_local_var;
end:
    if (returnsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, returnsList) {
            ModelReturn_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(returnsList);
        returnsList = NULL;
    }
    return NULL;

}
