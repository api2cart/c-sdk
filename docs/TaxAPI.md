# TaxAPI

All URIs are relative to *https://api.api2cart.local.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaxAPI_taxClassInfo**](TaxAPI.md#TaxAPI_taxClassInfo) | **GET** /tax.class.info.json | tax.class.info
[**TaxAPI_taxClassList**](TaxAPI.md#TaxAPI_taxClassList) | **GET** /tax.class.list.json | tax.class.list


# **TaxAPI_taxClassInfo**
```c
// tax.class.info
//
// Use this method to get information about a tax class and its rates. It allows you to calculate the tax percentage for a specific customer's address. This information contains relatively static data that rarely changes, so API2Cart may cache certain data to reduce the load on the store and speed up request execution. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, use the cart.validate method.
//
model_response_tax_class_info_t* TaxAPI_taxClassInfo(apiClient_t *apiClient, char *tax_class_id, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tax_class_id** | **char \*** | Retrieves taxes specified by class id | 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;tax_class_id,name,avail&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_tax_class_info_t](model_response_tax_class_info.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxAPI_taxClassList**
```c
// tax.class.list
//
// Get list of tax classes from your store.
//
model_response_tax_class_list_t* TaxAPI_taxClassList(apiClient_t *apiClient, int *count, char *page_cursor, char *store_id, char *find_value, char *find_where, char *created_to, char *created_from, char *modified_to, char *modified_from, char *response_fields);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**find_value** | **char \*** | Entity search that is specified by some value | [optional] 
**find_where** | **char \*** | Tax class search that is specified by field | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;{return_code,return_message,pagination,result}&#39;]

### Return type

[model_response_tax_class_list_t](model_response_tax_class_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

