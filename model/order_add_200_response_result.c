#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_add_200_response_result.h"



static order_add_200_response_result_t *order_add_200_response_result_create_internal(
    char *order_id,
    char *id,
    char *customer_id
    ) {
    order_add_200_response_result_t *order_add_200_response_result_local_var = malloc(sizeof(order_add_200_response_result_t));
    if (!order_add_200_response_result_local_var) {
        return NULL;
    }
    order_add_200_response_result_local_var->order_id = order_id;
    order_add_200_response_result_local_var->id = id;
    order_add_200_response_result_local_var->customer_id = customer_id;

    order_add_200_response_result_local_var->_library_owned = 1;
    return order_add_200_response_result_local_var;
}

__attribute__((deprecated)) order_add_200_response_result_t *order_add_200_response_result_create(
    char *order_id,
    char *id,
    char *customer_id
    ) {
    return order_add_200_response_result_create_internal (
        order_id,
        id,
        customer_id
        );
}

void order_add_200_response_result_free(order_add_200_response_result_t *order_add_200_response_result) {
    if(NULL == order_add_200_response_result){
        return ;
    }
    if(order_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_add_200_response_result->order_id) {
        free(order_add_200_response_result->order_id);
        order_add_200_response_result->order_id = NULL;
    }
    if (order_add_200_response_result->id) {
        free(order_add_200_response_result->id);
        order_add_200_response_result->id = NULL;
    }
    if (order_add_200_response_result->customer_id) {
        free(order_add_200_response_result->customer_id);
        order_add_200_response_result->customer_id = NULL;
    }
    free(order_add_200_response_result);
}

cJSON *order_add_200_response_result_convertToJSON(order_add_200_response_result_t *order_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_add_200_response_result->order_id
    if(order_add_200_response_result->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_add_200_response_result->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_add_200_response_result->id
    if(order_add_200_response_result->id) {
    if(cJSON_AddStringToObject(item, "id", order_add_200_response_result->id) == NULL) {
    goto fail; //String
    }
    }


    // order_add_200_response_result->customer_id
    if(order_add_200_response_result->customer_id) {
    if(cJSON_AddStringToObject(item, "customer_id", order_add_200_response_result->customer_id) == NULL) {
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

order_add_200_response_result_t *order_add_200_response_result_parseFromJSON(cJSON *order_add_200_response_resultJSON){

    order_add_200_response_result_t *order_add_200_response_result_local_var = NULL;

    // order_add_200_response_result->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_add_200_response_resultJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_add_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_add_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_add_200_response_result->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(order_add_200_response_resultJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (customer_id) { 
    if(!cJSON_IsString(customer_id) && !cJSON_IsNull(customer_id))
    {
    goto end; //String
    }
    }


    order_add_200_response_result_local_var = order_add_200_response_result_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        customer_id && !cJSON_IsNull(customer_id) ? strdup(customer_id->valuestring) : NULL
        );

    return order_add_200_response_result_local_var;
end:
    return NULL;

}
