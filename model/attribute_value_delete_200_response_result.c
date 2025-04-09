#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_value_delete_200_response_result.h"



static attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result_create_internal(
    int deleted
    ) {
    attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result_local_var = malloc(sizeof(attribute_value_delete_200_response_result_t));
    if (!attribute_value_delete_200_response_result_local_var) {
        return NULL;
    }
    attribute_value_delete_200_response_result_local_var->deleted = deleted;

    attribute_value_delete_200_response_result_local_var->_library_owned = 1;
    return attribute_value_delete_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result_create(
    int deleted
    ) {
    return attribute_value_delete_200_response_result_create_internal (
        deleted
        );
}

void attribute_value_delete_200_response_result_free(attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result) {
    if(NULL == attribute_value_delete_200_response_result){
        return ;
    }
    if(attribute_value_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_value_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(attribute_value_delete_200_response_result);
}

cJSON *attribute_value_delete_200_response_result_convertToJSON(attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_value_delete_200_response_result->deleted
    if(attribute_value_delete_200_response_result->deleted) {
    if(cJSON_AddBoolToObject(item, "deleted", attribute_value_delete_200_response_result->deleted) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result_parseFromJSON(cJSON *attribute_value_delete_200_response_resultJSON){

    attribute_value_delete_200_response_result_t *attribute_value_delete_200_response_result_local_var = NULL;

    // attribute_value_delete_200_response_result->deleted
    cJSON *deleted = cJSON_GetObjectItemCaseSensitive(attribute_value_delete_200_response_resultJSON, "deleted");
    if (cJSON_IsNull(deleted)) {
        deleted = NULL;
    }
    if (deleted) { 
    if(!cJSON_IsBool(deleted))
    {
    goto end; //Bool
    }
    }


    attribute_value_delete_200_response_result_local_var = attribute_value_delete_200_response_result_create_internal (
        deleted ? deleted->valueint : 0
        );

    return attribute_value_delete_200_response_result_local_var;
end:
    return NULL;

}
