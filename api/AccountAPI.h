#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_cart_add.h"
#include "../model/account_cart_add_200_response.h"
#include "../model/account_cart_list_200_response.h"
#include "../model/account_config_update_200_response.h"
#include "../model/account_failed_webhooks_200_response.h"
#include "../model/account_supported_platforms_200_response.h"


// account.cart.add
//
// Use this method to automate the process of connecting stores to API2Cart. The list of parameters will vary depending on the platform. To get a list of parameters that are specific to a particular shopping platform, you need to execute the account.supported_platforms.json method.
//
account_cart_add_200_response_t*
AccountAPI_accountCartAdd(apiClient_t *apiClient, account_cart_add_t *account_cart_add);


// account.cart.list
//
// This method lets you get a list of online stores connected to your API2Cart account. You can get the number of API requests to each store if you specify a period using parameters (request_from_date, request_to_date). The total_calls field is displayed only if there are parameters (request_from_date, request_to_date).
//
account_cart_list_200_response_t*
AccountAPI_accountCartList(apiClient_t *apiClient, char *store_url, char *store_key, char *request_from_date, char *request_to_date, char *params, char *exclude);


// account.config.update
//
// Use this method to automate the change of credentials used to connect online stores. The list of supported parameters differs depending on the platform.
//
account_config_update_200_response_t*
AccountAPI_accountConfigUpdate(apiClient_t *apiClient, int *replace_parameters, char *new_store_url, char *new_store_key, char *bridge_url, char *store_root, char *db_tables_prefix, char *user_agent, char *_3dcart_private_key, char *_3dcart_access_token, char *_3dcartapi_api_key, char *amazon_sp_client_id, char *amazon_sp_client_secret, char *amazon_sp_refresh_token, char *amazon_sp_aws_region, char *amazon_sp_api_environment, char *amazon_seller_id, char *aspdotnetstorefront_api_user, char *aspdotnetstorefront_api_pass, char *bigcommerceapi_admin_account, char *bigcommerceapi_api_path, char *bigcommerceapi_api_key, char *bigcommerceapi_client_id, char *bigcommerceapi_access_token, char *bigcommerceapi_context, char *bol_api_key, char *bol_api_secret, int *bol_retailer_id, char *demandware_client_id, char *demandware_api_password, char *demandware_user_name, char *demandware_user_password, char *ebay_client_id, char *ebay_client_secret, char *ebay_runame, char *ebay_access_token, char *ebay_refresh_token, char *ebay_environment, int *ebay_site_id, char *ecwid_acess_token, char *ecwid_store_id, char *lazada_app_id, char *lazada_app_secret, char *lazada_refresh_token, char *lazada_region, char *etsy_keystring, char *etsy_shared_secret, char *etsy_access_token, char *etsy_token_secret, char *etsy_client_id, char *etsy_refresh_token, char *facebook_app_id, char *facebook_app_secret, char *facebook_access_token, char *facebook_business_id, char *neto_api_key, char *neto_api_username, char *shopline_access_token, char *shopline_app_key, char *shopline_app_secret, char *shopline_shared_secret, char *shopify_access_token, char *shopify_api_key, char *shopify_api_password, char *shopify_shared_secret, char *shoplazza_access_token, char *shoplazza_shared_secret, char *miva_access_token, char *miva_signature, char *shopware_access_key, char *shopware_api_key, char *shopware_api_secret, char *bigcartel_user_name, char *bigcartel_password, char *volusion_login, char *volusion_password, char *walmart_client_id, char *walmart_client_secret, char *walmart_environment, char *walmart_channel_type, char *walmart_region, char *square_client_id, char *square_client_secret, char *square_refresh_token, char *squarespace_api_key, char *squarespace_client_id, char *squarespace_client_secret, char *squarespace_access_token, char *squarespace_refresh_token, char *hybris_client_id, char *hybris_client_secret, char *hybris_username, char *hybris_password, list_t *hybris_websites, char *lightspeed_api_key, char *lightspeed_api_secret, char *commercehq_api_key, char *commercehq_api_password, char *wc_consumer_key, char *wc_consumer_secret, char *magento_consumer_key, char *magento_consumer_secret, char *magento_access_token, char *magento_token_secret, char *prestashop_webservice_key, char *wix_app_id, char *wix_app_secret_key, char *wix_instance_id, char *wix_refresh_token, char *mercado_libre_app_id, char *mercado_libre_app_secret_key, char *mercado_libre_refresh_token, int *zid_client_id, char *zid_client_secret, char *zid_access_token, char *zid_authorization, char *zid_refresh_token, char *flipkart_client_id, char *flipkart_client_secret, char *allegro_client_id, char *allegro_client_secret, char *allegro_access_token, char *allegro_refresh_token, char *allegro_environment, char *zoho_client_id, char *zoho_client_secret, char *zoho_refresh_token, char *zoho_region, int *tiendanube_user_id, char *tiendanube_access_token, char *tiendanube_client_secret, char *otto_client_id, char *otto_client_secret, char *otto_app_id, char *otto_refresh_token, char *otto_environment, char *otto_access_token, char *tiktokshop_app_key, char *tiktokshop_app_secret, char *tiktokshop_refresh_token, char *tiktokshop_access_token, char *salla_client_id, char *salla_client_secret, char *salla_refresh_token, char *salla_access_token);


// account.failed_webhooks
//
// If the callback of your service for some reason could not accept webhooks from API2Cart, then with the help of this method you can get a list of missed webhooks to perform synchronization again using entity_id. Please note that we keep such records for 24 hours.
//
account_failed_webhooks_200_response_t*
AccountAPI_accountFailedWebhooks(apiClient_t *apiClient, int *start, int *count, char *ids);


// account.supported_platforms
//
// Use this method to retrieve a list of supported platforms and the sets of parameters required for connecting to each of them. Note: some platforms may have multiple connection methods so that the response will contain multiple sets of parameters.
//
account_supported_platforms_200_response_t*
AccountAPI_accountSupportedPlatforms(apiClient_t *apiClient);


