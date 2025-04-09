#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pagination.h"



static pagination_t *pagination_create_internal(
    char *previous,
    char *next,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    pagination_t *pagination_local_var = malloc(sizeof(pagination_t));
    if (!pagination_local_var) {
        return NULL;
    }
    pagination_local_var->previous = previous;
    pagination_local_var->next = next;
    pagination_local_var->additional_fields = additional_fields;
    pagination_local_var->custom_fields = custom_fields;

    pagination_local_var->_library_owned = 1;
    return pagination_local_var;
}

__attribute__((deprecated)) pagination_t *pagination_create(
    char *previous,
    char *next,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return pagination_create_internal (
        previous,
        next,
        additional_fields,
        custom_fields
        );
}

void pagination_free(pagination_t *pagination) {
    if(NULL == pagination){
        return ;
    }
    if(pagination->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "pagination_free");
        return ;
    }
    listEntry_t *listEntry;
    if (pagination->previous) {
        free(pagination->previous);
        pagination->previous = NULL;
    }
    if (pagination->next) {
        free(pagination->next);
        pagination->next = NULL;
    }
    if (pagination->additional_fields) {
        object_free(pagination->additional_fields);
        pagination->additional_fields = NULL;
    }
    if (pagination->custom_fields) {
        object_free(pagination->custom_fields);
        pagination->custom_fields = NULL;
    }
    free(pagination);
}

cJSON *pagination_convertToJSON(pagination_t *pagination) {
    cJSON *item = cJSON_CreateObject();

    // pagination->previous
    if(pagination->previous) {
    if(cJSON_AddStringToObject(item, "previous", pagination->previous) == NULL) {
    goto fail; //String
    }
    }


    // pagination->next
    if(pagination->next) {
    if(cJSON_AddStringToObject(item, "next", pagination->next) == NULL) {
    goto fail; //String
    }
    }


    // pagination->additional_fields
    if(pagination->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(pagination->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // pagination->custom_fields
    if(pagination->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(pagination->custom_fields);
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

pagination_t *pagination_parseFromJSON(cJSON *paginationJSON){

    pagination_t *pagination_local_var = NULL;

    // pagination->previous
    cJSON *previous = cJSON_GetObjectItemCaseSensitive(paginationJSON, "previous");
    if (cJSON_IsNull(previous)) {
        previous = NULL;
    }
    if (previous) { 
    if(!cJSON_IsString(previous) && !cJSON_IsNull(previous))
    {
    goto end; //String
    }
    }

    // pagination->next
    cJSON *next = cJSON_GetObjectItemCaseSensitive(paginationJSON, "next");
    if (cJSON_IsNull(next)) {
        next = NULL;
    }
    if (next) { 
    if(!cJSON_IsString(next) && !cJSON_IsNull(next))
    {
    goto end; //String
    }
    }

    // pagination->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(paginationJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // pagination->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(paginationJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    pagination_local_var = pagination_create_internal (
        previous && !cJSON_IsNull(previous) ? strdup(previous->valuestring) : NULL,
        next && !cJSON_IsNull(next) ? strdup(next->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return pagination_local_var;
end:
    return NULL;

}
