#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_status.h"



static return_status_t *return_status_create_internal(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return_status_t *return_status_local_var = malloc(sizeof(return_status_t));
    if (!return_status_local_var) {
        return NULL;
    }
    return_status_local_var->id = id;
    return_status_local_var->name = name;
    return_status_local_var->additional_fields = additional_fields;
    return_status_local_var->custom_fields = custom_fields;

    return_status_local_var->_library_owned = 1;
    return return_status_local_var;
}

__attribute__((deprecated)) return_status_t *return_status_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return return_status_create_internal (
        id,
        name,
        additional_fields,
        custom_fields
        );
}

void return_status_free(return_status_t *return_status) {
    if(NULL == return_status){
        return ;
    }
    if(return_status->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_status_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_status->id) {
        free(return_status->id);
        return_status->id = NULL;
    }
    if (return_status->name) {
        free(return_status->name);
        return_status->name = NULL;
    }
    if (return_status->additional_fields) {
        object_free(return_status->additional_fields);
        return_status->additional_fields = NULL;
    }
    if (return_status->custom_fields) {
        object_free(return_status->custom_fields);
        return_status->custom_fields = NULL;
    }
    free(return_status);
}

cJSON *return_status_convertToJSON(return_status_t *return_status) {
    cJSON *item = cJSON_CreateObject();

    // return_status->id
    if(return_status->id) {
    if(cJSON_AddStringToObject(item, "id", return_status->id) == NULL) {
    goto fail; //String
    }
    }


    // return_status->name
    if(return_status->name) {
    if(cJSON_AddStringToObject(item, "name", return_status->name) == NULL) {
    goto fail; //String
    }
    }


    // return_status->additional_fields
    if(return_status->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(return_status->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_status->custom_fields
    if(return_status->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(return_status->custom_fields);
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

return_status_t *return_status_parseFromJSON(cJSON *return_statusJSON){

    return_status_t *return_status_local_var = NULL;

    // return_status->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(return_statusJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // return_status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(return_statusJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // return_status->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(return_statusJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // return_status->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(return_statusJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    return_status_local_var = return_status_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return return_status_local_var;
end:
    return NULL;

}
