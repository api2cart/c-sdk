#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_assign_group_200_response_result.h"



static attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_create_internal(
    char *assigned
    ) {
    attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_local_var = malloc(sizeof(attribute_assign_group_200_response_result_t));
    if (!attribute_assign_group_200_response_result_local_var) {
        return NULL;
    }
    attribute_assign_group_200_response_result_local_var->assigned = assigned;

    attribute_assign_group_200_response_result_local_var->_library_owned = 1;
    return attribute_assign_group_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_create(
    char *assigned
    ) {
    return attribute_assign_group_200_response_result_create_internal (
        assigned
        );
}

void attribute_assign_group_200_response_result_free(attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result) {
    if(NULL == attribute_assign_group_200_response_result){
        return ;
    }
    if(attribute_assign_group_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_assign_group_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attribute_assign_group_200_response_result->assigned) {
        free(attribute_assign_group_200_response_result->assigned);
        attribute_assign_group_200_response_result->assigned = NULL;
    }
    free(attribute_assign_group_200_response_result);
}

cJSON *attribute_assign_group_200_response_result_convertToJSON(attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_assign_group_200_response_result->assigned
    if(attribute_assign_group_200_response_result->assigned) {
    if(cJSON_AddStringToObject(item, "assigned", attribute_assign_group_200_response_result->assigned) == NULL) {
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

attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_parseFromJSON(cJSON *attribute_assign_group_200_response_resultJSON){

    attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_local_var = NULL;

    // attribute_assign_group_200_response_result->assigned
    cJSON *assigned = cJSON_GetObjectItemCaseSensitive(attribute_assign_group_200_response_resultJSON, "assigned");
    if (cJSON_IsNull(assigned)) {
        assigned = NULL;
    }
    if (assigned) { 
    if(!cJSON_IsString(assigned) && !cJSON_IsNull(assigned))
    {
    goto end; //String
    }
    }


    attribute_assign_group_200_response_result_local_var = attribute_assign_group_200_response_result_create_internal (
        assigned && !cJSON_IsNull(assigned) ? strdup(assigned->valuestring) : NULL
        );

    return attribute_assign_group_200_response_result_local_var;
end:
    return NULL;

}
