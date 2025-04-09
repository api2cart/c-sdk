#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "language.h"



static language_t *language_create_internal(
    char *id,
    char *iso_code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    language_t *language_local_var = malloc(sizeof(language_t));
    if (!language_local_var) {
        return NULL;
    }
    language_local_var->id = id;
    language_local_var->iso_code = iso_code;
    language_local_var->name = name;
    language_local_var->additional_fields = additional_fields;
    language_local_var->custom_fields = custom_fields;

    language_local_var->_library_owned = 1;
    return language_local_var;
}

__attribute__((deprecated)) language_t *language_create(
    char *id,
    char *iso_code,
    char *name,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return language_create_internal (
        id,
        iso_code,
        name,
        additional_fields,
        custom_fields
        );
}

void language_free(language_t *language) {
    if(NULL == language){
        return ;
    }
    if(language->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "language_free");
        return ;
    }
    listEntry_t *listEntry;
    if (language->id) {
        free(language->id);
        language->id = NULL;
    }
    if (language->iso_code) {
        free(language->iso_code);
        language->iso_code = NULL;
    }
    if (language->name) {
        free(language->name);
        language->name = NULL;
    }
    if (language->additional_fields) {
        object_free(language->additional_fields);
        language->additional_fields = NULL;
    }
    if (language->custom_fields) {
        object_free(language->custom_fields);
        language->custom_fields = NULL;
    }
    free(language);
}

cJSON *language_convertToJSON(language_t *language) {
    cJSON *item = cJSON_CreateObject();

    // language->id
    if(language->id) {
    if(cJSON_AddStringToObject(item, "id", language->id) == NULL) {
    goto fail; //String
    }
    }


    // language->iso_code
    if(language->iso_code) {
    if(cJSON_AddStringToObject(item, "iso_code", language->iso_code) == NULL) {
    goto fail; //String
    }
    }


    // language->name
    if(language->name) {
    if(cJSON_AddStringToObject(item, "name", language->name) == NULL) {
    goto fail; //String
    }
    }


    // language->additional_fields
    if(language->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(language->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // language->custom_fields
    if(language->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(language->custom_fields);
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

language_t *language_parseFromJSON(cJSON *languageJSON){

    language_t *language_local_var = NULL;

    // language->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(languageJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // language->iso_code
    cJSON *iso_code = cJSON_GetObjectItemCaseSensitive(languageJSON, "iso_code");
    if (cJSON_IsNull(iso_code)) {
        iso_code = NULL;
    }
    if (iso_code) { 
    if(!cJSON_IsString(iso_code) && !cJSON_IsNull(iso_code))
    {
    goto end; //String
    }
    }

    // language->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(languageJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // language->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(languageJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // language->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(languageJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    language_local_var = language_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        iso_code && !cJSON_IsNull(iso_code) ? strdup(iso_code->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return language_local_var;
end:
    return NULL;

}
