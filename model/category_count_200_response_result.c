#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "category_count_200_response_result.h"



static category_count_200_response_result_t *category_count_200_response_result_create_internal(
    int categories_count
    ) {
    category_count_200_response_result_t *category_count_200_response_result_local_var = malloc(sizeof(category_count_200_response_result_t));
    if (!category_count_200_response_result_local_var) {
        return NULL;
    }
    category_count_200_response_result_local_var->categories_count = categories_count;

    category_count_200_response_result_local_var->_library_owned = 1;
    return category_count_200_response_result_local_var;
}

__attribute__((deprecated)) category_count_200_response_result_t *category_count_200_response_result_create(
    int categories_count
    ) {
    return category_count_200_response_result_create_internal (
        categories_count
        );
}

void category_count_200_response_result_free(category_count_200_response_result_t *category_count_200_response_result) {
    if(NULL == category_count_200_response_result){
        return ;
    }
    if(category_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "category_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(category_count_200_response_result);
}

cJSON *category_count_200_response_result_convertToJSON(category_count_200_response_result_t *category_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // category_count_200_response_result->categories_count
    if(category_count_200_response_result->categories_count) {
    if(cJSON_AddNumberToObject(item, "categories_count", category_count_200_response_result->categories_count) == NULL) {
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

category_count_200_response_result_t *category_count_200_response_result_parseFromJSON(cJSON *category_count_200_response_resultJSON){

    category_count_200_response_result_t *category_count_200_response_result_local_var = NULL;

    // category_count_200_response_result->categories_count
    cJSON *categories_count = cJSON_GetObjectItemCaseSensitive(category_count_200_response_resultJSON, "categories_count");
    if (cJSON_IsNull(categories_count)) {
        categories_count = NULL;
    }
    if (categories_count) { 
    if(!cJSON_IsNumber(categories_count))
    {
    goto end; //Numeric
    }
    }


    category_count_200_response_result_local_var = category_count_200_response_result_create_internal (
        categories_count ? categories_count->valuedouble : 0
        );

    return category_count_200_response_result_local_var;
end:
    return NULL;

}
