#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attribute_count_200_response_result.h"



static attribute_count_200_response_result_t *attribute_count_200_response_result_create_internal(
    int attributes_count
    ) {
    attribute_count_200_response_result_t *attribute_count_200_response_result_local_var = malloc(sizeof(attribute_count_200_response_result_t));
    if (!attribute_count_200_response_result_local_var) {
        return NULL;
    }
    attribute_count_200_response_result_local_var->attributes_count = attributes_count;

    attribute_count_200_response_result_local_var->_library_owned = 1;
    return attribute_count_200_response_result_local_var;
}

__attribute__((deprecated)) attribute_count_200_response_result_t *attribute_count_200_response_result_create(
    int attributes_count
    ) {
    return attribute_count_200_response_result_create_internal (
        attributes_count
        );
}

void attribute_count_200_response_result_free(attribute_count_200_response_result_t *attribute_count_200_response_result) {
    if(NULL == attribute_count_200_response_result){
        return ;
    }
    if(attribute_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attribute_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(attribute_count_200_response_result);
}

cJSON *attribute_count_200_response_result_convertToJSON(attribute_count_200_response_result_t *attribute_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // attribute_count_200_response_result->attributes_count
    if(attribute_count_200_response_result->attributes_count) {
    if(cJSON_AddNumberToObject(item, "attributes_count", attribute_count_200_response_result->attributes_count) == NULL) {
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

attribute_count_200_response_result_t *attribute_count_200_response_result_parseFromJSON(cJSON *attribute_count_200_response_resultJSON){

    attribute_count_200_response_result_t *attribute_count_200_response_result_local_var = NULL;

    // attribute_count_200_response_result->attributes_count
    cJSON *attributes_count = cJSON_GetObjectItemCaseSensitive(attribute_count_200_response_resultJSON, "attributes_count");
    if (cJSON_IsNull(attributes_count)) {
        attributes_count = NULL;
    }
    if (attributes_count) { 
    if(!cJSON_IsNumber(attributes_count))
    {
    goto end; //Numeric
    }
    }


    attribute_count_200_response_result_local_var = attribute_count_200_response_result_create_internal (
        attributes_count ? attributes_count->valuedouble : 0
        );

    return attribute_count_200_response_result_local_var;
end:
    return NULL;

}
