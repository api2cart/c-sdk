#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_add_200_response_result.h"



static category_add_200_response_result_t *category_add_200_response_result_create_internal(
    char *category_id
    ) {
    category_add_200_response_result_t *category_add_200_response_result_local_var = malloc(sizeof(category_add_200_response_result_t));
    if (!category_add_200_response_result_local_var) {
        return NULL;
    }
    category_add_200_response_result_local_var->category_id = category_id;

    category_add_200_response_result_local_var->_library_owned = 1;
    return category_add_200_response_result_local_var;
}

__attribute__((deprecated)) category_add_200_response_result_t *category_add_200_response_result_create(
    char *category_id
    ) {
    return category_add_200_response_result_create_internal (
        category_id
        );
}

void category_add_200_response_result_free(category_add_200_response_result_t *category_add_200_response_result) {
    if(NULL == category_add_200_response_result){
        return ;
    }
    if(category_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (category_add_200_response_result->category_id) {
        free(category_add_200_response_result->category_id);
        category_add_200_response_result->category_id = NULL;
    }
    free(category_add_200_response_result);
}

cJSON *category_add_200_response_result_convertToJSON(category_add_200_response_result_t *category_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_add_200_response_result->category_id
    if(category_add_200_response_result->category_id) {
    if(cJSON_AddStringToObject(item, "category_id", category_add_200_response_result->category_id) == NULL) {
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

category_add_200_response_result_t *category_add_200_response_result_parseFromJSON(cJSON *category_add_200_response_resultJSON){

    category_add_200_response_result_t *category_add_200_response_result_local_var = NULL;

    // category_add_200_response_result->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(category_add_200_response_resultJSON, "category_id");
    if (cJSON_IsNull(category_id)) {
        category_id = NULL;
    }
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }


    category_add_200_response_result_local_var = category_add_200_response_result_create_internal (
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL
        );

    return category_add_200_response_result_local_var;
end:
    return NULL;

}
