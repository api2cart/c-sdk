#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "response_product_option_list_result.h"



static response_product_option_list_result_t *response_product_option_list_result_create_internal(
    list_t *option,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    response_product_option_list_result_t *response_product_option_list_result_local_var = malloc(sizeof(response_product_option_list_result_t));
    if (!response_product_option_list_result_local_var) {
        return NULL;
    }
    response_product_option_list_result_local_var->option = option;
    response_product_option_list_result_local_var->additional_fields = additional_fields;
    response_product_option_list_result_local_var->custom_fields = custom_fields;

    response_product_option_list_result_local_var->_library_owned = 1;
    return response_product_option_list_result_local_var;
}

__attribute__((deprecated)) response_product_option_list_result_t *response_product_option_list_result_create(
    list_t *option,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return response_product_option_list_result_create_internal (
        option,
        additional_fields,
        custom_fields
        );
}

void response_product_option_list_result_free(response_product_option_list_result_t *response_product_option_list_result) {
    if(NULL == response_product_option_list_result){
        return ;
    }
    if(response_product_option_list_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "response_product_option_list_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (response_product_option_list_result->option) {
        list_ForEach(listEntry, response_product_option_list_result->option) {
            product_option_free(listEntry->data);
        }
        list_freeList(response_product_option_list_result->option);
        response_product_option_list_result->option = NULL;
    }
    if (response_product_option_list_result->additional_fields) {
        object_free(response_product_option_list_result->additional_fields);
        response_product_option_list_result->additional_fields = NULL;
    }
    if (response_product_option_list_result->custom_fields) {
        object_free(response_product_option_list_result->custom_fields);
        response_product_option_list_result->custom_fields = NULL;
    }
    free(response_product_option_list_result);
}

cJSON *response_product_option_list_result_convertToJSON(response_product_option_list_result_t *response_product_option_list_result) {
    cJSON *item = cJSON_CreateObject();

    // response_product_option_list_result->option
    if(response_product_option_list_result->option) {
    cJSON *option = cJSON_AddArrayToObject(item, "option");
    if(option == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionListEntry;
    if (response_product_option_list_result->option) {
    list_ForEach(optionListEntry, response_product_option_list_result->option) {
    cJSON *itemLocal = product_option_convertToJSON(optionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(option, itemLocal);
    }
    }
    }


    // response_product_option_list_result->additional_fields
    if(response_product_option_list_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(response_product_option_list_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // response_product_option_list_result->custom_fields
    if(response_product_option_list_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(response_product_option_list_result->custom_fields);
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

response_product_option_list_result_t *response_product_option_list_result_parseFromJSON(cJSON *response_product_option_list_resultJSON){

    response_product_option_list_result_t *response_product_option_list_result_local_var = NULL;

    // define the local list for response_product_option_list_result->option
    list_t *optionList = NULL;

    // response_product_option_list_result->option
    cJSON *option = cJSON_GetObjectItemCaseSensitive(response_product_option_list_resultJSON, "option");
    if (cJSON_IsNull(option)) {
        option = NULL;
    }
    if (option) { 
    cJSON *option_local_nonprimitive = NULL;
    if(!cJSON_IsArray(option)){
        goto end; //nonprimitive container
    }

    optionList = list_createList();

    cJSON_ArrayForEach(option_local_nonprimitive,option )
    {
        if(!cJSON_IsObject(option_local_nonprimitive)){
            goto end;
        }
        product_option_t *optionItem = product_option_parseFromJSON(option_local_nonprimitive);

        list_addElement(optionList, optionItem);
    }
    }

    // response_product_option_list_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(response_product_option_list_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // response_product_option_list_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(response_product_option_list_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    response_product_option_list_result_local_var = response_product_option_list_result_create_internal (
        option ? optionList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return response_product_option_list_result_local_var;
end:
    if (optionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, optionList) {
            product_option_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(optionList);
        optionList = NULL;
    }
    return NULL;

}
