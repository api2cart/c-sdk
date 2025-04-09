#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_financial_status_list_200_response_result_order_financial_statuses_inner.h"



static order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner_create_internal(
    char *id,
    char *name
    ) {
    order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var = malloc(sizeof(order_financial_status_list_200_response_result_order_financial_statuses_inner_t));
    if (!order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var) {
        return NULL;
    }
    order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var->id = id;
    order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var->name = name;

    order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var->_library_owned = 1;
    return order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var;
}

__attribute__((deprecated)) order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner_create(
    char *id,
    char *name
    ) {
    return order_financial_status_list_200_response_result_order_financial_statuses_inner_create_internal (
        id,
        name
        );
}

void order_financial_status_list_200_response_result_order_financial_statuses_inner_free(order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner) {
    if(NULL == order_financial_status_list_200_response_result_order_financial_statuses_inner){
        return ;
    }
    if(order_financial_status_list_200_response_result_order_financial_statuses_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_financial_status_list_200_response_result_order_financial_statuses_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_financial_status_list_200_response_result_order_financial_statuses_inner->id) {
        free(order_financial_status_list_200_response_result_order_financial_statuses_inner->id);
        order_financial_status_list_200_response_result_order_financial_statuses_inner->id = NULL;
    }
    if (order_financial_status_list_200_response_result_order_financial_statuses_inner->name) {
        free(order_financial_status_list_200_response_result_order_financial_statuses_inner->name);
        order_financial_status_list_200_response_result_order_financial_statuses_inner->name = NULL;
    }
    free(order_financial_status_list_200_response_result_order_financial_statuses_inner);
}

cJSON *order_financial_status_list_200_response_result_order_financial_statuses_inner_convertToJSON(order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_financial_status_list_200_response_result_order_financial_statuses_inner->id
    if(order_financial_status_list_200_response_result_order_financial_statuses_inner->id) {
    if(cJSON_AddStringToObject(item, "id", order_financial_status_list_200_response_result_order_financial_statuses_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // order_financial_status_list_200_response_result_order_financial_statuses_inner->name
    if(order_financial_status_list_200_response_result_order_financial_statuses_inner->name) {
    if(cJSON_AddStringToObject(item, "name", order_financial_status_list_200_response_result_order_financial_statuses_inner->name) == NULL) {
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

order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner_parseFromJSON(cJSON *order_financial_status_list_200_response_result_order_financial_statuses_innerJSON){

    order_financial_status_list_200_response_result_order_financial_statuses_inner_t *order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var = NULL;

    // order_financial_status_list_200_response_result_order_financial_statuses_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(order_financial_status_list_200_response_result_order_financial_statuses_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // order_financial_status_list_200_response_result_order_financial_statuses_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(order_financial_status_list_200_response_result_order_financial_statuses_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var = order_financial_status_list_200_response_result_order_financial_statuses_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return order_financial_status_list_200_response_result_order_financial_statuses_inner_local_var;
end:
    return NULL;

}
