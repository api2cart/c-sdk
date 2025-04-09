#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "state.h"



static state_t *state_create_internal(
    char *code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    state_t *state_local_var = malloc(sizeof(state_t));
    if (!state_local_var) {
        return NULL;
    }
    state_local_var->code = code;
    state_local_var->name = name;
    state_local_var->additional_fields = additional_fields;
    state_local_var->custom_fields = custom_fields;

    state_local_var->_library_owned = 1;
    return state_local_var;
}

__attribute__((deprecated)) state_t *state_create(
    char *code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return state_create_internal (
        code,
        name,
        additional_fields,
        custom_fields
        );
}

void state_free(state_t *state) {
    if(NULL == state){
        return ;
    }
    if(state->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "state_free");
        return ;
    }
    listEntry_t *listEntry;
    if (state->code) {
        free(state->code);
        state->code = NULL;
    }
    if (state->name) {
        free(state->name);
        state->name = NULL;
    }
    if (state->additional_fields) {
        object_free(state->additional_fields);
        state->additional_fields = NULL;
    }
    if (state->custom_fields) {
        object_free(state->custom_fields);
        state->custom_fields = NULL;
    }
    free(state);
}

cJSON *state_convertToJSON(state_t *state) {
    cJSON *item = cJSON_CreateObject();

    // state->code
    if(state->code) {
    if(cJSON_AddStringToObject(item, "code", state->code) == NULL) {
    goto fail; //String
    }
    }


    // state->name
    if(state->name) {
    if(cJSON_AddStringToObject(item, "name", state->name) == NULL) {
    goto fail; //String
    }
    }


    // state->additional_fields
    if(state->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(state->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // state->custom_fields
    if(state->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(state->custom_fields);
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

state_t *state_parseFromJSON(cJSON *stateJSON){

    state_t *state_local_var = NULL;

    // state->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(stateJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // state->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(stateJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // state->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(stateJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // state->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(stateJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    state_local_var = state_create_internal (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return state_local_var;
end:
    return NULL;

}
