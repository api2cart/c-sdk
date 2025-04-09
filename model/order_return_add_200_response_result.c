#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_return_add_200_response_result.h"



static order_return_add_200_response_result_t *order_return_add_200_response_result_create_internal(
    char *return_id
    ) {
    order_return_add_200_response_result_t *order_return_add_200_response_result_local_var = malloc(sizeof(order_return_add_200_response_result_t));
    if (!order_return_add_200_response_result_local_var) {
        return NULL;
    }
    order_return_add_200_response_result_local_var->return_id = return_id;

    order_return_add_200_response_result_local_var->_library_owned = 1;
    return order_return_add_200_response_result_local_var;
}

__attribute__((deprecated)) order_return_add_200_response_result_t *order_return_add_200_response_result_create(
    char *return_id
    ) {
    return order_return_add_200_response_result_create_internal (
        return_id
        );
}

void order_return_add_200_response_result_free(order_return_add_200_response_result_t *order_return_add_200_response_result) {
    if(NULL == order_return_add_200_response_result){
        return ;
    }
    if(order_return_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_return_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_return_add_200_response_result->return_id) {
        free(order_return_add_200_response_result->return_id);
        order_return_add_200_response_result->return_id = NULL;
    }
    free(order_return_add_200_response_result);
}

cJSON *order_return_add_200_response_result_convertToJSON(order_return_add_200_response_result_t *order_return_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_return_add_200_response_result->return_id
    if(order_return_add_200_response_result->return_id) {
    if(cJSON_AddStringToObject(item, "return_id", order_return_add_200_response_result->return_id) == NULL) {
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

order_return_add_200_response_result_t *order_return_add_200_response_result_parseFromJSON(cJSON *order_return_add_200_response_resultJSON){

    order_return_add_200_response_result_t *order_return_add_200_response_result_local_var = NULL;

    // order_return_add_200_response_result->return_id
    cJSON *return_id = cJSON_GetObjectItemCaseSensitive(order_return_add_200_response_resultJSON, "return_id");
    if (cJSON_IsNull(return_id)) {
        return_id = NULL;
    }
    if (return_id) { 
    if(!cJSON_IsString(return_id) && !cJSON_IsNull(return_id))
    {
    goto end; //String
    }
    }


    order_return_add_200_response_result_local_var = order_return_add_200_response_result_create_internal (
        return_id && !cJSON_IsNull(return_id) ? strdup(return_id->valuestring) : NULL
        );

    return order_return_add_200_response_result_local_var;
end:
    return NULL;

}
