#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "basket_live_shipping_service_create_200_response_result.h"



static basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result_create_internal(
    int id
    ) {
    basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result_local_var = malloc(sizeof(basket_live_shipping_service_create_200_response_result_t));
    if (!basket_live_shipping_service_create_200_response_result_local_var) {
        return NULL;
    }
    basket_live_shipping_service_create_200_response_result_local_var->id = id;

    basket_live_shipping_service_create_200_response_result_local_var->_library_owned = 1;
    return basket_live_shipping_service_create_200_response_result_local_var;
}

__attribute__((deprecated)) basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result_create(
    int id
    ) {
    return basket_live_shipping_service_create_200_response_result_create_internal (
        id
        );
}

void basket_live_shipping_service_create_200_response_result_free(basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result) {
    if(NULL == basket_live_shipping_service_create_200_response_result){
        return ;
    }
    if(basket_live_shipping_service_create_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "basket_live_shipping_service_create_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    free(basket_live_shipping_service_create_200_response_result);
}

cJSON *basket_live_shipping_service_create_200_response_result_convertToJSON(basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // basket_live_shipping_service_create_200_response_result->id
    if(basket_live_shipping_service_create_200_response_result->id) {
    if(cJSON_AddNumberToObject(item, "id", basket_live_shipping_service_create_200_response_result->id) == NULL) {
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

basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result_parseFromJSON(cJSON *basket_live_shipping_service_create_200_response_resultJSON){

    basket_live_shipping_service_create_200_response_result_t *basket_live_shipping_service_create_200_response_result_local_var = NULL;

    // basket_live_shipping_service_create_200_response_result->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(basket_live_shipping_service_create_200_response_resultJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }


    basket_live_shipping_service_create_200_response_result_local_var = basket_live_shipping_service_create_200_response_result_create_internal (
        id ? id->valuedouble : 0
        );

    return basket_live_shipping_service_create_200_response_result_local_var;
end:
    return NULL;

}
