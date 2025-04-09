#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_find_200_response_result_category_inner.h"



static category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_create_internal(
    char *id,
    char *name,
    char *description
    ) {
    category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_local_var = malloc(sizeof(category_find_200_response_result_category_inner_t));
    if (!category_find_200_response_result_category_inner_local_var) {
        return NULL;
    }
    category_find_200_response_result_category_inner_local_var->id = id;
    category_find_200_response_result_category_inner_local_var->name = name;
    category_find_200_response_result_category_inner_local_var->description = description;

    category_find_200_response_result_category_inner_local_var->_library_owned = 1;
    return category_find_200_response_result_category_inner_local_var;
}

__attribute__((deprecated)) category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_create(
    char *id,
    char *name,
    char *description
    ) {
    return category_find_200_response_result_category_inner_create_internal (
        id,
        name,
        description
        );
}

void category_find_200_response_result_category_inner_free(category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner) {
    if(NULL == category_find_200_response_result_category_inner){
        return ;
    }
    if(category_find_200_response_result_category_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_find_200_response_result_category_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_find_200_response_result_category_inner->id) {
        free(category_find_200_response_result_category_inner->id);
        category_find_200_response_result_category_inner->id = NULL;
    }
    if (category_find_200_response_result_category_inner->name) {
        free(category_find_200_response_result_category_inner->name);
        category_find_200_response_result_category_inner->name = NULL;
    }
    if (category_find_200_response_result_category_inner->description) {
        free(category_find_200_response_result_category_inner->description);
        category_find_200_response_result_category_inner->description = NULL;
    }
    free(category_find_200_response_result_category_inner);
}

cJSON *category_find_200_response_result_category_inner_convertToJSON(category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner) {
    cJSON *item = cJSON_CreateObject();

    // category_find_200_response_result_category_inner->id
    if(category_find_200_response_result_category_inner->id) {
    if(cJSON_AddStringToObject(item, "id", category_find_200_response_result_category_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // category_find_200_response_result_category_inner->name
    if(category_find_200_response_result_category_inner->name) {
    if(cJSON_AddStringToObject(item, "name", category_find_200_response_result_category_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // category_find_200_response_result_category_inner->description
    if(category_find_200_response_result_category_inner->description) {
    if(cJSON_AddStringToObject(item, "description", category_find_200_response_result_category_inner->description) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_parseFromJSON(cJSON *category_find_200_response_result_category_innerJSON){

    category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_local_var = NULL;

    // category_find_200_response_result_category_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(category_find_200_response_result_category_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // category_find_200_response_result_category_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(category_find_200_response_result_category_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // category_find_200_response_result_category_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(category_find_200_response_result_category_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    category_find_200_response_result_category_inner_local_var = category_find_200_response_result_category_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return category_find_200_response_result_category_inner_local_var;
end:
    return NULL;

}
