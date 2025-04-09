#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "return_count_200_response_result.h"



static return_count_200_response_result_t *return_count_200_response_result_create_internal(
    int returns_count
    ) {
    return_count_200_response_result_t *return_count_200_response_result_local_var = malloc(sizeof(return_count_200_response_result_t));
    if (!return_count_200_response_result_local_var) {
        return NULL;
    }
    return_count_200_response_result_local_var->returns_count = returns_count;

    return_count_200_response_result_local_var->_library_owned = 1;
    return return_count_200_response_result_local_var;
}

__attribute__((deprecated)) return_count_200_response_result_t *return_count_200_response_result_create(
    int returns_count
    ) {
    return return_count_200_response_result_create_internal (
        returns_count
        );
}

void return_count_200_response_result_free(return_count_200_response_result_t *return_count_200_response_result) {
    if(NULL == return_count_200_response_result){
        return ;
    }
    if(return_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "return_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(return_count_200_response_result);
}

cJSON *return_count_200_response_result_convertToJSON(return_count_200_response_result_t *return_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // return_count_200_response_result->returns_count
    if(return_count_200_response_result->returns_count) {
    if(cJSON_AddNumberToObject(item, "returns_count", return_count_200_response_result->returns_count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

return_count_200_response_result_t *return_count_200_response_result_parseFromJSON(cJSON *return_count_200_response_resultJSON){

    return_count_200_response_result_t *return_count_200_response_result_local_var = NULL;

    // return_count_200_response_result->returns_count
    cJSON *returns_count = cJSON_GetObjectItemCaseSensitive(return_count_200_response_resultJSON, "returns_count");
    if (cJSON_IsNull(returns_count)) {
        returns_count = NULL;
    }
    if (returns_count) { 
    if(!cJSON_IsNumber(returns_count))
    {
    goto end; //Numeric
    }
    }


    return_count_200_response_result_local_var = return_count_200_response_result_create_internal (
        returns_count ? returns_count->valuedouble : 0
        );

    return return_count_200_response_result_local_var;
end:
    return NULL;

}
