#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "media.h"



static media_t *media_create_internal(
    char *id,
    char *http_path,
    char *file_name,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    media_t *media_local_var = malloc(sizeof(media_t));
    if (!media_local_var) {
        return NULL;
    }
    media_local_var->id = id;
    media_local_var->http_path = http_path;
    media_local_var->file_name = file_name;
    media_local_var->type = type;
    media_local_var->additional_fields = additional_fields;
    media_local_var->custom_fields = custom_fields;

    media_local_var->_library_owned = 1;
    return media_local_var;
}

__attribute__((deprecated)) media_t *media_create(
    char *id,
    char *http_path,
    char *file_name,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return media_create_internal (
        id,
        http_path,
        file_name,
        type,
        additional_fields,
        custom_fields
        );
}

void media_free(media_t *media) {
    if(NULL == media){
        return ;
    }
    if(media->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "media_free");
        return ;
    }
    listEntry_t *listEntry;
    if (media->id) {
        free(media->id);
        media->id = NULL;
    }
    if (media->http_path) {
        free(media->http_path);
        media->http_path = NULL;
    }
    if (media->file_name) {
        free(media->file_name);
        media->file_name = NULL;
    }
    if (media->type) {
        free(media->type);
        media->type = NULL;
    }
    if (media->additional_fields) {
        object_free(media->additional_fields);
        media->additional_fields = NULL;
    }
    if (media->custom_fields) {
        object_free(media->custom_fields);
        media->custom_fields = NULL;
    }
    free(media);
}

cJSON *media_convertToJSON(media_t *media) {
    cJSON *item = cJSON_CreateObject();

    // media->id
    if(media->id) {
    if(cJSON_AddStringToObject(item, "id", media->id) == NULL) {
    goto fail; //String
    }
    }


    // media->http_path
    if(media->http_path) {
    if(cJSON_AddStringToObject(item, "http_path", media->http_path) == NULL) {
    goto fail; //String
    }
    }


    // media->file_name
    if(media->file_name) {
    if(cJSON_AddStringToObject(item, "file_name", media->file_name) == NULL) {
    goto fail; //String
    }
    }


    // media->type
    if(media->type) {
    if(cJSON_AddStringToObject(item, "type", media->type) == NULL) {
    goto fail; //String
    }
    }


    // media->additional_fields
    if(media->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(media->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // media->custom_fields
    if(media->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(media->custom_fields);
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

media_t *media_parseFromJSON(cJSON *mediaJSON){

    media_t *media_local_var = NULL;

    // media->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(mediaJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // media->http_path
    cJSON *http_path = cJSON_GetObjectItemCaseSensitive(mediaJSON, "http_path");
    if (cJSON_IsNull(http_path)) {
        http_path = NULL;
    }
    if (http_path) { 
    if(!cJSON_IsString(http_path) && !cJSON_IsNull(http_path))
    {
    goto end; //String
    }
    }

    // media->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(mediaJSON, "file_name");
    if (cJSON_IsNull(file_name)) {
        file_name = NULL;
    }
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // media->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(mediaJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // media->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(mediaJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // media->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(mediaJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    media_local_var = media_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        http_path && !cJSON_IsNull(http_path) ? strdup(http_path->valuestring) : NULL,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return media_local_var;
end:
    return NULL;

}
