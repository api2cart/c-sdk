#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_shipment_tracking_add.h"



static order_shipment_tracking_add_t *order_shipment_tracking_add_create_internal(
    char *order_id,
    char *shipment_id,
    char *carrier_id,
    char *store_id,
    char *tracking_provider,
    char *tracking_number,
    char *tracking_link,
    int send_notifications
    ) {
    order_shipment_tracking_add_t *order_shipment_tracking_add_local_var = malloc(sizeof(order_shipment_tracking_add_t));
    if (!order_shipment_tracking_add_local_var) {
        return NULL;
    }
    order_shipment_tracking_add_local_var->order_id = order_id;
    order_shipment_tracking_add_local_var->shipment_id = shipment_id;
    order_shipment_tracking_add_local_var->carrier_id = carrier_id;
    order_shipment_tracking_add_local_var->store_id = store_id;
    order_shipment_tracking_add_local_var->tracking_provider = tracking_provider;
    order_shipment_tracking_add_local_var->tracking_number = tracking_number;
    order_shipment_tracking_add_local_var->tracking_link = tracking_link;
    order_shipment_tracking_add_local_var->send_notifications = send_notifications;

    order_shipment_tracking_add_local_var->_library_owned = 1;
    return order_shipment_tracking_add_local_var;
}

__attribute__((deprecated)) order_shipment_tracking_add_t *order_shipment_tracking_add_create(
    char *order_id,
    char *shipment_id,
    char *carrier_id,
    char *store_id,
    char *tracking_provider,
    char *tracking_number,
    char *tracking_link,
    int send_notifications
    ) {
    return order_shipment_tracking_add_create_internal (
        order_id,
        shipment_id,
        carrier_id,
        store_id,
        tracking_provider,
        tracking_number,
        tracking_link,
        send_notifications
        );
}

void order_shipment_tracking_add_free(order_shipment_tracking_add_t *order_shipment_tracking_add) {
    if(NULL == order_shipment_tracking_add){
        return ;
    }
    if(order_shipment_tracking_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_shipment_tracking_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_shipment_tracking_add->order_id) {
        free(order_shipment_tracking_add->order_id);
        order_shipment_tracking_add->order_id = NULL;
    }
    if (order_shipment_tracking_add->shipment_id) {
        free(order_shipment_tracking_add->shipment_id);
        order_shipment_tracking_add->shipment_id = NULL;
    }
    if (order_shipment_tracking_add->carrier_id) {
        free(order_shipment_tracking_add->carrier_id);
        order_shipment_tracking_add->carrier_id = NULL;
    }
    if (order_shipment_tracking_add->store_id) {
        free(order_shipment_tracking_add->store_id);
        order_shipment_tracking_add->store_id = NULL;
    }
    if (order_shipment_tracking_add->tracking_provider) {
        free(order_shipment_tracking_add->tracking_provider);
        order_shipment_tracking_add->tracking_provider = NULL;
    }
    if (order_shipment_tracking_add->tracking_number) {
        free(order_shipment_tracking_add->tracking_number);
        order_shipment_tracking_add->tracking_number = NULL;
    }
    if (order_shipment_tracking_add->tracking_link) {
        free(order_shipment_tracking_add->tracking_link);
        order_shipment_tracking_add->tracking_link = NULL;
    }
    free(order_shipment_tracking_add);
}

cJSON *order_shipment_tracking_add_convertToJSON(order_shipment_tracking_add_t *order_shipment_tracking_add) {
    cJSON *item = cJSON_CreateObject();

    // order_shipment_tracking_add->order_id
    if(order_shipment_tracking_add->order_id) {
    if(cJSON_AddStringToObject(item, "order_id", order_shipment_tracking_add->order_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_tracking_add->shipment_id
    if (!order_shipment_tracking_add->shipment_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "shipment_id", order_shipment_tracking_add->shipment_id) == NULL) {
    goto fail; //String
    }


    // order_shipment_tracking_add->carrier_id
    if(order_shipment_tracking_add->carrier_id) {
    if(cJSON_AddStringToObject(item, "carrier_id", order_shipment_tracking_add->carrier_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_tracking_add->store_id
    if(order_shipment_tracking_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", order_shipment_tracking_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_tracking_add->tracking_provider
    if(order_shipment_tracking_add->tracking_provider) {
    if(cJSON_AddStringToObject(item, "tracking_provider", order_shipment_tracking_add->tracking_provider) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_tracking_add->tracking_number
    if (!order_shipment_tracking_add->tracking_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tracking_number", order_shipment_tracking_add->tracking_number) == NULL) {
    goto fail; //String
    }


    // order_shipment_tracking_add->tracking_link
    if(order_shipment_tracking_add->tracking_link) {
    if(cJSON_AddStringToObject(item, "tracking_link", order_shipment_tracking_add->tracking_link) == NULL) {
    goto fail; //String
    }
    }


    // order_shipment_tracking_add->send_notifications
    if(order_shipment_tracking_add->send_notifications) {
    if(cJSON_AddBoolToObject(item, "send_notifications", order_shipment_tracking_add->send_notifications) == NULL) {
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

order_shipment_tracking_add_t *order_shipment_tracking_add_parseFromJSON(cJSON *order_shipment_tracking_addJSON){

    order_shipment_tracking_add_t *order_shipment_tracking_add_local_var = NULL;

    // order_shipment_tracking_add->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // order_shipment_tracking_add->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "shipment_id");
    if (cJSON_IsNull(shipment_id)) {
        shipment_id = NULL;
    }
    if (!shipment_id) {
        goto end;
    }

    
    if(!cJSON_IsString(shipment_id))
    {
    goto end; //String
    }

    // order_shipment_tracking_add->carrier_id
    cJSON *carrier_id = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "carrier_id");
    if (cJSON_IsNull(carrier_id)) {
        carrier_id = NULL;
    }
    if (carrier_id) { 
    if(!cJSON_IsString(carrier_id) && !cJSON_IsNull(carrier_id))
    {
    goto end; //String
    }
    }

    // order_shipment_tracking_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // order_shipment_tracking_add->tracking_provider
    cJSON *tracking_provider = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "tracking_provider");
    if (cJSON_IsNull(tracking_provider)) {
        tracking_provider = NULL;
    }
    if (tracking_provider) { 
    if(!cJSON_IsString(tracking_provider) && !cJSON_IsNull(tracking_provider))
    {
    goto end; //String
    }
    }

    // order_shipment_tracking_add->tracking_number
    cJSON *tracking_number = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "tracking_number");
    if (cJSON_IsNull(tracking_number)) {
        tracking_number = NULL;
    }
    if (!tracking_number) {
        goto end;
    }

    
    if(!cJSON_IsString(tracking_number))
    {
    goto end; //String
    }

    // order_shipment_tracking_add->tracking_link
    cJSON *tracking_link = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "tracking_link");
    if (cJSON_IsNull(tracking_link)) {
        tracking_link = NULL;
    }
    if (tracking_link) { 
    if(!cJSON_IsString(tracking_link) && !cJSON_IsNull(tracking_link))
    {
    goto end; //String
    }
    }

    // order_shipment_tracking_add->send_notifications
    cJSON *send_notifications = cJSON_GetObjectItemCaseSensitive(order_shipment_tracking_addJSON, "send_notifications");
    if (cJSON_IsNull(send_notifications)) {
        send_notifications = NULL;
    }
    if (send_notifications) { 
    if(!cJSON_IsBool(send_notifications))
    {
    goto end; //Bool
    }
    }


    order_shipment_tracking_add_local_var = order_shipment_tracking_add_create_internal (
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        strdup(shipment_id->valuestring),
        carrier_id && !cJSON_IsNull(carrier_id) ? strdup(carrier_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        tracking_provider && !cJSON_IsNull(tracking_provider) ? strdup(tracking_provider->valuestring) : NULL,
        strdup(tracking_number->valuestring),
        tracking_link && !cJSON_IsNull(tracking_link) ? strdup(tracking_link->valuestring) : NULL,
        send_notifications ? send_notifications->valueint : 0
        );

    return order_shipment_tracking_add_local_var;
end:
    return NULL;

}
