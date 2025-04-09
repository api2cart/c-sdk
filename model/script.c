#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "script.h"



static script_t *script_create_internal(
    char *id,
    char *name,
    char *description,
    char *src,
    char *scope,
    char *event,
    char *load_method,
    char *html,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    script_t *script_local_var = malloc(sizeof(script_t));
    if (!script_local_var) {
        return NULL;
    }
    script_local_var->id = id;
    script_local_var->name = name;
    script_local_var->description = description;
    script_local_var->src = src;
    script_local_var->scope = scope;
    script_local_var->event = event;
    script_local_var->load_method = load_method;
    script_local_var->html = html;
    script_local_var->created_time = created_time;
    script_local_var->modified_time = modified_time;
    script_local_var->additional_fields = additional_fields;
    script_local_var->custom_fields = custom_fields;

    script_local_var->_library_owned = 1;
    return script_local_var;
}

__attribute__((deprecated)) script_t *script_create(
    char *id,
    char *name,
    char *description,
    char *src,
    char *scope,
    char *event,
    char *load_method,
    char *html,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return script_create_internal (
        id,
        name,
        description,
        src,
        scope,
        event,
        load_method,
        html,
        created_time,
        modified_time,
        additional_fields,
        custom_fields
        );
}

void script_free(script_t *script) {
    if(NULL == script){
        return ;
    }
    if(script->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "script_free");
        return ;
    }
    listEntry_t *listEntry;
    if (script->id) {
        free(script->id);
        script->id = NULL;
    }
    if (script->name) {
        free(script->name);
        script->name = NULL;
    }
    if (script->description) {
        free(script->description);
        script->description = NULL;
    }
    if (script->src) {
        free(script->src);
        script->src = NULL;
    }
    if (script->scope) {
        free(script->scope);
        script->scope = NULL;
    }
    if (script->event) {
        free(script->event);
        script->event = NULL;
    }
    if (script->load_method) {
        free(script->load_method);
        script->load_method = NULL;
    }
    if (script->html) {
        free(script->html);
        script->html = NULL;
    }
    if (script->created_time) {
        a2_c_date_time_free(script->created_time);
        script->created_time = NULL;
    }
    if (script->modified_time) {
        a2_c_date_time_free(script->modified_time);
        script->modified_time = NULL;
    }
    if (script->additional_fields) {
        object_free(script->additional_fields);
        script->additional_fields = NULL;
    }
    if (script->custom_fields) {
        object_free(script->custom_fields);
        script->custom_fields = NULL;
    }
    free(script);
}

cJSON *script_convertToJSON(script_t *script) {
    cJSON *item = cJSON_CreateObject();

    // script->id
    if(script->id) {
    if(cJSON_AddStringToObject(item, "id", script->id) == NULL) {
    goto fail; //String
    }
    }


    // script->name
    if(script->name) {
    if(cJSON_AddStringToObject(item, "name", script->name) == NULL) {
    goto fail; //String
    }
    }


    // script->description
    if(script->description) {
    if(cJSON_AddStringToObject(item, "description", script->description) == NULL) {
    goto fail; //String
    }
    }


    // script->src
    if(script->src) {
    if(cJSON_AddStringToObject(item, "src", script->src) == NULL) {
    goto fail; //String
    }
    }


    // script->scope
    if(script->scope) {
    if(cJSON_AddStringToObject(item, "scope", script->scope) == NULL) {
    goto fail; //String
    }
    }


    // script->event
    if(script->event) {
    if(cJSON_AddStringToObject(item, "event", script->event) == NULL) {
    goto fail; //String
    }
    }


    // script->load_method
    if(script->load_method) {
    if(cJSON_AddStringToObject(item, "load_method", script->load_method) == NULL) {
    goto fail; //String
    }
    }


    // script->html
    if(script->html) {
    if(cJSON_AddStringToObject(item, "html", script->html) == NULL) {
    goto fail; //String
    }
    }


    // script->created_time
    if(script->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(script->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // script->modified_time
    if(script->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(script->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // script->additional_fields
    if(script->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(script->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // script->custom_fields
    if(script->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(script->custom_fields);
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

script_t *script_parseFromJSON(cJSON *scriptJSON){

    script_t *script_local_var = NULL;

    // define the local variable for script->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for script->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // script->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(scriptJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // script->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(scriptJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // script->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(scriptJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // script->src
    cJSON *src = cJSON_GetObjectItemCaseSensitive(scriptJSON, "src");
    if (cJSON_IsNull(src)) {
        src = NULL;
    }
    if (src) { 
    if(!cJSON_IsString(src) && !cJSON_IsNull(src))
    {
    goto end; //String
    }
    }

    // script->scope
    cJSON *scope = cJSON_GetObjectItemCaseSensitive(scriptJSON, "scope");
    if (cJSON_IsNull(scope)) {
        scope = NULL;
    }
    if (scope) { 
    if(!cJSON_IsString(scope) && !cJSON_IsNull(scope))
    {
    goto end; //String
    }
    }

    // script->event
    cJSON *event = cJSON_GetObjectItemCaseSensitive(scriptJSON, "event");
    if (cJSON_IsNull(event)) {
        event = NULL;
    }
    if (event) { 
    if(!cJSON_IsString(event) && !cJSON_IsNull(event))
    {
    goto end; //String
    }
    }

    // script->load_method
    cJSON *load_method = cJSON_GetObjectItemCaseSensitive(scriptJSON, "load_method");
    if (cJSON_IsNull(load_method)) {
        load_method = NULL;
    }
    if (load_method) { 
    if(!cJSON_IsString(load_method) && !cJSON_IsNull(load_method))
    {
    goto end; //String
    }
    }

    // script->html
    cJSON *html = cJSON_GetObjectItemCaseSensitive(scriptJSON, "html");
    if (cJSON_IsNull(html)) {
        html = NULL;
    }
    if (html) { 
    if(!cJSON_IsString(html) && !cJSON_IsNull(html))
    {
    goto end; //String
    }
    }

    // script->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(scriptJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // script->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(scriptJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // script->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(scriptJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // script->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(scriptJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    script_local_var = script_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        src && !cJSON_IsNull(src) ? strdup(src->valuestring) : NULL,
        scope && !cJSON_IsNull(scope) ? strdup(scope->valuestring) : NULL,
        event && !cJSON_IsNull(event) ? strdup(event->valuestring) : NULL,
        load_method && !cJSON_IsNull(load_method) ? strdup(load_method->valuestring) : NULL,
        html && !cJSON_IsNull(html) ? strdup(html->valuestring) : NULL,
        created_time ? created_time_local_nonprim : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return script_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
    }
    return NULL;

}
