#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "batch_job_result.h"



static batch_job_result_t *batch_job_result_create_internal(
    int job_id,
    char *job_name,
    int items_processed,
    int items_succeed,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    batch_job_result_t *batch_job_result_local_var = malloc(sizeof(batch_job_result_t));
    if (!batch_job_result_local_var) {
        return NULL;
    }
    batch_job_result_local_var->job_id = job_id;
    batch_job_result_local_var->job_name = job_name;
    batch_job_result_local_var->items_processed = items_processed;
    batch_job_result_local_var->items_succeed = items_succeed;
    batch_job_result_local_var->items = items;
    batch_job_result_local_var->additional_fields = additional_fields;
    batch_job_result_local_var->custom_fields = custom_fields;

    batch_job_result_local_var->_library_owned = 1;
    return batch_job_result_local_var;
}

__attribute__((deprecated)) batch_job_result_t *batch_job_result_create(
    int job_id,
    char *job_name,
    int items_processed,
    int items_succeed,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return batch_job_result_create_internal (
        job_id,
        job_name,
        items_processed,
        items_succeed,
        items,
        additional_fields,
        custom_fields
        );
}

void batch_job_result_free(batch_job_result_t *batch_job_result) {
    if(NULL == batch_job_result){
        return ;
    }
    if(batch_job_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "batch_job_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (batch_job_result->job_name) {
        free(batch_job_result->job_name);
        batch_job_result->job_name = NULL;
    }
    if (batch_job_result->items) {
        list_ForEach(listEntry, batch_job_result->items) {
            batch_job_result_item_free(listEntry->data);
        }
        list_freeList(batch_job_result->items);
        batch_job_result->items = NULL;
    }
    if (batch_job_result->additional_fields) {
        object_free(batch_job_result->additional_fields);
        batch_job_result->additional_fields = NULL;
    }
    if (batch_job_result->custom_fields) {
        object_free(batch_job_result->custom_fields);
        batch_job_result->custom_fields = NULL;
    }
    free(batch_job_result);
}

cJSON *batch_job_result_convertToJSON(batch_job_result_t *batch_job_result) {
    cJSON *item = cJSON_CreateObject();

    // batch_job_result->job_id
    if(batch_job_result->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", batch_job_result->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // batch_job_result->job_name
    if(batch_job_result->job_name) {
    if(cJSON_AddStringToObject(item, "job_name", batch_job_result->job_name) == NULL) {
    goto fail; //String
    }
    }


    // batch_job_result->items_processed
    if(batch_job_result->items_processed) {
    if(cJSON_AddNumberToObject(item, "items_processed", batch_job_result->items_processed) == NULL) {
    goto fail; //Numeric
    }
    }


    // batch_job_result->items_succeed
    if(batch_job_result->items_succeed) {
    if(cJSON_AddNumberToObject(item, "items_succeed", batch_job_result->items_succeed) == NULL) {
    goto fail; //Numeric
    }
    }


    // batch_job_result->items
    if(batch_job_result->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (batch_job_result->items) {
    list_ForEach(itemsListEntry, batch_job_result->items) {
    cJSON *itemLocal = batch_job_result_item_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // batch_job_result->additional_fields
    if(batch_job_result->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(batch_job_result->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // batch_job_result->custom_fields
    if(batch_job_result->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(batch_job_result->custom_fields);
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

batch_job_result_t *batch_job_result_parseFromJSON(cJSON *batch_job_resultJSON){

    batch_job_result_t *batch_job_result_local_var = NULL;

    // define the local list for batch_job_result->items
    list_t *itemsList = NULL;

    // batch_job_result->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "job_id");
    if (cJSON_IsNull(job_id)) {
        job_id = NULL;
    }
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // batch_job_result->job_name
    cJSON *job_name = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "job_name");
    if (cJSON_IsNull(job_name)) {
        job_name = NULL;
    }
    if (job_name) { 
    if(!cJSON_IsString(job_name) && !cJSON_IsNull(job_name))
    {
    goto end; //String
    }
    }

    // batch_job_result->items_processed
    cJSON *items_processed = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "items_processed");
    if (cJSON_IsNull(items_processed)) {
        items_processed = NULL;
    }
    if (items_processed) { 
    if(!cJSON_IsNumber(items_processed))
    {
    goto end; //Numeric
    }
    }

    // batch_job_result->items_succeed
    cJSON *items_succeed = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "items_succeed");
    if (cJSON_IsNull(items_succeed)) {
        items_succeed = NULL;
    }
    if (items_succeed) { 
    if(!cJSON_IsNumber(items_succeed))
    {
    goto end; //Numeric
    }
    }

    // batch_job_result->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "items");
    if (cJSON_IsNull(items)) {
        items = NULL;
    }
    if (items) { 
    cJSON *items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(items)){
        goto end; //nonprimitive container
    }

    itemsList = list_createList();

    cJSON_ArrayForEach(items_local_nonprimitive,items )
    {
        if(!cJSON_IsObject(items_local_nonprimitive)){
            goto end;
        }
        batch_job_result_item_t *itemsItem = batch_job_result_item_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // batch_job_result->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // batch_job_result->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(batch_job_resultJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    batch_job_result_local_var = batch_job_result_create_internal (
        job_id ? job_id->valuedouble : 0,
        job_name && !cJSON_IsNull(job_name) ? strdup(job_name->valuestring) : NULL,
        items_processed ? items_processed->valuedouble : 0,
        items_succeed ? items_succeed->valuedouble : 0,
        items ? itemsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return batch_job_result_local_var;
end:
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            batch_job_result_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    return NULL;

}
