# WebhookAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebhookAPI_webhookCount**](WebhookAPI.md#WebhookAPI_webhookCount) | **GET** /webhook.count.json | webhook.count
[**WebhookAPI_webhookCreate**](WebhookAPI.md#WebhookAPI_webhookCreate) | **POST** /webhook.create.json | webhook.create
[**WebhookAPI_webhookDelete**](WebhookAPI.md#WebhookAPI_webhookDelete) | **DELETE** /webhook.delete.json | webhook.delete
[**WebhookAPI_webhookEvents**](WebhookAPI.md#WebhookAPI_webhookEvents) | **GET** /webhook.events.json | webhook.events
[**WebhookAPI_webhookList**](WebhookAPI.md#WebhookAPI_webhookList) | **GET** /webhook.list.json | webhook.list
[**WebhookAPI_webhookUpdate**](WebhookAPI.md#WebhookAPI_webhookUpdate) | **PUT** /webhook.update.json | webhook.update


# **WebhookAPI_webhookCount**
```c
// webhook.count
//
// Count registered webhooks on the store.
//
webhook_count_200_response_t* WebhookAPI_webhookCount(apiClient_t *apiClient, char *entity, char *action, int *active);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**entity** | **char \*** | The entity you want to filter webhooks by (e.g. order or product) | [optional] 
**action** | **char \*** | The action you want to filter webhooks by (e.g. order or product) | [optional] 
**active** | **int \*** | The webhook status you want to filter webhooks by | [optional] 

### Return type

[webhook_count_200_response_t](webhook_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhookAPI_webhookCreate**
```c
// webhook.create
//
// Create webhook on the store and subscribe to it.
//
basket_live_shipping_service_create_200_response_t* WebhookAPI_webhookCreate(apiClient_t *apiClient, char *entity, char *action, char *callback, char *label, char *fields, int *active, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**entity** | **char \*** | Specify the entity that you want to enable webhooks for (e.g product, order, customer, category) | 
**action** | **char \*** | Specify what action (event) will trigger the webhook (e.g add, delete, or update) | 
**callback** | **char \*** | Callback url that returns shipping rates. It should be able to accept POST requests with json data. | [optional] 
**label** | **char \*** | The name you give to the webhook | [optional] 
**fields** | **char \*** | Fields the webhook should send | [optional] [default to &#39;force_all&#39;]
**active** | **int \*** | Webhook status | [optional] [default to true]
**store_id** | **char \*** | Defines store id where the webhook should be assigned | [optional] 

### Return type

[basket_live_shipping_service_create_200_response_t](basket_live_shipping_service_create_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhookAPI_webhookDelete**
```c
// webhook.delete
//
// Delete registered webhook on the store.
//
attribute_delete_200_response_t* WebhookAPI_webhookDelete(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Webhook id | 

### Return type

[attribute_delete_200_response_t](attribute_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhookAPI_webhookEvents**
```c
// webhook.events
//
// List all Webhooks that are available on this store.
//
webhook_events_200_response_t* WebhookAPI_webhookEvents(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[webhook_events_200_response_t](webhook_events_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhookAPI_webhookList**
```c
// webhook.list
//
// List registered webhook on the store.
//
webhook_list_200_response_t* WebhookAPI_webhookList(apiClient_t *apiClient, char *params, int *start, int *count, char *entity, char *action, int *active, char *ids);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,entity,action,callback&#39;]
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**entity** | **char \*** | The entity you want to filter webhooks by (e.g. order or product) | [optional] 
**action** | **char \*** | The action you want to filter webhooks by (e.g. add, update, or delete) | [optional] 
**active** | **int \*** | The webhook status you want to filter webhooks by | [optional] 
**ids** | **char \*** | List of сomma-separated webhook ids | [optional] 

### Return type

[webhook_list_200_response_t](webhook_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhookAPI_webhookUpdate**
```c
// webhook.update
//
// Update Webhooks parameters.
//
product_image_update_200_response_t* WebhookAPI_webhookUpdate(apiClient_t *apiClient, char *id, char *callback, char *label, char *fields, int *active);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Webhook id | 
**callback** | **char \*** | Callback url that returns shipping rates. It should be able to accept POST requests with json data. | [optional] 
**label** | **char \*** | The name you give to the webhook | [optional] 
**fields** | **char \*** | Fields the webhook should send | [optional] 
**active** | **int \*** | Webhook status | [optional] 

### Return type

[product_image_update_200_response_t](product_image_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

