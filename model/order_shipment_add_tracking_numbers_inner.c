#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_add_tracking_numbers_inner.h"



static order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_create_internal(
    char *carrier_id,
    char *tracking_number
    ) {
    order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_local_var = malloc(sizeof(order_shipment_add_tracking_numbers_inner_t));
    if (!order_shipment_add_tracking_numbers_inner_local_var) {
        return NULL;
    }
    order_shipment_add_tracking_numbers_inner_local_var->carrier_id = carrier_id;
    order_shipment_add_tracking_numbers_inner_local_var->tracking_number = tracking_number;

    order_shipment_add_tracking_numbers_inner_local_var->_library_owned = 1;
    return order_shipment_add_tracking_numbers_inner_local_var;
}

__attribute__((deprecated)) order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_create(
    char *carrier_id,
    char *tracking_number
    ) {
    return order_shipment_add_tracking_numbers_inner_create_internal (
        carrier_id,
        tracking_number
        );
}

void order_shipment_add_tracking_numbers_inner_free(order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner) {
    if(NULL == order_shipment_add_tracking_numbers_inner){
        return ;
    }
    if(order_shipment_add_tracking_numbers_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_add_tracking_numbers_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_add_tracking_numbers_inner->carrier_id) {
        free(order_shipment_add_tracking_numbers_inner->carrier_id);
        order_shipment_add_tracking_numbers_inner->carrier_id = NULL;
    }
    if (order_shipment_add_tracking_numbers_inner->tracking_number) {
        free(order_shipment_add_tracking_numbers_inner->tracking_number);
        order_shipment_add_tracking_numbers_inner->tracking_number = NULL;
    }
    free(order_shipment_add_tracking_numbers_inner);
}

cJSON *order_shipment_add_tracking_numbers_inner_convertToJSON(order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_add_tracking_numbers_inner->carrier_id
    if(order_shipment_add_tracking_numbers_inner->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrier_id", order_shipment_add_tracking_numbers_inner->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_add_tracking_numbers_inner->tracking_number
    if(order_shipment_add_tracking_numbers_inner->tracking_number) {
    if(cJSON_AddStringToObject(item, "tracking_number", order_shipment_add_tracking_numbers_inner->tracking_number) == NULL) {
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

order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_parseFromJSON(cJSON *order_shipment_add_tracking_numbers_innerJSON){

    order_shipment_add_tracking_numbers_inner_t *order_shipment_add_tracking_numbers_inner_local_var = NULL;

    // order_shipment_add_tracking_numbers_inner->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(order_shipment_add_tracking_numbers_innerJSON, "carrier_id");
    if (cJSON_IsNull(carrier_id)) {
        carrier_id = NULL;
    }
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // order_shipment_add_tracking_numbers_inner->tracking_number
    cJSON *tracking_number = cJSON_GetObjectItemCaseSensitive(order_shipment_add_tracking_numbers_innerJSON, "tracking_number");
    if (cJSON_IsNull(tracking_number)) {
        tracking_number = NULL;
    }
    if (tracking_number) { 
    if(!cJSON_IsString(tracking_number) && !cJSON_IsNull(tracking_number))
    {
    goto end; //String
    }
    }


    order_shipment_add_tracking_numbers_inner_local_var = order_shipment_add_tracking_numbers_inner_create_internal (
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        tracking_number && !cJSON_IsNull(tracking_number) ? strdup(tracking_number->valuestring) : NULL
        );

    return order_shipment_add_tracking_numbers_inner_local_var;
end:
    return NULL;

}
