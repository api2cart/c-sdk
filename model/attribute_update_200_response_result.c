#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_update_200_response_result.h"



static attribute_update_200_response_result_t *attribute_update_200_response_result_create_internal(
    int updated
    ) {
    attribute_update_200_response_result_t *attribute_update_200_response_result_local_var = malloc(sizeof(attribute_update_200_response_result_t));
    if (!attribute_update_200_response_result_local_var) {
        return NULL;
    }
    attribute_update_200_response_result_local_var->updated = updated;

    attribute_update_200_response_result_local_var->_library_owned = 1;
    return attribute_update_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_update_200_response_result_t *attribute_update_200_response_result_create(
    int updated
    ) {
    return attribute_update_200_response_result_create_internal (
        updated
        );
}

void attribute_update_200_response_result_free(attribute_update_200_response_result_t *attribute_update_200_response_result) {
    if(NULL == attribute_update_200_response_result){
        return ;
    }
    if(attribute_update_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_update_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(attribute_update_200_response_result);
}

cJSON *attribute_update_200_response_result_convertToJSON(attribute_update_200_response_result_t *attribute_update_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_update_200_response_result->updated
    if(attribute_update_200_response_result->updated) {
    if(cJSON_AddBoolToObject(item, "updated", attribute_update_200_response_result->updated) == NULL) {
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

attribute_update_200_response_result_t *attribute_update_200_response_result_parseFromJSON(cJSON *attribute_update_200_response_resultJSON){

    attribute_update_200_response_result_t *attribute_update_200_response_result_local_var = NULL;

    // attribute_update_200_response_result->updated
    cJSON *updated = cJSON_GetObjectItemCaseSensitive(attribute_update_200_response_resultJSON, "updated");
    if (cJSON_IsNull(updated)) {
        updated = NULL;
    }
    if (updated) { 
    if(!cJSON_IsBool(updated))
    {
    goto end; //Bool
    }
    }


    attribute_update_200_response_result_local_var = attribute_update_200_response_result_create_internal (
        updated ? updated->valueint : 0
        );

    return attribute_update_200_response_result_local_var;
end:
    return NULL;

}
