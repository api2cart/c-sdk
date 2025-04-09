#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "image.h"



static image_t *image_create_internal(
    char *id,
    char *http_path,
    char *file_name,
    char *mime_type,
    int size,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *alt,
    int avail,
    int sort_order,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    image_t *image_local_var = malloc(sizeof(image_t));
    if (!image_local_var) {
        return NULL;
    }
    image_local_var->id = id;
    image_local_var->http_path = http_path;
    image_local_var->file_name = file_name;
    image_local_var->mime_type = mime_type;
    image_local_var->size = size;
    image_local_var->create_at = create_at;
    image_local_var->modified_at = modified_at;
    image_local_var->alt = alt;
    image_local_var->avail = avail;
    image_local_var->sort_order = sort_order;
    image_local_var->type = type;
    image_local_var->additional_fields = additional_fields;
    image_local_var->custom_fields = custom_fields;

    image_local_var->_library_owned = 1;
    return image_local_var;
}

__attribute__((deprecated)) image_t *image_create(
    char *id,
    char *http_path,
    char *file_name,
    char *mime_type,
    int size,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *alt,
    int avail,
    int sort_order,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return image_create_internal (
        id,
        http_path,
        file_name,
        mime_type,
        size,
        create_at,
        modified_at,
        alt,
        avail,
        sort_order,
        type,
        additional_fields,
        custom_fields
        );
}

void image_free(image_t *image) {
    if(NULL == image){
        return ;
    }
    if(image->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "image_free");
        return ;
    }
    listEntry_t *listEntry;
    if (image->id) {
        free(image->id);
        image->id = NULL;
    }
    if (image->http_path) {
        free(image->http_path);
        image->http_path = NULL;
    }
    if (image->file_name) {
        free(image->file_name);
        image->file_name = NULL;
    }
    if (image->mime_type) {
        free(image->mime_type);
        image->mime_type = NULL;
    }
    if (image->create_at) {
        a2_c_date_time_free(image->create_at);
        image->create_at = NULL;
    }
    if (image->modified_at) {
        a2_c_date_time_free(image->modified_at);
        image->modified_at = NULL;
    }
    if (image->alt) {
        free(image->alt);
        image->alt = NULL;
    }
    if (image->type) {
        free(image->type);
        image->type = NULL;
    }
    if (image->additional_fields) {
        object_free(image->additional_fields);
        image->additional_fields = NULL;
    }
    if (image->custom_fields) {
        object_free(image->custom_fields);
        image->custom_fields = NULL;
    }
    free(image);
}

cJSON *image_convertToJSON(image_t *image) {
    cJSON *item = cJSON_CreateObject();

    // image->id
    if(image->id) {
    if(cJSON_AddStringToObject(item, "id", image->id) == NULL) {
    goto fail; //String
    }
    }


    // image->http_path
    if(image->http_path) {
    if(cJSON_AddStringToObject(item, "http_path", image->http_path) == NULL) {
    goto fail; //String
    }
    }


    // image->file_name
    if(image->file_name) {
    if(cJSON_AddStringToObject(item, "file_name", image->file_name) == NULL) {
    goto fail; //String
    }
    }


    // image->mime_type
    if(image->mime_type) {
    if(cJSON_AddStringToObject(item, "mime-type", image->mime_type) == NULL) {
    goto fail; //String
    }
    }


    // image->size
    if(image->size) {
    if(cJSON_AddNumberToObject(item, "size", image->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // image->create_at
    if(image->create_at) {
    cJSON *create_at_local_JSON = a2_c_date_time_convertToJSON(image->create_at);
    if(create_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "create_at", create_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // image->modified_at
    if(image->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(image->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // image->alt
    if(image->alt) {
    if(cJSON_AddStringToObject(item, "alt", image->alt) == NULL) {
    goto fail; //String
    }
    }


    // image->avail
    if(image->avail) {
    if(cJSON_AddBoolToObject(item, "avail", image->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // image->sort_order
    if(image->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", image->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // image->type
    if(image->type) {
    if(cJSON_AddStringToObject(item, "type", image->type) == NULL) {
    goto fail; //String
    }
    }


    // image->additional_fields
    if(image->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(image->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // image->custom_fields
    if(image->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(image->custom_fields);
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

image_t *image_parseFromJSON(cJSON *imageJSON){

    image_t *image_local_var = NULL;

    // define the local variable for image->create_at
    a2_c_date_time_t *create_at_local_nonprim = NULL;

    // define the local variable for image->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // image->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(imageJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // image->http_path
    cJSON *http_path = cJSON_GetObjectItemCaseSensitive(imageJSON, "http_path");
    if (cJSON_IsNull(http_path)) {
        http_path = NULL;
    }
    if (http_path) { 
    if(!cJSON_IsString(http_path) && !cJSON_IsNull(http_path))
    {
    goto end; //String
    }
    }

    // image->file_name
    cJSON *file_name = cJSON_GetObjectItemCaseSensitive(imageJSON, "file_name");
    if (cJSON_IsNull(file_name)) {
        file_name = NULL;
    }
    if (file_name) { 
    if(!cJSON_IsString(file_name) && !cJSON_IsNull(file_name))
    {
    goto end; //String
    }
    }

    // image->mime_type
    cJSON *mime_type = cJSON_GetObjectItemCaseSensitive(imageJSON, "mime-type");
    if (cJSON_IsNull(mime_type)) {
        mime_type = NULL;
    }
    if (mime_type) { 
    if(!cJSON_IsString(mime_type) && !cJSON_IsNull(mime_type))
    {
    goto end; //String
    }
    }

    // image->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(imageJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    }

    // image->create_at
    cJSON *create_at = cJSON_GetObjectItemCaseSensitive(imageJSON, "create_at");
    if (cJSON_IsNull(create_at)) {
        create_at = NULL;
    }
    if (create_at) { 
    create_at_local_nonprim = a2_c_date_time_parseFromJSON(create_at); //nonprimitive
    }

    // image->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(imageJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // image->alt
    cJSON *alt = cJSON_GetObjectItemCaseSensitive(imageJSON, "alt");
    if (cJSON_IsNull(alt)) {
        alt = NULL;
    }
    if (alt) { 
    if(!cJSON_IsString(alt) && !cJSON_IsNull(alt))
    {
    goto end; //String
    }
    }

    // image->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(imageJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // image->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(imageJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // image->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(imageJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // image->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(imageJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // image->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(imageJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    image_local_var = image_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        http_path && !cJSON_IsNull(http_path) ? strdup(http_path->valuestring) : NULL,
        file_name && !cJSON_IsNull(file_name) ? strdup(file_name->valuestring) : NULL,
        mime_type && !cJSON_IsNull(mime_type) ? strdup(mime_type->valuestring) : NULL,
        size ? size->valuedouble : 0,
        create_at ? create_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        alt && !cJSON_IsNull(alt) ? strdup(alt->valuestring) : NULL,
        avail ? avail->valueint : 0,
        sort_order ? sort_order->valuedouble : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return image_local_var;
end:
    if (create_at_local_nonprim) {
        a2_c_date_time_free(create_at_local_nonprim);
        create_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    return NULL;

}
