#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_action.h"



static return_action_t *return_action_create_internal(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return_action_t *return_action_local_var = malloc(sizeof(return_action_t));
    if (!return_action_local_var) {
        return NULL;
    }
    return_action_local_var->id = id;
    return_action_local_var->name = name;
    return_action_local_var->additional_fields = additional_fields;
    return_action_local_var->custom_fields = custom_fields;

    return_action_local_var->_library_owned = 1;
    return return_action_local_var;
}

__attribute__((deprecated)) return_action_t *return_action_create(
    char *id,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return return_action_create_internal (
        id,
        name,
        additional_fields,
        custom_fields
        );
}

void return_action_free(return_action_t *return_action) {
    if(NULL == return_action){
        return ;
    }
    if(return_action->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_action_free");
        return ;
    }
    listEntry_t *listEntry;
    if (return_action->id) {
        free(return_action->id);
        return_action->id = NULL;
    }
    if (return_action->name) {
        free(return_action->name);
        return_action->name = NULL;
    }
    if (return_action->additional_fields) {
        object_free(return_action->additional_fields);
        return_action->additional_fields = NULL;
    }
    if (return_action->custom_fields) {
        object_free(return_action->custom_fields);
        return_action->custom_fields = NULL;
    }
    free(return_action);
}

cJSON *return_action_convertToJSON(return_action_t *return_action) {
    cJSON *item = cJSON_CreateObject();

    // return_action->id
    if(return_action->id) {
    if(cJSON_AddStringToObject(item, "id", return_action->id) == NULL) {
    goto fail; //String
    }
    }


    // return_action->name
    if(return_action->name) {
    if(cJSON_AddStringToObject(item, "name", return_action->name) == NULL) {
    goto fail; //String
    }
    }


    // return_action->additional_fields
    if(return_action->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(return_action->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // return_action->custom_fields
    if(return_action->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(return_action->custom_fields);
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

return_action_t *return_action_parseFromJSON(cJSON *return_actionJSON){

    return_action_t *return_action_local_var = NULL;

    // return_action->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(return_actionJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // return_action->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(return_actionJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // return_action->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(return_actionJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // return_action->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(return_actionJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    return_action_local_var = return_action_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return return_action_local_var;
end:
    return NULL;

}
