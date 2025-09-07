# OrderAPI

All URIs are relative to *https://api.api2cart.local.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OrderAPI_orderAbandonedList**](OrderAPI.md#OrderAPI_orderAbandonedList) | **GET** /order.abandoned.list.json | order.abandoned.list
[**OrderAPI_orderAdd**](OrderAPI.md#OrderAPI_orderAdd) | **POST** /order.add.json | order.add
[**OrderAPI_orderCalculate**](OrderAPI.md#OrderAPI_orderCalculate) | **POST** /order.calculate.json | order.calculate
[**OrderAPI_orderCount**](OrderAPI.md#OrderAPI_orderCount) | **GET** /order.count.json | order.count
[**OrderAPI_orderFinancialStatusList**](OrderAPI.md#OrderAPI_orderFinancialStatusList) | **GET** /order.financial_status.list.json | order.financial_status.list
[**OrderAPI_orderFulfillmentStatusList**](OrderAPI.md#OrderAPI_orderFulfillmentStatusList) | **GET** /order.fulfillment_status.list.json | order.fulfillment_status.list
[**OrderAPI_orderInfo**](OrderAPI.md#OrderAPI_orderInfo) | **GET** /order.info.json | order.info
[**OrderAPI_orderList**](OrderAPI.md#OrderAPI_orderList) | **GET** /order.list.json | order.list
[**OrderAPI_orderPreestimateShippingList**](OrderAPI.md#OrderAPI_orderPreestimateShippingList) | **POST** /order.preestimate_shipping.list.json | order.preestimate_shipping.list
[**OrderAPI_orderRefundAdd**](OrderAPI.md#OrderAPI_orderRefundAdd) | **POST** /order.refund.add.json | order.refund.add
[**OrderAPI_orderReturnAdd**](OrderAPI.md#OrderAPI_orderReturnAdd) | **POST** /order.return.add.json | order.return.add
[**OrderAPI_orderReturnDelete**](OrderAPI.md#OrderAPI_orderReturnDelete) | **DELETE** /order.return.delete.json | order.return.delete
[**OrderAPI_orderReturnUpdate**](OrderAPI.md#OrderAPI_orderReturnUpdate) | **PUT** /order.return.update.json | order.return.update
[**OrderAPI_orderShipmentAdd**](OrderAPI.md#OrderAPI_orderShipmentAdd) | **POST** /order.shipment.add.json | order.shipment.add
[**OrderAPI_orderShipmentAddBatch**](OrderAPI.md#OrderAPI_orderShipmentAddBatch) | **POST** /order.shipment.add.batch.json | order.shipment.add.batch
[**OrderAPI_orderShipmentDelete**](OrderAPI.md#OrderAPI_orderShipmentDelete) | **DELETE** /order.shipment.delete.json | order.shipment.delete
[**OrderAPI_orderShipmentInfo**](OrderAPI.md#OrderAPI_orderShipmentInfo) | **GET** /order.shipment.info.json | order.shipment.info
[**OrderAPI_orderShipmentList**](OrderAPI.md#OrderAPI_orderShipmentList) | **GET** /order.shipment.list.json | order.shipment.list
[**OrderAPI_orderShipmentTrackingAdd**](OrderAPI.md#OrderAPI_orderShipmentTrackingAdd) | **POST** /order.shipment.tracking.add.json | order.shipment.tracking.add
[**OrderAPI_orderShipmentUpdate**](OrderAPI.md#OrderAPI_orderShipmentUpdate) | **PUT** /order.shipment.update.json | order.shipment.update
[**OrderAPI_orderStatusList**](OrderAPI.md#OrderAPI_orderStatusList) | **GET** /order.status.list.json | order.status.list
[**OrderAPI_orderTransactionList**](OrderAPI.md#OrderAPI_orderTransactionList) | **GET** /order.transaction.list.json | order.transaction.list
[**OrderAPI_orderUpdate**](OrderAPI.md#OrderAPI_orderUpdate) | **PUT** /order.update.json | order.update


# **OrderAPI_orderAbandonedList**
```c
// order.abandoned.list
//
// Get list of orders that were left by customers before completing the order.
//
model_response_order_abandoned_list_t* OrderAPI_orderAbandonedList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *customer_id, char *customer_email, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, int *skip_empty_email, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**customer_id** | **char \*** | Retrieves orders specified by customer id | [optional] 
**customer_email** | **char \*** | Retrieves orders specified by customer email | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**skip_empty_email** | **int \*** | Filter empty emails | [optional] [default to false]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;customer,totals,items&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_order_abandoned_list_t](model_response_order_abandoned_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderAdd**
```c
// order.add
//
// Add a new order to the cart.
//
order_add_200_response_t* OrderAPI_orderAdd(apiClient_t *apiClient, order_add_t *order_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_add** | **[order_add_t](order_add.md) \*** |  | 

### Return type

[order_add_200_response_t](order_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderCalculate**
```c
// order.calculate
//
// <p>Calculates the total cost of an order for a given customer and a set of products, as well as the available shipping methods based on the specified address. The calculation takes into account store product prices, discounts, taxes, shipping costs, and other store settings. The result includes a detailed breakdown of the final order cost by its components.</p> <p>Note that the final totals, taxes, and other amounts must include the corresponding values for the selected shipping method.</p><p>The result of this method can be used when creating an order using the <strong>order.add</strong> method.</p>
//
order_calculate_200_response_t* OrderAPI_orderCalculate(apiClient_t *apiClient, order_calculate_t *order_calculate);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_calculate** | **[order_calculate_t](order_calculate.md) \*** |  | 

### Return type

[order_calculate_200_response_t](order_calculate_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderCount**
```c
// order.count
//
// Count orders in store
//
order_count_200_response_t* OrderAPI_orderCount(apiClient_t *apiClient, char *order_ids, char *ids, char *customer_id, char *store_id, char *customer_email, char *order_status, list_t *order_status_ids, char *ebay_order_status, char *financial_status, list_t *financial_status_ids, char *fulfillment_channel, char *fulfillment_status, char *shipping_method, char *delivery_method, char *tags, char *ship_node_type, char *created_from, char *created_to, char *modified_from, char *modified_to);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_ids** | **char \*** | Counts orders specified by order ids | [optional] 
**ids** | **char \*** | Counts orders specified by ids | [optional] 
**customer_id** | **char \*** | Counts orders quantity specified by customer id | [optional] 
**store_id** | **char \*** | Counts orders quantity specified by store id | [optional] 
**customer_email** | **char \*** | Counts orders quantity specified by customer email | [optional] 
**order_status** | **char \*** | Counts orders quantity specified by order status | [optional] 
**order_status_ids** | **[list_t](char.md) \*** | Retrieves orders specified by order statuses | [optional] 
**ebay_order_status** | **char \*** | Counts orders quantity specified by order status | [optional] 
**financial_status** | **char \*** | Counts orders quantity specified by financial status | [optional] 
**financial_status_ids** | **[list_t](char.md) \*** | Retrieves orders count specified by financial status ids | [optional] 
**fulfillment_channel** | **char \*** | Retrieves order with a fulfillment channel | [optional] 
**fulfillment_status** | **char \*** | Create order with fulfillment status | [optional] 
**shipping_method** | **char \*** | Retrieve entities according to shipping method | [optional] 
**delivery_method** | **char \*** | Retrieves order with delivery method | [optional] 
**tags** | **char \*** | Order tags | [optional] 
**ship_node_type** | **char \*** | Retrieves order with ship node type | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 

### Return type

[order_count_200_response_t](order_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderFinancialStatusList**
```c
// order.financial_status.list
//
// Retrieve list of financial statuses
//
order_financial_status_list_200_response_t* OrderAPI_orderFinancialStatusList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[order_financial_status_list_200_response_t](order_financial_status_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderFulfillmentStatusList**
```c
// order.fulfillment_status.list
//
// Retrieve list of fulfillment statuses
//
order_fulfillment_status_list_200_response_t* OrderAPI_orderFulfillmentStatusList(apiClient_t *apiClient, char *action);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**action** | **char \*** | Available statuses for the specified action. | [optional] 

### Return type

[order_fulfillment_status_list_200_response_t](order_fulfillment_status_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderInfo**
```c
// order.info
//
// Info about a specific order by ID
//
order_info_200_response_t* OrderAPI_orderInfo(apiClient_t *apiClient, char *id, char *order_id, char *store_id, char *params, char *response_fields, char *exclude, int *enable_cache, int *use_latest_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Retrieves order info specified by id | [optional] 
**order_id** | **char \*** | Retrieves order’s info specified by order id | [optional] 
**store_id** | **char \*** | Defines store id where the order should be found | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;order_id,customer,totals,address,items,bundles,status&#39;]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**enable_cache** | **int \*** | If the value is &#39;true&#39; and order exist in our cache, we will return order.info response from cache | [optional] [default to false]
**use_latest_api_version** | **int \*** | Use the latest platform API version | [optional] [default to false]

### Return type

[order_info_200_response_t](order_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderList**
```c
// order.list
//
// Get list of orders from store.
//
model_response_order_list_t* OrderAPI_orderList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *order_ids, char *since_id, char *store_id, char *customer_id, char *customer_email, char *basket_id, char *currency_id, char *phone, char *order_status, list_t *order_status_ids, char *ebay_order_status, char *financial_status, list_t *financial_status_ids, char *fulfillment_status, char *return_status, char *fulfillment_channel, char *shipping_method, char *skip_order_ids, int *is_deleted, char *shipping_country_iso3, char *delivery_method, char *ship_node_type, char *created_to, char *created_from, char *modified_to, char *modified_from, char *tags, char *sort_by, char *sort_direction, char *params, char *response_fields, char *exclude, int *enable_cache, int *use_latest_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve orders via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**ids** | **char \*** | Retrieves orders specified by ids | [optional] 
**order_ids** | **char \*** | Retrieves orders specified by order ids | [optional] 
**since_id** | **char \*** | Retrieve entities starting from the specified id. | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**customer_id** | **char \*** | Retrieves orders specified by customer id | [optional] 
**customer_email** | **char \*** | Retrieves orders specified by customer email | [optional] 
**basket_id** | **char \*** | Retrieves order’s info specified by basket id. | [optional] 
**currency_id** | **char \*** | Currency Id | [optional] 
**phone** | **char \*** | Filter orders by customer&#39;s phone number | [optional] 
**order_status** | **char \*** | Retrieves orders specified by order status | [optional] 
**order_status_ids** | **[list_t](char.md) \*** | Retrieves orders specified by order statuses | [optional] 
**ebay_order_status** | **char \*** | Retrieves orders specified by order status | [optional] 
**financial_status** | **char \*** | Retrieves orders specified by financial status | [optional] 
**financial_status_ids** | **[list_t](char.md) \*** | Retrieves orders specified by financial status ids | [optional] 
**fulfillment_status** | **char \*** | Create order with fulfillment status | [optional] 
**return_status** | **char \*** | Retrieves orders specified by return status | [optional] 
**fulfillment_channel** | **char \*** | Retrieves order with a fulfillment channel | [optional] 
**shipping_method** | **char \*** | Retrieve entities according to shipping method | [optional] 
**skip_order_ids** | **char \*** | Skipped orders by ids | [optional] 
**is_deleted** | **int \*** | Filter deleted orders | [optional] 
**shipping_country_iso3** | **char \*** | Retrieve entities according to shipping country | [optional] 
**delivery_method** | **char \*** | Retrieves order with delivery method | [optional] 
**ship_node_type** | **char \*** | Retrieves order with ship node type | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**tags** | **char \*** | Order tags | [optional] 
**sort_by** | **char \*** | Set field to sort by | [optional] [default to &#39;order_id&#39;]
**sort_direction** | **char \*** | Set sorting direction | [optional] [default to &#39;asc&#39;]
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;order_id,customer,totals,address,items,bundles,status&#39;]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**enable_cache** | **int \*** | If the value is &#39;true&#39;, we will cache orders for a 15 minutes in order to increase speed and reduce requests throttling for some methods and shoping platforms (for example order.shipment.add) | [optional] [default to false]
**use_latest_api_version** | **int \*** | Use the latest platform API version | [optional] [default to false]

### Return type

[model_response_order_list_t](model_response_order_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderPreestimateShippingList**
```c
// order.preestimate_shipping.list
//
// Retrieve list of order preestimated shipping methods
//
model_response_order_preestimate_shipping_list_t* OrderAPI_orderPreestimateShippingList(apiClient_t *apiClient, order_preestimate_shipping_list_t *order_preestimate_shipping_list);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_preestimate_shipping_list** | **[order_preestimate_shipping_list_t](order_preestimate_shipping_list.md) \*** |  | 

### Return type

[model_response_order_preestimate_shipping_list_t](model_response_order_preestimate_shipping_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderRefundAdd**
```c
// order.refund.add
//
// Add a refund to the order.
//
order_refund_add_200_response_t* OrderAPI_orderRefundAdd(apiClient_t *apiClient, order_refund_add_t *order_refund_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_refund_add** | **[order_refund_add_t](order_refund_add.md) \*** |  | 

### Return type

[order_refund_add_200_response_t](order_refund_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderReturnAdd**
```c
// order.return.add
//
// Create new return request.
//
order_return_add_200_response_t* OrderAPI_orderReturnAdd(apiClient_t *apiClient, order_return_add_t *order_return_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_return_add** | **[order_return_add_t](order_return_add.md) \*** |  | 

### Return type

[order_return_add_200_response_t](order_return_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderReturnDelete**
```c
// order.return.delete
//
// Delete return.
//
attribute_value_delete_200_response_t* OrderAPI_orderReturnDelete(apiClient_t *apiClient, char *return_id, char *order_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**return_id** | **char \*** | Return ID | 
**order_id** | **char \*** | Defines the order id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[attribute_value_delete_200_response_t](attribute_value_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderReturnUpdate**
```c
// order.return.update
//
// Update order's shipment information.
//
account_config_update_200_response_t* OrderAPI_orderReturnUpdate(apiClient_t *apiClient, order_return_update_t *order_return_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_return_update** | **[order_return_update_t](order_return_update.md) \*** |  | 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentAdd**
```c
// order.shipment.add
//
// Add a shipment to the order.
//
order_shipment_add_200_response_t* OrderAPI_orderShipmentAdd(apiClient_t *apiClient, order_shipment_add_t *order_shipment_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_shipment_add** | **[order_shipment_add_t](order_shipment_add.md) \*** |  | 

### Return type

[order_shipment_add_200_response_t](order_shipment_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentAddBatch**
```c
// order.shipment.add.batch
//
// Add a shipments to the orders.
//
category_add_batch_200_response_t* OrderAPI_orderShipmentAddBatch(apiClient_t *apiClient, order_shipment_add_batch_t *order_shipment_add_batch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_shipment_add_batch** | **[order_shipment_add_batch_t](order_shipment_add_batch.md) \*** |  | 

### Return type

[category_add_batch_200_response_t](category_add_batch_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentDelete**
```c
// order.shipment.delete
//
// Delete order's shipment.
//
order_shipment_delete_200_response_t* OrderAPI_orderShipmentDelete(apiClient_t *apiClient, char *shipment_id, char *order_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**shipment_id** | **char \*** | Shipment id indicates the number of delivery | 
**order_id** | **char \*** | Defines the order for which the shipment will be deleted | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[order_shipment_delete_200_response_t](order_shipment_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentInfo**
```c
// order.shipment.info
//
// Get information of shipment.
//
order_shipment_info_200_response_t* OrderAPI_orderShipmentInfo(apiClient_t *apiClient, char *id, char *order_id, int *start, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**order_id** | **char \*** | Defines the order id | 
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,order_id,items,tracking_numbers&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[order_shipment_info_200_response_t](order_shipment_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentList**
```c
// order.shipment.list
//
// Get list of shipments per order.
//
model_response_order_shipment_list_t* OrderAPI_orderShipmentList(apiClient_t *apiClient, char *order_id, int *start, int *count, char *page_cursor, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_id** | **char \*** | Retrieves shipments specified by order id | 
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,order_id,items,tracking_numbers&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_order_shipment_list_t](model_response_order_shipment_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentTrackingAdd**
```c
// order.shipment.tracking.add
//
// Add order shipment's tracking info.
//
order_shipment_tracking_add_200_response_t* OrderAPI_orderShipmentTrackingAdd(apiClient_t *apiClient, order_shipment_tracking_add_t *order_shipment_tracking_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_shipment_tracking_add** | **[order_shipment_tracking_add_t](order_shipment_tracking_add.md) \*** |  | 

### Return type

[order_shipment_tracking_add_200_response_t](order_shipment_tracking_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderShipmentUpdate**
```c
// order.shipment.update
//
// Update order's shipment information.
//
account_config_update_200_response_t* OrderAPI_orderShipmentUpdate(apiClient_t *apiClient, order_shipment_update_t *order_shipment_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_shipment_update** | **[order_shipment_update_t](order_shipment_update.md) \*** |  | 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderStatusList**
```c
// order.status.list
//
// Retrieve list of statuses
//
model_response_order_status_list_t* OrderAPI_orderStatusList(apiClient_t *apiClient, char *store_id, char *action, char *response_fields);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 
**action** | **char \*** | Available statuses for the specified action. | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 

### Return type

[model_response_order_status_list_t](model_response_order_status_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderTransactionList**
```c
// order.transaction.list
//
// Retrieve list of order transaction
//
model_response_order_transaction_list_t* OrderAPI_orderTransactionList(apiClient_t *apiClient, char *order_ids, int *count, char *page_cursor, char *store_id, char *params, char *response_fields, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_ids** | **char \*** | Retrieves order transactions specified by order ids | 
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,order_id,amount,description&#39;]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_order_transaction_list_t](model_response_order_transaction_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OrderAPI_orderUpdate**
```c
// order.update
//
// Update existing order.
//
account_config_update_200_response_t* OrderAPI_orderUpdate(apiClient_t *apiClient, char *order_id, char *store_id, char *order_status, char *financial_status, char *fulfillment_status, char *cancellation_reason, char *order_payment_method, char *comment, char *admin_comment, char *admin_private_comment, char *invoice_admin_comment, char *date_modified, char *date_finished, int *send_notifications, int *create_invoice, char *origin, char *tags);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_id** | **char \*** | Defines the orders specified by order id | 
**store_id** | **char \*** | Defines store id where the order should be found | [optional] 
**order_status** | **char \*** | Defines new order&#39;s status | [optional] 
**financial_status** | **char \*** | Update order financial status to specified | [optional] 
**fulfillment_status** | **char \*** | Create order with fulfillment status | [optional] 
**cancellation_reason** | **char \*** | Defines the cancellation reason when the order will be canceled | [optional] 
**order_payment_method** | **char \*** | Defines order payment method.&lt;br/&gt;Setting order_payment_method on Shopify will also change financial_status field value to &#39;paid&#39; | [optional] 
**comment** | **char \*** | Specifies order comment | [optional] 
**admin_comment** | **char \*** | Specifies admin&#39;s order comment | [optional] 
**admin_private_comment** | **char \*** | Specifies private admin&#39;s order comment | [optional] 
**invoice_admin_comment** | **char \*** | Specifies admin&#39;s order invoice comment | [optional] 
**date_modified** | **char \*** | Specifies order&#39;s  modification date | [optional] 
**date_finished** | **char \*** | Specifies order&#39;s  finished date | [optional] 
**send_notifications** | **int \*** | Send notifications to customer after order was created | [optional] [default to false]
**create_invoice** | **int \*** | Determines whether an invoice should be created if it has not already been created | [optional] 
**origin** | **char \*** | The source of the order | [optional] 
**tags** | **char \*** | Order tags | [optional] 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

