#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_config_update_200_response.h"
#include "../model/attribute_value_delete_200_response.h"
#include "../model/category_add_batch_200_response.h"
#include "../model/model_response_order_abandoned_list.h"
#include "../model/model_response_order_list.h"
#include "../model/model_response_order_preestimate_shipping_list.h"
#include "../model/model_response_order_shipment_list.h"
#include "../model/model_response_order_status_list.h"
#include "../model/model_response_order_transaction_list.h"
#include "../model/order_add.h"
#include "../model/order_add_200_response.h"
#include "../model/order_count_200_response.h"
#include "../model/order_financial_status_list_200_response.h"
#include "../model/order_find_200_response.h"
#include "../model/order_fulfillment_status_list_200_response.h"
#include "../model/order_info_200_response.h"
#include "../model/order_preestimate_shipping_list.h"
#include "../model/order_refund_add.h"
#include "../model/order_refund_add_200_response.h"
#include "../model/order_return_add.h"
#include "../model/order_return_add_200_response.h"
#include "../model/order_return_update.h"
#include "../model/order_shipment_add.h"
#include "../model/order_shipment_add_200_response.h"
#include "../model/order_shipment_add_batch.h"
#include "../model/order_shipment_delete_200_response.h"
#include "../model/order_shipment_info_200_response.h"
#include "../model/order_shipment_tracking_add.h"
#include "../model/order_shipment_tracking_add_200_response.h"
#include "../model/order_shipment_update.h"


// order.abandoned.list
//
// Get list of orders that were left by customers before completing the order.
//
model_response_order_abandoned_list_t*
OrderAPI_orderAbandonedList(apiClient_t *apiClient, char *customer_id, char *customer_email, char *created_to, char *created_from, char *modified_to, char *modified_from, int *skip_empty_email, char *store_id, char *page_cursor, int *count, int *start, char *params, char *response_fields, char *exclude);


// order.add
//
// Add a new order to the cart.
//
order_add_200_response_t*
OrderAPI_orderAdd(apiClient_t *apiClient, order_add_t *order_add);


// order.count
//
// Count orders in store
//
order_count_200_response_t*
OrderAPI_orderCount(apiClient_t *apiClient, char *customer_id, char *customer_email, char *order_status, list_t *order_status_ids, char *created_to, char *created_from, char *modified_to, char *modified_from, char *store_id, char *ids, char *order_ids, char *ebay_order_status, char *financial_status, list_t *financial_status_ids, char *fulfillment_channel, char *fulfillment_status, char *shipping_method, char *delivery_method, char *tags, char *ship_node_type);


// order.financial_status.list
//
// Retrieve list of financial statuses
//
order_financial_status_list_200_response_t*
OrderAPI_orderFinancialStatusList(apiClient_t *apiClient);


// order.find
//
// This method is deprecated and won't be supported in the future. Please use \"order.list\" instead.
//
order_find_200_response_t*
OrderAPI_orderFind(apiClient_t *apiClient, char *customer_id, char *customer_email, char *order_status, int *start, int *count, char *params, char *exclude, char *created_to, char *created_from, char *modified_to, char *modified_from, char *financial_status);


// order.fulfillment_status.list
//
// Retrieve list of fulfillment statuses
//
order_fulfillment_status_list_200_response_t*
OrderAPI_orderFulfillmentStatusList(apiClient_t *apiClient, char *action);


// order.info
//
// Info about a specific order by ID
//
order_info_200_response_t*
OrderAPI_orderInfo(apiClient_t *apiClient, char *order_id, char *id, char *params, char *response_fields, char *exclude, char *store_id, int *enable_cache, int *use_latest_api_version);


// order.list
//
// Get list of orders from store.
//
model_response_order_list_t*
OrderAPI_orderList(apiClient_t *apiClient, char *customer_id, char *customer_email, char *phone, char *order_status, list_t *order_status_ids, int *start, int *count, char *page_cursor, char *sort_by, char *sort_direction, char *params, char *response_fields, char *exclude, char *created_to, char *created_from, char *modified_to, char *modified_from, char *store_id, char *ids, char *order_ids, char *ebay_order_status, char *basket_id, char *financial_status, list_t *financial_status_ids, char *fulfillment_status, char *fulfillment_channel, char *shipping_method, char *skip_order_ids, char *since_id, int *is_deleted, char *shipping_country_iso3, int *enable_cache, char *delivery_method, char *tags, char *ship_node_type, char *currency_id, char *return_status, int *use_latest_api_version);


// order.preestimate_shipping.list
//
// Retrieve list of order preestimated shipping methods
//
model_response_order_preestimate_shipping_list_t*
OrderAPI_orderPreestimateShippingList(apiClient_t *apiClient, order_preestimate_shipping_list_t *order_preestimate_shipping_list);


// order.refund.add
//
// Add a refund to the order.
//
order_refund_add_200_response_t*
OrderAPI_orderRefundAdd(apiClient_t *apiClient, order_refund_add_t *order_refund_add);


// order.return.add
//
// Create new return request.
//
order_return_add_200_response_t*
OrderAPI_orderReturnAdd(apiClient_t *apiClient, order_return_add_t *order_return_add);


// order.return.delete
//
// Delete return.
//
attribute_value_delete_200_response_t*
OrderAPI_orderReturnDelete(apiClient_t *apiClient, char *return_id, char *order_id, char *store_id);


// order.return.update
//
// Update order's shipment information.
//
account_config_update_200_response_t*
OrderAPI_orderReturnUpdate(apiClient_t *apiClient, order_return_update_t *order_return_update);


// order.shipment.add
//
// Add a shipment to the order.
//
order_shipment_add_200_response_t*
OrderAPI_orderShipmentAdd(apiClient_t *apiClient, order_shipment_add_t *order_shipment_add);


// order.shipment.add.batch
//
// Add a shipments to the orders.
//
category_add_batch_200_response_t*
OrderAPI_orderShipmentAddBatch(apiClient_t *apiClient, order_shipment_add_batch_t *order_shipment_add_batch);


// order.shipment.delete
//
// Delete order's shipment.
//
order_shipment_delete_200_response_t*
OrderAPI_orderShipmentDelete(apiClient_t *apiClient, char *shipment_id, char *order_id, char *store_id);


// order.shipment.info
//
// Get information of shipment.
//
order_shipment_info_200_response_t*
OrderAPI_orderShipmentInfo(apiClient_t *apiClient, char *id, char *order_id, int *start, char *params, char *response_fields, char *exclude, char *store_id);


// order.shipment.list
//
// Get list of shipments by orders.
//
model_response_order_shipment_list_t*
OrderAPI_orderShipmentList(apiClient_t *apiClient, char *order_id, char *page_cursor, int *start, int *count, char *params, char *response_fields, char *exclude, char *created_from, char *created_to, char *modified_from, char *modified_to, char *store_id);


// order.shipment.tracking.add
//
// Add order shipment's tracking info.
//
order_shipment_tracking_add_200_response_t*
OrderAPI_orderShipmentTrackingAdd(apiClient_t *apiClient, order_shipment_tracking_add_t *order_shipment_tracking_add);


// order.shipment.update
//
// Update order's shipment information.
//
account_config_update_200_response_t*
OrderAPI_orderShipmentUpdate(apiClient_t *apiClient, order_shipment_update_t *order_shipment_update);


// order.status.list
//
// Retrieve list of statuses
//
model_response_order_status_list_t*
OrderAPI_orderStatusList(apiClient_t *apiClient, char *store_id, char *action, char *response_fields);


// order.transaction.list
//
// Retrieve list of order transaction
//
model_response_order_transaction_list_t*
OrderAPI_orderTransactionList(apiClient_t *apiClient, char *order_ids, int *count, char *store_id, char *params, char *response_fields, char *exclude, char *page_cursor);


// order.update
//
// Update existing order.
//
account_config_update_200_response_t*
OrderAPI_orderUpdate(apiClient_t *apiClient, char *order_id, char *store_id, char *order_status, char *cancellation_reason, char *comment, char *admin_comment, char *admin_private_comment, char *date_modified, char *date_finished, char *financial_status, char *fulfillment_status, char *order_payment_method, int *send_notifications, char *origin, int *create_invoice, char *invoice_admin_comment);


