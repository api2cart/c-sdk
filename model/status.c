#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status.h"



static status_t *status_create_internal(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    status_t *status_local_var = malloc(sizeof(status_t));
    if (!status_local_var) {
        return NULL;
    }
    status_local_var->id = id;
    status_local_var->name = name;
    status_local_var->additional_fields = additional_fields;
    status_local_var->custom_fields = custom_fields;

    status_local_var->_library_owned = 1;
    return status_local_var;
}

__attribute__((deprecated)) status_t *status_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return status_create_internal (
        id,
        name,
        additional_fields,
        custom_fields
        );
}

void status_free(status_t *status) {
    if(NULL == status){
        return ;
    }
    if(status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "status_free");
        return ;
    }
    listEntry_t *listEntry;
    if (status->id) {
        free(status->id);
        status->id = NULL;
    }
    if (status->name) {
        free(status->name);
        status->name = NULL;
    }
    if (status->additional_fields) {
        object_free(status->additional_fields);
        status->additional_fields = NULL;
    }
    if (status->custom_fields) {
        object_free(status->custom_fields);
        status->custom_fields = NULL;
    }
    free(status);
}

cJSON *status_convertToJSON(status_t *status) {
    cJSON *item = cJSON_CreateObject();

    // status->id
    if(status->id) {
    if(cJSON_AddStringToObject(item, "id", status->id) == NULL) {
    goto fail; //String
    }
    }


    // status->name
    if(status->name) {
    if(cJSON_AddStringToObject(item, "name", status->name) == NULL) {
    goto fail; //String
    }
    }


    // status->additional_fields
    if(status->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(status->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // status->custom_fields
    if(status->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(status->custom_fields);
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

status_t *status_parseFromJSON(cJSON *statusJSON){

    status_t *status_local_var = NULL;

    // status->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(statusJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(statusJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // status->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(statusJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // status->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(statusJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    status_local_var = status_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return status_local_var;
end:
    return NULL;

}
