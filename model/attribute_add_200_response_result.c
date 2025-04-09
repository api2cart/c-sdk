#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_add_200_response_result.h"



static attribute_add_200_response_result_t *attribute_add_200_response_result_create_internal(
    char *id
    ) {
    attribute_add_200_response_result_t *attribute_add_200_response_result_local_var = malloc(sizeof(attribute_add_200_response_result_t));
    if (!attribute_add_200_response_result_local_var) {
        return NULL;
    }
    attribute_add_200_response_result_local_var->id = id;

    attribute_add_200_response_result_local_var->_library_owned = 1;
    return attribute_add_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_add_200_response_result_t *attribute_add_200_response_result_create(
    char *id
    ) {
    return attribute_add_200_response_result_create_internal (
        id
        );
}

void attribute_add_200_response_result_free(attribute_add_200_response_result_t *attribute_add_200_response_result) {
    if(NULL == attribute_add_200_response_result){
        return ;
    }
    if(attribute_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_add_200_response_result->id) {
        free(attribute_add_200_response_result->id);
        attribute_add_200_response_result->id = NULL;
    }
    free(attribute_add_200_response_result);
}

cJSON *attribute_add_200_response_result_convertToJSON(attribute_add_200_response_result_t *attribute_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_add_200_response_result->id
    if(attribute_add_200_response_result->id) {
    if(cJSON_AddStringToObject(item, "id", attribute_add_200_response_result->id) == NULL) {
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

attribute_add_200_response_result_t *attribute_add_200_response_result_parseFromJSON(cJSON *attribute_add_200_response_resultJSON){

    attribute_add_200_response_result_t *attribute_add_200_response_result_local_var = NULL;

    // attribute_add_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(attribute_add_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }


    attribute_add_200_response_result_local_var = attribute_add_200_response_result_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL
        );

    return attribute_add_200_response_result_local_var;
end:
    return NULL;

}
