# ReturnAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReturnAPI_returnActionList**](ReturnAPI.md#ReturnAPI_returnActionList) | **GET** /return.action.list.json | return.action.list
[**ReturnAPI_returnCount**](ReturnAPI.md#ReturnAPI_returnCount) | **GET** /return.count.json | return.count
[**ReturnAPI_returnInfo**](ReturnAPI.md#ReturnAPI_returnInfo) | **GET** /return.info.json | return.info
[**ReturnAPI_returnList**](ReturnAPI.md#ReturnAPI_returnList) | **GET** /return.list.json | return.list
[**ReturnAPI_returnReasonList**](ReturnAPI.md#ReturnAPI_returnReasonList) | **GET** /return.reason.list.json | return.reason.list
[**ReturnAPI_returnStatusList**](ReturnAPI.md#ReturnAPI_returnStatusList) | **GET** /return.status.list.json | return.status.list


# **ReturnAPI_returnActionList**
```c
// return.action.list
//
// Retrieve list of return actions
//
return_action_list_200_response_t* ReturnAPI_returnActionList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[return_action_list_200_response_t](return_action_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnAPI_returnCount**
```c
// return.count
//
// Count returns in store
//
return_count_200_response_t* ReturnAPI_returnCount(apiClient_t *apiClient, char *order_ids, char *customer_id, char *store_id, char *status, char *return_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *report_request_id, int *disable_report_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**order_ids** | **char \*** | Counts return requests specified by order ids | [optional] 
**customer_id** | **char \*** | Counts return requests quantity specified by customer id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**status** | **char \*** | Defines status | [optional] 
**return_type** | **char \*** | Retrieves returns specified by return type | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**report_request_id** | **char \*** | Report request id | [optional] 
**disable_report_cache** | **int \*** | Disable report cache for current request | [optional] [default to false]

### Return type

[return_count_200_response_t](return_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnAPI_returnInfo**
```c
// return.info
//
// Retrieve return information.
//
return_info_200_response_t* ReturnAPI_returnInfo(apiClient_t *apiClient, char *id, char *order_id, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**order_id** | **char \*** | Defines the order id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,order_products&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[return_info_200_response_t](return_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnAPI_returnList**
```c
// return.list
//
// Get list of return requests from store.
//
model_response_return_list_t* ReturnAPI_returnList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *order_id, char *order_ids, char *customer_id, char *store_id, char *status, char *return_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**order_id** | **char \*** | Defines the order id | [optional] 
**order_ids** | **char \*** | Retrieves return requests specified by order ids | [optional] 
**customer_id** | **char \*** | Retrieves return requests specified by customer id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**status** | **char \*** | Defines status | [optional] 
**return_type** | **char \*** | Retrieves returns specified by return type | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,order_products&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**report_request_id** | **char \*** | Report request id | [optional] 
**disable_report_cache** | **int \*** | Disable report cache for current request | [optional] [default to false]

### Return type

[model_response_return_list_t](model_response_return_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnAPI_returnReasonList**
```c
// return.reason.list
//
// Retrieve list of return reasons
//
return_reason_list_200_response_t* ReturnAPI_returnReasonList(apiClient_t *apiClient, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[return_reason_list_200_response_t](return_reason_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnAPI_returnStatusList**
```c
// return.status.list
//
// Retrieve list of statuses
//
return_status_list_200_response_t* ReturnAPI_returnStatusList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[return_status_list_200_response_t](return_status_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

