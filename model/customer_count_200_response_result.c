#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_count_200_response_result.h"



static customer_count_200_response_result_t *customer_count_200_response_result_create_internal(
    int customers_count
    ) {
    customer_count_200_response_result_t *customer_count_200_response_result_local_var = malloc(sizeof(customer_count_200_response_result_t));
    if (!customer_count_200_response_result_local_var) {
        return NULL;
    }
    customer_count_200_response_result_local_var->customers_count = customers_count;

    customer_count_200_response_result_local_var->_library_owned = 1;
    return customer_count_200_response_result_local_var;
}

__attribute__((deprecated)) customer_count_200_response_result_t *customer_count_200_response_result_create(
    int customers_count
    ) {
    return customer_count_200_response_result_create_internal (
        customers_count
        );
}

void customer_count_200_response_result_free(customer_count_200_response_result_t *customer_count_200_response_result) {
    if(NULL == customer_count_200_response_result){
        return ;
    }
    if(customer_count_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_count_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(customer_count_200_response_result);
}

cJSON *customer_count_200_response_result_convertToJSON(customer_count_200_response_result_t *customer_count_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // customer_count_200_response_result->customers_count
    if(customer_count_200_response_result->customers_count) {
    if(cJSON_AddNumberToObject(item, "customers_count", customer_count_200_response_result->customers_count) == NULL) {
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

customer_count_200_response_result_t *customer_count_200_response_result_parseFromJSON(cJSON *customer_count_200_response_resultJSON){

    customer_count_200_response_result_t *customer_count_200_response_result_local_var = NULL;

    // customer_count_200_response_result->customers_count
    cJSON *customers_count = cJSON_GetObjectItemCaseSensitive(customer_count_200_response_resultJSON, "customers_count");
    if (cJSON_IsNull(customers_count)) {
        customers_count = NULL;
    }
    if (customers_count) { 
    if(!cJSON_IsNumber(customers_count))
    {
    goto end; //Numeric
    }
    }


    customer_count_200_response_result_local_var = customer_count_200_response_result_create_internal (
        customers_count ? customers_count->valuedouble : 0
        );

    return customer_count_200_response_result_local_var;
end:
    return NULL;

}
