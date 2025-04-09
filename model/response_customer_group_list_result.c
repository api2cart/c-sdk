#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_customer_group_list_result.h"



static response_customer_group_list_result_t *response_customer_group_list_result_create_internal(
    int group_count,
    list_t *group,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_customer_group_list_result_t *response_customer_group_list_result_local_var = malloc(sizeof(response_customer_group_list_result_t));
    if (!response_customer_group_list_result_local_var) {
        return NULL;
    }
    response_customer_group_list_result_local_var->group_count = group_count;
    response_customer_group_list_result_local_var->group = group;
    response_customer_group_list_result_local_var->additional_fields = additional_fields;
    response_customer_group_list_result_local_var->custom_fields = custom_fields;

    response_customer_group_list_result_local_var->_library_owned = 1;
    return response_customer_group_list_result_local_var;
}

__attribute__((deprecated)) response_customer_group_list_result_t *response_customer_group_list_result_create(
    int group_count,
    list_t *group,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_customer_group_list_result_create_internal (
        group_count,
        group,
        additional_fields,
        custom_fields
        );
}

void response_customer_group_list_result_free(response_customer_group_list_result_t *response_customer_group_list_result) {
    if(NULL == response_customer_group_list_result){
        return ;
    }
    if(response_customer_group_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_customer_group_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_customer_group_list_result->group) {
        list_ForEach(listEntry, response_customer_group_list_result->group) {
            customer_group_free(listEntry->data);
        }
        list_freeList(response_customer_group_list_result->group);
        response_customer_group_list_result->group = NULL;
    }
    if (response_customer_group_list_result->additional_fields) {
        object_free(response_customer_group_list_result->additional_fields);
        response_customer_group_list_result->additional_fields = NULL;
    }
    if (response_customer_group_list_result->custom_fields) {
        object_free(response_customer_group_list_result->custom_fields);
        response_customer_group_list_result->custom_fields = NULL;
    }
    free(response_customer_group_list_result);
}

cJSON *response_customer_group_list_result_convertToJSON(response_customer_group_list_result_t *response_customer_group_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_customer_group_list_result->group_count
    if(response_customer_group_list_result->group_count) {
    if(cJSON_AddNumberToObject(item, "group_count", response_customer_group_list_result->group_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_customer_group_list_result->group
    if(response_customer_group_list_result->group) {
    cJSON *group = cJSON_AddArrayToObject(item, "group");
    if(group == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *groupListEntry;
    if (response_customer_group_list_result->group) {
    list_ForEach(groupListEntry, response_customer_group_list_result->group) {
    cJSON *itemLocal = customer_group_convertToJSON(groupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group, itemLocal);
    }
    }
    }


    // response_customer_group_list_result->additional_fields
    if(response_customer_group_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_customer_group_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_customer_group_list_result->custom_fields
    if(response_customer_group_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_customer_group_list_result->custom_fields);
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

response_customer_group_list_result_t *response_customer_group_list_result_parseFromJSON(cJSON *response_customer_group_list_resultJSON){

    response_customer_group_list_result_t *response_customer_group_list_result_local_var = NULL;

    // define the local list for response_customer_group_list_result->group
    list_t *groupList = NULL;

    // response_customer_group_list_result->group_count
    cJSON *group_count = cJSON_GetObjectItemCaseSensitive(response_customer_group_list_resultJSON, "group_count");
    if (cJSON_IsNull(group_count)) {
        group_count = NULL;
    }
    if (group_count) { 
    if(!cJSON_IsNumber(group_count))
    {
    goto end; //Numeric
    }
    }

    // response_customer_group_list_result->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(response_customer_group_list_resultJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (group) { 
    cJSON *group_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group)){
        goto end; //nonprimitive container
    }

    groupList = list_createList();

    cJSON_ArrayForEach(group_local_nonprimitive,group )
    {
        if(!cJSON_IsObject(group_local_nonprimitive)){
            goto end;
        }
        customer_group_t *groupItem = customer_group_parseFromJSON(group_local_nonprimitive);

        list_addElement(groupList, groupItem);
    }
    }

    // response_customer_group_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_customer_group_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_customer_group_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_customer_group_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_customer_group_list_result_local_var = response_customer_group_list_result_create_internal (
        group_count ? group_count->valuedouble : 0,
        group ? groupList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_customer_group_list_result_local_var;
end:
    if (groupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, groupList) {
            customer_group_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(groupList);
        groupList = NULL;
    }
    return NULL;

}
