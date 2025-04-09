#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_count_200_response_result.h"



static order_count_200_response_result_t *order_count_200_response_result_create_internal(
    int orders_count
    ) {
    order_count_200_response_result_t *order_count_200_response_result_local_var = malloc(sizeof(order_count_200_response_result_t));
    if (!order_count_200_response_result_local_var) {
        return NULL;
    }
    order_count_200_response_result_local_var->orders_count = orders_count;

    order_count_200_response_result_local_var->_library_owned = 1;
    return order_count_200_response_result_local_var;
}

__attribute__((deprecated)) order_count_200_response_result_t *order_count_200_response_result_create(
    int orders_count
    ) {
    return order_count_200_response_result_create_internal (
        orders_count
        );
}

void order_count_200_response_result_free(order_count_200_response_result_t *order_count_200_response_result) {
    if(NULL == order_count_200_response_result){
        return ;
    }
    if(order_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(order_count_200_response_result);
}

cJSON *order_count_200_response_result_convertToJSON(order_count_200_response_result_t *order_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_count_200_response_result->orders_count
    if(order_count_200_response_result->orders_count) {
    if(cJSON_AddNumberToObject(item, "orders_count", order_count_200_response_result->orders_count) == NULL) {
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

order_count_200_response_result_t *order_count_200_response_result_parseFromJSON(cJSON *order_count_200_response_resultJSON){

    order_count_200_response_result_t *order_count_200_response_result_local_var = NULL;

    // order_count_200_response_result->orders_count
    cJSON *orders_count = cJSON_GetObjectItemCaseSensitive(order_count_200_response_resultJSON, "orders_count");
    if (cJSON_IsNull(orders_count)) {
        orders_count = NULL;
    }
    if (orders_count) { 
    if(!cJSON_IsNumber(orders_count))
    {
    goto end; //Numeric
    }
    }


    order_count_200_response_result_local_var = order_count_200_response_result_create_internal (
        orders_count ? orders_count->valuedouble : 0
        );

    return order_count_200_response_result_local_var;
end:
    return NULL;

}
