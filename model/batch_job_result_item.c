#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "batch_job_result_item.h"



static batch_job_result_item_t *batch_job_result_item_create_internal(
    int id,
    char *status,
    char *entity_id,
    list_t *errors,
    list_t *warnings,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    batch_job_result_item_t *batch_job_result_item_local_var = malloc(sizeof(batch_job_result_item_t));
    if (!batch_job_result_item_local_var) {
        return NULL;
    }
    batch_job_result_item_local_var->id = id;
    batch_job_result_item_local_var->status = status;
    batch_job_result_item_local_var->entity_id = entity_id;
    batch_job_result_item_local_var->errors = errors;
    batch_job_result_item_local_var->warnings = warnings;
    batch_job_result_item_local_var->additional_fields = additional_fields;
    batch_job_result_item_local_var->custom_fields = custom_fields;

    batch_job_result_item_local_var->_library_owned = 1;
    return batch_job_result_item_local_var;
}

__attribute__((deprecated)) batch_job_result_item_t *batch_job_result_item_create(
    int id,
    char *status,
    char *entity_id,
    list_t *errors,
    list_t *warnings,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return batch_job_result_item_create_internal (
        id,
        status,
        entity_id,
        errors,
        warnings,
        additional_fields,
        custom_fields
        );
}

void batch_job_result_item_free(batch_job_result_item_t *batch_job_result_item) {
    if(NULL == batch_job_result_item){
        return ;
    }
    if(batch_job_result_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "batch_job_result_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (batch_job_result_item->status) {
        free(batch_job_result_item->status);
        batch_job_result_item->status = NULL;
    }
    if (batch_job_result_item->entity_id) {
        free(batch_job_result_item->entity_id);
        batch_job_result_item->entity_id = NULL;
    }
    if (batch_job_result_item->errors) {
        list_ForEach(listEntry, batch_job_result_item->errors) {
            free(listEntry->data);
        }
        list_freeList(batch_job_result_item->errors);
        batch_job_result_item->errors = NULL;
    }
    if (batch_job_result_item->warnings) {
        list_ForEach(listEntry, batch_job_result_item->warnings) {
            free(listEntry->data);
        }
        list_freeList(batch_job_result_item->warnings);
        batch_job_result_item->warnings = NULL;
    }
    if (batch_job_result_item->additional_fields) {
        object_free(batch_job_result_item->additional_fields);
        batch_job_result_item->additional_fields = NULL;
    }
    if (batch_job_result_item->custom_fields) {
        object_free(batch_job_result_item->custom_fields);
        batch_job_result_item->custom_fields = NULL;
    }
    free(batch_job_result_item);
}

cJSON *batch_job_result_item_convertToJSON(batch_job_result_item_t *batch_job_result_item) {
    cJSON *item = cJSON_CreateObject();

    // batch_job_result_item->id
    if(batch_job_result_item->id) {
    if(cJSON_AddNumberToObject(item, "id", batch_job_result_item->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // batch_job_result_item->status
    if(batch_job_result_item->status) {
    if(cJSON_AddStringToObject(item, "status", batch_job_result_item->status) == NULL) {
    goto fail; //String
    }
    }


    // batch_job_result_item->entity_id
    if(batch_job_result_item->entity_id) {
    if(cJSON_AddStringToObject(item, "entity_id", batch_job_result_item->entity_id) == NULL) {
    goto fail; //String
    }
    }


    // batch_job_result_item->errors
    if(batch_job_result_item->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *errorsListEntry;
    list_ForEach(errorsListEntry, batch_job_result_item->errors) {
    if(cJSON_AddStringToObject(errors, "", errorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // batch_job_result_item->warnings
    if(batch_job_result_item->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *warningsListEntry;
    list_ForEach(warningsListEntry, batch_job_result_item->warnings) {
    if(cJSON_AddStringToObject(warnings, "", warningsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // batch_job_result_item->additional_fields
    if(batch_job_result_item->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(batch_job_result_item->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // batch_job_result_item->custom_fields
    if(batch_job_result_item->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(batch_job_result_item->custom_fields);
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

batch_job_result_item_t *batch_job_result_item_parseFromJSON(cJSON *batch_job_result_itemJSON){

    batch_job_result_item_t *batch_job_result_item_local_var = NULL;

    // define the local list for batch_job_result_item->errors
    list_t *errorsList = NULL;

    // define the local list for batch_job_result_item->warnings
    list_t *warningsList = NULL;

    // batch_job_result_item->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // batch_job_result_item->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // batch_job_result_item->entity_id
    cJSON *entity_id = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "entity_id");
    if (cJSON_IsNull(entity_id)) {
        entity_id = NULL;
    }
    if (entity_id) { 
    if(!cJSON_IsString(entity_id) && !cJSON_IsNull(entity_id))
    {
    goto end; //String
    }
    }

    // batch_job_result_item->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "errors");
    if (cJSON_IsNull(errors)) {
        errors = NULL;
    }
    if (errors) { 
    cJSON *errors_local = NULL;
    if(!cJSON_IsArray(errors)) {
        goto end;//primitive container
    }
    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local, errors)
    {
        if(!cJSON_IsString(errors_local))
        {
            goto end;
        }
        list_addElement(errorsList , strdup(errors_local->valuestring));
    }
    }

    // batch_job_result_item->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "warnings");
    if (cJSON_IsNull(warnings)) {
        warnings = NULL;
    }
    if (warnings) { 
    cJSON *warnings_local = NULL;
    if(!cJSON_IsArray(warnings)) {
        goto end;//primitive container
    }
    warningsList = list_createList();

    cJSON_ArrayForEach(warnings_local, warnings)
    {
        if(!cJSON_IsString(warnings_local))
        {
            goto end;
        }
        list_addElement(warningsList , strdup(warnings_local->valuestring));
    }
    }

    // batch_job_result_item->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // batch_job_result_item->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(batch_job_result_itemJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    batch_job_result_item_local_var = batch_job_result_item_create_internal (
        id ? id->valuedouble : 0,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        entity_id && !cJSON_IsNull(entity_id) ? strdup(entity_id->valuestring) : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return batch_job_result_item_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    return NULL;

}
