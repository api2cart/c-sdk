#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_tracking_number.h"



static shipment_tracking_number_t *shipment_tracking_number_create_internal(
    char *carrier_id,
    char *tracking_number,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    shipment_tracking_number_t *shipment_tracking_number_local_var = malloc(sizeof(shipment_tracking_number_t));
    if (!shipment_tracking_number_local_var) {
        return NULL;
    }
    shipment_tracking_number_local_var->carrier_id = carrier_id;
    shipment_tracking_number_local_var->tracking_number = tracking_number;
    shipment_tracking_number_local_var->additional_fields = additional_fields;
    shipment_tracking_number_local_var->custom_fields = custom_fields;

    shipment_tracking_number_local_var->_library_owned = 1;
    return shipment_tracking_number_local_var;
}

__attribute__((deprecated)) shipment_tracking_number_t *shipment_tracking_number_create(
    char *carrier_id,
    char *tracking_number,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return shipment_tracking_number_create_internal (
        carrier_id,
        tracking_number,
        additional_fields,
        custom_fields
        );
}

void shipment_tracking_number_free(shipment_tracking_number_t *shipment_tracking_number) {
    if(NULL == shipment_tracking_number){
        return ;
    }
    if(shipment_tracking_number->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "shipment_tracking_number_free");
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_tracking_number->carrier_id) {
        free(shipment_tracking_number->carrier_id);
        shipment_tracking_number->carrier_id = NULL;
    }
    if (shipment_tracking_number->tracking_number) {
        free(shipment_tracking_number->tracking_number);
        shipment_tracking_number->tracking_number = NULL;
    }
    if (shipment_tracking_number->additional_fields) {
        object_free(shipment_tracking_number->additional_fields);
        shipment_tracking_number->additional_fields = NULL;
    }
    if (shipment_tracking_number->custom_fields) {
        object_free(shipment_tracking_number->custom_fields);
        shipment_tracking_number->custom_fields = NULL;
    }
    free(shipment_tracking_number);
}

cJSON *shipment_tracking_number_convertToJSON(shipment_tracking_number_t *shipment_tracking_number) {
    cJSON *item = cJSON_CreateObject();

    // shipment_tracking_number->carrier_id
    if(shipment_tracking_number->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrier_id", shipment_tracking_number->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_tracking_number->tracking_number
    if(shipment_tracking_number->tracking_number) {
    if(cJSON_AddStringToObject(item, "tracking_number", shipment_tracking_number->tracking_number) == NULL) {
    goto fail; //String
    }
    }


    // shipment_tracking_number->additional_fields
    if(shipment_tracking_number->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(shipment_tracking_number->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // shipment_tracking_number->custom_fields
    if(shipment_tracking_number->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(shipment_tracking_number->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

shipment_tracking_number_t *shipment_tracking_number_parseFromJSON(cJSON *shipment_tracking_numberJSON){

    shipment_tracking_number_t *shipment_tracking_number_local_var = NULL;

    // shipment_tracking_number->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(shipment_tracking_numberJSON, "carrier_id");
    if (cJSON_IsNull(carrier_id)) {
        carrier_id = NULL;
    }
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // shipment_tracking_number->tracking_number
    cJSON *tracking_number = cJSON_GetObjectItemCaseSensitive(shipment_tracking_numberJSON, "tracking_number");
    if (cJSON_IsNull(tracking_number)) {
        tracking_number = NULL;
    }
    if (tracking_number) { 
    if(!cJSON_IsString(tracking_number) && !cJSON_IsNull(tracking_number))
    {
    goto end; //String
    }
    }

    // shipment_tracking_number->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(shipment_tracking_numberJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // shipment_tracking_number->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(shipment_tracking_numberJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    shipment_tracking_number_local_var = shipment_tracking_number_create_internal (
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        tracking_number && !cJSON_IsNull(tracking_number) ? strdup(tracking_number->valuestring) : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return shipment_tracking_number_local_var;
end:
    return NULL;

}
