#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_unassign_group_200_response_result.h"



static attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_create_internal(
    char *unassigned
    ) {
    attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_local_var = malloc(sizeof(attribute_unassign_group_200_response_result_t));
    if (!attribute_unassign_group_200_response_result_local_var) {
        return NULL;
    }
    attribute_unassign_group_200_response_result_local_var->unassigned = unassigned;

    attribute_unassign_group_200_response_result_local_var->_library_owned = 1;
    return attribute_unassign_group_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_create(
    char *unassigned
    ) {
    return attribute_unassign_group_200_response_result_create_internal (
        unassigned
        );
}

void attribute_unassign_group_200_response_result_free(attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result) {
    if(NULL == attribute_unassign_group_200_response_result){
        return ;
    }
    if(attribute_unassign_group_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_unassign_group_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_unassign_group_200_response_result->unassigned) {
        free(attribute_unassign_group_200_response_result->unassigned);
        attribute_unassign_group_200_response_result->unassigned = NULL;
    }
    free(attribute_unassign_group_200_response_result);
}

cJSON *attribute_unassign_group_200_response_result_convertToJSON(attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_unassign_group_200_response_result->unassigned
    if(attribute_unassign_group_200_response_result->unassigned) {
    if(cJSON_AddStringToObject(item, "unassigned", attribute_unassign_group_200_response_result->unassigned) == NULL) {
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

attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_parseFromJSON(cJSON *attribute_unassign_group_200_response_resultJSON){

    attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_local_var = NULL;

    // attribute_unassign_group_200_response_result->unassigned
    cJSON *unassigned = cJSON_GetObjectItemCaseSensitive(attribute_unassign_group_200_response_resultJSON, "unassigned");
    if (cJSON_IsNull(unassigned)) {
        unassigned = NULL;
    }
    if (unassigned) { 
    if(!cJSON_IsString(unassigned) && !cJSON_IsNull(unassigned))
    {
    goto end; //String
    }
    }


    attribute_unassign_group_200_response_result_local_var = attribute_unassign_group_200_response_result_create_internal (
        unassigned && !cJSON_IsNull(unassigned) ? strdup(unassigned->valuestring) : NULL
        );

    return attribute_unassign_group_200_response_result_local_var;
end:
    return NULL;

}
