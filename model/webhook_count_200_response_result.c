#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_count_200_response_result.h"



static webhook_count_200_response_result_t *webhook_count_200_response_result_create_internal(
    int webhook_count
    ) {
    webhook_count_200_response_result_t *webhook_count_200_response_result_local_var = malloc(sizeof(webhook_count_200_response_result_t));
    if (!webhook_count_200_response_result_local_var) {
        return NULL;
    }
    webhook_count_200_response_result_local_var->webhook_count = webhook_count;

    webhook_count_200_response_result_local_var->_library_owned = 1;
    return webhook_count_200_response_result_local_var;
}

__attribute__((deprecated)) webhook_count_200_response_result_t *webhook_count_200_response_result_create(
    int webhook_count
    ) {
    return webhook_count_200_response_result_create_internal (
        webhook_count
        );
}

void webhook_count_200_response_result_free(webhook_count_200_response_result_t *webhook_count_200_response_result) {
    if(NULL == webhook_count_200_response_result){
        return ;
    }
    if(webhook_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(webhook_count_200_response_result);
}

cJSON *webhook_count_200_response_result_convertToJSON(webhook_count_200_response_result_t *webhook_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // webhook_count_200_response_result->webhook_count
    if(webhook_count_200_response_result->webhook_count) {
    if(cJSON_AddNumberToObject(item, "webhook_count", webhook_count_200_response_result->webhook_count) == NULL) {
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

webhook_count_200_response_result_t *webhook_count_200_response_result_parseFromJSON(cJSON *webhook_count_200_response_resultJSON){

    webhook_count_200_response_result_t *webhook_count_200_response_result_local_var = NULL;

    // webhook_count_200_response_result->webhook_count
    cJSON *webhook_count = cJSON_GetObjectItemCaseSensitive(webhook_count_200_response_resultJSON, "webhook_count");
    if (cJSON_IsNull(webhook_count)) {
        webhook_count = NULL;
    }
    if (webhook_count) { 
    if(!cJSON_IsNumber(webhook_count))
    {
    goto end; //Numeric
    }
    }


    webhook_count_200_response_result_local_var = webhook_count_200_response_result_create_internal (
        webhook_count ? webhook_count->valuedouble : 0
        );

    return webhook_count_200_response_result_local_var;
end:
    return NULL;

}
