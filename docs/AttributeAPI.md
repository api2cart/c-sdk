# AttributeAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AttributeAPI_attributeAdd**](AttributeAPI.md#AttributeAPI_attributeAdd) | **POST** /attribute.add.json | attribute.add
[**AttributeAPI_attributeAssignGroup**](AttributeAPI.md#AttributeAPI_attributeAssignGroup) | **POST** /attribute.assign.group.json | attribute.assign.group
[**AttributeAPI_attributeAssignSet**](AttributeAPI.md#AttributeAPI_attributeAssignSet) | **POST** /attribute.assign.set.json | attribute.assign.set
[**AttributeAPI_attributeAttributesetList**](AttributeAPI.md#AttributeAPI_attributeAttributesetList) | **GET** /attribute.attributeset.list.json | attribute.attributeset.list
[**AttributeAPI_attributeCount**](AttributeAPI.md#AttributeAPI_attributeCount) | **GET** /attribute.count.json | attribute.count
[**AttributeAPI_attributeDelete**](AttributeAPI.md#AttributeAPI_attributeDelete) | **DELETE** /attribute.delete.json | attribute.delete
[**AttributeAPI_attributeGroupList**](AttributeAPI.md#AttributeAPI_attributeGroupList) | **GET** /attribute.group.list.json | attribute.group.list
[**AttributeAPI_attributeInfo**](AttributeAPI.md#AttributeAPI_attributeInfo) | **GET** /attribute.info.json | attribute.info
[**AttributeAPI_attributeList**](AttributeAPI.md#AttributeAPI_attributeList) | **GET** /attribute.list.json | attribute.list
[**AttributeAPI_attributeTypeList**](AttributeAPI.md#AttributeAPI_attributeTypeList) | **GET** /attribute.type.list.json | attribute.type.list
[**AttributeAPI_attributeUnassignGroup**](AttributeAPI.md#AttributeAPI_attributeUnassignGroup) | **POST** /attribute.unassign.group.json | attribute.unassign.group
[**AttributeAPI_attributeUnassignSet**](AttributeAPI.md#AttributeAPI_attributeUnassignSet) | **POST** /attribute.unassign.set.json | attribute.unassign.set
[**AttributeAPI_attributeUpdate**](AttributeAPI.md#AttributeAPI_attributeUpdate) | **PUT** /attribute.update.json | attribute.update
[**AttributeAPI_attributeValueAdd**](AttributeAPI.md#AttributeAPI_attributeValueAdd) | **POST** /attribute.value.add.json | attribute.value.add
[**AttributeAPI_attributeValueDelete**](AttributeAPI.md#AttributeAPI_attributeValueDelete) | **DELETE** /attribute.value.delete.json | attribute.value.delete
[**AttributeAPI_attributeValueUpdate**](AttributeAPI.md#AttributeAPI_attributeValueUpdate) | **PUT** /attribute.value.update.json | attribute.value.update


# **AttributeAPI_attributeAdd**
```c
// attribute.add
//
// Add new attribute
//
attribute_add_200_response_t* AttributeAPI_attributeAdd(apiClient_t *apiClient, api2cart_openapi_attributeAdd_type_e type, char *name, char *code, char *store_id, char *lang_id, int *visible, int *required, int *position, char *attribute_group_id, char *is_global, int *is_searchable, char *is_filterable, int *is_comparable, int *is_html_allowed_on_front, int *is_filterable_in_search, int *is_configurable, int *is_visible_in_advanced_search, int *is_used_for_promo_rules, int *used_in_product_listing, int *used_for_sort_by, char *apply_to);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **api2cart_openapi_attributeAdd_type_e** | Defines attribute&#39;s type | 
**name** | **char \*** | Defines attributes&#39;s name | 
**code** | **char \*** | Entity code | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**visible** | **int \*** | Set visibility status | [optional] [default to false]
**required** | **int \*** | Defines if the option is required | [optional] [default to false]
**position** | **int \*** | Attribute&#x60;s position | [optional] [default to 0]
**attribute_group_id** | **char \*** | Filter by attribute_group_id | [optional] 
**is_global** | **char \*** | Attribute saving scope | [optional] [default to &#39;Store&#39;]
**is_searchable** | **int \*** | Use attribute in Quick Search | [optional] [default to false]
**is_filterable** | **char \*** | Use In Layered Navigation | [optional] [default to &#39;No&#39;]
**is_comparable** | **int \*** | Comparable on Front-end | [optional] [default to false]
**is_html_allowed_on_front** | **int \*** | Allow HTML Tags on Frontend | [optional] [default to false]
**is_filterable_in_search** | **int \*** | Use In Search Results Layered Navigation | [optional] [default to false]
**is_configurable** | **int \*** | Use To Create Configurable Product | [optional] [default to false]
**is_visible_in_advanced_search** | **int \*** | Use in Advanced Search | [optional] [default to false]
**is_used_for_promo_rules** | **int \*** | Use for Promo Rule Conditions | [optional] [default to false]
**used_in_product_listing** | **int \*** | Used in Product Listing | [optional] [default to false]
**used_for_sort_by** | **int \*** | Used for Sorting in Product Listing | [optional] [default to false]
**apply_to** | **char \*** | Types of products which can have this attribute | [optional] [default to &#39;all_types&#39;]

### Return type

[attribute_add_200_response_t](attribute_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeAssignGroup**
```c
// attribute.assign.group
//
// Assign attribute to the group
//
attribute_assign_group_200_response_t* AttributeAPI_attributeAssignGroup(apiClient_t *apiClient, char *id, char *group_id, char *attribute_set_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**group_id** | **char \*** | Attribute group_id | 
**attribute_set_id** | **char \*** | Attribute set id | [optional] 

### Return type

[attribute_assign_group_200_response_t](attribute_assign_group_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeAssignSet**
```c
// attribute.assign.set
//
// Assign attribute to the attribute set
//
attribute_assign_group_200_response_t* AttributeAPI_attributeAssignSet(apiClient_t *apiClient, char *id, char *attribute_set_id, char *group_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**attribute_set_id** | **char \*** | Attribute set id | 
**group_id** | **char \*** | Attribute group_id | [optional] 

### Return type

[attribute_assign_group_200_response_t](attribute_assign_group_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeAttributesetList**
```c
// attribute.attributeset.list
//
// Get attribute_set list
//
model_response_attribute_attributeset_list_t* AttributeAPI_attributeAttributesetList(apiClient_t *apiClient, int *start, int *count, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_attribute_attributeset_list_t](model_response_attribute_attributeset_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeCount**
```c
// attribute.count
//
// Get attributes count
//
attribute_count_200_response_t* AttributeAPI_attributeCount(apiClient_t *apiClient, char *type, char *attribute_set_id, char *store_id, char *lang_id, int *visible, int *required, int *system);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **char \*** | Defines attribute&#39;s type | [optional] 
**attribute_set_id** | **char \*** | Filter items by attribute set id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**visible** | **int \*** | Filter items by visibility status | [optional] 
**required** | **int \*** | Defines if the option is required | [optional] 
**system** | **int \*** | True if attribute is system | [optional] 

### Return type

[attribute_count_200_response_t](attribute_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeDelete**
```c
// attribute.delete
//
// Delete attribute from store
//
attribute_delete_200_response_t* AttributeAPI_attributeDelete(apiClient_t *apiClient, char *id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[attribute_delete_200_response_t](attribute_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeGroupList**
```c
// attribute.group.list
//
// Get attribute group list
//
model_response_attribute_group_list_t* AttributeAPI_attributeGroupList(apiClient_t *apiClient, int *start, int *count, char *attribute_set_id, char *lang_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**attribute_set_id** | **char \*** | Attribute set id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_attribute_group_list_t](model_response_attribute_group_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeInfo**
```c
// attribute.info
//
// Get information about a specific global attribute by its ID.
//
attribute_info_200_response_t* AttributeAPI_attributeInfo(apiClient_t *apiClient, char *id, char *attribute_set_id, char *store_id, char *lang_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**attribute_set_id** | **char \*** | Attribute set id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[attribute_info_200_response_t](attribute_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeList**
```c
// attribute.list
//
// Get a list of global attributes.
//
model_response_attribute_list_t* AttributeAPI_attributeList(apiClient_t *apiClient, int *start, int *count, char *attribute_ids, char *attribute_set_id, char *store_id, char *lang_id, char *type, int *visible, int *required, int *system, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**attribute_ids** | **char \*** | Filter attributes by ids | [optional] 
**attribute_set_id** | **char \*** | Filter items by attribute set id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Retrieves attributes on specified language id | [optional] 
**type** | **char \*** | Defines attribute&#39;s type | [optional] 
**visible** | **int \*** | Filter items by visibility status | [optional] 
**required** | **int \*** | Defines if the option is required | [optional] 
**system** | **int \*** | True if attribute is system | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name,code,type&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_attribute_list_t](model_response_attribute_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeTypeList**
```c
// attribute.type.list
//
// Get list of supported attributes types
//
attribute_type_list_200_response_t* AttributeAPI_attributeTypeList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[attribute_type_list_200_response_t](attribute_type_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeUnassignGroup**
```c
// attribute.unassign.group
//
// Unassign attribute from group
//
attribute_unassign_group_200_response_t* AttributeAPI_attributeUnassignGroup(apiClient_t *apiClient, char *id, char *group_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**group_id** | **char \*** | Customer group_id | 

### Return type

[attribute_unassign_group_200_response_t](attribute_unassign_group_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeUnassignSet**
```c
// attribute.unassign.set
//
// Unassign attribute from attribute set
//
attribute_unassign_group_200_response_t* AttributeAPI_attributeUnassignSet(apiClient_t *apiClient, char *id, char *attribute_set_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**attribute_set_id** | **char \*** | Attribute set id | 

### Return type

[attribute_unassign_group_200_response_t](attribute_unassign_group_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeUpdate**
```c
// attribute.update
//
// Update attribute data
//
attribute_update_200_response_t* AttributeAPI_attributeUpdate(apiClient_t *apiClient, char *id, char *name, char *store_id, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**name** | **char \*** | Defines new attributes&#39;s name | 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[attribute_update_200_response_t](attribute_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeValueAdd**
```c
// attribute.value.add
//
// Add new value to attribute.
//
attribute_add_200_response_t* AttributeAPI_attributeValueAdd(apiClient_t *apiClient, char *attribute_id, char *name, char *code, char *description, char *store_id, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**attribute_id** | **char \*** | Attribute Id | 
**name** | **char \*** | Defines attribute value&#39;s name | 
**code** | **char \*** | Entity code | [optional] 
**description** | **char \*** | Defines attribute value&#39;s description | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[attribute_add_200_response_t](attribute_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeValueDelete**
```c
// attribute.value.delete
//
// Delete attribute value.
//
attribute_value_delete_200_response_t* AttributeAPI_attributeValueDelete(apiClient_t *apiClient, char *id, char *attribute_id, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 
**attribute_id** | **char \*** | Attribute Id | 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[attribute_value_delete_200_response_t](attribute_value_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AttributeAPI_attributeValueUpdate**
```c
// attribute.value.update
//
// Update attribute value.
//
attribute_update_200_response_t* AttributeAPI_attributeValueUpdate(apiClient_t *apiClient, char *id, char *attribute_id, char *name, char *description, char *code, char *store_id, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Defines attribute value&#39;s id | 
**attribute_id** | **char \*** | Attribute Id | 
**name** | **char \*** | Defines attribute value&#39;s name | [optional] 
**description** | **char \*** | Defines new attribute value&#39;s description | [optional] 
**code** | **char \*** | Entity code | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 

### Return type

[attribute_update_200_response_t](attribute_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

