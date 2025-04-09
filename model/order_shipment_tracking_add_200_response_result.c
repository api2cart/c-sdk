#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_tracking_add_200_response_result.h"



static order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result_create_internal(
    char *shipment_tracking_id
    ) {
    order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result_local_var = malloc(sizeof(order_shipment_tracking_add_200_response_result_t));
    if (!order_shipment_tracking_add_200_response_result_local_var) {
        return NULL;
    }
    order_shipment_tracking_add_200_response_result_local_var->shipment_tracking_id = shipment_tracking_id;

    order_shipment_tracking_add_200_response_result_local_var->_library_owned = 1;
    return order_shipment_tracking_add_200_response_result_local_var;
}

__attribute__((deprecated)) order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result_create(
    char *shipment_tracking_id
    ) {
    return order_shipment_tracking_add_200_response_result_create_internal (
        shipment_tracking_id
        );
}

void order_shipment_tracking_add_200_response_result_free(order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result) {
    if(NULL == order_shipment_tracking_add_200_response_result){
        return ;
    }
    if(order_shipment_tracking_add_200_response_result->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_tracking_add_200_response_result_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_tracking_add_200_response_result->shipment_tracking_id) {
        free(order_shipment_tracking_add_200_response_result->shipment_tracking_id);
        order_shipment_tracking_add_200_response_result->shipment_tracking_id = NULL;
    }
    free(order_shipment_tracking_add_200_response_result);
}

cJSON *order_shipment_tracking_add_200_response_result_convertToJSON(order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_tracking_add_200_response_result->shipment_tracking_id
    if(order_shipment_tracking_add_200_response_result->shipment_tracking_id) {
    if(cJSON_AddStringToObject(item, "shipment_tracking_id", order_shipment_tracking_add_200_response_result->shipment_tracking_id) == NULL) {
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

order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result_parseFromJSON(cJSON *order_shipment_tracking_add_200_response_resultJSON){

    order_shipment_tracking_add_200_response_result_t *order_shipment_tracking_add_200_response_result_local_var = NULL;

    // order_shipment_tracking_add_200_response_result->shipment_tracking_id
    cJSON *shipment_tracking_id = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_add_200_response_resultJSON, "shipment_tracking_id");
    if (cJSON_IsNull(shipment_tracking_id)) {
        shipment_tracking_id = NULL;
    }
    if (shipment_tracking_id) { 
    if(!cJSON_IsString(shipment_tracking_id) && !cJSON_IsNull(shipment_tracking_id))
    {
    goto end; //String
    }
    }


    order_shipment_tracking_add_200_response_result_local_var = order_shipment_tracking_add_200_response_result_create_internal (
        shipment_tracking_id && !cJSON_IsNull(shipment_tracking_id) ? strdup(shipment_tracking_id->valuestring) : NULL
        );

    return order_shipment_tracking_add_200_response_result_local_var;
end:
    return NULL;

}
