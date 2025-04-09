#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "a2_c_date_time.h"



static a2_c_date_time_t *a2_c_date_time_create_internal(
    char *value,
    char *format,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    a2_c_date_time_t *a2_c_date_time_local_var = malloc(sizeof(a2_c_date_time_t));
    if (!a2_c_date_time_local_var) {
        return NULL;
    }
    a2_c_date_time_local_var->value = value;
    a2_c_date_time_local_var->format = format;
    a2_c_date_time_local_var->additional_fields = additional_fields;
    a2_c_date_time_local_var->custom_fields = custom_fields;

    a2_c_date_time_local_var->_library_owned = 1;
    return a2_c_date_time_local_var;
}

__attribute__((deprecated)) a2_c_date_time_t *a2_c_date_time_create(
    char *value,
    char *format,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return a2_c_date_time_create_internal (
        value,
        format,
        additional_fields,
        custom_fields
        );
}

void a2_c_date_time_free(a2_c_date_time_t *a2_c_date_time) {
    if(NULL == a2_c_date_time){
        return ;
    }
    if(a2_c_date_time->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "a2_c_date_time_free");
        return ;
    }
    listEntry_t *listEntry;
    if (a2_c_date_time->value) {
        free(a2_c_date_time->value);
        a2_c_date_time->value = NULL;
    }
    if (a2_c_date_time->format) {
        free(a2_c_date_time->format);
        a2_c_date_time->format = NULL;
    }
    if (a2_c_date_time->additional_fields) {
        object_free(a2_c_date_time->additional_fields);
        a2_c_date_time->additional_fields = NULL;
    }
    if (a2_c_date_time->custom_fields) {
        object_free(a2_c_date_time->custom_fields);
        a2_c_date_time->custom_fields = NULL;
    }
    free(a2_c_date_time);
}

cJSON *a2_c_date_time_convertToJSON(a2_c_date_time_t *a2_c_date_time) {
    cJSON *item = cJSON_CreateObject();

    // a2_c_date_time->value
    if(a2_c_date_time->value) {
    if(cJSON_AddStringToObject(item, "value", a2_c_date_time->value) == NULL) {
    goto fail; //String
    }
    }


    // a2_c_date_time->format
    if(a2_c_date_time->format) {
    if(cJSON_AddStringToObject(item, "format", a2_c_date_time->format) == NULL) {
    goto fail; //String
    }
    }


    // a2_c_date_time->additional_fields
    if(a2_c_date_time->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(a2_c_date_time->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // a2_c_date_time->custom_fields
    if(a2_c_date_time->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(a2_c_date_time->custom_fields);
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

a2_c_date_time_t *a2_c_date_time_parseFromJSON(cJSON *a2_c_date_timeJSON){

    a2_c_date_time_t *a2_c_date_time_local_var = NULL;

    // a2_c_date_time->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(a2_c_date_timeJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // a2_c_date_time->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(a2_c_date_timeJSON, "format");
    if (cJSON_IsNull(format)) {
        format = NULL;
    }
    if (format) { 
    if(!cJSON_IsString(format) && !cJSON_IsNull(format))
    {
    goto end; //String
    }
    }

    // a2_c_date_time->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(a2_c_date_timeJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // a2_c_date_time->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(a2_c_date_timeJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    a2_c_date_time_local_var = a2_c_date_time_create_internal (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        format && !cJSON_IsNull(format) ? strdup(format->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return a2_c_date_time_local_var;
end:
    return NULL;

}
