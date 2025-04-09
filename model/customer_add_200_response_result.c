#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_add_200_response_result.h"



static customer_add_200_response_result_t *customer_add_200_response_result_create_internal(
    char *customer_id
    ) {
    customer_add_200_response_result_t *customer_add_200_response_result_local_var = malloc(sizeof(customer_add_200_response_result_t));
    if (!customer_add_200_response_result_local_var) {
        return NULL;
    }
    customer_add_200_response_result_local_var->customer_id = customer_id;

    customer_add_200_response_result_local_var->_library_owned = 1;
    return customer_add_200_response_result_local_var;
}

__attribute__((deprecated)) customer_add_200_response_result_t *customer_add_200_response_result_create(
    char *customer_id
    ) {
    return customer_add_200_response_result_create_internal (
        customer_id
        );
}

void customer_add_200_response_result_free(customer_add_200_response_result_t *customer_add_200_response_result) {
    if(NULL == customer_add_200_response_result){
        return ;
    }
    if(customer_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_add_200_response_result->customer_id) {
        free(customer_add_200_response_result->customer_id);
        customer_add_200_response_result->customer_id = NULL;
    }
    free(customer_add_200_response_result);
}

cJSON *customer_add_200_response_result_convertToJSON(customer_add_200_response_result_t *customer_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // customer_add_200_response_result->customer_id
    if(customer_add_200_response_result->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", customer_add_200_response_result->customer_id) == NULL) {
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

customer_add_200_response_result_t *customer_add_200_response_result_parseFromJSON(cJSON *customer_add_200_response_resultJSON){

    customer_add_200_response_result_t *customer_add_200_response_result_local_var = NULL;

    // customer_add_200_response_result->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(customer_add_200_response_resultJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }


    customer_add_200_response_result_local_var = customer_add_200_response_result_create_internal (
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL
        );

    return customer_add_200_response_result_local_var;
end:
    return NULL;

}
