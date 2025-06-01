# AccountAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountAPI_accountCartAdd**](AccountAPI.md#AccountAPI_accountCartAdd) | **POST** /account.cart.add.json | account.cart.add
[**AccountAPI_accountCartList**](AccountAPI.md#AccountAPI_accountCartList) | **GET** /account.cart.list.json | account.cart.list
[**AccountAPI_accountConfigUpdate**](AccountAPI.md#AccountAPI_accountConfigUpdate) | **PUT** /account.config.update.json | account.config.update
[**AccountAPI_accountFailedWebhooks**](AccountAPI.md#AccountAPI_accountFailedWebhooks) | **GET** /account.failed_webhooks.json | account.failed_webhooks
[**AccountAPI_accountSupportedPlatforms**](AccountAPI.md#AccountAPI_accountSupportedPlatforms) | **GET** /account.supported_platforms.json | account.supported_platforms


# **AccountAPI_accountCartAdd**
```c
// account.cart.add
//
// Use this method to automate the process of connecting stores to API2Cart. The list of parameters will vary depending on the platform. To get a list of parameters that are specific to a particular shopping platform, you need to execute the account.supported_platforms.json method.
//
account_cart_add_200_response_t* AccountAPI_accountCartAdd(apiClient_t *apiClient, account_cart_add_t *account_cart_add);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_cart_add** | **[account_cart_add_t](account_cart_add.md) \*** |  | 

### Return type

[account_cart_add_200_response_t](account_cart_add_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_accountCartList**
```c
// account.cart.list
//
// This method lets you get a list of online stores connected to your API2Cart account. You can get the number of API requests to each store if you specify a period using parameters (request_from_date, request_to_date). The total_calls field is displayed only if there are parameters (request_from_date, request_to_date).
//
account_cart_list_200_response_t* AccountAPI_accountCartList(apiClient_t *apiClient, char *store_url, char *store_key, char *request_from_date, char *request_to_date, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**store_url** | **char \*** | A web address of a store | [optional] 
**store_key** | **char \*** | Find store by store key | [optional] 
**request_from_date** | **char \*** | Retrieve entities from their creation date | [optional] 
**request_to_date** | **char \*** | Retrieve entities to their creation date | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[account_cart_list_200_response_t](account_cart_list_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_accountConfigUpdate**
```c
// account.config.update
//
// Use this method to automate the change of credentials used to connect online stores. The list of supported parameters differs depending on the platform.
//
account_config_update_200_response_t* AccountAPI_accountConfigUpdate(apiClient_t *apiClient, int *replace_parameters, char *new_store_url, char *new_store_key, char *bridge_url, char *store_root, char *db_tables_prefix, char *user_agent, char *_3dcart_private_key, char *_3dcart_access_token, char *_3dcartapi_api_key, char *amazon_sp_client_id, char *amazon_sp_client_secret, char *amazon_sp_refresh_token, char *amazon_sp_aws_region, char *amazon_sp_api_environment, char *amazon_seller_id, char *aspdotnetstorefront_api_user, char *aspdotnetstorefront_api_pass, char *bigcommerceapi_admin_account, char *bigcommerceapi_api_path, char *bigcommerceapi_api_key, char *bigcommerceapi_client_id, char *bigcommerceapi_access_token, char *bigcommerceapi_context, char *bol_api_key, char *bol_api_secret, int *bol_retailer_id, char *demandware_client_id, char *demandware_api_password, char *demandware_user_name, char *demandware_user_password, char *ebay_client_id, char *ebay_client_secret, char *ebay_runame, char *ebay_access_token, char *ebay_refresh_token, char *ebay_environment, int *ebay_site_id, char *ecwid_acess_token, char *ecwid_store_id, char *lazada_app_id, char *lazada_app_secret, char *lazada_refresh_token, char *lazada_region, char *etsy_keystring, char *etsy_shared_secret, char *etsy_access_token, char *etsy_token_secret, char *etsy_client_id, char *etsy_refresh_token, char *facebook_app_id, char *facebook_app_secret, char *facebook_access_token, char *facebook_business_id, char *neto_api_key, char *neto_api_username, char *shopline_access_token, char *shopline_app_key, char *shopline_app_secret, char *shopline_shared_secret, char *shopify_access_token, char *shopify_api_key, char *shopify_api_password, char *shopify_shared_secret, char *shopee_partner_id, char *shopee_partner_key, char *shopee_shop_id, char *shopee_refresh_token, char *shopee_region, char *shopee_environment, char *shoplazza_access_token, char *shoplazza_shared_secret, char *miva_access_token, char *miva_signature, char *shopware_access_key, char *shopware_api_key, char *shopware_api_secret, char *bigcartel_user_name, char *bigcartel_password, char *volusion_login, char *volusion_password, char *walmart_client_id, char *walmart_client_secret, char *walmart_environment, char *walmart_channel_type, char *walmart_region, char *square_client_id, char *square_client_secret, char *square_refresh_token, char *squarespace_api_key, char *squarespace_client_id, char *squarespace_client_secret, char *squarespace_access_token, char *squarespace_refresh_token, char *hybris_client_id, char *hybris_client_secret, char *hybris_username, char *hybris_password, list_t *hybris_websites, char *lightspeed_api_key, char *lightspeed_api_secret, char *commercehq_api_key, char *commercehq_api_password, char *wc_consumer_key, char *wc_consumer_secret, char *magento_consumer_key, char *magento_consumer_secret, char *magento_access_token, char *magento_token_secret, char *prestashop_webservice_key, char *wix_app_id, char *wix_app_secret_key, char *wix_instance_id, char *wix_refresh_token, char *mercado_libre_app_id, char *mercado_libre_app_secret_key, char *mercado_libre_refresh_token, int *zid_client_id, char *zid_client_secret, char *zid_access_token, char *zid_authorization, char *zid_refresh_token, char *flipkart_client_id, char *flipkart_client_secret, char *allegro_client_id, char *allegro_client_secret, char *allegro_access_token, char *allegro_refresh_token, char *allegro_environment, char *zoho_client_id, char *zoho_client_secret, char *zoho_refresh_token, char *zoho_region, int *tiendanube_user_id, char *tiendanube_access_token, char *tiendanube_client_secret, char *otto_client_id, char *otto_client_secret, char *otto_app_id, char *otto_refresh_token, char *otto_environment, char *otto_access_token, char *tiktokshop_app_key, char *tiktokshop_app_secret, char *tiktokshop_refresh_token, char *tiktokshop_access_token, char *salla_client_id, char *salla_client_secret, char *salla_refresh_token, char *salla_access_token, char *temu_app_key, char *temu_app_secret, char *temu_access_token, char *temu_region);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**replace_parameters** | **int \*** | Identifies if there is a necessity to replace parameters | [optional] 
**new_store_url** | **char \*** | The web address of the store you want to update to connect to API2Cart | [optional] 
**new_store_key** | **char \*** | Update store key | [optional] 
**bridge_url** | **char \*** | This parameter allows to set up store with custom bridge url (also you must use store_root parameter if a bridge folder is not in the root folder of the store) | [optional] 
**store_root** | **char \*** | Absolute path to the store root directory (used with \&quot;bridge_url\&quot; parameter) | [optional] 
**db_tables_prefix** | **char \*** | DB tables prefix | [optional] 
**user_agent** | **char \*** | This parameter allows you to set your custom user agent, which will be used in requests to the store. Please use it cautiously, as the store&#39;s firewall may block specific values. | [optional] 
**_3dcart_private_key** | **char \*** | 3DCart Private Key | [optional] 
**_3dcart_access_token** | **char \*** | 3DCart Token | [optional] 
**_3dcartapi_api_key** | **char \*** | 3DCart API Key | [optional] 
**amazon_sp_client_id** | **char \*** | Amazon SP API app client id | [optional] 
**amazon_sp_client_secret** | **char \*** | Amazon SP API app client secret | [optional] 
**amazon_sp_refresh_token** | **char \*** | Amazon SP API OAuth refresh token | [optional] 
**amazon_sp_aws_region** | **char \*** | Amazon AWS Region | [optional] 
**amazon_sp_api_environment** | **char \*** | Amazon SP API environment | [optional] [default to &#39;production&#39;]
**amazon_seller_id** | **char \*** | Amazon Seller ID (Merchant token) | [optional] 
**aspdotnetstorefront_api_user** | **char \*** | It&#39;s a AspDotNetStorefront account for which API is available | [optional] 
**aspdotnetstorefront_api_pass** | **char \*** | AspDotNetStorefront API Password | [optional] 
**bigcommerceapi_admin_account** | **char \*** | It&#39;s a BigCommerce account for which API is enabled | [optional] 
**bigcommerceapi_api_path** | **char \*** | BigCommerce API URL | [optional] 
**bigcommerceapi_api_key** | **char \*** | Bigcommerce API Key | [optional] 
**bigcommerceapi_client_id** | **char \*** | Client ID of the requesting app | [optional] 
**bigcommerceapi_access_token** | **char \*** | Access token authorizing the app to access resources on behalf of a user | [optional] 
**bigcommerceapi_context** | **char \*** | API Path section unique to the store | [optional] 
**bol_api_key** | **char \*** | Bol API Key | [optional] 
**bol_api_secret** | **char \*** | Bol API Secret | [optional] 
**bol_retailer_id** | **int \*** | Bol Retailer ID | [optional] 
**demandware_client_id** | **char \*** | Demandware client id | [optional] 
**demandware_api_password** | **char \*** | Demandware api password | [optional] 
**demandware_user_name** | **char \*** | Demandware user name | [optional] 
**demandware_user_password** | **char \*** | Demandware user password | [optional] 
**ebay_client_id** | **char \*** | Application ID (AppID). | [optional] 
**ebay_client_secret** | **char \*** | Shared Secret from eBay application | [optional] 
**ebay_runame** | **char \*** | The RuName value that eBay assigns to your application. | [optional] 
**ebay_access_token** | **char \*** | Used to authenticate API requests. | [optional] 
**ebay_refresh_token** | **char \*** | Used to renew the access token. | [optional] 
**ebay_environment** | **char \*** | eBay environment | [optional] 
**ebay_site_id** | **int \*** | eBay global ID | [optional] [default to 0]
**ecwid_acess_token** | **char \*** | Access token authorizing the app to access resources on behalf of a user | [optional] 
**ecwid_store_id** | **char \*** | Store Id | [optional] 
**lazada_app_id** | **char \*** | Lazada App ID | [optional] 
**lazada_app_secret** | **char \*** | Lazada App Secret | [optional] 
**lazada_refresh_token** | **char \*** | Lazada Refresh Token | [optional] 
**lazada_region** | **char \*** | Lazada API endpoint Region | [optional] 
**etsy_keystring** | **char \*** | Etsy keystring | [optional] 
**etsy_shared_secret** | **char \*** | Etsy shared secret | [optional] 
**etsy_access_token** | **char \*** | Access token authorizing the app to access resources on behalf of a user | [optional] 
**etsy_token_secret** | **char \*** | Secret token authorizing the app to access resources on behalf of a user | [optional] 
**etsy_client_id** | **char \*** | Etsy Client Id | [optional] 
**etsy_refresh_token** | **char \*** | Etsy Refresh token | [optional] 
**facebook_app_id** | **char \*** | Facebook App ID | [optional] 
**facebook_app_secret** | **char \*** | Facebook App Secret | [optional] 
**facebook_access_token** | **char \*** | Facebook Access Token | [optional] 
**facebook_business_id** | **char \*** | Facebook Business ID | [optional] 
**neto_api_key** | **char \*** | Neto API Key | [optional] 
**neto_api_username** | **char \*** | Neto User Name | [optional] 
**shopline_access_token** | **char \*** | Shopline APP Key | [optional] 
**shopline_app_key** | **char \*** | Shopline APP Key | [optional] 
**shopline_app_secret** | **char \*** | Shopline App Secret | [optional] 
**shopline_shared_secret** | **char \*** | Shopline Shared Secret | [optional] 
**shopify_access_token** | **char \*** | Access token authorizing the app to access resources on behalf of a user | [optional] 
**shopify_api_key** | **char \*** | Shopify API Key | [optional] 
**shopify_api_password** | **char \*** | Shopify API Password | [optional] 
**shopify_shared_secret** | **char \*** | Shared secret | [optional] 
**shopee_partner_id** | **char \*** | Shopee Partner ID | [optional] 
**shopee_partner_key** | **char \*** | Shopee Partner Key | [optional] 
**shopee_shop_id** | **char \*** | Shopee SHOP ID | [optional] 
**shopee_refresh_token** | **char \*** | Shopee Refresh Token | [optional] 
**shopee_region** | **char \*** | Shopee API endpoint Region. Use for Chinese Mainland or Brazil. | [optional] 
**shopee_environment** | **char \*** | Shopee Environment | [optional] 
**shoplazza_access_token** | **char \*** | Access token authorizing the app to access resources on behalf of a user | [optional] 
**shoplazza_shared_secret** | **char \*** | Shared secret | [optional] 
**miva_access_token** | **char \*** | Miva access token | [optional] 
**miva_signature** | **char \*** | Miva signature | [optional] 
**shopware_access_key** | **char \*** | Shopware access key | [optional] 
**shopware_api_key** | **char \*** | Shopware api key | [optional] 
**shopware_api_secret** | **char \*** | Shopware client secret access key | [optional] 
**bigcartel_user_name** | **char \*** | Subdomain of store | [optional] 
**bigcartel_password** | **char \*** | BigCartel account password | [optional] 
**volusion_login** | **char \*** | It&#39;s a Volusion account for which API is enabled | [optional] 
**volusion_password** | **char \*** | Volusion API Password | [optional] 
**walmart_client_id** | **char \*** | Walmart client ID. For the region &#39;ca&#39; use Consumer ID | [optional] 
**walmart_client_secret** | **char \*** | Walmart client secret. For the region &#39;ca&#39; use Private Key | [optional] 
**walmart_environment** | **char \*** | Walmart environment | [optional] [default to &#39;production&#39;]
**walmart_channel_type** | **char \*** | Walmart WM_CONSUMER.CHANNEL.TYPE header | [optional] 
**walmart_region** | **char \*** | Walmart region | [optional] [default to &#39;us&#39;]
**square_client_id** | **char \*** | Square (Weebly) Client ID | [optional] 
**square_client_secret** | **char \*** | Square (Weebly) Client Secret | [optional] 
**square_refresh_token** | **char \*** | Square (Weebly) Refresh Token | [optional] 
**squarespace_api_key** | **char \*** | Squarespace API Key | [optional] 
**squarespace_client_id** | **char \*** | Squarespace Connector Client ID | [optional] 
**squarespace_client_secret** | **char \*** | Squarespace Connector Client Secret | [optional] 
**squarespace_access_token** | **char \*** | Squarespace access token | [optional] 
**squarespace_refresh_token** | **char \*** | Squarespace refresh token | [optional] 
**hybris_client_id** | **char \*** | Omni Commerce Connector Client ID | [optional] 
**hybris_client_secret** | **char \*** | Omni Commerce Connector Client Secret | [optional] 
**hybris_username** | **char \*** | User Name | [optional] 
**hybris_password** | **char \*** | User password | [optional] 
**hybris_websites** | **[list_t](char.md) \*** | Websites to stores mapping data | [optional] 
**lightspeed_api_key** | **char \*** | LightSpeed api key | [optional] 
**lightspeed_api_secret** | **char \*** | LightSpeed api secret | [optional] 
**commercehq_api_key** | **char \*** | CommerceHQ api key | [optional] 
**commercehq_api_password** | **char \*** | CommerceHQ api password | [optional] 
**wc_consumer_key** | **char \*** | Woocommerce consumer key | [optional] 
**wc_consumer_secret** | **char \*** | Woocommerce consumer secret | [optional] 
**magento_consumer_key** | **char \*** | Magento Consumer Key | [optional] 
**magento_consumer_secret** | **char \*** | Magento Consumer Secret | [optional] 
**magento_access_token** | **char \*** | Magento Access Token | [optional] 
**magento_token_secret** | **char \*** | Magento Token Secret | [optional] 
**prestashop_webservice_key** | **char \*** | Prestashop webservice key | [optional] 
**wix_app_id** | **char \*** | Wix App ID | [optional] 
**wix_app_secret_key** | **char \*** | Wix App Secret Key | [optional] 
**wix_instance_id** | **char \*** | Wix Instance ID | [optional] 
**wix_refresh_token** | **char \*** | Wix refresh token | [optional] 
**mercado_libre_app_id** | **char \*** | Mercado Libre App ID | [optional] 
**mercado_libre_app_secret_key** | **char \*** | Mercado Libre App Secret Key | [optional] 
**mercado_libre_refresh_token** | **char \*** | Mercado Libre Refresh Token | [optional] 
**zid_client_id** | **int \*** | Zid Client ID | [optional] 
**zid_client_secret** | **char \*** | Zid Client Secret | [optional] 
**zid_access_token** | **char \*** | Zid Access Token | [optional] 
**zid_authorization** | **char \*** | Zid Authorization | [optional] 
**zid_refresh_token** | **char \*** | Zid refresh token | [optional] 
**flipkart_client_id** | **char \*** | Flipkart Client ID | [optional] 
**flipkart_client_secret** | **char \*** | Flipkart Client Secret | [optional] 
**allegro_client_id** | **char \*** | Allegro Client ID | [optional] 
**allegro_client_secret** | **char \*** | Allegro Client Secret | [optional] 
**allegro_access_token** | **char \*** | Allegro Access Token | [optional] 
**allegro_refresh_token** | **char \*** | Allegro Refresh Token | [optional] 
**allegro_environment** | **char \*** | Allegro Environment | [optional] [default to &#39;production&#39;]
**zoho_client_id** | **char \*** | Zoho Client ID | [optional] 
**zoho_client_secret** | **char \*** | Zoho Client Secret | [optional] 
**zoho_refresh_token** | **char \*** | Zoho Refresh Token | [optional] 
**zoho_region** | **char \*** | Zoho API endpoint Region | [optional] 
**tiendanube_user_id** | **int \*** | Tiendanube User ID | [optional] 
**tiendanube_access_token** | **char \*** | Tiendanube Access Token | [optional] 
**tiendanube_client_secret** | **char \*** | Tiendanube Client Secret | [optional] 
**otto_client_id** | **char \*** | Otto Client ID | [optional] 
**otto_client_secret** | **char \*** | Otto Client Secret | [optional] 
**otto_app_id** | **char \*** | Otto App ID | [optional] 
**otto_refresh_token** | **char \*** | Otto Refresh Token | [optional] 
**otto_environment** | **char \*** | Otto Environment | [optional] 
**otto_access_token** | **char \*** | Otto Access Token | [optional] 
**tiktokshop_app_key** | **char \*** | TikTok Shop App Key | [optional] 
**tiktokshop_app_secret** | **char \*** | TikTok Shop App Secret | [optional] 
**tiktokshop_refresh_token** | **char \*** | TikTok Shop Refresh Token | [optional] 
**tiktokshop_access_token** | **char \*** | TikTok Shop Access Token | [optional] 
**salla_client_id** | **char \*** | Salla Client ID | [optional] 
**salla_client_secret** | **char \*** | Salla Client Secret | [optional] 
**salla_refresh_token** | **char \*** | Salla Refresh Token | [optional] 
**salla_access_token** | **char \*** | Salla Access Token | [optional] 
**temu_app_key** | **char \*** | Temu App Key | [optional] 
**temu_app_secret** | **char \*** | Temu App Secret | [optional] 
**temu_access_token** | **char \*** | Temu Access Token | [optional] 
**temu_region** | **char \*** | Temu API endpoint Region. | [optional] 

### Return type

[account_config_update_200_response_t](account_config_update_200_response.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_accountFailedWebhooks**
```c
// account.failed_webhooks
//
// If the callback of your service for some reason could not accept webhooks from API2Cart, then with the help of this method you can get a list of missed webhooks to perform synchronization again using entity_id. Please note that we keep such records for 24 hours.
//
account_failed_webhooks_200_response_t* AccountAPI_accountFailedWebhooks(apiClient_t *apiClient, int *start, int *count, char *ids);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **int \*** | This parameter sets the number from which you want to get entities | [optional] [default to 0]
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**ids** | **char \*** | List of сomma-separated webhook ids | [optional] 

### Return type

[account_failed_webhooks_200_response_t](account_failed_webhooks_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_accountSupportedPlatforms**
```c
// account.supported_platforms
//
// Use this method to retrieve a list of supported platforms and the sets of parameters required for connecting to each of them. Note: some platforms may have multiple connection methods so that the response will contain multiple sets of parameters.
//
account_supported_platforms_200_response_t* AccountAPI_accountSupportedPlatforms(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[account_supported_platforms_200_response_t](account_supported_platforms_200_response.md) *


### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

