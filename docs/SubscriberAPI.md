# SubscriberAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriberAPI_subscriberList**](SubscriberAPI.md#SubscriberAPI_subscriberList) | **GET** /subscriber.list.json | subscriber.list


# **SubscriberAPI_subscriberList**
```c
// subscriber.list
//
// Get subscribers list
//
model_response_subscriber_list_t* SubscriberAPI_subscriberList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, int *subscribed, char *store_id, char *email, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**subscribed** | **int \*** | Filter by subscription status | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**email** | **char \*** | Filter subscribers by email | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_subscriber_list_t](model_response_subscriber_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

