# CustomerAPI

All URIs are relative to *https://api.api2cart.local.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CustomerAPI_customerAdd**](CustomerAPI.md#CustomerAPI_customerAdd) | **POST** /customer.add.json | customer.add
[**CustomerAPI_customerAddressAdd**](CustomerAPI.md#CustomerAPI_customerAddressAdd) | **POST** /customer.address.add.json | customer.address.add
[**CustomerAPI_customerAttributeList**](CustomerAPI.md#CustomerAPI_customerAttributeList) | **GET** /customer.attribute.list.json | customer.attribute.list
[**CustomerAPI_customerCount**](CustomerAPI.md#CustomerAPI_customerCount) | **GET** /customer.count.json | customer.count
[**CustomerAPI_customerDelete**](CustomerAPI.md#CustomerAPI_customerDelete) | **DELETE** /customer.delete.json | customer.delete
[**CustomerAPI_customerFind**](CustomerAPI.md#CustomerAPI_customerFind) | **GET** /customer.find.json | customer.find
[**CustomerAPI_customerGroupAdd**](CustomerAPI.md#CustomerAPI_customerGroupAdd) | **POST** /customer.group.add.json | customer.group.add
[**CustomerAPI_customerGroupList**](CustomerAPI.md#CustomerAPI_customerGroupList) | **GET** /customer.group.list.json | customer.group.list
[**CustomerAPI_customerInfo**](CustomerAPI.md#CustomerAPI_customerInfo) | **GET** /customer.info.json | customer.info
[**CustomerAPI_customerList**](CustomerAPI.md#CustomerAPI_customerList) | **GET** /customer.list.json | customer.list
[**CustomerAPI_customerUpdate**](CustomerAPI.md#CustomerAPI_customerUpdate) | **PUT** /customer.update.json | customer.update
[**CustomerAPI_customerWishlistList**](CustomerAPI.md#CustomerAPI_customerWishlistList) | **GET** /customer.wishlist.list.json | customer.wishlist.list


# **CustomerAPI_customerAdd**
```c
// customer.add
//
// Add customer into store.
//
customer_add_200_response_t* CustomerAPI_customerAdd(apiClient_t *apiClient, customer_add_t *customer_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_add** | **[customer_add_t](customer_add.md) \*** |  | 

### Return type

[customer_add_200_response_t](customer_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerAddressAdd**
```c
// customer.address.add
//
// Add customer address.
//
attribute_add_200_response_t* CustomerAPI_customerAddressAdd(apiClient_t *apiClient, customer_address_add_t *customer_address_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_address_add** | **[customer_address_add_t](customer_address_add.md) \*** |  | 

### Return type

[attribute_add_200_response_t](attribute_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerAttributeList**
```c
// customer.attribute.list
//
// Get attributes for specific customer
//
model_response_customer_attribute_list_t* CustomerAPI_customerAttributeList(apiClient_t *apiClient, char *customer_id, int *count, char *page_cursor, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_id** | **char \*** | Retrieves orders specified by customer id | 
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_customer_attribute_list_t](model_response_customer_attribute_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerCount**
```c
// customer.count
//
// Get number of customers from store.
//
customer_count_200_response_t* CustomerAPI_customerCount(apiClient_t *apiClient, char *ids, char *since_id, char *customer_list_id, char *group_id, char *store_id, int *avail, int *include_guests, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ids** | **char \*** | Counts customers specified by ids | [optional] 
**since_id** | **char \*** | Retrieve entities starting from the specified id. | [optional] 
**customer_list_id** | **char \*** | The numeric ID of the customer list in Demandware. | [optional] 
**group_id** | **char \*** | Customer group_id | [optional] 
**store_id** | **char \*** | Counts customer specified by store id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**include_guests** | **int \*** | Indicates whether to include guest customers in the total count. | [optional] [default to false]
**find_value** | **char \*** | Entity search that is specified by some value | [optional] 
**find_where** | **char \*** | Counts customers that are searched specified by field | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 

### Return type

[customer_count_200_response_t](customer_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerDelete**
```c
// customer.delete
//
// Delete customer from store.
//
customer_delete_200_response_t* CustomerAPI_customerDelete(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Identifies customer specified by the id | 

### Return type

[customer_delete_200_response_t](customer_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerFind**
```c
// customer.find
//
// Find customers in store.
//
customer_find_200_response_t* CustomerAPI_customerFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id, int *include_guests);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**find_value** | **char \*** | Entity search that is specified by some value | 
**find_where** | **char \*** | Entity search that is specified by the comma-separated unique fields | [optional] [default to &#39;email&#39;]
**find_params** | **char \*** | Entity search that is specified by comma-separated parameters | [optional] [default to &#39;whole_words&#39;]
**store_id** | **char \*** | Store Id | [optional] 
**include_guests** | **int \*** | Indicates whether to search among guest customers when looking up a customer. | [optional] [default to false]

### Return type

[customer_find_200_response_t](customer_find_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerGroupAdd**
```c
// customer.group.add
//
// Create customer group.
//
customer_group_add_200_response_t* CustomerAPI_customerGroupAdd(apiClient_t *apiClient, char *name, char *store_id, char *stores_ids);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Customer group name | 
**store_id** | **char \*** | Store Id | [optional] 
**stores_ids** | **char \*** | Assign customer group to the stores that is specified by comma-separated stores&#39; id | [optional] 

### Return type

[customer_group_add_200_response_t](customer_group_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerGroupList**
```c
// customer.group.list
//
// Get list of customers groups.
//
model_response_customer_group_list_t* CustomerAPI_customerGroupList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *group_ids, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude, int *disable_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**group_ids** | **char \*** | Groups that will be assigned to a customer | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name,additional_fields&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**disable_cache** | **int \*** | Disable cache for current request | [optional] [default to false]

### Return type

[model_response_customer_group_list_t](model_response_customer_group_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerInfo**
```c
// customer.info
//
// Get customers' details from store.
//
customer_info_200_response_t* CustomerAPI_customerInfo(apiClient_t *apiClient, char *id, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Retrieves customer&#39;s info specified by customer id | 
**store_id** | **char \*** | Retrieves customer info specified by store id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,email,first_name,last_name&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[customer_info_200_response_t](customer_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerList**
```c
// customer.list
//
// Get list of customers from store.
//
model_response_customer_list_t* CustomerAPI_customerList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *since_id, char *customer_list_id, char *group_id, char *store_id, int *avail, int *include_guests, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to, char *sort_by, char *sort_direction, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**ids** | **char \*** | Retrieves customers specified by ids | [optional] 
**since_id** | **char \*** | Retrieve entities starting from the specified id. | [optional] 
**customer_list_id** | **char \*** | The numeric ID of the customer list in Demandware. | [optional] 
**group_id** | **char \*** | Customer group_id | [optional] 
**store_id** | **char \*** | Retrieves customers specified by store id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**include_guests** | **int \*** | Indicates whether to include guest customers in the list results. | [optional] [default to false]
**find_value** | **char \*** | Entity search that is specified by some value | [optional] 
**find_where** | **char \*** | Customer search that is specified by field | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**sort_by** | **char \*** | Set field to sort by | [optional] [default to &#39;created_time&#39;]
**sort_direction** | **char \*** | Set sorting direction | [optional] [default to &#39;asc&#39;]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,email,first_name,last_name&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_customer_list_t](model_response_customer_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerUpdate**
```c
// customer.update
//
// Update information of customer in store.
//
account_config_update_200_response_t* CustomerAPI_customerUpdate(apiClient_t *apiClient, customer_update_t *customer_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_update** | **[customer_update_t](customer_update.md) \*** |  | 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CustomerAPI_customerWishlistList**
```c
// customer.wishlist.list
//
// Get a Wish List of customer from the store.
//
model_response_customer_wishlist_list_t* CustomerAPI_customerWishlistList(apiClient_t *apiClient, char *customer_id, int *start, int *count, char *page_cursor, char *id, char *store_id, char *response_fields);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_id** | **char \*** | Retrieves orders specified by customer id | 
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**id** | **char \*** | Entity id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;{return_code,return_message,pagination,result}&#39;]

### Return type

[model_response_customer_wishlist_list_t](model_response_customer_wishlist_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

