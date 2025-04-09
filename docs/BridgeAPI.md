# BridgeAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BridgeAPI_bridgeDelete**](BridgeAPI.md#BridgeAPI_bridgeDelete) | **POST** /bridge.delete.json | bridge.delete
[**BridgeAPI_bridgeDownload**](BridgeAPI.md#BridgeAPI_bridgeDownload) | **GET** /bridge.download.file | bridge.download
[**BridgeAPI_bridgeUpdate**](BridgeAPI.md#BridgeAPI_bridgeUpdate) | **POST** /bridge.update.json | bridge.update


# **BridgeAPI_bridgeDelete**
```c
// bridge.delete
//
// Delete bridge from the store.
//
attribute_value_delete_200_response_t* BridgeAPI_bridgeDelete(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[attribute_value_delete_200_response_t](attribute_value_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BridgeAPI_bridgeDownload**
```c
// bridge.download
//
// Download bridge for store.</br>Please note that the method would not work if you call it from Swagger UI.
//
binary_t** BridgeAPI_bridgeDownload(apiClient_t *apiClient, int *whitelabel);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**whitelabel** | **int \*** | Identifies if there is a necessity to download whitelabel bridge. | [optional] [default to false]

### Return type

binary_t**



### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/zip

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BridgeAPI_bridgeUpdate**
```c
// bridge.update
//
// Update bridge in the store.
//
attribute_update_200_response_t* BridgeAPI_bridgeUpdate(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[attribute_update_200_response_t](attribute_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

