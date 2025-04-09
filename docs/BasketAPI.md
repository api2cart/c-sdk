# BasketAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BasketAPI_basketInfo**](BasketAPI.md#BasketAPI_basketInfo) | **GET** /basket.info.json | basket.info
[**BasketAPI_basketItemAdd**](BasketAPI.md#BasketAPI_basketItemAdd) | **POST** /basket.item.add.json | basket.item.add
[**BasketAPI_basketLiveShippingServiceCreate**](BasketAPI.md#BasketAPI_basketLiveShippingServiceCreate) | **POST** /basket.live_shipping_service.create.json | basket.live_shipping_service.create
[**BasketAPI_basketLiveShippingServiceDelete**](BasketAPI.md#BasketAPI_basketLiveShippingServiceDelete) | **DELETE** /basket.live_shipping_service.delete.json | basket.live_shipping_service.delete
[**BasketAPI_basketLiveShippingServiceList**](BasketAPI.md#BasketAPI_basketLiveShippingServiceList) | **GET** /basket.live_shipping_service.list.json | basket.live_shipping_service.list


# **BasketAPI_basketInfo**
```c
// basket.info
//
// Retrieve basket information.
//
basket_info_200_response_t* BasketAPI_basketInfo(apiClient_t *apiClient, char *id, char *store_id, char *params, char *exclude, char *response_fields);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**store_id** | **char \*** | Store Id | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 

### Return type

[basket_info_200_response_t](basket_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BasketAPI_basketItemAdd**
```c
// basket.item.add
//
// Add item to basket
//
basket_item_add_200_response_t* BasketAPI_basketItemAdd(apiClient_t *apiClient, char *customer_id, char *product_id, char *variant_id, double quantity, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_id** | **char \*** | Retrieves orders specified by customer id | 
**product_id** | **char \*** | Defines id of the product which should be added to the basket | 
**variant_id** | **char \*** | Defines product&#39;s variants specified by variant id | [optional] 
**quantity** | **double** | Defines new items quantity | [optional] [default to 0]
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[basket_item_add_200_response_t](basket_item_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BasketAPI_basketLiveShippingServiceCreate**
```c
// basket.live_shipping_service.create
//
// Create live shipping rate service.
//
basket_live_shipping_service_create_200_response_t* BasketAPI_basketLiveShippingServiceCreate(apiClient_t *apiClient, char *name, char *callback, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Shipping Service Name | 
**callback** | **char \*** | Callback url that returns shipping rates. It should be able to accept POST requests with json data. | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[basket_live_shipping_service_create_200_response_t](basket_live_shipping_service_create_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BasketAPI_basketLiveShippingServiceDelete**
```c
// basket.live_shipping_service.delete
//
// Delete live shipping rate service.
//
basket_live_shipping_service_delete_200_response_t* BasketAPI_basketLiveShippingServiceDelete(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | Entity id | 

### Return type

[basket_live_shipping_service_delete_200_response_t](basket_live_shipping_service_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BasketAPI_basketLiveShippingServiceList**
```c
// basket.live_shipping_service.list
//
// Retrieve a list of live shipping rate services.
//
basket_live_shipping_service_list_200_response_t* BasketAPI_basketLiveShippingServiceList(apiClient_t *apiClient, char *store_id, int *start, int *count);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]

### Return type

[basket_live_shipping_service_list_200_response_t](basket_live_shipping_service_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

