#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attribute_delete_200_response.h"
#include "../model/basket_live_shipping_service_create_200_response.h"
#include "../model/product_image_update_200_response.h"
#include "../model/webhook_count_200_response.h"
#include "../model/webhook_events_200_response.h"
#include "../model/webhook_list_200_response.h"


// webhook.count
//
// Count registered webhooks on the store.
//
webhook_count_200_response_t*
WebhookAPI_webhookCount(apiClient_t *apiClient, char *entity, char *action, int *active);


// webhook.create
//
// Create webhook on the store and subscribe to it.
//
basket_live_shipping_service_create_200_response_t*
WebhookAPI_webhookCreate(apiClient_t *apiClient, char *entity, char *action, char *callback, char *label, char *fields, int *active, char *lang_id, char *store_id);


// webhook.delete
//
// Delete registered webhook on the store.
//
attribute_delete_200_response_t*
WebhookAPI_webhookDelete(apiClient_t *apiClient, char *id);


// webhook.events
//
// List all Webhooks that are available on this store.
//
webhook_events_200_response_t*
WebhookAPI_webhookEvents(apiClient_t *apiClient);


// webhook.list
//
// List registered webhook on the store.
//
webhook_list_200_response_t*
WebhookAPI_webhookList(apiClient_t *apiClient, int *start, int *count, char *entity, char *action, int *active, char *ids, char *params);


// webhook.update
//
// Update Webhooks parameters.
//
product_image_update_200_response_t*
WebhookAPI_webhookUpdate(apiClient_t *apiClient, char *id, char *callback, char *label, char *fields, int *active, char *lang_id);


