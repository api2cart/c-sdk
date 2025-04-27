# BatchAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BatchAPI_batchJobList**](BatchAPI.md#BatchAPI_batchJobList) | **GET** /batch.job.list.json | batch.job.list
[**BatchAPI_batchJobResult**](BatchAPI.md#BatchAPI_batchJobResult) | **GET** /batch.job.result.json | batch.job.result


# **BatchAPI_batchJobList**
```c
// batch.job.list
//
// Get list of recent jobs
//
model_response_batch_job_list_t* BatchAPI_batchJobList(apiClient_t *apiClient, int *count, char *page_cursor, char *ids, char *created_from, char *created_to, char *processed_from, char *processed_to, char *response_fields);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**ids** | **char \*** | Filter batch jobs by ids | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**processed_from** | **char \*** | Retrieve entities according to their processing datetime | [optional] 
**processed_to** | **char \*** | Retrieve entities according to their processing datetime | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;{return_code,return_message,pagination,result}&#39;]

### Return type

[model_response_batch_job_list_t](model_response_batch_job_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BatchAPI_batchJobResult**
```c
// batch.job.result
//
// Get job result data
//
response_batch_job_result_t* BatchAPI_batchJobResult(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 

### Return type

[response_batch_job_result_t](response_batch_job_result.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

