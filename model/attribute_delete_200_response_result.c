#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_delete_200_response_result.h"



static attribute_delete_200_response_result_t *attribute_delete_200_response_result_create_internal(
    char *deleted
    ) {
    attribute_delete_200_response_result_t *attribute_delete_200_response_result_local_var = malloc(sizeof(attribute_delete_200_response_result_t));
    if (!attribute_delete_200_response_result_local_var) {
        return NULL;
    }
    attribute_delete_200_response_result_local_var->deleted = deleted;

    attribute_delete_200_response_result_local_var->_library_owned = 1;
    return attribute_delete_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_delete_200_response_result_t *attribute_delete_200_response_result_create(
    char *deleted
    ) {
    return attribute_delete_200_response_result_create_internal (
        deleted
        );
}

void attribute_delete_200_response_result_free(attribute_delete_200_response_result_t *attribute_delete_200_response_result) {
    if(NULL == attribute_delete_200_response_result){
        return ;
    }
    if(attribute_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_delete_200_response_result->deleted) {
        free(attribute_delete_200_response_result->deleted);
        attribute_delete_200_response_result->deleted = NULL;
    }
    free(attribute_delete_200_response_result);
}

cJSON *attribute_delete_200_response_result_convertToJSON(attribute_delete_200_response_result_t *attribute_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_delete_200_response_result->deleted
    if(attribute_delete_200_response_result->deleted) {
    if(cJSON_AddStringToObject(item, "deleted", attribute_delete_200_response_result->deleted) == NULL) {
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

attribute_delete_200_response_result_t *attribute_delete_200_response_result_parseFromJSON(cJSON *attribute_delete_200_response_resultJSON){

    attribute_delete_200_response_result_t *attribute_delete_200_response_result_local_var = NULL;

    // attribute_delete_200_response_result->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(attribute_delete_200_response_resultJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsString(deleted) && !cJSON_IsNull(deleted))
    {
    goto end; //String
    }
    }


    attribute_delete_200_response_result_local_var = attribute_delete_200_response_result_create_internal (
        deleted && !cJSON_IsNull(deleted) ? strdup(deleted->valuestring) : NULL
        );

    return attribute_delete_200_response_result_local_var;
end:
    return NULL;

}
