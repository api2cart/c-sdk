#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_refund_add_200_response_result.h"



static order_refund_add_200_response_result_t *order_refund_add_200_response_result_create_internal(
    char *refund_id,
    char *additional_refund_ids
    ) {
    order_refund_add_200_response_result_t *order_refund_add_200_response_result_local_var = malloc(sizeof(order_refund_add_200_response_result_t));
    if (!order_refund_add_200_response_result_local_var) {
        return NULL;
    }
    order_refund_add_200_response_result_local_var->refund_id = refund_id;
    order_refund_add_200_response_result_local_var->additional_refund_ids = additional_refund_ids;

    order_refund_add_200_response_result_local_var->_library_owned = 1;
    return order_refund_add_200_response_result_local_var;
}

__attribute__((deprecated)) order_refund_add_200_response_result_t *order_refund_add_200_response_result_create(
    char *refund_id,
    char *additional_refund_ids
    ) {
    return order_refund_add_200_response_result_create_internal (
        refund_id,
        additional_refund_ids
        );
}

void order_refund_add_200_response_result_free(order_refund_add_200_response_result_t *order_refund_add_200_response_result) {
    if(NULL == order_refund_add_200_response_result){
        return ;
    }
    if(order_refund_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_refund_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_refund_add_200_response_result->refund_id) {
        free(order_refund_add_200_response_result->refund_id);
        order_refund_add_200_response_result->refund_id = NULL;
    }
    if (order_refund_add_200_response_result->additional_refund_ids) {
        free(order_refund_add_200_response_result->additional_refund_ids);
        order_refund_add_200_response_result->additional_refund_ids = NULL;
    }
    free(order_refund_add_200_response_result);
}

cJSON *order_refund_add_200_response_result_convertToJSON(order_refund_add_200_response_result_t *order_refund_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_refund_add_200_response_result->refund_id
    if(order_refund_add_200_response_result->refund_id) {
    if(cJSON_AddStringToObject(item, "refund_id", order_refund_add_200_response_result->refund_id) == NULL) {
    goto fail; //String
    }
    }


    // order_refund_add_200_response_result->additional_refund_ids
    if(order_refund_add_200_response_result->additional_refund_ids) {
    if(cJSON_AddStringToObject(item, "additional_refund_ids", order_refund_add_200_response_result->additional_refund_ids) == NULL) {
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

order_refund_add_200_response_result_t *order_refund_add_200_response_result_parseFromJSON(cJSON *order_refund_add_200_response_resultJSON){

    order_refund_add_200_response_result_t *order_refund_add_200_response_result_local_var = NULL;

    // order_refund_add_200_response_result->refund_id
    cJSON *refund_id = cJSON_GetObjectItemCaseSensitive(order_refund_add_200_response_resultJSON, "refund_id");
    if (cJSON_IsNull(refund_id)) {
        refund_id = NULL;
    }
    if (refund_id) { 
    if(!cJSON_IsString(refund_id) && !cJSON_IsNull(refund_id))
    {
    goto end; //String
    }
    }

    // order_refund_add_200_response_result->additional_refund_ids
    cJSON *additional_refund_ids = cJSON_GetObjectItemCaseSensitive(order_refund_add_200_response_resultJSON, "additional_refund_ids");
    if (cJSON_IsNull(additional_refund_ids)) {
        additional_refund_ids = NULL;
    }
    if (additional_refund_ids) { 
    if(!cJSON_IsString(additional_refund_ids) && !cJSON_IsNull(additional_refund_ids))
    {
    goto end; //String
    }
    }


    order_refund_add_200_response_result_local_var = order_refund_add_200_response_result_create_internal (
        refund_id && !cJSON_IsNull(refund_id) ? strdup(refund_id->valuestring) : NULL,
        additional_refund_ids && !cJSON_IsNull(additional_refund_ids) ? strdup(additional_refund_ids->valuestring) : NULL
        );

    return order_refund_add_200_response_result_local_var;
end:
    return NULL;

}
