#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_live_shipping_service_delete_200_response_result.h"



static basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_create_internal(
    int status
    ) {
    basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_local_var = malloc(sizeof(basket_live_shipping_service_delete_200_response_result_t));
    if (!basket_live_shipping_service_delete_200_response_result_local_var) {
        return NULL;
    }
    basket_live_shipping_service_delete_200_response_result_local_var->status = status;

    basket_live_shipping_service_delete_200_response_result_local_var->_library_owned = 1;
    return basket_live_shipping_service_delete_200_response_result_local_var;
}

__attribute__((deprecated)) basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_create(
    int status
    ) {
    return basket_live_shipping_service_delete_200_response_result_create_internal (
        status
        );
}

void basket_live_shipping_service_delete_200_response_result_free(basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result) {
    if(NULL == basket_live_shipping_service_delete_200_response_result){
        return ;
    }
    if(basket_live_shipping_service_delete_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_live_shipping_service_delete_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(basket_live_shipping_service_delete_200_response_result);
}

cJSON *basket_live_shipping_service_delete_200_response_result_convertToJSON(basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // basket_live_shipping_service_delete_200_response_result->status
    if(basket_live_shipping_service_delete_200_response_result->status) {
    if(cJSON_AddBoolToObject(item, "status", basket_live_shipping_service_delete_200_response_result->status) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_parseFromJSON(cJSON *basket_live_shipping_service_delete_200_response_resultJSON){

    basket_live_shipping_service_delete_200_response_result_t *basket_live_shipping_service_delete_200_response_result_local_var = NULL;

    // basket_live_shipping_service_delete_200_response_result->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_delete_200_response_resultJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsBool(status))
    {
    goto end; //Bool
    }
    }


    basket_live_shipping_service_delete_200_response_result_local_var = basket_live_shipping_service_delete_200_response_result_create_internal (
        status ? status->valueint : 0
        );

    return basket_live_shipping_service_delete_200_response_result_local_var;
end:
    return NULL;

}
