#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_group_add_200_response_result.h"



static customer_group_add_200_response_result_t *customer_group_add_200_response_result_create_internal(
    char *group_id
    ) {
    customer_group_add_200_response_result_t *customer_group_add_200_response_result_local_var = malloc(sizeof(customer_group_add_200_response_result_t));
    if (!customer_group_add_200_response_result_local_var) {
        return NULL;
    }
    customer_group_add_200_response_result_local_var->group_id = group_id;

    customer_group_add_200_response_result_local_var->_library_owned = 1;
    return customer_group_add_200_response_result_local_var;
}

__attribute__((deprecated)) customer_group_add_200_response_result_t *customer_group_add_200_response_result_create(
    char *group_id
    ) {
    return customer_group_add_200_response_result_create_internal (
        group_id
        );
}

void customer_group_add_200_response_result_free(customer_group_add_200_response_result_t *customer_group_add_200_response_result) {
    if(NULL == customer_group_add_200_response_result){
        return ;
    }
    if(customer_group_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_group_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_group_add_200_response_result->group_id) {
        free(customer_group_add_200_response_result->group_id);
        customer_group_add_200_response_result->group_id = NULL;
    }
    free(customer_group_add_200_response_result);
}

cJSON *customer_group_add_200_response_result_convertToJSON(customer_group_add_200_response_result_t *customer_group_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // customer_group_add_200_response_result->group_id
    if(customer_group_add_200_response_result->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", customer_group_add_200_response_result->group_id) == NULL) {
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

customer_group_add_200_response_result_t *customer_group_add_200_response_result_parseFromJSON(cJSON *customer_group_add_200_response_resultJSON){

    customer_group_add_200_response_result_t *customer_group_add_200_response_result_local_var = NULL;

    // customer_group_add_200_response_result->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(customer_group_add_200_response_resultJSON, "group_id");
    if (cJSON_IsNull(group_id)) {
        group_id = NULL;
    }
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }


    customer_group_add_200_response_result_local_var = customer_group_add_200_response_result_create_internal (
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL
        );

    return customer_group_add_200_response_result_local_var;
end:
    return NULL;

}
