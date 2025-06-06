#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_reason.h"



static return_reason_t *return_reason_create_internal(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return_reason_t *return_reason_local_var = malloc(sizeof(return_reason_t));
    if (!return_reason_local_var) {
        return NULL;
    }
    return_reason_local_var->id = id;
    return_reason_local_var->name = name;
    return_reason_local_var->additional_fields = additional_fields;
    return_reason_local_var->custom_fields = custom_fields;

    return_reason_local_var->_library_owned = 1;
    return return_reason_local_var;
}

__attribute__((deprecated)) return_reason_t *return_reason_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return return_reason_create_internal (
        id,
        name,
        additional_fields,
        custom_fields
        );
}

void return_reason_free(return_reason_t *return_reason) {
    if(NULL == return_reason){
        return ;
    }
    if(return_reason->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_reason_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_reason->id) {
        free(return_reason->id);
        return_reason->id = NULL;
    }
    if (return_reason->name) {
        free(return_reason->name);
        return_reason->name = NULL;
    }
    if (return_reason->additional_fields) {
        object_free(return_reason->additional_fields);
        return_reason->additional_fields = NULL;
    }
    if (return_reason->custom_fields) {
        object_free(return_reason->custom_fields);
        return_reason->custom_fields = NULL;
    }
    free(return_reason);
}

cJSON *return_reason_convertToJSON(return_reason_t *return_reason) {
    cJSON *item = cJSON_CreateObject();

    // return_reason->id
    if(return_reason->id) {
    if(cJSON_AddStringToObject(item, "id", return_reason->id) == NULL) {
    goto fail; //String
    }
    }


    // return_reason->name
    if(return_reason->name) {
    if(cJSON_AddStringToObject(item, "name", return_reason->name) == NULL) {
    goto fail; //String
    }
    }


    // return_reason->additional_fields
    if(return_reason->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(return_reason->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_reason->custom_fields
    if(return_reason->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(return_reason->custom_fields);
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

return_reason_t *return_reason_parseFromJSON(cJSON *return_reasonJSON){

    return_reason_t *return_reason_local_var = NULL;

    // return_reason->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(return_reasonJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // return_reason->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(return_reasonJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // return_reason->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(return_reasonJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // return_reason->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(return_reasonJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    return_reason_local_var = return_reason_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return return_reason_local_var;
end:
    return NULL;

}
