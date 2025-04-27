# CartAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CartAPI_cartBridge**](CartAPI.md#CartAPI_cartBridge) | **GET** /cart.bridge.json | cart.bridge
[**CartAPI_cartCatalogPriceRulesCount**](CartAPI.md#CartAPI_cartCatalogPriceRulesCount) | **GET** /cart.catalog_price_rules.count.json | cart.catalog_price_rules.count
[**CartAPI_cartCatalogPriceRulesList**](CartAPI.md#CartAPI_cartCatalogPriceRulesList) | **GET** /cart.catalog_price_rules.list.json | cart.catalog_price_rules.list
[**CartAPI_cartClearCache**](CartAPI.md#CartAPI_cartClearCache) | **POST** /cart.clear_cache.json | cart.clear_cache
[**CartAPI_cartConfig**](CartAPI.md#CartAPI_cartConfig) | **GET** /cart.config.json | cart.config
[**CartAPI_cartConfigUpdate**](CartAPI.md#CartAPI_cartConfigUpdate) | **PUT** /cart.config.update.json | cart.config.update
[**CartAPI_cartCouponAdd**](CartAPI.md#CartAPI_cartCouponAdd) | **POST** /cart.coupon.add.json | cart.coupon.add
[**CartAPI_cartCouponConditionAdd**](CartAPI.md#CartAPI_cartCouponConditionAdd) | **POST** /cart.coupon.condition.add.json | cart.coupon.condition.add
[**CartAPI_cartCouponCount**](CartAPI.md#CartAPI_cartCouponCount) | **GET** /cart.coupon.count.json | cart.coupon.count
[**CartAPI_cartCouponDelete**](CartAPI.md#CartAPI_cartCouponDelete) | **DELETE** /cart.coupon.delete.json | cart.coupon.delete
[**CartAPI_cartCouponList**](CartAPI.md#CartAPI_cartCouponList) | **GET** /cart.coupon.list.json | cart.coupon.list
[**CartAPI_cartCreate**](CartAPI.md#CartAPI_cartCreate) | **POST** /cart.create.json | cart.create
[**CartAPI_cartDelete**](CartAPI.md#CartAPI_cartDelete) | **DELETE** /cart.delete.json | cart.delete
[**CartAPI_cartDisconnect**](CartAPI.md#CartAPI_cartDisconnect) | **GET** /cart.disconnect.json | cart.disconnect
[**CartAPI_cartGiftcardAdd**](CartAPI.md#CartAPI_cartGiftcardAdd) | **POST** /cart.giftcard.add.json | cart.giftcard.add
[**CartAPI_cartGiftcardCount**](CartAPI.md#CartAPI_cartGiftcardCount) | **GET** /cart.giftcard.count.json | cart.giftcard.count
[**CartAPI_cartGiftcardDelete**](CartAPI.md#CartAPI_cartGiftcardDelete) | **DELETE** /cart.giftcard.delete.json | cart.giftcard.delete
[**CartAPI_cartGiftcardList**](CartAPI.md#CartAPI_cartGiftcardList) | **GET** /cart.giftcard.list.json | cart.giftcard.list
[**CartAPI_cartInfo**](CartAPI.md#CartAPI_cartInfo) | **GET** /cart.info.json | cart.info
[**CartAPI_cartList**](CartAPI.md#CartAPI_cartList) | **GET** /cart.list.json | cart.list
[**CartAPI_cartMetaDataList**](CartAPI.md#CartAPI_cartMetaDataList) | **GET** /cart.meta_data.list.json | cart.meta_data.list
[**CartAPI_cartMetaDataSet**](CartAPI.md#CartAPI_cartMetaDataSet) | **POST** /cart.meta_data.set.json | cart.meta_data.set
[**CartAPI_cartMetaDataUnset**](CartAPI.md#CartAPI_cartMetaDataUnset) | **DELETE** /cart.meta_data.unset.json | cart.meta_data.unset
[**CartAPI_cartMethods**](CartAPI.md#CartAPI_cartMethods) | **GET** /cart.methods.json | cart.methods
[**CartAPI_cartPluginList**](CartAPI.md#CartAPI_cartPluginList) | **GET** /cart.plugin.list.json | cart.plugin.list
[**CartAPI_cartScriptAdd**](CartAPI.md#CartAPI_cartScriptAdd) | **POST** /cart.script.add.json | cart.script.add
[**CartAPI_cartScriptDelete**](CartAPI.md#CartAPI_cartScriptDelete) | **DELETE** /cart.script.delete.json | cart.script.delete
[**CartAPI_cartScriptList**](CartAPI.md#CartAPI_cartScriptList) | **GET** /cart.script.list.json | cart.script.list
[**CartAPI_cartShippingZonesList**](CartAPI.md#CartAPI_cartShippingZonesList) | **GET** /cart.shipping_zones.list.json | cart.shipping_zones.list
[**CartAPI_cartValidate**](CartAPI.md#CartAPI_cartValidate) | **GET** /cart.validate.json | cart.validate


# **CartAPI_cartBridge**
```c
// cart.bridge
//
// Get bridge key and store key
//
cart_bridge_200_response_t* CartAPI_cartBridge(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[cart_bridge_200_response_t](cart_bridge_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCatalogPriceRulesCount**
```c
// cart.catalog_price_rules.count
//
// Get count of cart catalog price rules discounts.
//
cart_catalog_price_rules_count_200_response_t* CartAPI_cartCatalogPriceRulesCount(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[cart_catalog_price_rules_count_200_response_t](cart_catalog_price_rules_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCatalogPriceRulesList**
```c
// cart.catalog_price_rules.list
//
// Get cart catalog price rules discounts.
//
model_response_cart_catalog_price_rules_list_t* CartAPI_cartCatalogPriceRulesList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**ids** | **char \*** | Retrieves  catalog_price_rules by ids | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name,description&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_catalog_price_rules_list_t](model_response_cart_catalog_price_rules_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartClearCache**
```c
// cart.clear_cache
//
// Clear cache on store.
//
cart_clear_cache_200_response_t* CartAPI_cartClearCache(apiClient_t *apiClient, char *cache_type);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cache_type** | **char \*** | Defines which cache should be cleared. | 

### Return type

[cart_clear_cache_200_response_t](cart_clear_cache_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartConfig**
```c
// cart.config
//
// Get list of cart configs
//
cart_config_200_response_t* CartAPI_cartConfig(apiClient_t *apiClient, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;store_name,store_url,db_prefix&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[cart_config_200_response_t](cart_config_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartConfigUpdate**
```c
// cart.config.update
//
// Use this API method to update custom data in client database.
//
cart_config_update_200_response_t* CartAPI_cartConfigUpdate(apiClient_t *apiClient, cart_config_update_t *cart_config_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cart_config_update** | **[cart_config_update_t](cart_config_update.md) \*** |  | 

### Return type

[cart_config_update_200_response_t](cart_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCouponAdd**
```c
// cart.coupon.add
//
// Use this method to create a coupon with specified conditions.
//
cart_coupon_add_200_response_t* CartAPI_cartCouponAdd(apiClient_t *apiClient, cart_coupon_add_t *cart_coupon_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cart_coupon_add** | **[cart_coupon_add_t](cart_coupon_add.md) \*** |  | 

### Return type

[cart_coupon_add_200_response_t](cart_coupon_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCouponConditionAdd**
```c
// cart.coupon.condition.add
//
// Use this method to add additional conditions for coupon application.
//
basket_live_shipping_service_delete_200_response_t* CartAPI_cartCouponConditionAdd(apiClient_t *apiClient, char *coupon_id, api2cart_openapi_cartCouponConditionAdd_entity_e entity, api2cart_openapi_cartCouponConditionAdd_key_e key, char *_operator, char *value, char *target, int *include_tax, int *include_shipping, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**coupon_id** | **char \*** | Coupon Id | 
**entity** | **api2cart_openapi_cartCouponConditionAdd_entity_e** | Defines condition entity type | 
**key** | **api2cart_openapi_cartCouponConditionAdd_key_e** | Defines condition entity attribute key | 
**_operator** | **char \*** | Defines condition operator | 
**value** | **char \*** | Defines condition value, can be comma separated according to the operator. | 
**target** | **char \*** | Defines condition operator | [optional] [default to &#39;coupon_prerequisite&#39;]
**include_tax** | **int \*** | Indicates whether to apply a discount for taxes. | [optional] [default to false]
**include_shipping** | **int \*** | Indicates whether to apply a discount for shipping. | [optional] [default to false]
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[basket_live_shipping_service_delete_200_response_t](basket_live_shipping_service_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCouponCount**
```c
// cart.coupon.count
//
// This method allows you to get the number of coupons. On some platforms, you can filter the coupons by the date they were active.
//
cart_coupon_count_200_response_t* CartAPI_cartCouponCount(apiClient_t *apiClient, char *store_id, int *avail, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 
**avail** | **int \*** | Defines category&#39;s visibility status | [optional] [default to true]
**date_start_from** | **char \*** | Filter entity by date_start (greater or equal) | [optional] 
**date_start_to** | **char \*** | Filter entity by date_start (less or equal) | [optional] 
**date_end_from** | **char \*** | Filter entity by date_end (greater or equal) | [optional] 
**date_end_to** | **char \*** | Filter entity by date_end (less or equal) | [optional] 

### Return type

[cart_coupon_count_200_response_t](cart_coupon_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCouponDelete**
```c
// cart.coupon.delete
//
// Delete coupon
//
attribute_delete_200_response_t* CartAPI_cartCouponDelete(apiClient_t *apiClient, char *id, char *store_id);
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

# **CartAPI_cartCouponList**
```c
// cart.coupon.list
//
// Get cart coupon discounts.
//
model_response_cart_coupon_list_t* CartAPI_cartCouponList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *coupons_ids, char *store_id, char *lang_id, int *avail, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**coupons_ids** | **char \*** | Filter coupons by ids | [optional] 
**store_id** | **char \*** | Filter coupons by store id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**avail** | **int \*** | Filter coupons by avail status | [optional] 
**date_start_from** | **char \*** | Filter entity by date_start (greater or equal) | [optional] 
**date_start_to** | **char \*** | Filter entity by date_start (less or equal) | [optional] 
**date_end_from** | **char \*** | Filter entity by date_end (greater or equal) | [optional] 
**date_end_to** | **char \*** | Filter entity by date_end (less or equal) | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,code,name,description&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_coupon_list_t](model_response_cart_coupon_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartCreate**
```c
// cart.create
//
// Add store to the account
//
account_cart_add_200_response_t* CartAPI_cartCreate(apiClient_t *apiClient, cart_create_t *cart_create);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cart_create** | **[cart_create_t](cart_create.md) \*** |  | 

### Return type

[account_cart_add_200_response_t](account_cart_add_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartDelete**
```c
// cart.delete
//
// Remove store from API2Cart
//
cart_delete_200_response_t* CartAPI_cartDelete(apiClient_t *apiClient, int *delete_bridge);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**delete_bridge** | **int \*** | Identifies if there is a necessity to delete bridge | [optional] [default to true]

### Return type

[cart_delete_200_response_t](cart_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartDisconnect**
```c
// cart.disconnect
//
// Disconnect with the store and clear store session data.
//
cart_disconnect_200_response_t* CartAPI_cartDisconnect(apiClient_t *apiClient, int *delete_bridge);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**delete_bridge** | **int \*** | Identifies if there is a necessity to delete bridge | [optional] [default to false]

### Return type

[cart_disconnect_200_response_t](cart_disconnect_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartGiftcardAdd**
```c
// cart.giftcard.add
//
// Use this method to create a gift card for a specified amount.
//
cart_giftcard_add_200_response_t* CartAPI_cartGiftcardAdd(apiClient_t *apiClient, double amount, char *code, char *owner_email, char *recipient_email, char *recipient_name, char *owner_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**amount** | **double** | Defines the gift card amount value. | 
**code** | **char \*** | Gift card code | [optional] 
**owner_email** | **char \*** | Gift card owner email | [optional] 
**recipient_email** | **char \*** | Gift card recipient email | [optional] 
**recipient_name** | **char \*** | Gift card recipient name | [optional] 
**owner_name** | **char \*** | Gift card owner name | [optional] 

### Return type

[cart_giftcard_add_200_response_t](cart_giftcard_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartGiftcardCount**
```c
// cart.giftcard.count
//
// Get gift cards count.
//
cart_giftcard_count_200_response_t* CartAPI_cartGiftcardCount(apiClient_t *apiClient, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[cart_giftcard_count_200_response_t](cart_giftcard_count_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartGiftcardDelete**
```c
// cart.giftcard.delete
//
// Delete giftcard
//
attribute_delete_200_response_t* CartAPI_cartGiftcardDelete(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | Entity id | 

### Return type

[attribute_delete_200_response_t](attribute_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartGiftcardList**
```c
// cart.giftcard.list
//
// Get gift cards list.
//
model_response_cart_gift_card_list_t* CartAPI_cartGiftcardList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,code,name&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_gift_card_list_t](model_response_cart_gift_card_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartInfo**
```c
// cart.info
//
// This method allows you to get various information about the store, including a list of stores (in the case of a multistore configuration), a list of supported languages, currencies, carriers, warehouses, and many other information. This information contains data that is relatively stable and rarely changes, so API2Cart can cache certain data to reduce the load on the store and speed up the execution of the request. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, then use the cart.validate method.
//
cart_info_200_response_t* CartAPI_cartInfo(apiClient_t *apiClient, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;store_name,store_url,db_prefix&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[cart_info_200_response_t](cart_info_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartList**
```c
// cart.list
//
// Get list of supported carts
//
cart_list_200_response_t* CartAPI_cartList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[cart_list_200_response_t](cart_list_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartMetaDataList**
```c
// cart.meta_data.list
//
// Using this method, you can get a list of metadata for various entities (products, options, customers, orders). Usually this is data created by third-party plugins.
//
model_response_cart_meta_data_list_t* CartAPI_cartMetaDataList(apiClient_t *apiClient, char *entity_id, int *count, char *page_cursor, char *entity, char *store_id, char *lang_id, char *key, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**entity_id** | **char \*** | Entity Id | 
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**entity** | **char \*** | Entity | [optional] [default to &#39;product&#39;]
**store_id** | **char \*** | Store Id | [optional] 
**lang_id** | **char \*** | Language id | [optional] 
**key** | **char \*** | Key | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;key,value&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_meta_data_list_t](model_response_cart_meta_data_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartMetaDataSet**
```c
// cart.meta_data.set
//
// Set meta data for a specific entity
//
attribute_add_200_response_t* CartAPI_cartMetaDataSet(apiClient_t *apiClient, char *entity_id, char *key, char *value, char *_namespace, char *entity, char *store_id, char *lang_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**entity_id** | **char \*** | Entity Id | 
**key** | **char \*** | Key | 
**value** | **char \*** | Value | 
**_namespace** | **char \*** | Metafield namespace | 
**entity** | **char \*** | Entity | [optional] [default to &#39;product&#39;]
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

# **CartAPI_cartMetaDataUnset**
```c
// cart.meta_data.unset
//
// Unset meta data for a specific entity
//
basket_live_shipping_service_delete_200_response_t* CartAPI_cartMetaDataUnset(apiClient_t *apiClient, char *entity_id, char *key, char *id, char *entity, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**entity_id** | **char \*** | Entity Id | 
**key** | **char \*** | Key | 
**id** | **char \*** | Entity id | 
**entity** | **char \*** | Entity | [optional] [default to &#39;product&#39;]
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[basket_live_shipping_service_delete_200_response_t](basket_live_shipping_service_delete_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartMethods**
```c
// cart.methods
//
// Returns a list of supported API methods.
//
cart_methods_200_response_t* CartAPI_cartMethods(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[cart_methods_200_response_t](cart_methods_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartPluginList**
```c
// cart.plugin.list
//
// Get a list of third-party plugins installed on the store.
//
cart_plugin_list_200_response_t* CartAPI_cartPluginList(apiClient_t *apiClient, int *start, int *count, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[cart_plugin_list_200_response_t](cart_plugin_list_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartScriptAdd**
```c
// cart.script.add
//
// Add new script to the storefront
//
cart_script_add_200_response_t* CartAPI_cartScriptAdd(apiClient_t *apiClient, char *name, char *description, char *html, char *src, char *load_method, char *scope, char *events, char *store_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | The user-friendly script name | [optional] 
**description** | **char \*** | The user-friendly description | [optional] 
**html** | **char \*** | An html string containing exactly one &#x60;script&#x60; tag. | [optional] 
**src** | **char \*** | The URL of the remote script | [optional] 
**load_method** | **char \*** | The load method to use for the script | [optional] 
**scope** | **char \*** | The page or pages on the online store where the script should be included | [optional] [default to &#39;storefront&#39;]
**events** | **char \*** | Event for run scripts | [optional] 
**store_id** | **char \*** | Store Id | [optional] 

### Return type

[cart_script_add_200_response_t](cart_script_add_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartScriptDelete**
```c
// cart.script.delete
//
// Remove script from the storefront
//
attribute_delete_200_response_t* CartAPI_cartScriptDelete(apiClient_t *apiClient, char *id, char *store_id);
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

# **CartAPI_cartScriptList**
```c
// cart.script.list
//
// Get scripts installed to the storefront
//
model_response_cart_script_list_t* CartAPI_cartScriptList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *script_ids, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**script_ids** | **char \*** | Retrieves only scripts with specific ids | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**created_from** | **char \*** | Retrieve entities from their creation date | [optional] 
**created_to** | **char \*** | Retrieve entities to their creation date | [optional] 
**modified_from** | **char \*** | Retrieve entities from their modification date | [optional] 
**modified_to** | **char \*** | Retrieve entities to their modification date | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name,description&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_script_list_t](model_response_cart_script_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartShippingZonesList**
```c
// cart.shipping_zones.list
//
// Get list of shipping zones
//
model_response_cart_shipping_zones_list_t* CartAPI_cartShippingZonesList(apiClient_t *apiClient, int *start, int *count, char *store_id, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**store_id** | **char \*** | Store Id | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;id,name,enabled&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_cart_shipping_zones_list_t](model_response_cart_shipping_zones_list.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CartAPI_cartValidate**
```c
// cart.validate
//
// This method clears the cache in API2Cart for a particular store and checks whether the connection to the store is available. Use this method if there have been any changes in the settings on the storе, for example, if a new plugin has been installed or removed.
//
cart_validate_200_response_t* CartAPI_cartValidate(apiClient_t *apiClient, int *validate_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**validate_version** | **int \*** | Specify if api2cart should validate cart version | [optional] [default to false]

### Return type

[cart_validate_200_response_t](cart_validate_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

