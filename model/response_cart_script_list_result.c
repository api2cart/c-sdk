#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_cart_script_list_result.h"



static response_cart_script_list_result_t *response_cart_script_list_result_create_internal(
    int total_count,
    list_t *scripts,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_cart_script_list_result_t *response_cart_script_list_result_local_var = malloc(sizeof(response_cart_script_list_result_t));
    if (!response_cart_script_list_result_local_var) {
        return NULL;
    }
    response_cart_script_list_result_local_var->total_count = total_count;
    response_cart_script_list_result_local_var->scripts = scripts;
    response_cart_script_list_result_local_var->additional_fields = additional_fields;
    response_cart_script_list_result_local_var->custom_fields = custom_fields;

    response_cart_script_list_result_local_var->_library_owned = 1;
    return response_cart_script_list_result_local_var;
}

__attribute__((deprecated)) response_cart_script_list_result_t *response_cart_script_list_result_create(
    int total_count,
    list_t *scripts,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_cart_script_list_result_create_internal (
        total_count,
        scripts,
        additional_fields,
        custom_fields
        );
}

void response_cart_script_list_result_free(response_cart_script_list_result_t *response_cart_script_list_result) {
    if(NULL == response_cart_script_list_result){
        return ;
    }
    if(response_cart_script_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_cart_script_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_cart_script_list_result->scripts) {
        list_ForEach(listEntry, response_cart_script_list_result->scripts) {
            script_free(listEntry->data);
        }
        list_freeList(response_cart_script_list_result->scripts);
        response_cart_script_list_result->scripts = NULL;
    }
    if (response_cart_script_list_result->additional_fields) {
        object_free(response_cart_script_list_result->additional_fields);
        response_cart_script_list_result->additional_fields = NULL;
    }
    if (response_cart_script_list_result->custom_fields) {
        object_free(response_cart_script_list_result->custom_fields);
        response_cart_script_list_result->custom_fields = NULL;
    }
    free(response_cart_script_list_result);
}

cJSON *response_cart_script_list_result_convertToJSON(response_cart_script_list_result_t *response_cart_script_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_cart_script_list_result->total_count
    if(response_cart_script_list_result->total_count) {
    if(cJSON_AddNumberToObject(item, "total_count", response_cart_script_list_result->total_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // response_cart_script_list_result->scripts
    if(response_cart_script_list_result->scripts) {
    cJSON *scripts = cJSON_AddArrayToObject(item, "scripts");
    if(scripts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *scriptsListEntry;
    if (response_cart_script_list_result->scripts) {
    list_ForEach(scriptsListEntry, response_cart_script_list_result->scripts) {
    cJSON *itemLocal = script_convertToJSON(scriptsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(scripts, itemLocal);
    }
    }
    }


    // response_cart_script_list_result->additional_fields
    if(response_cart_script_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_cart_script_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_cart_script_list_result->custom_fields
    if(response_cart_script_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_cart_script_list_result->custom_fields);
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

response_cart_script_list_result_t *response_cart_script_list_result_parseFromJSON(cJSON *response_cart_script_list_resultJSON){

    response_cart_script_list_result_t *response_cart_script_list_result_local_var = NULL;

    // define the local list for response_cart_script_list_result->scripts
    list_t *scriptsList = NULL;

    // response_cart_script_list_result->total_count
    cJSON *total_count = cJSON_GetObjectItemCaseSensitive(response_cart_script_list_resultJSON, "total_count");
    if (cJSON_IsNull(total_count)) {
        total_count = NULL;
    }
    if (total_count) { 
    if(!cJSON_IsNumber(total_count))
    {
    goto end; //Numeric
    }
    }

    // response_cart_script_list_result->scripts
    cJSON *scripts = cJSON_GetObjectItemCaseSensitive(response_cart_script_list_resultJSON, "scripts");
    if (cJSON_IsNull(scripts)) {
        scripts = NULL;
    }
    if (scripts) { 
    cJSON *scripts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(scripts)){
        goto end; //nonprimitive container
    }

    scriptsList = list_createList();

    cJSON_ArrayForEach(scripts_local_nonprimitive,scripts )
    {
        if(!cJSON_IsObject(scripts_local_nonprimitive)){
            goto end;
        }
        script_t *scriptsItem = script_parseFromJSON(scripts_local_nonprimitive);

        list_addElement(scriptsList, scriptsItem);
    }
    }

    // response_cart_script_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_cart_script_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_cart_script_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_cart_script_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_cart_script_list_result_local_var = response_cart_script_list_result_create_internal (
        total_count ? total_count->valuedouble : 0,
        scripts ? scriptsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_cart_script_list_result_local_var;
end:
    if (scriptsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, scriptsList) {
            script_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(scriptsList);
        scriptsList = NULL;
    }
    return NULL;

}
