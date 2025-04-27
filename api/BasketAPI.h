#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/basket_info_200_response.h"
#include "../model/basket_item_add_200_response.h"
#include "../model/basket_live_shipping_service_create_200_response.h"
#include "../model/basket_live_shipping_service_delete_200_response.h"
#include "../model/basket_live_shipping_service_list_200_response.h"


// basket.info
//
// Retrieve basket information.
//
basket_info_200_response_t*
BasketAPI_basketInfo(apiClient_t *apiClient, char *id, char *store_id, char *response_fields, char *params, char *exclude);


// basket.item.add
//
// Add item to basket
//
basket_item_add_200_response_t*
BasketAPI_basketItemAdd(apiClient_t *apiClient, char *customer_id, char *product_id, char *variant_id, double quantity, char *store_id);


// basket.live_shipping_service.create
//
// Create live shipping rate service.
//
basket_live_shipping_service_create_200_response_t*
BasketAPI_basketLiveShippingServiceCreate(apiClient_t *apiClient, char *name, char *callback, char *store_id);


// basket.live_shipping_service.delete
//
// Delete live shipping rate service.
//
basket_live_shipping_service_delete_200_response_t*
BasketAPI_basketLiveShippingServiceDelete(apiClient_t *apiClient, int *id);


// basket.live_shipping_service.list
//
// Retrieve a list of live shipping rate services.
//
basket_live_shipping_service_list_200_response_t*
BasketAPI_basketLiveShippingServiceList(apiClient_t *apiClient, int *start, int *count, char *store_id);


