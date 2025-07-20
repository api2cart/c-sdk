# CategoryAPI

All URIs are relative to *https://api.api2cart.local.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CategoryAPI_categoryAdd**](CategoryAPI.md#CategoryAPI_categoryAdd) | **POST** /category.add.json | category.add
[**CategoryAPI_categoryAddBatch**](CategoryAPI.md#CategoryAPI_categoryAddBatch) | **POST** /category.add.batch.json | category.add.batch
[**CategoryAPI_categoryAssign**](CategoryAPI.md#CategoryAPI_categoryAssign) | **POST** /category.assign.json | category.assign
[**CategoryAPI_categoryCount**](CategoryAPI.md#CategoryAPI_categoryCount) | **GET** /category.count.json | category.count
[**CategoryAPI_categoryDelete**](CategoryAPI.md#CategoryAPI_categoryDelete) | **DELETE** /category.delete.json | category.delete
[**CategoryAPI_categoryFind**](CategoryAPI.md#CategoryAPI_categoryFind) | **GET** /category.find.json | category.find
[**CategoryAPI_categoryImageAdd**](CategoryAPI.md#CategoryAPI_categoryImageAdd) | **POST** /category.image.add.json | category.image.add
[**CategoryAPI_categoryImageDelete**](CategoryAPI.md#CategoryAPI_categoryImageDelete) | **DELETE** /category.image.delete.json | category.image.delete
[**CategoryAPI_categoryInfo**](CategoryAPI.md#CategoryAPI_categoryInfo) | **GET** /category.info.json | category.info
[**CategoryAPI_categoryList**](CategoryAPI.md#CategoryAPI_categoryList) | **GET** /category.list.json | category.list
[**CategoryAPI_categoryUnassign**](CategoryAPI.md#CategoryAPI_categoryUnassign) | **POST** /category.unassign.json | category.unassign
[**CategoryAPI_categoryUpdate**](CategoryAPI.md#CategoryAPI_categoryUpdate) | **PUT** /category.update.json | category.update


# **CategoryAPI_categoryAdd**
```c
// category.add
//
// Add new category in store
//
category_add_200_response_t* CategoryAPI_categoryAdd(apiClient_t *apiClient, char *name, char *description, char *short_description, char *parent_id, int *avail, char *created_time, char *modified_time, int *sort_order, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url, char *store_id, char *stores_ids, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Defines category&#39;s name that has to be added | 
**description** | **char \*** | Defines category&#39;s description | [optional] 
**short_description** | **char \*** | Defines short description | [optional] 
**parent_id** | **char \*** | Adds categories specified by parent id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**created_time** | **char \*** | Entity&#39;s date creation | [optional] 
**modified_time** | **char \*** | Entity&#39;s date modification | [optional] 
**sort_order** | **int \*** | Sort number in the list | [optional] [default to 0]
**meta_title** | **char \*** | Defines unique meta title for each entity | [optional] 
**meta_description** | **char \*** | Defines unique meta description of a entity | [optional] 
**meta_keywords** | **char \*** | Defines unique meta keywords for each entity | [optional] 
**seo_url** | **char \*** | Defines unique category&#39;s URL for SEO | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**stores_ids** | **char \*** | Create category in the stores that is specified by comma-separated stores&#39; id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[category_add_200_response_t](category_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryAddBatch**
```c
// category.add.batch
//
// Add new categories to the store.
//
category_add_batch_200_response_t* CategoryAPI_categoryAddBatch(apiClient_t *apiClient, category_add_batch_t *category_add_batch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**category_add_batch** | **[category_add_batch_t](category_add_batch.md) \*** |  | 

### Return type

[category_add_batch_200_response_t](category_add_batch_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryAssign**
```c
// category.assign
//
// Assign category to product
//
category_assign_200_response_t* CategoryAPI_categoryAssign(apiClient_t *apiClient, char *category_id, char *product_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**category_id** | **char \*** | Defines category assign, specified by category id | 
**product_id** | **char \*** | Defines category assign to the product, specified by product id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[category_assign_200_response_t](category_assign_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryCount**
```c
// category.count
//
// Count categories in store.
//
category_count_200_response_t* CategoryAPI_categoryCount(apiClient_t *apiClient, char *parent_id, char *store_id, char *lang_id, int *avail, char *created_from, char *created_to, char *modified_from, char *modified_to, char *product_type, char *find_value, char *find_where, char *report_request_id, int *disable_report_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**parent_id** | **char \*** | Counts categories specified by parent id | [optional] 
**store_id** | **char \*** | Counts category specified by store id | [optional] 
**lang_id** | **char \*** | Counts category specified by language id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**product_type** | **char \*** | A categorization for the product | [optional] 
**find_value** | **char \*** | Entity search that is specified by some value | [optional] 
**find_where** | **char \*** | Counts categories that are searched specified by field | [optional] 
**report_request_id** | **char \*** | Report request id | [optional] 
**disable_report_cache** | **int \*** | Disable report cache for current request | [optional] [default to false]

### Return type

[category_count_200_response_t](category_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryDelete**
```c
// category.delete
//
// Delete category in store
//
category_delete_200_response_t* CategoryAPI_categoryDelete(apiClient_t *apiClient, char *id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Defines category removal, specified by category id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[category_delete_200_response_t](category_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryFind**
```c
// category.find
//
// Search category in store. \"Laptop\" is specified here by default.
//
category_find_200_response_t* CategoryAPI_categoryFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**find_value** | **char \*** | Entity search that is specified by some value | 
**find_where** | **char \*** | Entity search that is specified by the comma-separated unique fields | [optional] [default to &#39;name&#39;]
**find_params** | **char \*** | Entity search that is specified by comma-separated parameters | [optional] [default to &#39;whole_words&#39;]
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[category_find_200_response_t](category_find_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryImageAdd**
```c
// category.image.add
//
// Add image to category
//
category_image_add_200_response_t* CategoryAPI_categoryImageAdd(apiClient_t *apiClient, char *category_id, char *image_name, char *url, api2cart_openapi_categoryImageAdd_type_e type, char *store_id, char *label, char *mime, int *position);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**category_id** | **char \*** | Defines category id where the image should be added | 
**image_name** | **char \*** | Defines image&#39;s name | 
**url** | **char \*** | Defines URL of the image that has to be added | 
**type** | **api2cart_openapi_categoryImageAdd_type_e** | Defines image&#39;s types that are specified by comma-separated list | 
**store_id** | **char \*** | Store Id | [optional] 
**label** | **char \*** | Defines alternative text that has to be attached to the picture | [optional] 
**mime** | **char \*** | Mime type of image http://en.wikipedia.org/wiki/Internet_media_type. | [optional] 
**position** | **int \*** | Defines image’s position in the list | [optional] [default to 0]

### Return type

[category_image_add_200_response_t](category_image_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryImageDelete**
```c
// category.image.delete
//
// Delete image
//
attribute_delete_200_response_t* CategoryAPI_categoryImageDelete(apiClient_t *apiClient, char *category_id, char *image_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**category_id** | **char \*** | Defines category id where the image should be deleted | 
**image_id** | **char \*** | Define image id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[attribute_delete_200_response_t](attribute_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryInfo**
```c
// category.info
//
// Get category info about category ID*** or specify other category ID.
//
category_info_200_response_t* CategoryAPI_categoryInfo(apiClient_t *apiClient, char *id, char *store_id, char *lang_id, char *schema_type, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Retrieves category&#39;s info specified by category id | 
**store_id** | **char \*** | Retrieves category info  specified by store id | [optional] 
**lang_id** | **char \*** | Retrieves category info  specified by language id | [optional] 
**schema_type** | **char \*** | The name of the requirements set for the provided schema. | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,parent_id,name,description&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**report_request_id** | **char \*** | Report request id | [optional] 
**disable_report_cache** | **int \*** | Disable report cache for current request | [optional] [default to false]

### Return type

[category_info_200_response_t](category_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryList**
```c
// category.list
//
// Get list of categories from store.
//
model_response_category_list_t* CategoryAPI_categoryList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *store_id, char *lang_id, char *parent_id, int *avail, char *product_type, char *created_from, char *created_to, char *modified_from, char *modified_to, char *find_value, char *find_where, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *disable_cache);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Retrieves categories specified by store id | [optional] 
**lang_id** | **char \*** | Retrieves categorys specified by language id | [optional] 
**parent_id** | **char \*** | Retrieves categories specified by parent id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**product_type** | **char \*** | A categorization for the product | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**find_value** | **char \*** | Entity search that is specified by some value | [optional] 
**find_where** | **char \*** | Category search that is specified by field | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,parent_id,name,description&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**report_request_id** | **char \*** | Report request id | [optional] 
**disable_report_cache** | **int \*** | Disable report cache for current request | [optional] [default to false]
**disable_cache** | **int \*** | Disable cache for current request | [optional] [default to false]

### Return type

[model_response_category_list_t](model_response_category_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryUnassign**
```c
// category.unassign
//
// Unassign category to product
//
category_assign_200_response_t* CategoryAPI_categoryUnassign(apiClient_t *apiClient, char *category_id, char *product_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**category_id** | **char \*** | Defines category unassign, specified by category id | 
**product_id** | **char \*** | Defines category unassign to the product, specified by product id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[category_assign_200_response_t](category_assign_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CategoryAPI_categoryUpdate**
```c
// category.update
//
// Update category in store
//
account_config_update_200_response_t* CategoryAPI_categoryUpdate(apiClient_t *apiClient, char *id, char *name, char *description, char *short_description, char *parent_id, int *avail, int *sort_order, char *modified_time, char *meta_title, char *meta_description, char *meta_keywords, char *seo_url, char *store_id, char *stores_ids, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Defines category update specified by category id | 
**name** | **char \*** | Defines new category’s name | [optional] 
**description** | **char \*** | Defines new category&#39;s description | [optional] 
**short_description** | **char \*** | Defines short description | [optional] 
**parent_id** | **char \*** | Defines new parent category id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] 
**sort_order** | **int \*** | Sort number in the list | [optional] 
**modified_time** | **char \*** | Entity&#39;s date modification | [optional] 
**meta_title** | **char \*** | Defines unique meta title for each entity | [optional] 
**meta_description** | **char \*** | Defines unique meta description of a entity | [optional] 
**meta_keywords** | **char \*** | Defines unique meta keywords for each entity | [optional] 
**seo_url** | **char \*** | Defines unique category&#39;s URL for SEO | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**stores_ids** | **char \*** | Update category in the stores that is specified by comma-separated stores&#39; id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

