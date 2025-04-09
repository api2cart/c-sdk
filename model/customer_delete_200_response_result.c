#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_delete_200_response_result.h"



static customer_delete_200_response_result_t *customer_delete_200_response_result_create_internal(
    int delete_items
    ) {
    customer_delete_200_response_result_t *customer_delete_200_response_result_local_var = malloc(sizeof(customer_delete_200_response_result_t));
    if (!customer_delete_200_response_result_local_var) {
        return NULL;
    }
    customer_delete_200_response_result_local_var->delete_items = delete_items;

    customer_delete_200_response_result_local_var->_library_owned = 1;
    return customer_delete_200_response_result_local_var;
}

__attribute__((deprecated)) customer_delete_200_response_result_t *customer_delete_200_response_result_create(
    int delete_items
    ) {
    return customer_delete_200_response_result_create_internal (
        delete_items
        );
}

void customer_delete_200_response_result_free(customer_delete_200_response_result_t *customer_delete_200_response_result) {
    if(NULL == customer_delete_200_response_result){
        return ;
    }
    if(customer_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(customer_delete_200_response_result);
}

cJSON *customer_delete_200_response_result_convertToJSON(customer_delete_200_response_result_t *customer_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // customer_delete_200_response_result->delete_items
    if(customer_delete_200_response_result->delete_items) {
    if(cJSON_AddNumberToObject(item, "delete_items", customer_delete_200_response_result->delete_items) == NULL) {
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

customer_delete_200_response_result_t *customer_delete_200_response_result_parseFromJSON(cJSON *customer_delete_200_response_resultJSON){

    customer_delete_200_response_result_t *customer_delete_200_response_result_local_var = NULL;

    // customer_delete_200_response_result->delete_items
    cJSON *delete_items = cJSON_GetObjectItemCaseSensitive(customer_delete_200_response_resultJSON, "delete_items");
    if (cJSON_IsNull(delete_items)) {
        delete_items = NULL;
    }
    if (delete_items) { 
    if(!cJSON_IsNumber(delete_items))
    {
    goto end; //Numeric
    }
    }


    customer_delete_200_response_result_local_var = customer_delete_200_response_result_create_internal (
        delete_items ? delete_items->valuedouble : 0
        );

    return customer_delete_200_response_result_local_var;
end:
    return NULL;

}
