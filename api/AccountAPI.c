#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "AccountAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096


// account.cart.add
//
// Use this method to automate the process of connecting stores to API2Cart. The list of parameters will vary depending on the platform. To get a list of parameters that are specific to a particular shopping platform, you need to execute the account.supported_platforms.json method.
//
account_cart_add_200_response_t*
AccountAPI_accountCartAdd(apiClient_t *apiClient, account_cart_add_t *account_cart_add)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/account.cart.add.json");





    // Body Param
    cJSON *localVarSingleItemJSON_account_cart_add = NULL;
    if (account_cart_add != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_account_cart_add = account_cart_add_convertToJSON(account_cart_add);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_account_cart_add);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    account_cart_add_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_cart_add_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_account_cart_add) {
        cJSON_Delete(localVarSingleItemJSON_account_cart_add);
        localVarSingleItemJSON_account_cart_add = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// account.cart.list
//
// This method lets you get a list of online stores connected to your API2Cart account. You can get the number of API requests to each store if you specify a period using parameters (request_from_date, request_to_date). The total_calls field is displayed only if there are parameters (request_from_date, request_to_date).
//
account_cart_list_200_response_t*
AccountAPI_accountCartList(apiClient_t *apiClient, char *store_url, char *store_key, char *request_from_date, char *request_to_date, char *params, char *exclude)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/account.cart.list.json");





    // query parameters
    char *keyQuery_store_url = NULL;
    char * valueQuery_store_url = NULL;
    keyValuePair_t *keyPairQuery_store_url = 0;
    if (store_url)
    {
        keyQuery_store_url = strdup("store_url");
        valueQuery_store_url = strdup((store_url));
        keyPairQuery_store_url = keyValuePair_create(keyQuery_store_url, valueQuery_store_url);
        list_addElement(localVarQueryParameters,keyPairQuery_store_url);
    }

    // query parameters
    char *keyQuery_store_key = NULL;
    char * valueQuery_store_key = NULL;
    keyValuePair_t *keyPairQuery_store_key = 0;
    if (store_key)
    {
        keyQuery_store_key = strdup("store_key");
        valueQuery_store_key = strdup((store_key));
        keyPairQuery_store_key = keyValuePair_create(keyQuery_store_key, valueQuery_store_key);
        list_addElement(localVarQueryParameters,keyPairQuery_store_key);
    }

    // query parameters
    char *keyQuery_request_from_date = NULL;
    char * valueQuery_request_from_date = NULL;
    keyValuePair_t *keyPairQuery_request_from_date = 0;
    if (request_from_date)
    {
        keyQuery_request_from_date = strdup("request_from_date");
        valueQuery_request_from_date = strdup((request_from_date));
        keyPairQuery_request_from_date = keyValuePair_create(keyQuery_request_from_date, valueQuery_request_from_date);
        list_addElement(localVarQueryParameters,keyPairQuery_request_from_date);
    }

    // query parameters
    char *keyQuery_request_to_date = NULL;
    char * valueQuery_request_to_date = NULL;
    keyValuePair_t *keyPairQuery_request_to_date = 0;
    if (request_to_date)
    {
        keyQuery_request_to_date = strdup("request_to_date");
        valueQuery_request_to_date = strdup((request_to_date));
        keyPairQuery_request_to_date = keyValuePair_create(keyQuery_request_to_date, valueQuery_request_to_date);
        list_addElement(localVarQueryParameters,keyPairQuery_request_to_date);
    }

    // query parameters
    char *keyQuery_params = NULL;
    char * valueQuery_params = NULL;
    keyValuePair_t *keyPairQuery_params = 0;
    if (params)
    {
        keyQuery_params = strdup("params");
        valueQuery_params = strdup((params));
        keyPairQuery_params = keyValuePair_create(keyQuery_params, valueQuery_params);
        list_addElement(localVarQueryParameters,keyPairQuery_params);
    }

    // query parameters
    char *keyQuery_exclude = NULL;
    char * valueQuery_exclude = NULL;
    keyValuePair_t *keyPairQuery_exclude = 0;
    if (exclude)
    {
        keyQuery_exclude = strdup("exclude");
        valueQuery_exclude = strdup((exclude));
        keyPairQuery_exclude = keyValuePair_create(keyQuery_exclude, valueQuery_exclude);
        list_addElement(localVarQueryParameters,keyPairQuery_exclude);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    account_cart_list_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_cart_list_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_store_url){
        free(keyQuery_store_url);
        keyQuery_store_url = NULL;
    }
    if(valueQuery_store_url){
        free(valueQuery_store_url);
        valueQuery_store_url = NULL;
    }
    if(keyPairQuery_store_url){
        keyValuePair_free(keyPairQuery_store_url);
        keyPairQuery_store_url = NULL;
    }
    if(keyQuery_store_key){
        free(keyQuery_store_key);
        keyQuery_store_key = NULL;
    }
    if(valueQuery_store_key){
        free(valueQuery_store_key);
        valueQuery_store_key = NULL;
    }
    if(keyPairQuery_store_key){
        keyValuePair_free(keyPairQuery_store_key);
        keyPairQuery_store_key = NULL;
    }
    if(keyQuery_request_from_date){
        free(keyQuery_request_from_date);
        keyQuery_request_from_date = NULL;
    }
    if(valueQuery_request_from_date){
        free(valueQuery_request_from_date);
        valueQuery_request_from_date = NULL;
    }
    if(keyPairQuery_request_from_date){
        keyValuePair_free(keyPairQuery_request_from_date);
        keyPairQuery_request_from_date = NULL;
    }
    if(keyQuery_request_to_date){
        free(keyQuery_request_to_date);
        keyQuery_request_to_date = NULL;
    }
    if(valueQuery_request_to_date){
        free(valueQuery_request_to_date);
        valueQuery_request_to_date = NULL;
    }
    if(keyPairQuery_request_to_date){
        keyValuePair_free(keyPairQuery_request_to_date);
        keyPairQuery_request_to_date = NULL;
    }
    if(keyQuery_params){
        free(keyQuery_params);
        keyQuery_params = NULL;
    }
    if(valueQuery_params){
        free(valueQuery_params);
        valueQuery_params = NULL;
    }
    if(keyPairQuery_params){
        keyValuePair_free(keyPairQuery_params);
        keyPairQuery_params = NULL;
    }
    if(keyQuery_exclude){
        free(keyQuery_exclude);
        keyQuery_exclude = NULL;
    }
    if(valueQuery_exclude){
        free(valueQuery_exclude);
        valueQuery_exclude = NULL;
    }
    if(keyPairQuery_exclude){
        keyValuePair_free(keyPairQuery_exclude);
        keyPairQuery_exclude = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// account.config.update
//
// Use this method to automate the change of credentials used to connect online stores. The list of supported parameters differs depending on the platform.
//
account_config_update_200_response_t*
AccountAPI_accountConfigUpdate(apiClient_t *apiClient, int *replace_parameters, char *new_store_url, char *new_store_key, char *bridge_url, char *store_root, char *db_tables_prefix, char *user_agent, char *_3dcart_private_key, char *_3dcart_access_token, char *_3dcartapi_api_key, char *amazon_sp_client_id, char *amazon_sp_client_secret, char *amazon_sp_refresh_token, char *amazon_sp_aws_region, char *amazon_sp_api_environment, char *amazon_seller_id, char *aspdotnetstorefront_api_user, char *aspdotnetstorefront_api_pass, char *bigcommerceapi_admin_account, char *bigcommerceapi_api_path, char *bigcommerceapi_api_key, char *bigcommerceapi_client_id, char *bigcommerceapi_access_token, char *bigcommerceapi_context, char *bol_api_key, char *bol_api_secret, int *bol_retailer_id, char *demandware_client_id, char *demandware_api_password, char *demandware_user_name, char *demandware_user_password, char *ebay_client_id, char *ebay_client_secret, char *ebay_runame, char *ebay_access_token, char *ebay_refresh_token, char *ebay_environment, int *ebay_site_id, char *ecwid_acess_token, char *ecwid_store_id, char *lazada_app_id, char *lazada_app_secret, char *lazada_refresh_token, char *lazada_region, char *etsy_keystring, char *etsy_shared_secret, char *etsy_access_token, char *etsy_token_secret, char *etsy_client_id, char *etsy_refresh_token, char *facebook_app_id, char *facebook_app_secret, char *facebook_access_token, char *facebook_business_id, char *neto_api_key, char *neto_api_username, char *shopline_access_token, char *shopline_app_key, char *shopline_app_secret, char *shopline_shared_secret, char *shopify_access_token, char *shopify_api_key, char *shopify_api_password, char *shopify_shared_secret, char *shoplazza_access_token, char *shoplazza_shared_secret, char *miva_access_token, char *miva_signature, char *shopware_access_key, char *shopware_api_key, char *shopware_api_secret, char *bigcartel_user_name, char *bigcartel_password, char *volusion_login, char *volusion_password, char *walmart_client_id, char *walmart_client_secret, char *walmart_environment, char *walmart_channel_type, char *walmart_region, char *square_client_id, char *square_client_secret, char *square_refresh_token, char *squarespace_api_key, char *squarespace_client_id, char *squarespace_client_secret, char *squarespace_access_token, char *squarespace_refresh_token, char *hybris_client_id, char *hybris_client_secret, char *hybris_username, char *hybris_password, list_t *hybris_websites, char *lightspeed_api_key, char *lightspeed_api_secret, char *commercehq_api_key, char *commercehq_api_password, char *wc_consumer_key, char *wc_consumer_secret, char *magento_consumer_key, char *magento_consumer_secret, char *magento_access_token, char *magento_token_secret, char *prestashop_webservice_key, char *wix_app_id, char *wix_app_secret_key, char *wix_instance_id, char *wix_refresh_token, char *mercado_libre_app_id, char *mercado_libre_app_secret_key, char *mercado_libre_refresh_token, int *zid_client_id, char *zid_client_secret, char *zid_access_token, char *zid_authorization, char *zid_refresh_token, char *flipkart_client_id, char *flipkart_client_secret, char *allegro_client_id, char *allegro_client_secret, char *allegro_access_token, char *allegro_refresh_token, char *allegro_environment, char *zoho_client_id, char *zoho_client_secret, char *zoho_refresh_token, char *zoho_region, int *tiendanube_user_id, char *tiendanube_access_token, char *tiendanube_client_secret, char *otto_client_id, char *otto_client_secret, char *otto_app_id, char *otto_refresh_token, char *otto_environment, char *otto_access_token, char *tiktokshop_app_key, char *tiktokshop_app_secret, char *tiktokshop_refresh_token, char *tiktokshop_access_token, char *salla_client_id, char *salla_client_secret, char *salla_refresh_token, char *salla_access_token)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/account.config.update.json");





    // query parameters
    char *keyQuery_replace_parameters = NULL;
    char * valueQuery_replace_parameters = NULL;
    keyValuePair_t *keyPairQuery_replace_parameters = 0;
    if (replace_parameters)
    {
        keyQuery_replace_parameters = strdup("replace_parameters");
        valueQuery_replace_parameters = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_replace_parameters, MAX_NUMBER_LENGTH, "%d", *replace_parameters);
        keyPairQuery_replace_parameters = keyValuePair_create(keyQuery_replace_parameters, valueQuery_replace_parameters);
        list_addElement(localVarQueryParameters,keyPairQuery_replace_parameters);
    }

    // query parameters
    char *keyQuery_new_store_url = NULL;
    char * valueQuery_new_store_url = NULL;
    keyValuePair_t *keyPairQuery_new_store_url = 0;
    if (new_store_url)
    {
        keyQuery_new_store_url = strdup("new_store_url");
        valueQuery_new_store_url = strdup((new_store_url));
        keyPairQuery_new_store_url = keyValuePair_create(keyQuery_new_store_url, valueQuery_new_store_url);
        list_addElement(localVarQueryParameters,keyPairQuery_new_store_url);
    }

    // query parameters
    char *keyQuery_new_store_key = NULL;
    char * valueQuery_new_store_key = NULL;
    keyValuePair_t *keyPairQuery_new_store_key = 0;
    if (new_store_key)
    {
        keyQuery_new_store_key = strdup("new_store_key");
        valueQuery_new_store_key = strdup((new_store_key));
        keyPairQuery_new_store_key = keyValuePair_create(keyQuery_new_store_key, valueQuery_new_store_key);
        list_addElement(localVarQueryParameters,keyPairQuery_new_store_key);
    }

    // query parameters
    char *keyQuery_bridge_url = NULL;
    char * valueQuery_bridge_url = NULL;
    keyValuePair_t *keyPairQuery_bridge_url = 0;
    if (bridge_url)
    {
        keyQuery_bridge_url = strdup("bridge_url");
        valueQuery_bridge_url = strdup((bridge_url));
        keyPairQuery_bridge_url = keyValuePair_create(keyQuery_bridge_url, valueQuery_bridge_url);
        list_addElement(localVarQueryParameters,keyPairQuery_bridge_url);
    }

    // query parameters
    char *keyQuery_store_root = NULL;
    char * valueQuery_store_root = NULL;
    keyValuePair_t *keyPairQuery_store_root = 0;
    if (store_root)
    {
        keyQuery_store_root = strdup("store_root");
        valueQuery_store_root = strdup((store_root));
        keyPairQuery_store_root = keyValuePair_create(keyQuery_store_root, valueQuery_store_root);
        list_addElement(localVarQueryParameters,keyPairQuery_store_root);
    }

    // query parameters
    char *keyQuery_db_tables_prefix = NULL;
    char * valueQuery_db_tables_prefix = NULL;
    keyValuePair_t *keyPairQuery_db_tables_prefix = 0;
    if (db_tables_prefix)
    {
        keyQuery_db_tables_prefix = strdup("db_tables_prefix");
        valueQuery_db_tables_prefix = strdup((db_tables_prefix));
        keyPairQuery_db_tables_prefix = keyValuePair_create(keyQuery_db_tables_prefix, valueQuery_db_tables_prefix);
        list_addElement(localVarQueryParameters,keyPairQuery_db_tables_prefix);
    }

    // query parameters
    char *keyQuery_user_agent = NULL;
    char * valueQuery_user_agent = NULL;
    keyValuePair_t *keyPairQuery_user_agent = 0;
    if (user_agent)
    {
        keyQuery_user_agent = strdup("user_agent");
        valueQuery_user_agent = strdup((user_agent));
        keyPairQuery_user_agent = keyValuePair_create(keyQuery_user_agent, valueQuery_user_agent);
        list_addElement(localVarQueryParameters,keyPairQuery_user_agent);
    }

    // query parameters
    char *keyQuery__3dcart_private_key = NULL;
    char * valueQuery__3dcart_private_key = NULL;
    keyValuePair_t *keyPairQuery__3dcart_private_key = 0;
    if (_3dcart_private_key)
    {
        keyQuery__3dcart_private_key = strdup("3dcart_private_key");
        valueQuery__3dcart_private_key = strdup((_3dcart_private_key));
        keyPairQuery__3dcart_private_key = keyValuePair_create(keyQuery__3dcart_private_key, valueQuery__3dcart_private_key);
        list_addElement(localVarQueryParameters,keyPairQuery__3dcart_private_key);
    }

    // query parameters
    char *keyQuery__3dcart_access_token = NULL;
    char * valueQuery__3dcart_access_token = NULL;
    keyValuePair_t *keyPairQuery__3dcart_access_token = 0;
    if (_3dcart_access_token)
    {
        keyQuery__3dcart_access_token = strdup("3dcart_access_token");
        valueQuery__3dcart_access_token = strdup((_3dcart_access_token));
        keyPairQuery__3dcart_access_token = keyValuePair_create(keyQuery__3dcart_access_token, valueQuery__3dcart_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery__3dcart_access_token);
    }

    // query parameters
    char *keyQuery__3dcartapi_api_key = NULL;
    char * valueQuery__3dcartapi_api_key = NULL;
    keyValuePair_t *keyPairQuery__3dcartapi_api_key = 0;
    if (_3dcartapi_api_key)
    {
        keyQuery__3dcartapi_api_key = strdup("3dcartapi_api_key");
        valueQuery__3dcartapi_api_key = strdup((_3dcartapi_api_key));
        keyPairQuery__3dcartapi_api_key = keyValuePair_create(keyQuery__3dcartapi_api_key, valueQuery__3dcartapi_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery__3dcartapi_api_key);
    }

    // query parameters
    char *keyQuery_amazon_sp_client_id = NULL;
    char * valueQuery_amazon_sp_client_id = NULL;
    keyValuePair_t *keyPairQuery_amazon_sp_client_id = 0;
    if (amazon_sp_client_id)
    {
        keyQuery_amazon_sp_client_id = strdup("amazon_sp_client_id");
        valueQuery_amazon_sp_client_id = strdup((amazon_sp_client_id));
        keyPairQuery_amazon_sp_client_id = keyValuePair_create(keyQuery_amazon_sp_client_id, valueQuery_amazon_sp_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_sp_client_id);
    }

    // query parameters
    char *keyQuery_amazon_sp_client_secret = NULL;
    char * valueQuery_amazon_sp_client_secret = NULL;
    keyValuePair_t *keyPairQuery_amazon_sp_client_secret = 0;
    if (amazon_sp_client_secret)
    {
        keyQuery_amazon_sp_client_secret = strdup("amazon_sp_client_secret");
        valueQuery_amazon_sp_client_secret = strdup((amazon_sp_client_secret));
        keyPairQuery_amazon_sp_client_secret = keyValuePair_create(keyQuery_amazon_sp_client_secret, valueQuery_amazon_sp_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_sp_client_secret);
    }

    // query parameters
    char *keyQuery_amazon_sp_refresh_token = NULL;
    char * valueQuery_amazon_sp_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_amazon_sp_refresh_token = 0;
    if (amazon_sp_refresh_token)
    {
        keyQuery_amazon_sp_refresh_token = strdup("amazon_sp_refresh_token");
        valueQuery_amazon_sp_refresh_token = strdup((amazon_sp_refresh_token));
        keyPairQuery_amazon_sp_refresh_token = keyValuePair_create(keyQuery_amazon_sp_refresh_token, valueQuery_amazon_sp_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_sp_refresh_token);
    }

    // query parameters
    char *keyQuery_amazon_sp_aws_region = NULL;
    char * valueQuery_amazon_sp_aws_region = NULL;
    keyValuePair_t *keyPairQuery_amazon_sp_aws_region = 0;
    if (amazon_sp_aws_region)
    {
        keyQuery_amazon_sp_aws_region = strdup("amazon_sp_aws_region");
        valueQuery_amazon_sp_aws_region = strdup((amazon_sp_aws_region));
        keyPairQuery_amazon_sp_aws_region = keyValuePair_create(keyQuery_amazon_sp_aws_region, valueQuery_amazon_sp_aws_region);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_sp_aws_region);
    }

    // query parameters
    char *keyQuery_amazon_sp_api_environment = NULL;
    char * valueQuery_amazon_sp_api_environment = NULL;
    keyValuePair_t *keyPairQuery_amazon_sp_api_environment = 0;
    if (amazon_sp_api_environment)
    {
        keyQuery_amazon_sp_api_environment = strdup("amazon_sp_api_environment");
        valueQuery_amazon_sp_api_environment = strdup((amazon_sp_api_environment));
        keyPairQuery_amazon_sp_api_environment = keyValuePair_create(keyQuery_amazon_sp_api_environment, valueQuery_amazon_sp_api_environment);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_sp_api_environment);
    }

    // query parameters
    char *keyQuery_amazon_seller_id = NULL;
    char * valueQuery_amazon_seller_id = NULL;
    keyValuePair_t *keyPairQuery_amazon_seller_id = 0;
    if (amazon_seller_id)
    {
        keyQuery_amazon_seller_id = strdup("amazon_seller_id");
        valueQuery_amazon_seller_id = strdup((amazon_seller_id));
        keyPairQuery_amazon_seller_id = keyValuePair_create(keyQuery_amazon_seller_id, valueQuery_amazon_seller_id);
        list_addElement(localVarQueryParameters,keyPairQuery_amazon_seller_id);
    }

    // query parameters
    char *keyQuery_aspdotnetstorefront_api_user = NULL;
    char * valueQuery_aspdotnetstorefront_api_user = NULL;
    keyValuePair_t *keyPairQuery_aspdotnetstorefront_api_user = 0;
    if (aspdotnetstorefront_api_user)
    {
        keyQuery_aspdotnetstorefront_api_user = strdup("aspdotnetstorefront_api_user");
        valueQuery_aspdotnetstorefront_api_user = strdup((aspdotnetstorefront_api_user));
        keyPairQuery_aspdotnetstorefront_api_user = keyValuePair_create(keyQuery_aspdotnetstorefront_api_user, valueQuery_aspdotnetstorefront_api_user);
        list_addElement(localVarQueryParameters,keyPairQuery_aspdotnetstorefront_api_user);
    }

    // query parameters
    char *keyQuery_aspdotnetstorefront_api_pass = NULL;
    char * valueQuery_aspdotnetstorefront_api_pass = NULL;
    keyValuePair_t *keyPairQuery_aspdotnetstorefront_api_pass = 0;
    if (aspdotnetstorefront_api_pass)
    {
        keyQuery_aspdotnetstorefront_api_pass = strdup("aspdotnetstorefront_api_pass");
        valueQuery_aspdotnetstorefront_api_pass = strdup((aspdotnetstorefront_api_pass));
        keyPairQuery_aspdotnetstorefront_api_pass = keyValuePair_create(keyQuery_aspdotnetstorefront_api_pass, valueQuery_aspdotnetstorefront_api_pass);
        list_addElement(localVarQueryParameters,keyPairQuery_aspdotnetstorefront_api_pass);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_admin_account = NULL;
    char * valueQuery_bigcommerceapi_admin_account = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_admin_account = 0;
    if (bigcommerceapi_admin_account)
    {
        keyQuery_bigcommerceapi_admin_account = strdup("bigcommerceapi_admin_account");
        valueQuery_bigcommerceapi_admin_account = strdup((bigcommerceapi_admin_account));
        keyPairQuery_bigcommerceapi_admin_account = keyValuePair_create(keyQuery_bigcommerceapi_admin_account, valueQuery_bigcommerceapi_admin_account);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_admin_account);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_api_path = NULL;
    char * valueQuery_bigcommerceapi_api_path = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_api_path = 0;
    if (bigcommerceapi_api_path)
    {
        keyQuery_bigcommerceapi_api_path = strdup("bigcommerceapi_api_path");
        valueQuery_bigcommerceapi_api_path = strdup((bigcommerceapi_api_path));
        keyPairQuery_bigcommerceapi_api_path = keyValuePair_create(keyQuery_bigcommerceapi_api_path, valueQuery_bigcommerceapi_api_path);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_api_path);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_api_key = NULL;
    char * valueQuery_bigcommerceapi_api_key = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_api_key = 0;
    if (bigcommerceapi_api_key)
    {
        keyQuery_bigcommerceapi_api_key = strdup("bigcommerceapi_api_key");
        valueQuery_bigcommerceapi_api_key = strdup((bigcommerceapi_api_key));
        keyPairQuery_bigcommerceapi_api_key = keyValuePair_create(keyQuery_bigcommerceapi_api_key, valueQuery_bigcommerceapi_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_api_key);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_client_id = NULL;
    char * valueQuery_bigcommerceapi_client_id = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_client_id = 0;
    if (bigcommerceapi_client_id)
    {
        keyQuery_bigcommerceapi_client_id = strdup("bigcommerceapi_client_id");
        valueQuery_bigcommerceapi_client_id = strdup((bigcommerceapi_client_id));
        keyPairQuery_bigcommerceapi_client_id = keyValuePair_create(keyQuery_bigcommerceapi_client_id, valueQuery_bigcommerceapi_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_client_id);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_access_token = NULL;
    char * valueQuery_bigcommerceapi_access_token = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_access_token = 0;
    if (bigcommerceapi_access_token)
    {
        keyQuery_bigcommerceapi_access_token = strdup("bigcommerceapi_access_token");
        valueQuery_bigcommerceapi_access_token = strdup((bigcommerceapi_access_token));
        keyPairQuery_bigcommerceapi_access_token = keyValuePair_create(keyQuery_bigcommerceapi_access_token, valueQuery_bigcommerceapi_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_access_token);
    }

    // query parameters
    char *keyQuery_bigcommerceapi_context = NULL;
    char * valueQuery_bigcommerceapi_context = NULL;
    keyValuePair_t *keyPairQuery_bigcommerceapi_context = 0;
    if (bigcommerceapi_context)
    {
        keyQuery_bigcommerceapi_context = strdup("bigcommerceapi_context");
        valueQuery_bigcommerceapi_context = strdup((bigcommerceapi_context));
        keyPairQuery_bigcommerceapi_context = keyValuePair_create(keyQuery_bigcommerceapi_context, valueQuery_bigcommerceapi_context);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcommerceapi_context);
    }

    // query parameters
    char *keyQuery_bol_api_key = NULL;
    char * valueQuery_bol_api_key = NULL;
    keyValuePair_t *keyPairQuery_bol_api_key = 0;
    if (bol_api_key)
    {
        keyQuery_bol_api_key = strdup("bol_api_key");
        valueQuery_bol_api_key = strdup((bol_api_key));
        keyPairQuery_bol_api_key = keyValuePair_create(keyQuery_bol_api_key, valueQuery_bol_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_bol_api_key);
    }

    // query parameters
    char *keyQuery_bol_api_secret = NULL;
    char * valueQuery_bol_api_secret = NULL;
    keyValuePair_t *keyPairQuery_bol_api_secret = 0;
    if (bol_api_secret)
    {
        keyQuery_bol_api_secret = strdup("bol_api_secret");
        valueQuery_bol_api_secret = strdup((bol_api_secret));
        keyPairQuery_bol_api_secret = keyValuePair_create(keyQuery_bol_api_secret, valueQuery_bol_api_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_bol_api_secret);
    }

    // query parameters
    char *keyQuery_bol_retailer_id = NULL;
    char * valueQuery_bol_retailer_id = NULL;
    keyValuePair_t *keyPairQuery_bol_retailer_id = 0;
    if (bol_retailer_id)
    {
        keyQuery_bol_retailer_id = strdup("bol_retailer_id");
        valueQuery_bol_retailer_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_bol_retailer_id, MAX_NUMBER_LENGTH, "%d", *bol_retailer_id);
        keyPairQuery_bol_retailer_id = keyValuePair_create(keyQuery_bol_retailer_id, valueQuery_bol_retailer_id);
        list_addElement(localVarQueryParameters,keyPairQuery_bol_retailer_id);
    }

    // query parameters
    char *keyQuery_demandware_client_id = NULL;
    char * valueQuery_demandware_client_id = NULL;
    keyValuePair_t *keyPairQuery_demandware_client_id = 0;
    if (demandware_client_id)
    {
        keyQuery_demandware_client_id = strdup("demandware_client_id");
        valueQuery_demandware_client_id = strdup((demandware_client_id));
        keyPairQuery_demandware_client_id = keyValuePair_create(keyQuery_demandware_client_id, valueQuery_demandware_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_demandware_client_id);
    }

    // query parameters
    char *keyQuery_demandware_api_password = NULL;
    char * valueQuery_demandware_api_password = NULL;
    keyValuePair_t *keyPairQuery_demandware_api_password = 0;
    if (demandware_api_password)
    {
        keyQuery_demandware_api_password = strdup("demandware_api_password");
        valueQuery_demandware_api_password = strdup((demandware_api_password));
        keyPairQuery_demandware_api_password = keyValuePair_create(keyQuery_demandware_api_password, valueQuery_demandware_api_password);
        list_addElement(localVarQueryParameters,keyPairQuery_demandware_api_password);
    }

    // query parameters
    char *keyQuery_demandware_user_name = NULL;
    char * valueQuery_demandware_user_name = NULL;
    keyValuePair_t *keyPairQuery_demandware_user_name = 0;
    if (demandware_user_name)
    {
        keyQuery_demandware_user_name = strdup("demandware_user_name");
        valueQuery_demandware_user_name = strdup((demandware_user_name));
        keyPairQuery_demandware_user_name = keyValuePair_create(keyQuery_demandware_user_name, valueQuery_demandware_user_name);
        list_addElement(localVarQueryParameters,keyPairQuery_demandware_user_name);
    }

    // query parameters
    char *keyQuery_demandware_user_password = NULL;
    char * valueQuery_demandware_user_password = NULL;
    keyValuePair_t *keyPairQuery_demandware_user_password = 0;
    if (demandware_user_password)
    {
        keyQuery_demandware_user_password = strdup("demandware_user_password");
        valueQuery_demandware_user_password = strdup((demandware_user_password));
        keyPairQuery_demandware_user_password = keyValuePair_create(keyQuery_demandware_user_password, valueQuery_demandware_user_password);
        list_addElement(localVarQueryParameters,keyPairQuery_demandware_user_password);
    }

    // query parameters
    char *keyQuery_ebay_client_id = NULL;
    char * valueQuery_ebay_client_id = NULL;
    keyValuePair_t *keyPairQuery_ebay_client_id = 0;
    if (ebay_client_id)
    {
        keyQuery_ebay_client_id = strdup("ebay_client_id");
        valueQuery_ebay_client_id = strdup((ebay_client_id));
        keyPairQuery_ebay_client_id = keyValuePair_create(keyQuery_ebay_client_id, valueQuery_ebay_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_client_id);
    }

    // query parameters
    char *keyQuery_ebay_client_secret = NULL;
    char * valueQuery_ebay_client_secret = NULL;
    keyValuePair_t *keyPairQuery_ebay_client_secret = 0;
    if (ebay_client_secret)
    {
        keyQuery_ebay_client_secret = strdup("ebay_client_secret");
        valueQuery_ebay_client_secret = strdup((ebay_client_secret));
        keyPairQuery_ebay_client_secret = keyValuePair_create(keyQuery_ebay_client_secret, valueQuery_ebay_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_client_secret);
    }

    // query parameters
    char *keyQuery_ebay_runame = NULL;
    char * valueQuery_ebay_runame = NULL;
    keyValuePair_t *keyPairQuery_ebay_runame = 0;
    if (ebay_runame)
    {
        keyQuery_ebay_runame = strdup("ebay_runame");
        valueQuery_ebay_runame = strdup((ebay_runame));
        keyPairQuery_ebay_runame = keyValuePair_create(keyQuery_ebay_runame, valueQuery_ebay_runame);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_runame);
    }

    // query parameters
    char *keyQuery_ebay_access_token = NULL;
    char * valueQuery_ebay_access_token = NULL;
    keyValuePair_t *keyPairQuery_ebay_access_token = 0;
    if (ebay_access_token)
    {
        keyQuery_ebay_access_token = strdup("ebay_access_token");
        valueQuery_ebay_access_token = strdup((ebay_access_token));
        keyPairQuery_ebay_access_token = keyValuePair_create(keyQuery_ebay_access_token, valueQuery_ebay_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_access_token);
    }

    // query parameters
    char *keyQuery_ebay_refresh_token = NULL;
    char * valueQuery_ebay_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_ebay_refresh_token = 0;
    if (ebay_refresh_token)
    {
        keyQuery_ebay_refresh_token = strdup("ebay_refresh_token");
        valueQuery_ebay_refresh_token = strdup((ebay_refresh_token));
        keyPairQuery_ebay_refresh_token = keyValuePair_create(keyQuery_ebay_refresh_token, valueQuery_ebay_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_refresh_token);
    }

    // query parameters
    char *keyQuery_ebay_environment = NULL;
    char * valueQuery_ebay_environment = NULL;
    keyValuePair_t *keyPairQuery_ebay_environment = 0;
    if (ebay_environment)
    {
        keyQuery_ebay_environment = strdup("ebay_environment");
        valueQuery_ebay_environment = strdup((ebay_environment));
        keyPairQuery_ebay_environment = keyValuePair_create(keyQuery_ebay_environment, valueQuery_ebay_environment);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_environment);
    }

    // query parameters
    char *keyQuery_ebay_site_id = NULL;
    char * valueQuery_ebay_site_id = NULL;
    keyValuePair_t *keyPairQuery_ebay_site_id = 0;
    if (ebay_site_id)
    {
        keyQuery_ebay_site_id = strdup("ebay_site_id");
        valueQuery_ebay_site_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_ebay_site_id, MAX_NUMBER_LENGTH, "%d", *ebay_site_id);
        keyPairQuery_ebay_site_id = keyValuePair_create(keyQuery_ebay_site_id, valueQuery_ebay_site_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ebay_site_id);
    }

    // query parameters
    char *keyQuery_ecwid_acess_token = NULL;
    char * valueQuery_ecwid_acess_token = NULL;
    keyValuePair_t *keyPairQuery_ecwid_acess_token = 0;
    if (ecwid_acess_token)
    {
        keyQuery_ecwid_acess_token = strdup("ecwid_acess_token");
        valueQuery_ecwid_acess_token = strdup((ecwid_acess_token));
        keyPairQuery_ecwid_acess_token = keyValuePair_create(keyQuery_ecwid_acess_token, valueQuery_ecwid_acess_token);
        list_addElement(localVarQueryParameters,keyPairQuery_ecwid_acess_token);
    }

    // query parameters
    char *keyQuery_ecwid_store_id = NULL;
    char * valueQuery_ecwid_store_id = NULL;
    keyValuePair_t *keyPairQuery_ecwid_store_id = 0;
    if (ecwid_store_id)
    {
        keyQuery_ecwid_store_id = strdup("ecwid_store_id");
        valueQuery_ecwid_store_id = strdup((ecwid_store_id));
        keyPairQuery_ecwid_store_id = keyValuePair_create(keyQuery_ecwid_store_id, valueQuery_ecwid_store_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ecwid_store_id);
    }

    // query parameters
    char *keyQuery_lazada_app_id = NULL;
    char * valueQuery_lazada_app_id = NULL;
    keyValuePair_t *keyPairQuery_lazada_app_id = 0;
    if (lazada_app_id)
    {
        keyQuery_lazada_app_id = strdup("lazada_app_id");
        valueQuery_lazada_app_id = strdup((lazada_app_id));
        keyPairQuery_lazada_app_id = keyValuePair_create(keyQuery_lazada_app_id, valueQuery_lazada_app_id);
        list_addElement(localVarQueryParameters,keyPairQuery_lazada_app_id);
    }

    // query parameters
    char *keyQuery_lazada_app_secret = NULL;
    char * valueQuery_lazada_app_secret = NULL;
    keyValuePair_t *keyPairQuery_lazada_app_secret = 0;
    if (lazada_app_secret)
    {
        keyQuery_lazada_app_secret = strdup("lazada_app_secret");
        valueQuery_lazada_app_secret = strdup((lazada_app_secret));
        keyPairQuery_lazada_app_secret = keyValuePair_create(keyQuery_lazada_app_secret, valueQuery_lazada_app_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_lazada_app_secret);
    }

    // query parameters
    char *keyQuery_lazada_refresh_token = NULL;
    char * valueQuery_lazada_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_lazada_refresh_token = 0;
    if (lazada_refresh_token)
    {
        keyQuery_lazada_refresh_token = strdup("lazada_refresh_token");
        valueQuery_lazada_refresh_token = strdup((lazada_refresh_token));
        keyPairQuery_lazada_refresh_token = keyValuePair_create(keyQuery_lazada_refresh_token, valueQuery_lazada_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_lazada_refresh_token);
    }

    // query parameters
    char *keyQuery_lazada_region = NULL;
    char * valueQuery_lazada_region = NULL;
    keyValuePair_t *keyPairQuery_lazada_region = 0;
    if (lazada_region)
    {
        keyQuery_lazada_region = strdup("lazada_region");
        valueQuery_lazada_region = strdup((lazada_region));
        keyPairQuery_lazada_region = keyValuePair_create(keyQuery_lazada_region, valueQuery_lazada_region);
        list_addElement(localVarQueryParameters,keyPairQuery_lazada_region);
    }

    // query parameters
    char *keyQuery_etsy_keystring = NULL;
    char * valueQuery_etsy_keystring = NULL;
    keyValuePair_t *keyPairQuery_etsy_keystring = 0;
    if (etsy_keystring)
    {
        keyQuery_etsy_keystring = strdup("etsy_keystring");
        valueQuery_etsy_keystring = strdup((etsy_keystring));
        keyPairQuery_etsy_keystring = keyValuePair_create(keyQuery_etsy_keystring, valueQuery_etsy_keystring);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_keystring);
    }

    // query parameters
    char *keyQuery_etsy_shared_secret = NULL;
    char * valueQuery_etsy_shared_secret = NULL;
    keyValuePair_t *keyPairQuery_etsy_shared_secret = 0;
    if (etsy_shared_secret)
    {
        keyQuery_etsy_shared_secret = strdup("etsy_shared_secret");
        valueQuery_etsy_shared_secret = strdup((etsy_shared_secret));
        keyPairQuery_etsy_shared_secret = keyValuePair_create(keyQuery_etsy_shared_secret, valueQuery_etsy_shared_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_shared_secret);
    }

    // query parameters
    char *keyQuery_etsy_access_token = NULL;
    char * valueQuery_etsy_access_token = NULL;
    keyValuePair_t *keyPairQuery_etsy_access_token = 0;
    if (etsy_access_token)
    {
        keyQuery_etsy_access_token = strdup("etsy_access_token");
        valueQuery_etsy_access_token = strdup((etsy_access_token));
        keyPairQuery_etsy_access_token = keyValuePair_create(keyQuery_etsy_access_token, valueQuery_etsy_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_access_token);
    }

    // query parameters
    char *keyQuery_etsy_token_secret = NULL;
    char * valueQuery_etsy_token_secret = NULL;
    keyValuePair_t *keyPairQuery_etsy_token_secret = 0;
    if (etsy_token_secret)
    {
        keyQuery_etsy_token_secret = strdup("etsy_token_secret");
        valueQuery_etsy_token_secret = strdup((etsy_token_secret));
        keyPairQuery_etsy_token_secret = keyValuePair_create(keyQuery_etsy_token_secret, valueQuery_etsy_token_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_token_secret);
    }

    // query parameters
    char *keyQuery_etsy_client_id = NULL;
    char * valueQuery_etsy_client_id = NULL;
    keyValuePair_t *keyPairQuery_etsy_client_id = 0;
    if (etsy_client_id)
    {
        keyQuery_etsy_client_id = strdup("etsy_client_id");
        valueQuery_etsy_client_id = strdup((etsy_client_id));
        keyPairQuery_etsy_client_id = keyValuePair_create(keyQuery_etsy_client_id, valueQuery_etsy_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_client_id);
    }

    // query parameters
    char *keyQuery_etsy_refresh_token = NULL;
    char * valueQuery_etsy_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_etsy_refresh_token = 0;
    if (etsy_refresh_token)
    {
        keyQuery_etsy_refresh_token = strdup("etsy_refresh_token");
        valueQuery_etsy_refresh_token = strdup((etsy_refresh_token));
        keyPairQuery_etsy_refresh_token = keyValuePair_create(keyQuery_etsy_refresh_token, valueQuery_etsy_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_etsy_refresh_token);
    }

    // query parameters
    char *keyQuery_facebook_app_id = NULL;
    char * valueQuery_facebook_app_id = NULL;
    keyValuePair_t *keyPairQuery_facebook_app_id = 0;
    if (facebook_app_id)
    {
        keyQuery_facebook_app_id = strdup("facebook_app_id");
        valueQuery_facebook_app_id = strdup((facebook_app_id));
        keyPairQuery_facebook_app_id = keyValuePair_create(keyQuery_facebook_app_id, valueQuery_facebook_app_id);
        list_addElement(localVarQueryParameters,keyPairQuery_facebook_app_id);
    }

    // query parameters
    char *keyQuery_facebook_app_secret = NULL;
    char * valueQuery_facebook_app_secret = NULL;
    keyValuePair_t *keyPairQuery_facebook_app_secret = 0;
    if (facebook_app_secret)
    {
        keyQuery_facebook_app_secret = strdup("facebook_app_secret");
        valueQuery_facebook_app_secret = strdup((facebook_app_secret));
        keyPairQuery_facebook_app_secret = keyValuePair_create(keyQuery_facebook_app_secret, valueQuery_facebook_app_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_facebook_app_secret);
    }

    // query parameters
    char *keyQuery_facebook_access_token = NULL;
    char * valueQuery_facebook_access_token = NULL;
    keyValuePair_t *keyPairQuery_facebook_access_token = 0;
    if (facebook_access_token)
    {
        keyQuery_facebook_access_token = strdup("facebook_access_token");
        valueQuery_facebook_access_token = strdup((facebook_access_token));
        keyPairQuery_facebook_access_token = keyValuePair_create(keyQuery_facebook_access_token, valueQuery_facebook_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_facebook_access_token);
    }

    // query parameters
    char *keyQuery_facebook_business_id = NULL;
    char * valueQuery_facebook_business_id = NULL;
    keyValuePair_t *keyPairQuery_facebook_business_id = 0;
    if (facebook_business_id)
    {
        keyQuery_facebook_business_id = strdup("facebook_business_id");
        valueQuery_facebook_business_id = strdup((facebook_business_id));
        keyPairQuery_facebook_business_id = keyValuePair_create(keyQuery_facebook_business_id, valueQuery_facebook_business_id);
        list_addElement(localVarQueryParameters,keyPairQuery_facebook_business_id);
    }

    // query parameters
    char *keyQuery_neto_api_key = NULL;
    char * valueQuery_neto_api_key = NULL;
    keyValuePair_t *keyPairQuery_neto_api_key = 0;
    if (neto_api_key)
    {
        keyQuery_neto_api_key = strdup("neto_api_key");
        valueQuery_neto_api_key = strdup((neto_api_key));
        keyPairQuery_neto_api_key = keyValuePair_create(keyQuery_neto_api_key, valueQuery_neto_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_neto_api_key);
    }

    // query parameters
    char *keyQuery_neto_api_username = NULL;
    char * valueQuery_neto_api_username = NULL;
    keyValuePair_t *keyPairQuery_neto_api_username = 0;
    if (neto_api_username)
    {
        keyQuery_neto_api_username = strdup("neto_api_username");
        valueQuery_neto_api_username = strdup((neto_api_username));
        keyPairQuery_neto_api_username = keyValuePair_create(keyQuery_neto_api_username, valueQuery_neto_api_username);
        list_addElement(localVarQueryParameters,keyPairQuery_neto_api_username);
    }

    // query parameters
    char *keyQuery_shopline_access_token = NULL;
    char * valueQuery_shopline_access_token = NULL;
    keyValuePair_t *keyPairQuery_shopline_access_token = 0;
    if (shopline_access_token)
    {
        keyQuery_shopline_access_token = strdup("shopline_access_token");
        valueQuery_shopline_access_token = strdup((shopline_access_token));
        keyPairQuery_shopline_access_token = keyValuePair_create(keyQuery_shopline_access_token, valueQuery_shopline_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_shopline_access_token);
    }

    // query parameters
    char *keyQuery_shopline_app_key = NULL;
    char * valueQuery_shopline_app_key = NULL;
    keyValuePair_t *keyPairQuery_shopline_app_key = 0;
    if (shopline_app_key)
    {
        keyQuery_shopline_app_key = strdup("shopline_app_key");
        valueQuery_shopline_app_key = strdup((shopline_app_key));
        keyPairQuery_shopline_app_key = keyValuePair_create(keyQuery_shopline_app_key, valueQuery_shopline_app_key);
        list_addElement(localVarQueryParameters,keyPairQuery_shopline_app_key);
    }

    // query parameters
    char *keyQuery_shopline_app_secret = NULL;
    char * valueQuery_shopline_app_secret = NULL;
    keyValuePair_t *keyPairQuery_shopline_app_secret = 0;
    if (shopline_app_secret)
    {
        keyQuery_shopline_app_secret = strdup("shopline_app_secret");
        valueQuery_shopline_app_secret = strdup((shopline_app_secret));
        keyPairQuery_shopline_app_secret = keyValuePair_create(keyQuery_shopline_app_secret, valueQuery_shopline_app_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_shopline_app_secret);
    }

    // query parameters
    char *keyQuery_shopline_shared_secret = NULL;
    char * valueQuery_shopline_shared_secret = NULL;
    keyValuePair_t *keyPairQuery_shopline_shared_secret = 0;
    if (shopline_shared_secret)
    {
        keyQuery_shopline_shared_secret = strdup("shopline_shared_secret");
        valueQuery_shopline_shared_secret = strdup((shopline_shared_secret));
        keyPairQuery_shopline_shared_secret = keyValuePair_create(keyQuery_shopline_shared_secret, valueQuery_shopline_shared_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_shopline_shared_secret);
    }

    // query parameters
    char *keyQuery_shopify_access_token = NULL;
    char * valueQuery_shopify_access_token = NULL;
    keyValuePair_t *keyPairQuery_shopify_access_token = 0;
    if (shopify_access_token)
    {
        keyQuery_shopify_access_token = strdup("shopify_access_token");
        valueQuery_shopify_access_token = strdup((shopify_access_token));
        keyPairQuery_shopify_access_token = keyValuePair_create(keyQuery_shopify_access_token, valueQuery_shopify_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_shopify_access_token);
    }

    // query parameters
    char *keyQuery_shopify_api_key = NULL;
    char * valueQuery_shopify_api_key = NULL;
    keyValuePair_t *keyPairQuery_shopify_api_key = 0;
    if (shopify_api_key)
    {
        keyQuery_shopify_api_key = strdup("shopify_api_key");
        valueQuery_shopify_api_key = strdup((shopify_api_key));
        keyPairQuery_shopify_api_key = keyValuePair_create(keyQuery_shopify_api_key, valueQuery_shopify_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_shopify_api_key);
    }

    // query parameters
    char *keyQuery_shopify_api_password = NULL;
    char * valueQuery_shopify_api_password = NULL;
    keyValuePair_t *keyPairQuery_shopify_api_password = 0;
    if (shopify_api_password)
    {
        keyQuery_shopify_api_password = strdup("shopify_api_password");
        valueQuery_shopify_api_password = strdup((shopify_api_password));
        keyPairQuery_shopify_api_password = keyValuePair_create(keyQuery_shopify_api_password, valueQuery_shopify_api_password);
        list_addElement(localVarQueryParameters,keyPairQuery_shopify_api_password);
    }

    // query parameters
    char *keyQuery_shopify_shared_secret = NULL;
    char * valueQuery_shopify_shared_secret = NULL;
    keyValuePair_t *keyPairQuery_shopify_shared_secret = 0;
    if (shopify_shared_secret)
    {
        keyQuery_shopify_shared_secret = strdup("shopify_shared_secret");
        valueQuery_shopify_shared_secret = strdup((shopify_shared_secret));
        keyPairQuery_shopify_shared_secret = keyValuePair_create(keyQuery_shopify_shared_secret, valueQuery_shopify_shared_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_shopify_shared_secret);
    }

    // query parameters
    char *keyQuery_shoplazza_access_token = NULL;
    char * valueQuery_shoplazza_access_token = NULL;
    keyValuePair_t *keyPairQuery_shoplazza_access_token = 0;
    if (shoplazza_access_token)
    {
        keyQuery_shoplazza_access_token = strdup("shoplazza_access_token");
        valueQuery_shoplazza_access_token = strdup((shoplazza_access_token));
        keyPairQuery_shoplazza_access_token = keyValuePair_create(keyQuery_shoplazza_access_token, valueQuery_shoplazza_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_shoplazza_access_token);
    }

    // query parameters
    char *keyQuery_shoplazza_shared_secret = NULL;
    char * valueQuery_shoplazza_shared_secret = NULL;
    keyValuePair_t *keyPairQuery_shoplazza_shared_secret = 0;
    if (shoplazza_shared_secret)
    {
        keyQuery_shoplazza_shared_secret = strdup("shoplazza_shared_secret");
        valueQuery_shoplazza_shared_secret = strdup((shoplazza_shared_secret));
        keyPairQuery_shoplazza_shared_secret = keyValuePair_create(keyQuery_shoplazza_shared_secret, valueQuery_shoplazza_shared_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_shoplazza_shared_secret);
    }

    // query parameters
    char *keyQuery_miva_access_token = NULL;
    char * valueQuery_miva_access_token = NULL;
    keyValuePair_t *keyPairQuery_miva_access_token = 0;
    if (miva_access_token)
    {
        keyQuery_miva_access_token = strdup("miva_access_token");
        valueQuery_miva_access_token = strdup((miva_access_token));
        keyPairQuery_miva_access_token = keyValuePair_create(keyQuery_miva_access_token, valueQuery_miva_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_miva_access_token);
    }

    // query parameters
    char *keyQuery_miva_signature = NULL;
    char * valueQuery_miva_signature = NULL;
    keyValuePair_t *keyPairQuery_miva_signature = 0;
    if (miva_signature)
    {
        keyQuery_miva_signature = strdup("miva_signature");
        valueQuery_miva_signature = strdup((miva_signature));
        keyPairQuery_miva_signature = keyValuePair_create(keyQuery_miva_signature, valueQuery_miva_signature);
        list_addElement(localVarQueryParameters,keyPairQuery_miva_signature);
    }

    // query parameters
    char *keyQuery_shopware_access_key = NULL;
    char * valueQuery_shopware_access_key = NULL;
    keyValuePair_t *keyPairQuery_shopware_access_key = 0;
    if (shopware_access_key)
    {
        keyQuery_shopware_access_key = strdup("shopware_access_key");
        valueQuery_shopware_access_key = strdup((shopware_access_key));
        keyPairQuery_shopware_access_key = keyValuePair_create(keyQuery_shopware_access_key, valueQuery_shopware_access_key);
        list_addElement(localVarQueryParameters,keyPairQuery_shopware_access_key);
    }

    // query parameters
    char *keyQuery_shopware_api_key = NULL;
    char * valueQuery_shopware_api_key = NULL;
    keyValuePair_t *keyPairQuery_shopware_api_key = 0;
    if (shopware_api_key)
    {
        keyQuery_shopware_api_key = strdup("shopware_api_key");
        valueQuery_shopware_api_key = strdup((shopware_api_key));
        keyPairQuery_shopware_api_key = keyValuePair_create(keyQuery_shopware_api_key, valueQuery_shopware_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_shopware_api_key);
    }

    // query parameters
    char *keyQuery_shopware_api_secret = NULL;
    char * valueQuery_shopware_api_secret = NULL;
    keyValuePair_t *keyPairQuery_shopware_api_secret = 0;
    if (shopware_api_secret)
    {
        keyQuery_shopware_api_secret = strdup("shopware_api_secret");
        valueQuery_shopware_api_secret = strdup((shopware_api_secret));
        keyPairQuery_shopware_api_secret = keyValuePair_create(keyQuery_shopware_api_secret, valueQuery_shopware_api_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_shopware_api_secret);
    }

    // query parameters
    char *keyQuery_bigcartel_user_name = NULL;
    char * valueQuery_bigcartel_user_name = NULL;
    keyValuePair_t *keyPairQuery_bigcartel_user_name = 0;
    if (bigcartel_user_name)
    {
        keyQuery_bigcartel_user_name = strdup("bigcartel_user_name");
        valueQuery_bigcartel_user_name = strdup((bigcartel_user_name));
        keyPairQuery_bigcartel_user_name = keyValuePair_create(keyQuery_bigcartel_user_name, valueQuery_bigcartel_user_name);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcartel_user_name);
    }

    // query parameters
    char *keyQuery_bigcartel_password = NULL;
    char * valueQuery_bigcartel_password = NULL;
    keyValuePair_t *keyPairQuery_bigcartel_password = 0;
    if (bigcartel_password)
    {
        keyQuery_bigcartel_password = strdup("bigcartel_password");
        valueQuery_bigcartel_password = strdup((bigcartel_password));
        keyPairQuery_bigcartel_password = keyValuePair_create(keyQuery_bigcartel_password, valueQuery_bigcartel_password);
        list_addElement(localVarQueryParameters,keyPairQuery_bigcartel_password);
    }

    // query parameters
    char *keyQuery_volusion_login = NULL;
    char * valueQuery_volusion_login = NULL;
    keyValuePair_t *keyPairQuery_volusion_login = 0;
    if (volusion_login)
    {
        keyQuery_volusion_login = strdup("volusion_login");
        valueQuery_volusion_login = strdup((volusion_login));
        keyPairQuery_volusion_login = keyValuePair_create(keyQuery_volusion_login, valueQuery_volusion_login);
        list_addElement(localVarQueryParameters,keyPairQuery_volusion_login);
    }

    // query parameters
    char *keyQuery_volusion_password = NULL;
    char * valueQuery_volusion_password = NULL;
    keyValuePair_t *keyPairQuery_volusion_password = 0;
    if (volusion_password)
    {
        keyQuery_volusion_password = strdup("volusion_password");
        valueQuery_volusion_password = strdup((volusion_password));
        keyPairQuery_volusion_password = keyValuePair_create(keyQuery_volusion_password, valueQuery_volusion_password);
        list_addElement(localVarQueryParameters,keyPairQuery_volusion_password);
    }

    // query parameters
    char *keyQuery_walmart_client_id = NULL;
    char * valueQuery_walmart_client_id = NULL;
    keyValuePair_t *keyPairQuery_walmart_client_id = 0;
    if (walmart_client_id)
    {
        keyQuery_walmart_client_id = strdup("walmart_client_id");
        valueQuery_walmart_client_id = strdup((walmart_client_id));
        keyPairQuery_walmart_client_id = keyValuePair_create(keyQuery_walmart_client_id, valueQuery_walmart_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_walmart_client_id);
    }

    // query parameters
    char *keyQuery_walmart_client_secret = NULL;
    char * valueQuery_walmart_client_secret = NULL;
    keyValuePair_t *keyPairQuery_walmart_client_secret = 0;
    if (walmart_client_secret)
    {
        keyQuery_walmart_client_secret = strdup("walmart_client_secret");
        valueQuery_walmart_client_secret = strdup((walmart_client_secret));
        keyPairQuery_walmart_client_secret = keyValuePair_create(keyQuery_walmart_client_secret, valueQuery_walmart_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_walmart_client_secret);
    }

    // query parameters
    char *keyQuery_walmart_environment = NULL;
    char * valueQuery_walmart_environment = NULL;
    keyValuePair_t *keyPairQuery_walmart_environment = 0;
    if (walmart_environment)
    {
        keyQuery_walmart_environment = strdup("walmart_environment");
        valueQuery_walmart_environment = strdup((walmart_environment));
        keyPairQuery_walmart_environment = keyValuePair_create(keyQuery_walmart_environment, valueQuery_walmart_environment);
        list_addElement(localVarQueryParameters,keyPairQuery_walmart_environment);
    }

    // query parameters
    char *keyQuery_walmart_channel_type = NULL;
    char * valueQuery_walmart_channel_type = NULL;
    keyValuePair_t *keyPairQuery_walmart_channel_type = 0;
    if (walmart_channel_type)
    {
        keyQuery_walmart_channel_type = strdup("walmart_channel_type");
        valueQuery_walmart_channel_type = strdup((walmart_channel_type));
        keyPairQuery_walmart_channel_type = keyValuePair_create(keyQuery_walmart_channel_type, valueQuery_walmart_channel_type);
        list_addElement(localVarQueryParameters,keyPairQuery_walmart_channel_type);
    }

    // query parameters
    char *keyQuery_walmart_region = NULL;
    char * valueQuery_walmart_region = NULL;
    keyValuePair_t *keyPairQuery_walmart_region = 0;
    if (walmart_region)
    {
        keyQuery_walmart_region = strdup("walmart_region");
        valueQuery_walmart_region = strdup((walmart_region));
        keyPairQuery_walmart_region = keyValuePair_create(keyQuery_walmart_region, valueQuery_walmart_region);
        list_addElement(localVarQueryParameters,keyPairQuery_walmart_region);
    }

    // query parameters
    char *keyQuery_square_client_id = NULL;
    char * valueQuery_square_client_id = NULL;
    keyValuePair_t *keyPairQuery_square_client_id = 0;
    if (square_client_id)
    {
        keyQuery_square_client_id = strdup("square_client_id");
        valueQuery_square_client_id = strdup((square_client_id));
        keyPairQuery_square_client_id = keyValuePair_create(keyQuery_square_client_id, valueQuery_square_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_square_client_id);
    }

    // query parameters
    char *keyQuery_square_client_secret = NULL;
    char * valueQuery_square_client_secret = NULL;
    keyValuePair_t *keyPairQuery_square_client_secret = 0;
    if (square_client_secret)
    {
        keyQuery_square_client_secret = strdup("square_client_secret");
        valueQuery_square_client_secret = strdup((square_client_secret));
        keyPairQuery_square_client_secret = keyValuePair_create(keyQuery_square_client_secret, valueQuery_square_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_square_client_secret);
    }

    // query parameters
    char *keyQuery_square_refresh_token = NULL;
    char * valueQuery_square_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_square_refresh_token = 0;
    if (square_refresh_token)
    {
        keyQuery_square_refresh_token = strdup("square_refresh_token");
        valueQuery_square_refresh_token = strdup((square_refresh_token));
        keyPairQuery_square_refresh_token = keyValuePair_create(keyQuery_square_refresh_token, valueQuery_square_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_square_refresh_token);
    }

    // query parameters
    char *keyQuery_squarespace_api_key = NULL;
    char * valueQuery_squarespace_api_key = NULL;
    keyValuePair_t *keyPairQuery_squarespace_api_key = 0;
    if (squarespace_api_key)
    {
        keyQuery_squarespace_api_key = strdup("squarespace_api_key");
        valueQuery_squarespace_api_key = strdup((squarespace_api_key));
        keyPairQuery_squarespace_api_key = keyValuePair_create(keyQuery_squarespace_api_key, valueQuery_squarespace_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_squarespace_api_key);
    }

    // query parameters
    char *keyQuery_squarespace_client_id = NULL;
    char * valueQuery_squarespace_client_id = NULL;
    keyValuePair_t *keyPairQuery_squarespace_client_id = 0;
    if (squarespace_client_id)
    {
        keyQuery_squarespace_client_id = strdup("squarespace_client_id");
        valueQuery_squarespace_client_id = strdup((squarespace_client_id));
        keyPairQuery_squarespace_client_id = keyValuePair_create(keyQuery_squarespace_client_id, valueQuery_squarespace_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_squarespace_client_id);
    }

    // query parameters
    char *keyQuery_squarespace_client_secret = NULL;
    char * valueQuery_squarespace_client_secret = NULL;
    keyValuePair_t *keyPairQuery_squarespace_client_secret = 0;
    if (squarespace_client_secret)
    {
        keyQuery_squarespace_client_secret = strdup("squarespace_client_secret");
        valueQuery_squarespace_client_secret = strdup((squarespace_client_secret));
        keyPairQuery_squarespace_client_secret = keyValuePair_create(keyQuery_squarespace_client_secret, valueQuery_squarespace_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_squarespace_client_secret);
    }

    // query parameters
    char *keyQuery_squarespace_access_token = NULL;
    char * valueQuery_squarespace_access_token = NULL;
    keyValuePair_t *keyPairQuery_squarespace_access_token = 0;
    if (squarespace_access_token)
    {
        keyQuery_squarespace_access_token = strdup("squarespace_access_token");
        valueQuery_squarespace_access_token = strdup((squarespace_access_token));
        keyPairQuery_squarespace_access_token = keyValuePair_create(keyQuery_squarespace_access_token, valueQuery_squarespace_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_squarespace_access_token);
    }

    // query parameters
    char *keyQuery_squarespace_refresh_token = NULL;
    char * valueQuery_squarespace_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_squarespace_refresh_token = 0;
    if (squarespace_refresh_token)
    {
        keyQuery_squarespace_refresh_token = strdup("squarespace_refresh_token");
        valueQuery_squarespace_refresh_token = strdup((squarespace_refresh_token));
        keyPairQuery_squarespace_refresh_token = keyValuePair_create(keyQuery_squarespace_refresh_token, valueQuery_squarespace_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_squarespace_refresh_token);
    }

    // query parameters
    char *keyQuery_hybris_client_id = NULL;
    char * valueQuery_hybris_client_id = NULL;
    keyValuePair_t *keyPairQuery_hybris_client_id = 0;
    if (hybris_client_id)
    {
        keyQuery_hybris_client_id = strdup("hybris_client_id");
        valueQuery_hybris_client_id = strdup((hybris_client_id));
        keyPairQuery_hybris_client_id = keyValuePair_create(keyQuery_hybris_client_id, valueQuery_hybris_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_hybris_client_id);
    }

    // query parameters
    char *keyQuery_hybris_client_secret = NULL;
    char * valueQuery_hybris_client_secret = NULL;
    keyValuePair_t *keyPairQuery_hybris_client_secret = 0;
    if (hybris_client_secret)
    {
        keyQuery_hybris_client_secret = strdup("hybris_client_secret");
        valueQuery_hybris_client_secret = strdup((hybris_client_secret));
        keyPairQuery_hybris_client_secret = keyValuePair_create(keyQuery_hybris_client_secret, valueQuery_hybris_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_hybris_client_secret);
    }

    // query parameters
    char *keyQuery_hybris_username = NULL;
    char * valueQuery_hybris_username = NULL;
    keyValuePair_t *keyPairQuery_hybris_username = 0;
    if (hybris_username)
    {
        keyQuery_hybris_username = strdup("hybris_username");
        valueQuery_hybris_username = strdup((hybris_username));
        keyPairQuery_hybris_username = keyValuePair_create(keyQuery_hybris_username, valueQuery_hybris_username);
        list_addElement(localVarQueryParameters,keyPairQuery_hybris_username);
    }

    // query parameters
    char *keyQuery_hybris_password = NULL;
    char * valueQuery_hybris_password = NULL;
    keyValuePair_t *keyPairQuery_hybris_password = 0;
    if (hybris_password)
    {
        keyQuery_hybris_password = strdup("hybris_password");
        valueQuery_hybris_password = strdup((hybris_password));
        keyPairQuery_hybris_password = keyValuePair_create(keyQuery_hybris_password, valueQuery_hybris_password);
        list_addElement(localVarQueryParameters,keyPairQuery_hybris_password);
    }

    // query parameters
    if (hybris_websites)
    {
        list_addElement(localVarQueryParameters,hybris_websites);
    }

    // query parameters
    char *keyQuery_lightspeed_api_key = NULL;
    char * valueQuery_lightspeed_api_key = NULL;
    keyValuePair_t *keyPairQuery_lightspeed_api_key = 0;
    if (lightspeed_api_key)
    {
        keyQuery_lightspeed_api_key = strdup("lightspeed_api_key");
        valueQuery_lightspeed_api_key = strdup((lightspeed_api_key));
        keyPairQuery_lightspeed_api_key = keyValuePair_create(keyQuery_lightspeed_api_key, valueQuery_lightspeed_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_lightspeed_api_key);
    }

    // query parameters
    char *keyQuery_lightspeed_api_secret = NULL;
    char * valueQuery_lightspeed_api_secret = NULL;
    keyValuePair_t *keyPairQuery_lightspeed_api_secret = 0;
    if (lightspeed_api_secret)
    {
        keyQuery_lightspeed_api_secret = strdup("lightspeed_api_secret");
        valueQuery_lightspeed_api_secret = strdup((lightspeed_api_secret));
        keyPairQuery_lightspeed_api_secret = keyValuePair_create(keyQuery_lightspeed_api_secret, valueQuery_lightspeed_api_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_lightspeed_api_secret);
    }

    // query parameters
    char *keyQuery_commercehq_api_key = NULL;
    char * valueQuery_commercehq_api_key = NULL;
    keyValuePair_t *keyPairQuery_commercehq_api_key = 0;
    if (commercehq_api_key)
    {
        keyQuery_commercehq_api_key = strdup("commercehq_api_key");
        valueQuery_commercehq_api_key = strdup((commercehq_api_key));
        keyPairQuery_commercehq_api_key = keyValuePair_create(keyQuery_commercehq_api_key, valueQuery_commercehq_api_key);
        list_addElement(localVarQueryParameters,keyPairQuery_commercehq_api_key);
    }

    // query parameters
    char *keyQuery_commercehq_api_password = NULL;
    char * valueQuery_commercehq_api_password = NULL;
    keyValuePair_t *keyPairQuery_commercehq_api_password = 0;
    if (commercehq_api_password)
    {
        keyQuery_commercehq_api_password = strdup("commercehq_api_password");
        valueQuery_commercehq_api_password = strdup((commercehq_api_password));
        keyPairQuery_commercehq_api_password = keyValuePair_create(keyQuery_commercehq_api_password, valueQuery_commercehq_api_password);
        list_addElement(localVarQueryParameters,keyPairQuery_commercehq_api_password);
    }

    // query parameters
    char *keyQuery_wc_consumer_key = NULL;
    char * valueQuery_wc_consumer_key = NULL;
    keyValuePair_t *keyPairQuery_wc_consumer_key = 0;
    if (wc_consumer_key)
    {
        keyQuery_wc_consumer_key = strdup("wc_consumer_key");
        valueQuery_wc_consumer_key = strdup((wc_consumer_key));
        keyPairQuery_wc_consumer_key = keyValuePair_create(keyQuery_wc_consumer_key, valueQuery_wc_consumer_key);
        list_addElement(localVarQueryParameters,keyPairQuery_wc_consumer_key);
    }

    // query parameters
    char *keyQuery_wc_consumer_secret = NULL;
    char * valueQuery_wc_consumer_secret = NULL;
    keyValuePair_t *keyPairQuery_wc_consumer_secret = 0;
    if (wc_consumer_secret)
    {
        keyQuery_wc_consumer_secret = strdup("wc_consumer_secret");
        valueQuery_wc_consumer_secret = strdup((wc_consumer_secret));
        keyPairQuery_wc_consumer_secret = keyValuePair_create(keyQuery_wc_consumer_secret, valueQuery_wc_consumer_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_wc_consumer_secret);
    }

    // query parameters
    char *keyQuery_magento_consumer_key = NULL;
    char * valueQuery_magento_consumer_key = NULL;
    keyValuePair_t *keyPairQuery_magento_consumer_key = 0;
    if (magento_consumer_key)
    {
        keyQuery_magento_consumer_key = strdup("magento_consumer_key");
        valueQuery_magento_consumer_key = strdup((magento_consumer_key));
        keyPairQuery_magento_consumer_key = keyValuePair_create(keyQuery_magento_consumer_key, valueQuery_magento_consumer_key);
        list_addElement(localVarQueryParameters,keyPairQuery_magento_consumer_key);
    }

    // query parameters
    char *keyQuery_magento_consumer_secret = NULL;
    char * valueQuery_magento_consumer_secret = NULL;
    keyValuePair_t *keyPairQuery_magento_consumer_secret = 0;
    if (magento_consumer_secret)
    {
        keyQuery_magento_consumer_secret = strdup("magento_consumer_secret");
        valueQuery_magento_consumer_secret = strdup((magento_consumer_secret));
        keyPairQuery_magento_consumer_secret = keyValuePair_create(keyQuery_magento_consumer_secret, valueQuery_magento_consumer_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_magento_consumer_secret);
    }

    // query parameters
    char *keyQuery_magento_access_token = NULL;
    char * valueQuery_magento_access_token = NULL;
    keyValuePair_t *keyPairQuery_magento_access_token = 0;
    if (magento_access_token)
    {
        keyQuery_magento_access_token = strdup("magento_access_token");
        valueQuery_magento_access_token = strdup((magento_access_token));
        keyPairQuery_magento_access_token = keyValuePair_create(keyQuery_magento_access_token, valueQuery_magento_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_magento_access_token);
    }

    // query parameters
    char *keyQuery_magento_token_secret = NULL;
    char * valueQuery_magento_token_secret = NULL;
    keyValuePair_t *keyPairQuery_magento_token_secret = 0;
    if (magento_token_secret)
    {
        keyQuery_magento_token_secret = strdup("magento_token_secret");
        valueQuery_magento_token_secret = strdup((magento_token_secret));
        keyPairQuery_magento_token_secret = keyValuePair_create(keyQuery_magento_token_secret, valueQuery_magento_token_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_magento_token_secret);
    }

    // query parameters
    char *keyQuery_prestashop_webservice_key = NULL;
    char * valueQuery_prestashop_webservice_key = NULL;
    keyValuePair_t *keyPairQuery_prestashop_webservice_key = 0;
    if (prestashop_webservice_key)
    {
        keyQuery_prestashop_webservice_key = strdup("prestashop_webservice_key");
        valueQuery_prestashop_webservice_key = strdup((prestashop_webservice_key));
        keyPairQuery_prestashop_webservice_key = keyValuePair_create(keyQuery_prestashop_webservice_key, valueQuery_prestashop_webservice_key);
        list_addElement(localVarQueryParameters,keyPairQuery_prestashop_webservice_key);
    }

    // query parameters
    char *keyQuery_wix_app_id = NULL;
    char * valueQuery_wix_app_id = NULL;
    keyValuePair_t *keyPairQuery_wix_app_id = 0;
    if (wix_app_id)
    {
        keyQuery_wix_app_id = strdup("wix_app_id");
        valueQuery_wix_app_id = strdup((wix_app_id));
        keyPairQuery_wix_app_id = keyValuePair_create(keyQuery_wix_app_id, valueQuery_wix_app_id);
        list_addElement(localVarQueryParameters,keyPairQuery_wix_app_id);
    }

    // query parameters
    char *keyQuery_wix_app_secret_key = NULL;
    char * valueQuery_wix_app_secret_key = NULL;
    keyValuePair_t *keyPairQuery_wix_app_secret_key = 0;
    if (wix_app_secret_key)
    {
        keyQuery_wix_app_secret_key = strdup("wix_app_secret_key");
        valueQuery_wix_app_secret_key = strdup((wix_app_secret_key));
        keyPairQuery_wix_app_secret_key = keyValuePair_create(keyQuery_wix_app_secret_key, valueQuery_wix_app_secret_key);
        list_addElement(localVarQueryParameters,keyPairQuery_wix_app_secret_key);
    }

    // query parameters
    char *keyQuery_wix_instance_id = NULL;
    char * valueQuery_wix_instance_id = NULL;
    keyValuePair_t *keyPairQuery_wix_instance_id = 0;
    if (wix_instance_id)
    {
        keyQuery_wix_instance_id = strdup("wix_instance_id");
        valueQuery_wix_instance_id = strdup((wix_instance_id));
        keyPairQuery_wix_instance_id = keyValuePair_create(keyQuery_wix_instance_id, valueQuery_wix_instance_id);
        list_addElement(localVarQueryParameters,keyPairQuery_wix_instance_id);
    }

    // query parameters
    char *keyQuery_wix_refresh_token = NULL;
    char * valueQuery_wix_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_wix_refresh_token = 0;
    if (wix_refresh_token)
    {
        keyQuery_wix_refresh_token = strdup("wix_refresh_token");
        valueQuery_wix_refresh_token = strdup((wix_refresh_token));
        keyPairQuery_wix_refresh_token = keyValuePair_create(keyQuery_wix_refresh_token, valueQuery_wix_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_wix_refresh_token);
    }

    // query parameters
    char *keyQuery_mercado_libre_app_id = NULL;
    char * valueQuery_mercado_libre_app_id = NULL;
    keyValuePair_t *keyPairQuery_mercado_libre_app_id = 0;
    if (mercado_libre_app_id)
    {
        keyQuery_mercado_libre_app_id = strdup("mercado_libre_app_id");
        valueQuery_mercado_libre_app_id = strdup((mercado_libre_app_id));
        keyPairQuery_mercado_libre_app_id = keyValuePair_create(keyQuery_mercado_libre_app_id, valueQuery_mercado_libre_app_id);
        list_addElement(localVarQueryParameters,keyPairQuery_mercado_libre_app_id);
    }

    // query parameters
    char *keyQuery_mercado_libre_app_secret_key = NULL;
    char * valueQuery_mercado_libre_app_secret_key = NULL;
    keyValuePair_t *keyPairQuery_mercado_libre_app_secret_key = 0;
    if (mercado_libre_app_secret_key)
    {
        keyQuery_mercado_libre_app_secret_key = strdup("mercado_libre_app_secret_key");
        valueQuery_mercado_libre_app_secret_key = strdup((mercado_libre_app_secret_key));
        keyPairQuery_mercado_libre_app_secret_key = keyValuePair_create(keyQuery_mercado_libre_app_secret_key, valueQuery_mercado_libre_app_secret_key);
        list_addElement(localVarQueryParameters,keyPairQuery_mercado_libre_app_secret_key);
    }

    // query parameters
    char *keyQuery_mercado_libre_refresh_token = NULL;
    char * valueQuery_mercado_libre_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_mercado_libre_refresh_token = 0;
    if (mercado_libre_refresh_token)
    {
        keyQuery_mercado_libre_refresh_token = strdup("mercado_libre_refresh_token");
        valueQuery_mercado_libre_refresh_token = strdup((mercado_libre_refresh_token));
        keyPairQuery_mercado_libre_refresh_token = keyValuePair_create(keyQuery_mercado_libre_refresh_token, valueQuery_mercado_libre_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_mercado_libre_refresh_token);
    }

    // query parameters
    char *keyQuery_zid_client_id = NULL;
    char * valueQuery_zid_client_id = NULL;
    keyValuePair_t *keyPairQuery_zid_client_id = 0;
    if (zid_client_id)
    {
        keyQuery_zid_client_id = strdup("zid_client_id");
        valueQuery_zid_client_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_zid_client_id, MAX_NUMBER_LENGTH, "%d", *zid_client_id);
        keyPairQuery_zid_client_id = keyValuePair_create(keyQuery_zid_client_id, valueQuery_zid_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_zid_client_id);
    }

    // query parameters
    char *keyQuery_zid_client_secret = NULL;
    char * valueQuery_zid_client_secret = NULL;
    keyValuePair_t *keyPairQuery_zid_client_secret = 0;
    if (zid_client_secret)
    {
        keyQuery_zid_client_secret = strdup("zid_client_secret");
        valueQuery_zid_client_secret = strdup((zid_client_secret));
        keyPairQuery_zid_client_secret = keyValuePair_create(keyQuery_zid_client_secret, valueQuery_zid_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_zid_client_secret);
    }

    // query parameters
    char *keyQuery_zid_access_token = NULL;
    char * valueQuery_zid_access_token = NULL;
    keyValuePair_t *keyPairQuery_zid_access_token = 0;
    if (zid_access_token)
    {
        keyQuery_zid_access_token = strdup("zid_access_token");
        valueQuery_zid_access_token = strdup((zid_access_token));
        keyPairQuery_zid_access_token = keyValuePair_create(keyQuery_zid_access_token, valueQuery_zid_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_zid_access_token);
    }

    // query parameters
    char *keyQuery_zid_authorization = NULL;
    char * valueQuery_zid_authorization = NULL;
    keyValuePair_t *keyPairQuery_zid_authorization = 0;
    if (zid_authorization)
    {
        keyQuery_zid_authorization = strdup("zid_authorization");
        valueQuery_zid_authorization = strdup((zid_authorization));
        keyPairQuery_zid_authorization = keyValuePair_create(keyQuery_zid_authorization, valueQuery_zid_authorization);
        list_addElement(localVarQueryParameters,keyPairQuery_zid_authorization);
    }

    // query parameters
    char *keyQuery_zid_refresh_token = NULL;
    char * valueQuery_zid_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_zid_refresh_token = 0;
    if (zid_refresh_token)
    {
        keyQuery_zid_refresh_token = strdup("zid_refresh_token");
        valueQuery_zid_refresh_token = strdup((zid_refresh_token));
        keyPairQuery_zid_refresh_token = keyValuePair_create(keyQuery_zid_refresh_token, valueQuery_zid_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_zid_refresh_token);
    }

    // query parameters
    char *keyQuery_flipkart_client_id = NULL;
    char * valueQuery_flipkart_client_id = NULL;
    keyValuePair_t *keyPairQuery_flipkart_client_id = 0;
    if (flipkart_client_id)
    {
        keyQuery_flipkart_client_id = strdup("flipkart_client_id");
        valueQuery_flipkart_client_id = strdup((flipkart_client_id));
        keyPairQuery_flipkart_client_id = keyValuePair_create(keyQuery_flipkart_client_id, valueQuery_flipkart_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_flipkart_client_id);
    }

    // query parameters
    char *keyQuery_flipkart_client_secret = NULL;
    char * valueQuery_flipkart_client_secret = NULL;
    keyValuePair_t *keyPairQuery_flipkart_client_secret = 0;
    if (flipkart_client_secret)
    {
        keyQuery_flipkart_client_secret = strdup("flipkart_client_secret");
        valueQuery_flipkart_client_secret = strdup((flipkart_client_secret));
        keyPairQuery_flipkart_client_secret = keyValuePair_create(keyQuery_flipkart_client_secret, valueQuery_flipkart_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_flipkart_client_secret);
    }

    // query parameters
    char *keyQuery_allegro_client_id = NULL;
    char * valueQuery_allegro_client_id = NULL;
    keyValuePair_t *keyPairQuery_allegro_client_id = 0;
    if (allegro_client_id)
    {
        keyQuery_allegro_client_id = strdup("allegro_client_id");
        valueQuery_allegro_client_id = strdup((allegro_client_id));
        keyPairQuery_allegro_client_id = keyValuePair_create(keyQuery_allegro_client_id, valueQuery_allegro_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_allegro_client_id);
    }

    // query parameters
    char *keyQuery_allegro_client_secret = NULL;
    char * valueQuery_allegro_client_secret = NULL;
    keyValuePair_t *keyPairQuery_allegro_client_secret = 0;
    if (allegro_client_secret)
    {
        keyQuery_allegro_client_secret = strdup("allegro_client_secret");
        valueQuery_allegro_client_secret = strdup((allegro_client_secret));
        keyPairQuery_allegro_client_secret = keyValuePair_create(keyQuery_allegro_client_secret, valueQuery_allegro_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_allegro_client_secret);
    }

    // query parameters
    char *keyQuery_allegro_access_token = NULL;
    char * valueQuery_allegro_access_token = NULL;
    keyValuePair_t *keyPairQuery_allegro_access_token = 0;
    if (allegro_access_token)
    {
        keyQuery_allegro_access_token = strdup("allegro_access_token");
        valueQuery_allegro_access_token = strdup((allegro_access_token));
        keyPairQuery_allegro_access_token = keyValuePair_create(keyQuery_allegro_access_token, valueQuery_allegro_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_allegro_access_token);
    }

    // query parameters
    char *keyQuery_allegro_refresh_token = NULL;
    char * valueQuery_allegro_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_allegro_refresh_token = 0;
    if (allegro_refresh_token)
    {
        keyQuery_allegro_refresh_token = strdup("allegro_refresh_token");
        valueQuery_allegro_refresh_token = strdup((allegro_refresh_token));
        keyPairQuery_allegro_refresh_token = keyValuePair_create(keyQuery_allegro_refresh_token, valueQuery_allegro_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_allegro_refresh_token);
    }

    // query parameters
    char *keyQuery_allegro_environment = NULL;
    char * valueQuery_allegro_environment = NULL;
    keyValuePair_t *keyPairQuery_allegro_environment = 0;
    if (allegro_environment)
    {
        keyQuery_allegro_environment = strdup("allegro_environment");
        valueQuery_allegro_environment = strdup((allegro_environment));
        keyPairQuery_allegro_environment = keyValuePair_create(keyQuery_allegro_environment, valueQuery_allegro_environment);
        list_addElement(localVarQueryParameters,keyPairQuery_allegro_environment);
    }

    // query parameters
    char *keyQuery_zoho_client_id = NULL;
    char * valueQuery_zoho_client_id = NULL;
    keyValuePair_t *keyPairQuery_zoho_client_id = 0;
    if (zoho_client_id)
    {
        keyQuery_zoho_client_id = strdup("zoho_client_id");
        valueQuery_zoho_client_id = strdup((zoho_client_id));
        keyPairQuery_zoho_client_id = keyValuePair_create(keyQuery_zoho_client_id, valueQuery_zoho_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_zoho_client_id);
    }

    // query parameters
    char *keyQuery_zoho_client_secret = NULL;
    char * valueQuery_zoho_client_secret = NULL;
    keyValuePair_t *keyPairQuery_zoho_client_secret = 0;
    if (zoho_client_secret)
    {
        keyQuery_zoho_client_secret = strdup("zoho_client_secret");
        valueQuery_zoho_client_secret = strdup((zoho_client_secret));
        keyPairQuery_zoho_client_secret = keyValuePair_create(keyQuery_zoho_client_secret, valueQuery_zoho_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_zoho_client_secret);
    }

    // query parameters
    char *keyQuery_zoho_refresh_token = NULL;
    char * valueQuery_zoho_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_zoho_refresh_token = 0;
    if (zoho_refresh_token)
    {
        keyQuery_zoho_refresh_token = strdup("zoho_refresh_token");
        valueQuery_zoho_refresh_token = strdup((zoho_refresh_token));
        keyPairQuery_zoho_refresh_token = keyValuePair_create(keyQuery_zoho_refresh_token, valueQuery_zoho_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_zoho_refresh_token);
    }

    // query parameters
    char *keyQuery_zoho_region = NULL;
    char * valueQuery_zoho_region = NULL;
    keyValuePair_t *keyPairQuery_zoho_region = 0;
    if (zoho_region)
    {
        keyQuery_zoho_region = strdup("zoho_region");
        valueQuery_zoho_region = strdup((zoho_region));
        keyPairQuery_zoho_region = keyValuePair_create(keyQuery_zoho_region, valueQuery_zoho_region);
        list_addElement(localVarQueryParameters,keyPairQuery_zoho_region);
    }

    // query parameters
    char *keyQuery_tiendanube_user_id = NULL;
    char * valueQuery_tiendanube_user_id = NULL;
    keyValuePair_t *keyPairQuery_tiendanube_user_id = 0;
    if (tiendanube_user_id)
    {
        keyQuery_tiendanube_user_id = strdup("tiendanube_user_id");
        valueQuery_tiendanube_user_id = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_tiendanube_user_id, MAX_NUMBER_LENGTH, "%d", *tiendanube_user_id);
        keyPairQuery_tiendanube_user_id = keyValuePair_create(keyQuery_tiendanube_user_id, valueQuery_tiendanube_user_id);
        list_addElement(localVarQueryParameters,keyPairQuery_tiendanube_user_id);
    }

    // query parameters
    char *keyQuery_tiendanube_access_token = NULL;
    char * valueQuery_tiendanube_access_token = NULL;
    keyValuePair_t *keyPairQuery_tiendanube_access_token = 0;
    if (tiendanube_access_token)
    {
        keyQuery_tiendanube_access_token = strdup("tiendanube_access_token");
        valueQuery_tiendanube_access_token = strdup((tiendanube_access_token));
        keyPairQuery_tiendanube_access_token = keyValuePair_create(keyQuery_tiendanube_access_token, valueQuery_tiendanube_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_tiendanube_access_token);
    }

    // query parameters
    char *keyQuery_tiendanube_client_secret = NULL;
    char * valueQuery_tiendanube_client_secret = NULL;
    keyValuePair_t *keyPairQuery_tiendanube_client_secret = 0;
    if (tiendanube_client_secret)
    {
        keyQuery_tiendanube_client_secret = strdup("tiendanube_client_secret");
        valueQuery_tiendanube_client_secret = strdup((tiendanube_client_secret));
        keyPairQuery_tiendanube_client_secret = keyValuePair_create(keyQuery_tiendanube_client_secret, valueQuery_tiendanube_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_tiendanube_client_secret);
    }

    // query parameters
    char *keyQuery_otto_client_id = NULL;
    char * valueQuery_otto_client_id = NULL;
    keyValuePair_t *keyPairQuery_otto_client_id = 0;
    if (otto_client_id)
    {
        keyQuery_otto_client_id = strdup("otto_client_id");
        valueQuery_otto_client_id = strdup((otto_client_id));
        keyPairQuery_otto_client_id = keyValuePair_create(keyQuery_otto_client_id, valueQuery_otto_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_client_id);
    }

    // query parameters
    char *keyQuery_otto_client_secret = NULL;
    char * valueQuery_otto_client_secret = NULL;
    keyValuePair_t *keyPairQuery_otto_client_secret = 0;
    if (otto_client_secret)
    {
        keyQuery_otto_client_secret = strdup("otto_client_secret");
        valueQuery_otto_client_secret = strdup((otto_client_secret));
        keyPairQuery_otto_client_secret = keyValuePair_create(keyQuery_otto_client_secret, valueQuery_otto_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_client_secret);
    }

    // query parameters
    char *keyQuery_otto_app_id = NULL;
    char * valueQuery_otto_app_id = NULL;
    keyValuePair_t *keyPairQuery_otto_app_id = 0;
    if (otto_app_id)
    {
        keyQuery_otto_app_id = strdup("otto_app_id");
        valueQuery_otto_app_id = strdup((otto_app_id));
        keyPairQuery_otto_app_id = keyValuePair_create(keyQuery_otto_app_id, valueQuery_otto_app_id);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_app_id);
    }

    // query parameters
    char *keyQuery_otto_refresh_token = NULL;
    char * valueQuery_otto_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_otto_refresh_token = 0;
    if (otto_refresh_token)
    {
        keyQuery_otto_refresh_token = strdup("otto_refresh_token");
        valueQuery_otto_refresh_token = strdup((otto_refresh_token));
        keyPairQuery_otto_refresh_token = keyValuePair_create(keyQuery_otto_refresh_token, valueQuery_otto_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_refresh_token);
    }

    // query parameters
    char *keyQuery_otto_environment = NULL;
    char * valueQuery_otto_environment = NULL;
    keyValuePair_t *keyPairQuery_otto_environment = 0;
    if (otto_environment)
    {
        keyQuery_otto_environment = strdup("otto_environment");
        valueQuery_otto_environment = strdup((otto_environment));
        keyPairQuery_otto_environment = keyValuePair_create(keyQuery_otto_environment, valueQuery_otto_environment);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_environment);
    }

    // query parameters
    char *keyQuery_otto_access_token = NULL;
    char * valueQuery_otto_access_token = NULL;
    keyValuePair_t *keyPairQuery_otto_access_token = 0;
    if (otto_access_token)
    {
        keyQuery_otto_access_token = strdup("otto_access_token");
        valueQuery_otto_access_token = strdup((otto_access_token));
        keyPairQuery_otto_access_token = keyValuePair_create(keyQuery_otto_access_token, valueQuery_otto_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_otto_access_token);
    }

    // query parameters
    char *keyQuery_tiktokshop_app_key = NULL;
    char * valueQuery_tiktokshop_app_key = NULL;
    keyValuePair_t *keyPairQuery_tiktokshop_app_key = 0;
    if (tiktokshop_app_key)
    {
        keyQuery_tiktokshop_app_key = strdup("tiktokshop_app_key");
        valueQuery_tiktokshop_app_key = strdup((tiktokshop_app_key));
        keyPairQuery_tiktokshop_app_key = keyValuePair_create(keyQuery_tiktokshop_app_key, valueQuery_tiktokshop_app_key);
        list_addElement(localVarQueryParameters,keyPairQuery_tiktokshop_app_key);
    }

    // query parameters
    char *keyQuery_tiktokshop_app_secret = NULL;
    char * valueQuery_tiktokshop_app_secret = NULL;
    keyValuePair_t *keyPairQuery_tiktokshop_app_secret = 0;
    if (tiktokshop_app_secret)
    {
        keyQuery_tiktokshop_app_secret = strdup("tiktokshop_app_secret");
        valueQuery_tiktokshop_app_secret = strdup((tiktokshop_app_secret));
        keyPairQuery_tiktokshop_app_secret = keyValuePair_create(keyQuery_tiktokshop_app_secret, valueQuery_tiktokshop_app_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_tiktokshop_app_secret);
    }

    // query parameters
    char *keyQuery_tiktokshop_refresh_token = NULL;
    char * valueQuery_tiktokshop_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_tiktokshop_refresh_token = 0;
    if (tiktokshop_refresh_token)
    {
        keyQuery_tiktokshop_refresh_token = strdup("tiktokshop_refresh_token");
        valueQuery_tiktokshop_refresh_token = strdup((tiktokshop_refresh_token));
        keyPairQuery_tiktokshop_refresh_token = keyValuePair_create(keyQuery_tiktokshop_refresh_token, valueQuery_tiktokshop_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_tiktokshop_refresh_token);
    }

    // query parameters
    char *keyQuery_tiktokshop_access_token = NULL;
    char * valueQuery_tiktokshop_access_token = NULL;
    keyValuePair_t *keyPairQuery_tiktokshop_access_token = 0;
    if (tiktokshop_access_token)
    {
        keyQuery_tiktokshop_access_token = strdup("tiktokshop_access_token");
        valueQuery_tiktokshop_access_token = strdup((tiktokshop_access_token));
        keyPairQuery_tiktokshop_access_token = keyValuePair_create(keyQuery_tiktokshop_access_token, valueQuery_tiktokshop_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_tiktokshop_access_token);
    }

    // query parameters
    char *keyQuery_salla_client_id = NULL;
    char * valueQuery_salla_client_id = NULL;
    keyValuePair_t *keyPairQuery_salla_client_id = 0;
    if (salla_client_id)
    {
        keyQuery_salla_client_id = strdup("salla_client_id");
        valueQuery_salla_client_id = strdup((salla_client_id));
        keyPairQuery_salla_client_id = keyValuePair_create(keyQuery_salla_client_id, valueQuery_salla_client_id);
        list_addElement(localVarQueryParameters,keyPairQuery_salla_client_id);
    }

    // query parameters
    char *keyQuery_salla_client_secret = NULL;
    char * valueQuery_salla_client_secret = NULL;
    keyValuePair_t *keyPairQuery_salla_client_secret = 0;
    if (salla_client_secret)
    {
        keyQuery_salla_client_secret = strdup("salla_client_secret");
        valueQuery_salla_client_secret = strdup((salla_client_secret));
        keyPairQuery_salla_client_secret = keyValuePair_create(keyQuery_salla_client_secret, valueQuery_salla_client_secret);
        list_addElement(localVarQueryParameters,keyPairQuery_salla_client_secret);
    }

    // query parameters
    char *keyQuery_salla_refresh_token = NULL;
    char * valueQuery_salla_refresh_token = NULL;
    keyValuePair_t *keyPairQuery_salla_refresh_token = 0;
    if (salla_refresh_token)
    {
        keyQuery_salla_refresh_token = strdup("salla_refresh_token");
        valueQuery_salla_refresh_token = strdup((salla_refresh_token));
        keyPairQuery_salla_refresh_token = keyValuePair_create(keyQuery_salla_refresh_token, valueQuery_salla_refresh_token);
        list_addElement(localVarQueryParameters,keyPairQuery_salla_refresh_token);
    }

    // query parameters
    char *keyQuery_salla_access_token = NULL;
    char * valueQuery_salla_access_token = NULL;
    keyValuePair_t *keyPairQuery_salla_access_token = 0;
    if (salla_access_token)
    {
        keyQuery_salla_access_token = strdup("salla_access_token");
        valueQuery_salla_access_token = strdup((salla_access_token));
        keyPairQuery_salla_access_token = keyValuePair_create(keyQuery_salla_access_token, valueQuery_salla_access_token);
        list_addElement(localVarQueryParameters,keyPairQuery_salla_access_token);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    account_config_update_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_config_update_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_replace_parameters){
        free(keyQuery_replace_parameters);
        keyQuery_replace_parameters = NULL;
    }
    if(valueQuery_replace_parameters){
        free(valueQuery_replace_parameters);
        valueQuery_replace_parameters = NULL;
    }
    if(keyPairQuery_replace_parameters){
        keyValuePair_free(keyPairQuery_replace_parameters);
        keyPairQuery_replace_parameters = NULL;
    }
    if(keyQuery_new_store_url){
        free(keyQuery_new_store_url);
        keyQuery_new_store_url = NULL;
    }
    if(valueQuery_new_store_url){
        free(valueQuery_new_store_url);
        valueQuery_new_store_url = NULL;
    }
    if(keyPairQuery_new_store_url){
        keyValuePair_free(keyPairQuery_new_store_url);
        keyPairQuery_new_store_url = NULL;
    }
    if(keyQuery_new_store_key){
        free(keyQuery_new_store_key);
        keyQuery_new_store_key = NULL;
    }
    if(valueQuery_new_store_key){
        free(valueQuery_new_store_key);
        valueQuery_new_store_key = NULL;
    }
    if(keyPairQuery_new_store_key){
        keyValuePair_free(keyPairQuery_new_store_key);
        keyPairQuery_new_store_key = NULL;
    }
    if(keyQuery_bridge_url){
        free(keyQuery_bridge_url);
        keyQuery_bridge_url = NULL;
    }
    if(valueQuery_bridge_url){
        free(valueQuery_bridge_url);
        valueQuery_bridge_url = NULL;
    }
    if(keyPairQuery_bridge_url){
        keyValuePair_free(keyPairQuery_bridge_url);
        keyPairQuery_bridge_url = NULL;
    }
    if(keyQuery_store_root){
        free(keyQuery_store_root);
        keyQuery_store_root = NULL;
    }
    if(valueQuery_store_root){
        free(valueQuery_store_root);
        valueQuery_store_root = NULL;
    }
    if(keyPairQuery_store_root){
        keyValuePair_free(keyPairQuery_store_root);
        keyPairQuery_store_root = NULL;
    }
    if(keyQuery_db_tables_prefix){
        free(keyQuery_db_tables_prefix);
        keyQuery_db_tables_prefix = NULL;
    }
    if(valueQuery_db_tables_prefix){
        free(valueQuery_db_tables_prefix);
        valueQuery_db_tables_prefix = NULL;
    }
    if(keyPairQuery_db_tables_prefix){
        keyValuePair_free(keyPairQuery_db_tables_prefix);
        keyPairQuery_db_tables_prefix = NULL;
    }
    if(keyQuery_user_agent){
        free(keyQuery_user_agent);
        keyQuery_user_agent = NULL;
    }
    if(valueQuery_user_agent){
        free(valueQuery_user_agent);
        valueQuery_user_agent = NULL;
    }
    if(keyPairQuery_user_agent){
        keyValuePair_free(keyPairQuery_user_agent);
        keyPairQuery_user_agent = NULL;
    }
    if(keyQuery__3dcart_private_key){
        free(keyQuery__3dcart_private_key);
        keyQuery__3dcart_private_key = NULL;
    }
    if(valueQuery__3dcart_private_key){
        free(valueQuery__3dcart_private_key);
        valueQuery__3dcart_private_key = NULL;
    }
    if(keyPairQuery__3dcart_private_key){
        keyValuePair_free(keyPairQuery__3dcart_private_key);
        keyPairQuery__3dcart_private_key = NULL;
    }
    if(keyQuery__3dcart_access_token){
        free(keyQuery__3dcart_access_token);
        keyQuery__3dcart_access_token = NULL;
    }
    if(valueQuery__3dcart_access_token){
        free(valueQuery__3dcart_access_token);
        valueQuery__3dcart_access_token = NULL;
    }
    if(keyPairQuery__3dcart_access_token){
        keyValuePair_free(keyPairQuery__3dcart_access_token);
        keyPairQuery__3dcart_access_token = NULL;
    }
    if(keyQuery__3dcartapi_api_key){
        free(keyQuery__3dcartapi_api_key);
        keyQuery__3dcartapi_api_key = NULL;
    }
    if(valueQuery__3dcartapi_api_key){
        free(valueQuery__3dcartapi_api_key);
        valueQuery__3dcartapi_api_key = NULL;
    }
    if(keyPairQuery__3dcartapi_api_key){
        keyValuePair_free(keyPairQuery__3dcartapi_api_key);
        keyPairQuery__3dcartapi_api_key = NULL;
    }
    if(keyQuery_amazon_sp_client_id){
        free(keyQuery_amazon_sp_client_id);
        keyQuery_amazon_sp_client_id = NULL;
    }
    if(valueQuery_amazon_sp_client_id){
        free(valueQuery_amazon_sp_client_id);
        valueQuery_amazon_sp_client_id = NULL;
    }
    if(keyPairQuery_amazon_sp_client_id){
        keyValuePair_free(keyPairQuery_amazon_sp_client_id);
        keyPairQuery_amazon_sp_client_id = NULL;
    }
    if(keyQuery_amazon_sp_client_secret){
        free(keyQuery_amazon_sp_client_secret);
        keyQuery_amazon_sp_client_secret = NULL;
    }
    if(valueQuery_amazon_sp_client_secret){
        free(valueQuery_amazon_sp_client_secret);
        valueQuery_amazon_sp_client_secret = NULL;
    }
    if(keyPairQuery_amazon_sp_client_secret){
        keyValuePair_free(keyPairQuery_amazon_sp_client_secret);
        keyPairQuery_amazon_sp_client_secret = NULL;
    }
    if(keyQuery_amazon_sp_refresh_token){
        free(keyQuery_amazon_sp_refresh_token);
        keyQuery_amazon_sp_refresh_token = NULL;
    }
    if(valueQuery_amazon_sp_refresh_token){
        free(valueQuery_amazon_sp_refresh_token);
        valueQuery_amazon_sp_refresh_token = NULL;
    }
    if(keyPairQuery_amazon_sp_refresh_token){
        keyValuePair_free(keyPairQuery_amazon_sp_refresh_token);
        keyPairQuery_amazon_sp_refresh_token = NULL;
    }
    if(keyQuery_amazon_sp_aws_region){
        free(keyQuery_amazon_sp_aws_region);
        keyQuery_amazon_sp_aws_region = NULL;
    }
    if(valueQuery_amazon_sp_aws_region){
        free(valueQuery_amazon_sp_aws_region);
        valueQuery_amazon_sp_aws_region = NULL;
    }
    if(keyPairQuery_amazon_sp_aws_region){
        keyValuePair_free(keyPairQuery_amazon_sp_aws_region);
        keyPairQuery_amazon_sp_aws_region = NULL;
    }
    if(keyQuery_amazon_sp_api_environment){
        free(keyQuery_amazon_sp_api_environment);
        keyQuery_amazon_sp_api_environment = NULL;
    }
    if(valueQuery_amazon_sp_api_environment){
        free(valueQuery_amazon_sp_api_environment);
        valueQuery_amazon_sp_api_environment = NULL;
    }
    if(keyPairQuery_amazon_sp_api_environment){
        keyValuePair_free(keyPairQuery_amazon_sp_api_environment);
        keyPairQuery_amazon_sp_api_environment = NULL;
    }
    if(keyQuery_amazon_seller_id){
        free(keyQuery_amazon_seller_id);
        keyQuery_amazon_seller_id = NULL;
    }
    if(valueQuery_amazon_seller_id){
        free(valueQuery_amazon_seller_id);
        valueQuery_amazon_seller_id = NULL;
    }
    if(keyPairQuery_amazon_seller_id){
        keyValuePair_free(keyPairQuery_amazon_seller_id);
        keyPairQuery_amazon_seller_id = NULL;
    }
    if(keyQuery_aspdotnetstorefront_api_user){
        free(keyQuery_aspdotnetstorefront_api_user);
        keyQuery_aspdotnetstorefront_api_user = NULL;
    }
    if(valueQuery_aspdotnetstorefront_api_user){
        free(valueQuery_aspdotnetstorefront_api_user);
        valueQuery_aspdotnetstorefront_api_user = NULL;
    }
    if(keyPairQuery_aspdotnetstorefront_api_user){
        keyValuePair_free(keyPairQuery_aspdotnetstorefront_api_user);
        keyPairQuery_aspdotnetstorefront_api_user = NULL;
    }
    if(keyQuery_aspdotnetstorefront_api_pass){
        free(keyQuery_aspdotnetstorefront_api_pass);
        keyQuery_aspdotnetstorefront_api_pass = NULL;
    }
    if(valueQuery_aspdotnetstorefront_api_pass){
        free(valueQuery_aspdotnetstorefront_api_pass);
        valueQuery_aspdotnetstorefront_api_pass = NULL;
    }
    if(keyPairQuery_aspdotnetstorefront_api_pass){
        keyValuePair_free(keyPairQuery_aspdotnetstorefront_api_pass);
        keyPairQuery_aspdotnetstorefront_api_pass = NULL;
    }
    if(keyQuery_bigcommerceapi_admin_account){
        free(keyQuery_bigcommerceapi_admin_account);
        keyQuery_bigcommerceapi_admin_account = NULL;
    }
    if(valueQuery_bigcommerceapi_admin_account){
        free(valueQuery_bigcommerceapi_admin_account);
        valueQuery_bigcommerceapi_admin_account = NULL;
    }
    if(keyPairQuery_bigcommerceapi_admin_account){
        keyValuePair_free(keyPairQuery_bigcommerceapi_admin_account);
        keyPairQuery_bigcommerceapi_admin_account = NULL;
    }
    if(keyQuery_bigcommerceapi_api_path){
        free(keyQuery_bigcommerceapi_api_path);
        keyQuery_bigcommerceapi_api_path = NULL;
    }
    if(valueQuery_bigcommerceapi_api_path){
        free(valueQuery_bigcommerceapi_api_path);
        valueQuery_bigcommerceapi_api_path = NULL;
    }
    if(keyPairQuery_bigcommerceapi_api_path){
        keyValuePair_free(keyPairQuery_bigcommerceapi_api_path);
        keyPairQuery_bigcommerceapi_api_path = NULL;
    }
    if(keyQuery_bigcommerceapi_api_key){
        free(keyQuery_bigcommerceapi_api_key);
        keyQuery_bigcommerceapi_api_key = NULL;
    }
    if(valueQuery_bigcommerceapi_api_key){
        free(valueQuery_bigcommerceapi_api_key);
        valueQuery_bigcommerceapi_api_key = NULL;
    }
    if(keyPairQuery_bigcommerceapi_api_key){
        keyValuePair_free(keyPairQuery_bigcommerceapi_api_key);
        keyPairQuery_bigcommerceapi_api_key = NULL;
    }
    if(keyQuery_bigcommerceapi_client_id){
        free(keyQuery_bigcommerceapi_client_id);
        keyQuery_bigcommerceapi_client_id = NULL;
    }
    if(valueQuery_bigcommerceapi_client_id){
        free(valueQuery_bigcommerceapi_client_id);
        valueQuery_bigcommerceapi_client_id = NULL;
    }
    if(keyPairQuery_bigcommerceapi_client_id){
        keyValuePair_free(keyPairQuery_bigcommerceapi_client_id);
        keyPairQuery_bigcommerceapi_client_id = NULL;
    }
    if(keyQuery_bigcommerceapi_access_token){
        free(keyQuery_bigcommerceapi_access_token);
        keyQuery_bigcommerceapi_access_token = NULL;
    }
    if(valueQuery_bigcommerceapi_access_token){
        free(valueQuery_bigcommerceapi_access_token);
        valueQuery_bigcommerceapi_access_token = NULL;
    }
    if(keyPairQuery_bigcommerceapi_access_token){
        keyValuePair_free(keyPairQuery_bigcommerceapi_access_token);
        keyPairQuery_bigcommerceapi_access_token = NULL;
    }
    if(keyQuery_bigcommerceapi_context){
        free(keyQuery_bigcommerceapi_context);
        keyQuery_bigcommerceapi_context = NULL;
    }
    if(valueQuery_bigcommerceapi_context){
        free(valueQuery_bigcommerceapi_context);
        valueQuery_bigcommerceapi_context = NULL;
    }
    if(keyPairQuery_bigcommerceapi_context){
        keyValuePair_free(keyPairQuery_bigcommerceapi_context);
        keyPairQuery_bigcommerceapi_context = NULL;
    }
    if(keyQuery_bol_api_key){
        free(keyQuery_bol_api_key);
        keyQuery_bol_api_key = NULL;
    }
    if(valueQuery_bol_api_key){
        free(valueQuery_bol_api_key);
        valueQuery_bol_api_key = NULL;
    }
    if(keyPairQuery_bol_api_key){
        keyValuePair_free(keyPairQuery_bol_api_key);
        keyPairQuery_bol_api_key = NULL;
    }
    if(keyQuery_bol_api_secret){
        free(keyQuery_bol_api_secret);
        keyQuery_bol_api_secret = NULL;
    }
    if(valueQuery_bol_api_secret){
        free(valueQuery_bol_api_secret);
        valueQuery_bol_api_secret = NULL;
    }
    if(keyPairQuery_bol_api_secret){
        keyValuePair_free(keyPairQuery_bol_api_secret);
        keyPairQuery_bol_api_secret = NULL;
    }
    if(keyQuery_bol_retailer_id){
        free(keyQuery_bol_retailer_id);
        keyQuery_bol_retailer_id = NULL;
    }
    if(valueQuery_bol_retailer_id){
        free(valueQuery_bol_retailer_id);
        valueQuery_bol_retailer_id = NULL;
    }
    if(keyPairQuery_bol_retailer_id){
        keyValuePair_free(keyPairQuery_bol_retailer_id);
        keyPairQuery_bol_retailer_id = NULL;
    }
    if(keyQuery_demandware_client_id){
        free(keyQuery_demandware_client_id);
        keyQuery_demandware_client_id = NULL;
    }
    if(valueQuery_demandware_client_id){
        free(valueQuery_demandware_client_id);
        valueQuery_demandware_client_id = NULL;
    }
    if(keyPairQuery_demandware_client_id){
        keyValuePair_free(keyPairQuery_demandware_client_id);
        keyPairQuery_demandware_client_id = NULL;
    }
    if(keyQuery_demandware_api_password){
        free(keyQuery_demandware_api_password);
        keyQuery_demandware_api_password = NULL;
    }
    if(valueQuery_demandware_api_password){
        free(valueQuery_demandware_api_password);
        valueQuery_demandware_api_password = NULL;
    }
    if(keyPairQuery_demandware_api_password){
        keyValuePair_free(keyPairQuery_demandware_api_password);
        keyPairQuery_demandware_api_password = NULL;
    }
    if(keyQuery_demandware_user_name){
        free(keyQuery_demandware_user_name);
        keyQuery_demandware_user_name = NULL;
    }
    if(valueQuery_demandware_user_name){
        free(valueQuery_demandware_user_name);
        valueQuery_demandware_user_name = NULL;
    }
    if(keyPairQuery_demandware_user_name){
        keyValuePair_free(keyPairQuery_demandware_user_name);
        keyPairQuery_demandware_user_name = NULL;
    }
    if(keyQuery_demandware_user_password){
        free(keyQuery_demandware_user_password);
        keyQuery_demandware_user_password = NULL;
    }
    if(valueQuery_demandware_user_password){
        free(valueQuery_demandware_user_password);
        valueQuery_demandware_user_password = NULL;
    }
    if(keyPairQuery_demandware_user_password){
        keyValuePair_free(keyPairQuery_demandware_user_password);
        keyPairQuery_demandware_user_password = NULL;
    }
    if(keyQuery_ebay_client_id){
        free(keyQuery_ebay_client_id);
        keyQuery_ebay_client_id = NULL;
    }
    if(valueQuery_ebay_client_id){
        free(valueQuery_ebay_client_id);
        valueQuery_ebay_client_id = NULL;
    }
    if(keyPairQuery_ebay_client_id){
        keyValuePair_free(keyPairQuery_ebay_client_id);
        keyPairQuery_ebay_client_id = NULL;
    }
    if(keyQuery_ebay_client_secret){
        free(keyQuery_ebay_client_secret);
        keyQuery_ebay_client_secret = NULL;
    }
    if(valueQuery_ebay_client_secret){
        free(valueQuery_ebay_client_secret);
        valueQuery_ebay_client_secret = NULL;
    }
    if(keyPairQuery_ebay_client_secret){
        keyValuePair_free(keyPairQuery_ebay_client_secret);
        keyPairQuery_ebay_client_secret = NULL;
    }
    if(keyQuery_ebay_runame){
        free(keyQuery_ebay_runame);
        keyQuery_ebay_runame = NULL;
    }
    if(valueQuery_ebay_runame){
        free(valueQuery_ebay_runame);
        valueQuery_ebay_runame = NULL;
    }
    if(keyPairQuery_ebay_runame){
        keyValuePair_free(keyPairQuery_ebay_runame);
        keyPairQuery_ebay_runame = NULL;
    }
    if(keyQuery_ebay_access_token){
        free(keyQuery_ebay_access_token);
        keyQuery_ebay_access_token = NULL;
    }
    if(valueQuery_ebay_access_token){
        free(valueQuery_ebay_access_token);
        valueQuery_ebay_access_token = NULL;
    }
    if(keyPairQuery_ebay_access_token){
        keyValuePair_free(keyPairQuery_ebay_access_token);
        keyPairQuery_ebay_access_token = NULL;
    }
    if(keyQuery_ebay_refresh_token){
        free(keyQuery_ebay_refresh_token);
        keyQuery_ebay_refresh_token = NULL;
    }
    if(valueQuery_ebay_refresh_token){
        free(valueQuery_ebay_refresh_token);
        valueQuery_ebay_refresh_token = NULL;
    }
    if(keyPairQuery_ebay_refresh_token){
        keyValuePair_free(keyPairQuery_ebay_refresh_token);
        keyPairQuery_ebay_refresh_token = NULL;
    }
    if(keyQuery_ebay_environment){
        free(keyQuery_ebay_environment);
        keyQuery_ebay_environment = NULL;
    }
    if(valueQuery_ebay_environment){
        free(valueQuery_ebay_environment);
        valueQuery_ebay_environment = NULL;
    }
    if(keyPairQuery_ebay_environment){
        keyValuePair_free(keyPairQuery_ebay_environment);
        keyPairQuery_ebay_environment = NULL;
    }
    if(keyQuery_ebay_site_id){
        free(keyQuery_ebay_site_id);
        keyQuery_ebay_site_id = NULL;
    }
    if(valueQuery_ebay_site_id){
        free(valueQuery_ebay_site_id);
        valueQuery_ebay_site_id = NULL;
    }
    if(keyPairQuery_ebay_site_id){
        keyValuePair_free(keyPairQuery_ebay_site_id);
        keyPairQuery_ebay_site_id = NULL;
    }
    if(keyQuery_ecwid_acess_token){
        free(keyQuery_ecwid_acess_token);
        keyQuery_ecwid_acess_token = NULL;
    }
    if(valueQuery_ecwid_acess_token){
        free(valueQuery_ecwid_acess_token);
        valueQuery_ecwid_acess_token = NULL;
    }
    if(keyPairQuery_ecwid_acess_token){
        keyValuePair_free(keyPairQuery_ecwid_acess_token);
        keyPairQuery_ecwid_acess_token = NULL;
    }
    if(keyQuery_ecwid_store_id){
        free(keyQuery_ecwid_store_id);
        keyQuery_ecwid_store_id = NULL;
    }
    if(valueQuery_ecwid_store_id){
        free(valueQuery_ecwid_store_id);
        valueQuery_ecwid_store_id = NULL;
    }
    if(keyPairQuery_ecwid_store_id){
        keyValuePair_free(keyPairQuery_ecwid_store_id);
        keyPairQuery_ecwid_store_id = NULL;
    }
    if(keyQuery_lazada_app_id){
        free(keyQuery_lazada_app_id);
        keyQuery_lazada_app_id = NULL;
    }
    if(valueQuery_lazada_app_id){
        free(valueQuery_lazada_app_id);
        valueQuery_lazada_app_id = NULL;
    }
    if(keyPairQuery_lazada_app_id){
        keyValuePair_free(keyPairQuery_lazada_app_id);
        keyPairQuery_lazada_app_id = NULL;
    }
    if(keyQuery_lazada_app_secret){
        free(keyQuery_lazada_app_secret);
        keyQuery_lazada_app_secret = NULL;
    }
    if(valueQuery_lazada_app_secret){
        free(valueQuery_lazada_app_secret);
        valueQuery_lazada_app_secret = NULL;
    }
    if(keyPairQuery_lazada_app_secret){
        keyValuePair_free(keyPairQuery_lazada_app_secret);
        keyPairQuery_lazada_app_secret = NULL;
    }
    if(keyQuery_lazada_refresh_token){
        free(keyQuery_lazada_refresh_token);
        keyQuery_lazada_refresh_token = NULL;
    }
    if(valueQuery_lazada_refresh_token){
        free(valueQuery_lazada_refresh_token);
        valueQuery_lazada_refresh_token = NULL;
    }
    if(keyPairQuery_lazada_refresh_token){
        keyValuePair_free(keyPairQuery_lazada_refresh_token);
        keyPairQuery_lazada_refresh_token = NULL;
    }
    if(keyQuery_lazada_region){
        free(keyQuery_lazada_region);
        keyQuery_lazada_region = NULL;
    }
    if(valueQuery_lazada_region){
        free(valueQuery_lazada_region);
        valueQuery_lazada_region = NULL;
    }
    if(keyPairQuery_lazada_region){
        keyValuePair_free(keyPairQuery_lazada_region);
        keyPairQuery_lazada_region = NULL;
    }
    if(keyQuery_etsy_keystring){
        free(keyQuery_etsy_keystring);
        keyQuery_etsy_keystring = NULL;
    }
    if(valueQuery_etsy_keystring){
        free(valueQuery_etsy_keystring);
        valueQuery_etsy_keystring = NULL;
    }
    if(keyPairQuery_etsy_keystring){
        keyValuePair_free(keyPairQuery_etsy_keystring);
        keyPairQuery_etsy_keystring = NULL;
    }
    if(keyQuery_etsy_shared_secret){
        free(keyQuery_etsy_shared_secret);
        keyQuery_etsy_shared_secret = NULL;
    }
    if(valueQuery_etsy_shared_secret){
        free(valueQuery_etsy_shared_secret);
        valueQuery_etsy_shared_secret = NULL;
    }
    if(keyPairQuery_etsy_shared_secret){
        keyValuePair_free(keyPairQuery_etsy_shared_secret);
        keyPairQuery_etsy_shared_secret = NULL;
    }
    if(keyQuery_etsy_access_token){
        free(keyQuery_etsy_access_token);
        keyQuery_etsy_access_token = NULL;
    }
    if(valueQuery_etsy_access_token){
        free(valueQuery_etsy_access_token);
        valueQuery_etsy_access_token = NULL;
    }
    if(keyPairQuery_etsy_access_token){
        keyValuePair_free(keyPairQuery_etsy_access_token);
        keyPairQuery_etsy_access_token = NULL;
    }
    if(keyQuery_etsy_token_secret){
        free(keyQuery_etsy_token_secret);
        keyQuery_etsy_token_secret = NULL;
    }
    if(valueQuery_etsy_token_secret){
        free(valueQuery_etsy_token_secret);
        valueQuery_etsy_token_secret = NULL;
    }
    if(keyPairQuery_etsy_token_secret){
        keyValuePair_free(keyPairQuery_etsy_token_secret);
        keyPairQuery_etsy_token_secret = NULL;
    }
    if(keyQuery_etsy_client_id){
        free(keyQuery_etsy_client_id);
        keyQuery_etsy_client_id = NULL;
    }
    if(valueQuery_etsy_client_id){
        free(valueQuery_etsy_client_id);
        valueQuery_etsy_client_id = NULL;
    }
    if(keyPairQuery_etsy_client_id){
        keyValuePair_free(keyPairQuery_etsy_client_id);
        keyPairQuery_etsy_client_id = NULL;
    }
    if(keyQuery_etsy_refresh_token){
        free(keyQuery_etsy_refresh_token);
        keyQuery_etsy_refresh_token = NULL;
    }
    if(valueQuery_etsy_refresh_token){
        free(valueQuery_etsy_refresh_token);
        valueQuery_etsy_refresh_token = NULL;
    }
    if(keyPairQuery_etsy_refresh_token){
        keyValuePair_free(keyPairQuery_etsy_refresh_token);
        keyPairQuery_etsy_refresh_token = NULL;
    }
    if(keyQuery_facebook_app_id){
        free(keyQuery_facebook_app_id);
        keyQuery_facebook_app_id = NULL;
    }
    if(valueQuery_facebook_app_id){
        free(valueQuery_facebook_app_id);
        valueQuery_facebook_app_id = NULL;
    }
    if(keyPairQuery_facebook_app_id){
        keyValuePair_free(keyPairQuery_facebook_app_id);
        keyPairQuery_facebook_app_id = NULL;
    }
    if(keyQuery_facebook_app_secret){
        free(keyQuery_facebook_app_secret);
        keyQuery_facebook_app_secret = NULL;
    }
    if(valueQuery_facebook_app_secret){
        free(valueQuery_facebook_app_secret);
        valueQuery_facebook_app_secret = NULL;
    }
    if(keyPairQuery_facebook_app_secret){
        keyValuePair_free(keyPairQuery_facebook_app_secret);
        keyPairQuery_facebook_app_secret = NULL;
    }
    if(keyQuery_facebook_access_token){
        free(keyQuery_facebook_access_token);
        keyQuery_facebook_access_token = NULL;
    }
    if(valueQuery_facebook_access_token){
        free(valueQuery_facebook_access_token);
        valueQuery_facebook_access_token = NULL;
    }
    if(keyPairQuery_facebook_access_token){
        keyValuePair_free(keyPairQuery_facebook_access_token);
        keyPairQuery_facebook_access_token = NULL;
    }
    if(keyQuery_facebook_business_id){
        free(keyQuery_facebook_business_id);
        keyQuery_facebook_business_id = NULL;
    }
    if(valueQuery_facebook_business_id){
        free(valueQuery_facebook_business_id);
        valueQuery_facebook_business_id = NULL;
    }
    if(keyPairQuery_facebook_business_id){
        keyValuePair_free(keyPairQuery_facebook_business_id);
        keyPairQuery_facebook_business_id = NULL;
    }
    if(keyQuery_neto_api_key){
        free(keyQuery_neto_api_key);
        keyQuery_neto_api_key = NULL;
    }
    if(valueQuery_neto_api_key){
        free(valueQuery_neto_api_key);
        valueQuery_neto_api_key = NULL;
    }
    if(keyPairQuery_neto_api_key){
        keyValuePair_free(keyPairQuery_neto_api_key);
        keyPairQuery_neto_api_key = NULL;
    }
    if(keyQuery_neto_api_username){
        free(keyQuery_neto_api_username);
        keyQuery_neto_api_username = NULL;
    }
    if(valueQuery_neto_api_username){
        free(valueQuery_neto_api_username);
        valueQuery_neto_api_username = NULL;
    }
    if(keyPairQuery_neto_api_username){
        keyValuePair_free(keyPairQuery_neto_api_username);
        keyPairQuery_neto_api_username = NULL;
    }
    if(keyQuery_shopline_access_token){
        free(keyQuery_shopline_access_token);
        keyQuery_shopline_access_token = NULL;
    }
    if(valueQuery_shopline_access_token){
        free(valueQuery_shopline_access_token);
        valueQuery_shopline_access_token = NULL;
    }
    if(keyPairQuery_shopline_access_token){
        keyValuePair_free(keyPairQuery_shopline_access_token);
        keyPairQuery_shopline_access_token = NULL;
    }
    if(keyQuery_shopline_app_key){
        free(keyQuery_shopline_app_key);
        keyQuery_shopline_app_key = NULL;
    }
    if(valueQuery_shopline_app_key){
        free(valueQuery_shopline_app_key);
        valueQuery_shopline_app_key = NULL;
    }
    if(keyPairQuery_shopline_app_key){
        keyValuePair_free(keyPairQuery_shopline_app_key);
        keyPairQuery_shopline_app_key = NULL;
    }
    if(keyQuery_shopline_app_secret){
        free(keyQuery_shopline_app_secret);
        keyQuery_shopline_app_secret = NULL;
    }
    if(valueQuery_shopline_app_secret){
        free(valueQuery_shopline_app_secret);
        valueQuery_shopline_app_secret = NULL;
    }
    if(keyPairQuery_shopline_app_secret){
        keyValuePair_free(keyPairQuery_shopline_app_secret);
        keyPairQuery_shopline_app_secret = NULL;
    }
    if(keyQuery_shopline_shared_secret){
        free(keyQuery_shopline_shared_secret);
        keyQuery_shopline_shared_secret = NULL;
    }
    if(valueQuery_shopline_shared_secret){
        free(valueQuery_shopline_shared_secret);
        valueQuery_shopline_shared_secret = NULL;
    }
    if(keyPairQuery_shopline_shared_secret){
        keyValuePair_free(keyPairQuery_shopline_shared_secret);
        keyPairQuery_shopline_shared_secret = NULL;
    }
    if(keyQuery_shopify_access_token){
        free(keyQuery_shopify_access_token);
        keyQuery_shopify_access_token = NULL;
    }
    if(valueQuery_shopify_access_token){
        free(valueQuery_shopify_access_token);
        valueQuery_shopify_access_token = NULL;
    }
    if(keyPairQuery_shopify_access_token){
        keyValuePair_free(keyPairQuery_shopify_access_token);
        keyPairQuery_shopify_access_token = NULL;
    }
    if(keyQuery_shopify_api_key){
        free(keyQuery_shopify_api_key);
        keyQuery_shopify_api_key = NULL;
    }
    if(valueQuery_shopify_api_key){
        free(valueQuery_shopify_api_key);
        valueQuery_shopify_api_key = NULL;
    }
    if(keyPairQuery_shopify_api_key){
        keyValuePair_free(keyPairQuery_shopify_api_key);
        keyPairQuery_shopify_api_key = NULL;
    }
    if(keyQuery_shopify_api_password){
        free(keyQuery_shopify_api_password);
        keyQuery_shopify_api_password = NULL;
    }
    if(valueQuery_shopify_api_password){
        free(valueQuery_shopify_api_password);
        valueQuery_shopify_api_password = NULL;
    }
    if(keyPairQuery_shopify_api_password){
        keyValuePair_free(keyPairQuery_shopify_api_password);
        keyPairQuery_shopify_api_password = NULL;
    }
    if(keyQuery_shopify_shared_secret){
        free(keyQuery_shopify_shared_secret);
        keyQuery_shopify_shared_secret = NULL;
    }
    if(valueQuery_shopify_shared_secret){
        free(valueQuery_shopify_shared_secret);
        valueQuery_shopify_shared_secret = NULL;
    }
    if(keyPairQuery_shopify_shared_secret){
        keyValuePair_free(keyPairQuery_shopify_shared_secret);
        keyPairQuery_shopify_shared_secret = NULL;
    }
    if(keyQuery_shoplazza_access_token){
        free(keyQuery_shoplazza_access_token);
        keyQuery_shoplazza_access_token = NULL;
    }
    if(valueQuery_shoplazza_access_token){
        free(valueQuery_shoplazza_access_token);
        valueQuery_shoplazza_access_token = NULL;
    }
    if(keyPairQuery_shoplazza_access_token){
        keyValuePair_free(keyPairQuery_shoplazza_access_token);
        keyPairQuery_shoplazza_access_token = NULL;
    }
    if(keyQuery_shoplazza_shared_secret){
        free(keyQuery_shoplazza_shared_secret);
        keyQuery_shoplazza_shared_secret = NULL;
    }
    if(valueQuery_shoplazza_shared_secret){
        free(valueQuery_shoplazza_shared_secret);
        valueQuery_shoplazza_shared_secret = NULL;
    }
    if(keyPairQuery_shoplazza_shared_secret){
        keyValuePair_free(keyPairQuery_shoplazza_shared_secret);
        keyPairQuery_shoplazza_shared_secret = NULL;
    }
    if(keyQuery_miva_access_token){
        free(keyQuery_miva_access_token);
        keyQuery_miva_access_token = NULL;
    }
    if(valueQuery_miva_access_token){
        free(valueQuery_miva_access_token);
        valueQuery_miva_access_token = NULL;
    }
    if(keyPairQuery_miva_access_token){
        keyValuePair_free(keyPairQuery_miva_access_token);
        keyPairQuery_miva_access_token = NULL;
    }
    if(keyQuery_miva_signature){
        free(keyQuery_miva_signature);
        keyQuery_miva_signature = NULL;
    }
    if(valueQuery_miva_signature){
        free(valueQuery_miva_signature);
        valueQuery_miva_signature = NULL;
    }
    if(keyPairQuery_miva_signature){
        keyValuePair_free(keyPairQuery_miva_signature);
        keyPairQuery_miva_signature = NULL;
    }
    if(keyQuery_shopware_access_key){
        free(keyQuery_shopware_access_key);
        keyQuery_shopware_access_key = NULL;
    }
    if(valueQuery_shopware_access_key){
        free(valueQuery_shopware_access_key);
        valueQuery_shopware_access_key = NULL;
    }
    if(keyPairQuery_shopware_access_key){
        keyValuePair_free(keyPairQuery_shopware_access_key);
        keyPairQuery_shopware_access_key = NULL;
    }
    if(keyQuery_shopware_api_key){
        free(keyQuery_shopware_api_key);
        keyQuery_shopware_api_key = NULL;
    }
    if(valueQuery_shopware_api_key){
        free(valueQuery_shopware_api_key);
        valueQuery_shopware_api_key = NULL;
    }
    if(keyPairQuery_shopware_api_key){
        keyValuePair_free(keyPairQuery_shopware_api_key);
        keyPairQuery_shopware_api_key = NULL;
    }
    if(keyQuery_shopware_api_secret){
        free(keyQuery_shopware_api_secret);
        keyQuery_shopware_api_secret = NULL;
    }
    if(valueQuery_shopware_api_secret){
        free(valueQuery_shopware_api_secret);
        valueQuery_shopware_api_secret = NULL;
    }
    if(keyPairQuery_shopware_api_secret){
        keyValuePair_free(keyPairQuery_shopware_api_secret);
        keyPairQuery_shopware_api_secret = NULL;
    }
    if(keyQuery_bigcartel_user_name){
        free(keyQuery_bigcartel_user_name);
        keyQuery_bigcartel_user_name = NULL;
    }
    if(valueQuery_bigcartel_user_name){
        free(valueQuery_bigcartel_user_name);
        valueQuery_bigcartel_user_name = NULL;
    }
    if(keyPairQuery_bigcartel_user_name){
        keyValuePair_free(keyPairQuery_bigcartel_user_name);
        keyPairQuery_bigcartel_user_name = NULL;
    }
    if(keyQuery_bigcartel_password){
        free(keyQuery_bigcartel_password);
        keyQuery_bigcartel_password = NULL;
    }
    if(valueQuery_bigcartel_password){
        free(valueQuery_bigcartel_password);
        valueQuery_bigcartel_password = NULL;
    }
    if(keyPairQuery_bigcartel_password){
        keyValuePair_free(keyPairQuery_bigcartel_password);
        keyPairQuery_bigcartel_password = NULL;
    }
    if(keyQuery_volusion_login){
        free(keyQuery_volusion_login);
        keyQuery_volusion_login = NULL;
    }
    if(valueQuery_volusion_login){
        free(valueQuery_volusion_login);
        valueQuery_volusion_login = NULL;
    }
    if(keyPairQuery_volusion_login){
        keyValuePair_free(keyPairQuery_volusion_login);
        keyPairQuery_volusion_login = NULL;
    }
    if(keyQuery_volusion_password){
        free(keyQuery_volusion_password);
        keyQuery_volusion_password = NULL;
    }
    if(valueQuery_volusion_password){
        free(valueQuery_volusion_password);
        valueQuery_volusion_password = NULL;
    }
    if(keyPairQuery_volusion_password){
        keyValuePair_free(keyPairQuery_volusion_password);
        keyPairQuery_volusion_password = NULL;
    }
    if(keyQuery_walmart_client_id){
        free(keyQuery_walmart_client_id);
        keyQuery_walmart_client_id = NULL;
    }
    if(valueQuery_walmart_client_id){
        free(valueQuery_walmart_client_id);
        valueQuery_walmart_client_id = NULL;
    }
    if(keyPairQuery_walmart_client_id){
        keyValuePair_free(keyPairQuery_walmart_client_id);
        keyPairQuery_walmart_client_id = NULL;
    }
    if(keyQuery_walmart_client_secret){
        free(keyQuery_walmart_client_secret);
        keyQuery_walmart_client_secret = NULL;
    }
    if(valueQuery_walmart_client_secret){
        free(valueQuery_walmart_client_secret);
        valueQuery_walmart_client_secret = NULL;
    }
    if(keyPairQuery_walmart_client_secret){
        keyValuePair_free(keyPairQuery_walmart_client_secret);
        keyPairQuery_walmart_client_secret = NULL;
    }
    if(keyQuery_walmart_environment){
        free(keyQuery_walmart_environment);
        keyQuery_walmart_environment = NULL;
    }
    if(valueQuery_walmart_environment){
        free(valueQuery_walmart_environment);
        valueQuery_walmart_environment = NULL;
    }
    if(keyPairQuery_walmart_environment){
        keyValuePair_free(keyPairQuery_walmart_environment);
        keyPairQuery_walmart_environment = NULL;
    }
    if(keyQuery_walmart_channel_type){
        free(keyQuery_walmart_channel_type);
        keyQuery_walmart_channel_type = NULL;
    }
    if(valueQuery_walmart_channel_type){
        free(valueQuery_walmart_channel_type);
        valueQuery_walmart_channel_type = NULL;
    }
    if(keyPairQuery_walmart_channel_type){
        keyValuePair_free(keyPairQuery_walmart_channel_type);
        keyPairQuery_walmart_channel_type = NULL;
    }
    if(keyQuery_walmart_region){
        free(keyQuery_walmart_region);
        keyQuery_walmart_region = NULL;
    }
    if(valueQuery_walmart_region){
        free(valueQuery_walmart_region);
        valueQuery_walmart_region = NULL;
    }
    if(keyPairQuery_walmart_region){
        keyValuePair_free(keyPairQuery_walmart_region);
        keyPairQuery_walmart_region = NULL;
    }
    if(keyQuery_square_client_id){
        free(keyQuery_square_client_id);
        keyQuery_square_client_id = NULL;
    }
    if(valueQuery_square_client_id){
        free(valueQuery_square_client_id);
        valueQuery_square_client_id = NULL;
    }
    if(keyPairQuery_square_client_id){
        keyValuePair_free(keyPairQuery_square_client_id);
        keyPairQuery_square_client_id = NULL;
    }
    if(keyQuery_square_client_secret){
        free(keyQuery_square_client_secret);
        keyQuery_square_client_secret = NULL;
    }
    if(valueQuery_square_client_secret){
        free(valueQuery_square_client_secret);
        valueQuery_square_client_secret = NULL;
    }
    if(keyPairQuery_square_client_secret){
        keyValuePair_free(keyPairQuery_square_client_secret);
        keyPairQuery_square_client_secret = NULL;
    }
    if(keyQuery_square_refresh_token){
        free(keyQuery_square_refresh_token);
        keyQuery_square_refresh_token = NULL;
    }
    if(valueQuery_square_refresh_token){
        free(valueQuery_square_refresh_token);
        valueQuery_square_refresh_token = NULL;
    }
    if(keyPairQuery_square_refresh_token){
        keyValuePair_free(keyPairQuery_square_refresh_token);
        keyPairQuery_square_refresh_token = NULL;
    }
    if(keyQuery_squarespace_api_key){
        free(keyQuery_squarespace_api_key);
        keyQuery_squarespace_api_key = NULL;
    }
    if(valueQuery_squarespace_api_key){
        free(valueQuery_squarespace_api_key);
        valueQuery_squarespace_api_key = NULL;
    }
    if(keyPairQuery_squarespace_api_key){
        keyValuePair_free(keyPairQuery_squarespace_api_key);
        keyPairQuery_squarespace_api_key = NULL;
    }
    if(keyQuery_squarespace_client_id){
        free(keyQuery_squarespace_client_id);
        keyQuery_squarespace_client_id = NULL;
    }
    if(valueQuery_squarespace_client_id){
        free(valueQuery_squarespace_client_id);
        valueQuery_squarespace_client_id = NULL;
    }
    if(keyPairQuery_squarespace_client_id){
        keyValuePair_free(keyPairQuery_squarespace_client_id);
        keyPairQuery_squarespace_client_id = NULL;
    }
    if(keyQuery_squarespace_client_secret){
        free(keyQuery_squarespace_client_secret);
        keyQuery_squarespace_client_secret = NULL;
    }
    if(valueQuery_squarespace_client_secret){
        free(valueQuery_squarespace_client_secret);
        valueQuery_squarespace_client_secret = NULL;
    }
    if(keyPairQuery_squarespace_client_secret){
        keyValuePair_free(keyPairQuery_squarespace_client_secret);
        keyPairQuery_squarespace_client_secret = NULL;
    }
    if(keyQuery_squarespace_access_token){
        free(keyQuery_squarespace_access_token);
        keyQuery_squarespace_access_token = NULL;
    }
    if(valueQuery_squarespace_access_token){
        free(valueQuery_squarespace_access_token);
        valueQuery_squarespace_access_token = NULL;
    }
    if(keyPairQuery_squarespace_access_token){
        keyValuePair_free(keyPairQuery_squarespace_access_token);
        keyPairQuery_squarespace_access_token = NULL;
    }
    if(keyQuery_squarespace_refresh_token){
        free(keyQuery_squarespace_refresh_token);
        keyQuery_squarespace_refresh_token = NULL;
    }
    if(valueQuery_squarespace_refresh_token){
        free(valueQuery_squarespace_refresh_token);
        valueQuery_squarespace_refresh_token = NULL;
    }
    if(keyPairQuery_squarespace_refresh_token){
        keyValuePair_free(keyPairQuery_squarespace_refresh_token);
        keyPairQuery_squarespace_refresh_token = NULL;
    }
    if(keyQuery_hybris_client_id){
        free(keyQuery_hybris_client_id);
        keyQuery_hybris_client_id = NULL;
    }
    if(valueQuery_hybris_client_id){
        free(valueQuery_hybris_client_id);
        valueQuery_hybris_client_id = NULL;
    }
    if(keyPairQuery_hybris_client_id){
        keyValuePair_free(keyPairQuery_hybris_client_id);
        keyPairQuery_hybris_client_id = NULL;
    }
    if(keyQuery_hybris_client_secret){
        free(keyQuery_hybris_client_secret);
        keyQuery_hybris_client_secret = NULL;
    }
    if(valueQuery_hybris_client_secret){
        free(valueQuery_hybris_client_secret);
        valueQuery_hybris_client_secret = NULL;
    }
    if(keyPairQuery_hybris_client_secret){
        keyValuePair_free(keyPairQuery_hybris_client_secret);
        keyPairQuery_hybris_client_secret = NULL;
    }
    if(keyQuery_hybris_username){
        free(keyQuery_hybris_username);
        keyQuery_hybris_username = NULL;
    }
    if(valueQuery_hybris_username){
        free(valueQuery_hybris_username);
        valueQuery_hybris_username = NULL;
    }
    if(keyPairQuery_hybris_username){
        keyValuePair_free(keyPairQuery_hybris_username);
        keyPairQuery_hybris_username = NULL;
    }
    if(keyQuery_hybris_password){
        free(keyQuery_hybris_password);
        keyQuery_hybris_password = NULL;
    }
    if(valueQuery_hybris_password){
        free(valueQuery_hybris_password);
        valueQuery_hybris_password = NULL;
    }
    if(keyPairQuery_hybris_password){
        keyValuePair_free(keyPairQuery_hybris_password);
        keyPairQuery_hybris_password = NULL;
    }
    if(keyQuery_lightspeed_api_key){
        free(keyQuery_lightspeed_api_key);
        keyQuery_lightspeed_api_key = NULL;
    }
    if(valueQuery_lightspeed_api_key){
        free(valueQuery_lightspeed_api_key);
        valueQuery_lightspeed_api_key = NULL;
    }
    if(keyPairQuery_lightspeed_api_key){
        keyValuePair_free(keyPairQuery_lightspeed_api_key);
        keyPairQuery_lightspeed_api_key = NULL;
    }
    if(keyQuery_lightspeed_api_secret){
        free(keyQuery_lightspeed_api_secret);
        keyQuery_lightspeed_api_secret = NULL;
    }
    if(valueQuery_lightspeed_api_secret){
        free(valueQuery_lightspeed_api_secret);
        valueQuery_lightspeed_api_secret = NULL;
    }
    if(keyPairQuery_lightspeed_api_secret){
        keyValuePair_free(keyPairQuery_lightspeed_api_secret);
        keyPairQuery_lightspeed_api_secret = NULL;
    }
    if(keyQuery_commercehq_api_key){
        free(keyQuery_commercehq_api_key);
        keyQuery_commercehq_api_key = NULL;
    }
    if(valueQuery_commercehq_api_key){
        free(valueQuery_commercehq_api_key);
        valueQuery_commercehq_api_key = NULL;
    }
    if(keyPairQuery_commercehq_api_key){
        keyValuePair_free(keyPairQuery_commercehq_api_key);
        keyPairQuery_commercehq_api_key = NULL;
    }
    if(keyQuery_commercehq_api_password){
        free(keyQuery_commercehq_api_password);
        keyQuery_commercehq_api_password = NULL;
    }
    if(valueQuery_commercehq_api_password){
        free(valueQuery_commercehq_api_password);
        valueQuery_commercehq_api_password = NULL;
    }
    if(keyPairQuery_commercehq_api_password){
        keyValuePair_free(keyPairQuery_commercehq_api_password);
        keyPairQuery_commercehq_api_password = NULL;
    }
    if(keyQuery_wc_consumer_key){
        free(keyQuery_wc_consumer_key);
        keyQuery_wc_consumer_key = NULL;
    }
    if(valueQuery_wc_consumer_key){
        free(valueQuery_wc_consumer_key);
        valueQuery_wc_consumer_key = NULL;
    }
    if(keyPairQuery_wc_consumer_key){
        keyValuePair_free(keyPairQuery_wc_consumer_key);
        keyPairQuery_wc_consumer_key = NULL;
    }
    if(keyQuery_wc_consumer_secret){
        free(keyQuery_wc_consumer_secret);
        keyQuery_wc_consumer_secret = NULL;
    }
    if(valueQuery_wc_consumer_secret){
        free(valueQuery_wc_consumer_secret);
        valueQuery_wc_consumer_secret = NULL;
    }
    if(keyPairQuery_wc_consumer_secret){
        keyValuePair_free(keyPairQuery_wc_consumer_secret);
        keyPairQuery_wc_consumer_secret = NULL;
    }
    if(keyQuery_magento_consumer_key){
        free(keyQuery_magento_consumer_key);
        keyQuery_magento_consumer_key = NULL;
    }
    if(valueQuery_magento_consumer_key){
        free(valueQuery_magento_consumer_key);
        valueQuery_magento_consumer_key = NULL;
    }
    if(keyPairQuery_magento_consumer_key){
        keyValuePair_free(keyPairQuery_magento_consumer_key);
        keyPairQuery_magento_consumer_key = NULL;
    }
    if(keyQuery_magento_consumer_secret){
        free(keyQuery_magento_consumer_secret);
        keyQuery_magento_consumer_secret = NULL;
    }
    if(valueQuery_magento_consumer_secret){
        free(valueQuery_magento_consumer_secret);
        valueQuery_magento_consumer_secret = NULL;
    }
    if(keyPairQuery_magento_consumer_secret){
        keyValuePair_free(keyPairQuery_magento_consumer_secret);
        keyPairQuery_magento_consumer_secret = NULL;
    }
    if(keyQuery_magento_access_token){
        free(keyQuery_magento_access_token);
        keyQuery_magento_access_token = NULL;
    }
    if(valueQuery_magento_access_token){
        free(valueQuery_magento_access_token);
        valueQuery_magento_access_token = NULL;
    }
    if(keyPairQuery_magento_access_token){
        keyValuePair_free(keyPairQuery_magento_access_token);
        keyPairQuery_magento_access_token = NULL;
    }
    if(keyQuery_magento_token_secret){
        free(keyQuery_magento_token_secret);
        keyQuery_magento_token_secret = NULL;
    }
    if(valueQuery_magento_token_secret){
        free(valueQuery_magento_token_secret);
        valueQuery_magento_token_secret = NULL;
    }
    if(keyPairQuery_magento_token_secret){
        keyValuePair_free(keyPairQuery_magento_token_secret);
        keyPairQuery_magento_token_secret = NULL;
    }
    if(keyQuery_prestashop_webservice_key){
        free(keyQuery_prestashop_webservice_key);
        keyQuery_prestashop_webservice_key = NULL;
    }
    if(valueQuery_prestashop_webservice_key){
        free(valueQuery_prestashop_webservice_key);
        valueQuery_prestashop_webservice_key = NULL;
    }
    if(keyPairQuery_prestashop_webservice_key){
        keyValuePair_free(keyPairQuery_prestashop_webservice_key);
        keyPairQuery_prestashop_webservice_key = NULL;
    }
    if(keyQuery_wix_app_id){
        free(keyQuery_wix_app_id);
        keyQuery_wix_app_id = NULL;
    }
    if(valueQuery_wix_app_id){
        free(valueQuery_wix_app_id);
        valueQuery_wix_app_id = NULL;
    }
    if(keyPairQuery_wix_app_id){
        keyValuePair_free(keyPairQuery_wix_app_id);
        keyPairQuery_wix_app_id = NULL;
    }
    if(keyQuery_wix_app_secret_key){
        free(keyQuery_wix_app_secret_key);
        keyQuery_wix_app_secret_key = NULL;
    }
    if(valueQuery_wix_app_secret_key){
        free(valueQuery_wix_app_secret_key);
        valueQuery_wix_app_secret_key = NULL;
    }
    if(keyPairQuery_wix_app_secret_key){
        keyValuePair_free(keyPairQuery_wix_app_secret_key);
        keyPairQuery_wix_app_secret_key = NULL;
    }
    if(keyQuery_wix_instance_id){
        free(keyQuery_wix_instance_id);
        keyQuery_wix_instance_id = NULL;
    }
    if(valueQuery_wix_instance_id){
        free(valueQuery_wix_instance_id);
        valueQuery_wix_instance_id = NULL;
    }
    if(keyPairQuery_wix_instance_id){
        keyValuePair_free(keyPairQuery_wix_instance_id);
        keyPairQuery_wix_instance_id = NULL;
    }
    if(keyQuery_wix_refresh_token){
        free(keyQuery_wix_refresh_token);
        keyQuery_wix_refresh_token = NULL;
    }
    if(valueQuery_wix_refresh_token){
        free(valueQuery_wix_refresh_token);
        valueQuery_wix_refresh_token = NULL;
    }
    if(keyPairQuery_wix_refresh_token){
        keyValuePair_free(keyPairQuery_wix_refresh_token);
        keyPairQuery_wix_refresh_token = NULL;
    }
    if(keyQuery_mercado_libre_app_id){
        free(keyQuery_mercado_libre_app_id);
        keyQuery_mercado_libre_app_id = NULL;
    }
    if(valueQuery_mercado_libre_app_id){
        free(valueQuery_mercado_libre_app_id);
        valueQuery_mercado_libre_app_id = NULL;
    }
    if(keyPairQuery_mercado_libre_app_id){
        keyValuePair_free(keyPairQuery_mercado_libre_app_id);
        keyPairQuery_mercado_libre_app_id = NULL;
    }
    if(keyQuery_mercado_libre_app_secret_key){
        free(keyQuery_mercado_libre_app_secret_key);
        keyQuery_mercado_libre_app_secret_key = NULL;
    }
    if(valueQuery_mercado_libre_app_secret_key){
        free(valueQuery_mercado_libre_app_secret_key);
        valueQuery_mercado_libre_app_secret_key = NULL;
    }
    if(keyPairQuery_mercado_libre_app_secret_key){
        keyValuePair_free(keyPairQuery_mercado_libre_app_secret_key);
        keyPairQuery_mercado_libre_app_secret_key = NULL;
    }
    if(keyQuery_mercado_libre_refresh_token){
        free(keyQuery_mercado_libre_refresh_token);
        keyQuery_mercado_libre_refresh_token = NULL;
    }
    if(valueQuery_mercado_libre_refresh_token){
        free(valueQuery_mercado_libre_refresh_token);
        valueQuery_mercado_libre_refresh_token = NULL;
    }
    if(keyPairQuery_mercado_libre_refresh_token){
        keyValuePair_free(keyPairQuery_mercado_libre_refresh_token);
        keyPairQuery_mercado_libre_refresh_token = NULL;
    }
    if(keyQuery_zid_client_id){
        free(keyQuery_zid_client_id);
        keyQuery_zid_client_id = NULL;
    }
    if(valueQuery_zid_client_id){
        free(valueQuery_zid_client_id);
        valueQuery_zid_client_id = NULL;
    }
    if(keyPairQuery_zid_client_id){
        keyValuePair_free(keyPairQuery_zid_client_id);
        keyPairQuery_zid_client_id = NULL;
    }
    if(keyQuery_zid_client_secret){
        free(keyQuery_zid_client_secret);
        keyQuery_zid_client_secret = NULL;
    }
    if(valueQuery_zid_client_secret){
        free(valueQuery_zid_client_secret);
        valueQuery_zid_client_secret = NULL;
    }
    if(keyPairQuery_zid_client_secret){
        keyValuePair_free(keyPairQuery_zid_client_secret);
        keyPairQuery_zid_client_secret = NULL;
    }
    if(keyQuery_zid_access_token){
        free(keyQuery_zid_access_token);
        keyQuery_zid_access_token = NULL;
    }
    if(valueQuery_zid_access_token){
        free(valueQuery_zid_access_token);
        valueQuery_zid_access_token = NULL;
    }
    if(keyPairQuery_zid_access_token){
        keyValuePair_free(keyPairQuery_zid_access_token);
        keyPairQuery_zid_access_token = NULL;
    }
    if(keyQuery_zid_authorization){
        free(keyQuery_zid_authorization);
        keyQuery_zid_authorization = NULL;
    }
    if(valueQuery_zid_authorization){
        free(valueQuery_zid_authorization);
        valueQuery_zid_authorization = NULL;
    }
    if(keyPairQuery_zid_authorization){
        keyValuePair_free(keyPairQuery_zid_authorization);
        keyPairQuery_zid_authorization = NULL;
    }
    if(keyQuery_zid_refresh_token){
        free(keyQuery_zid_refresh_token);
        keyQuery_zid_refresh_token = NULL;
    }
    if(valueQuery_zid_refresh_token){
        free(valueQuery_zid_refresh_token);
        valueQuery_zid_refresh_token = NULL;
    }
    if(keyPairQuery_zid_refresh_token){
        keyValuePair_free(keyPairQuery_zid_refresh_token);
        keyPairQuery_zid_refresh_token = NULL;
    }
    if(keyQuery_flipkart_client_id){
        free(keyQuery_flipkart_client_id);
        keyQuery_flipkart_client_id = NULL;
    }
    if(valueQuery_flipkart_client_id){
        free(valueQuery_flipkart_client_id);
        valueQuery_flipkart_client_id = NULL;
    }
    if(keyPairQuery_flipkart_client_id){
        keyValuePair_free(keyPairQuery_flipkart_client_id);
        keyPairQuery_flipkart_client_id = NULL;
    }
    if(keyQuery_flipkart_client_secret){
        free(keyQuery_flipkart_client_secret);
        keyQuery_flipkart_client_secret = NULL;
    }
    if(valueQuery_flipkart_client_secret){
        free(valueQuery_flipkart_client_secret);
        valueQuery_flipkart_client_secret = NULL;
    }
    if(keyPairQuery_flipkart_client_secret){
        keyValuePair_free(keyPairQuery_flipkart_client_secret);
        keyPairQuery_flipkart_client_secret = NULL;
    }
    if(keyQuery_allegro_client_id){
        free(keyQuery_allegro_client_id);
        keyQuery_allegro_client_id = NULL;
    }
    if(valueQuery_allegro_client_id){
        free(valueQuery_allegro_client_id);
        valueQuery_allegro_client_id = NULL;
    }
    if(keyPairQuery_allegro_client_id){
        keyValuePair_free(keyPairQuery_allegro_client_id);
        keyPairQuery_allegro_client_id = NULL;
    }
    if(keyQuery_allegro_client_secret){
        free(keyQuery_allegro_client_secret);
        keyQuery_allegro_client_secret = NULL;
    }
    if(valueQuery_allegro_client_secret){
        free(valueQuery_allegro_client_secret);
        valueQuery_allegro_client_secret = NULL;
    }
    if(keyPairQuery_allegro_client_secret){
        keyValuePair_free(keyPairQuery_allegro_client_secret);
        keyPairQuery_allegro_client_secret = NULL;
    }
    if(keyQuery_allegro_access_token){
        free(keyQuery_allegro_access_token);
        keyQuery_allegro_access_token = NULL;
    }
    if(valueQuery_allegro_access_token){
        free(valueQuery_allegro_access_token);
        valueQuery_allegro_access_token = NULL;
    }
    if(keyPairQuery_allegro_access_token){
        keyValuePair_free(keyPairQuery_allegro_access_token);
        keyPairQuery_allegro_access_token = NULL;
    }
    if(keyQuery_allegro_refresh_token){
        free(keyQuery_allegro_refresh_token);
        keyQuery_allegro_refresh_token = NULL;
    }
    if(valueQuery_allegro_refresh_token){
        free(valueQuery_allegro_refresh_token);
        valueQuery_allegro_refresh_token = NULL;
    }
    if(keyPairQuery_allegro_refresh_token){
        keyValuePair_free(keyPairQuery_allegro_refresh_token);
        keyPairQuery_allegro_refresh_token = NULL;
    }
    if(keyQuery_allegro_environment){
        free(keyQuery_allegro_environment);
        keyQuery_allegro_environment = NULL;
    }
    if(valueQuery_allegro_environment){
        free(valueQuery_allegro_environment);
        valueQuery_allegro_environment = NULL;
    }
    if(keyPairQuery_allegro_environment){
        keyValuePair_free(keyPairQuery_allegro_environment);
        keyPairQuery_allegro_environment = NULL;
    }
    if(keyQuery_zoho_client_id){
        free(keyQuery_zoho_client_id);
        keyQuery_zoho_client_id = NULL;
    }
    if(valueQuery_zoho_client_id){
        free(valueQuery_zoho_client_id);
        valueQuery_zoho_client_id = NULL;
    }
    if(keyPairQuery_zoho_client_id){
        keyValuePair_free(keyPairQuery_zoho_client_id);
        keyPairQuery_zoho_client_id = NULL;
    }
    if(keyQuery_zoho_client_secret){
        free(keyQuery_zoho_client_secret);
        keyQuery_zoho_client_secret = NULL;
    }
    if(valueQuery_zoho_client_secret){
        free(valueQuery_zoho_client_secret);
        valueQuery_zoho_client_secret = NULL;
    }
    if(keyPairQuery_zoho_client_secret){
        keyValuePair_free(keyPairQuery_zoho_client_secret);
        keyPairQuery_zoho_client_secret = NULL;
    }
    if(keyQuery_zoho_refresh_token){
        free(keyQuery_zoho_refresh_token);
        keyQuery_zoho_refresh_token = NULL;
    }
    if(valueQuery_zoho_refresh_token){
        free(valueQuery_zoho_refresh_token);
        valueQuery_zoho_refresh_token = NULL;
    }
    if(keyPairQuery_zoho_refresh_token){
        keyValuePair_free(keyPairQuery_zoho_refresh_token);
        keyPairQuery_zoho_refresh_token = NULL;
    }
    if(keyQuery_zoho_region){
        free(keyQuery_zoho_region);
        keyQuery_zoho_region = NULL;
    }
    if(valueQuery_zoho_region){
        free(valueQuery_zoho_region);
        valueQuery_zoho_region = NULL;
    }
    if(keyPairQuery_zoho_region){
        keyValuePair_free(keyPairQuery_zoho_region);
        keyPairQuery_zoho_region = NULL;
    }
    if(keyQuery_tiendanube_user_id){
        free(keyQuery_tiendanube_user_id);
        keyQuery_tiendanube_user_id = NULL;
    }
    if(valueQuery_tiendanube_user_id){
        free(valueQuery_tiendanube_user_id);
        valueQuery_tiendanube_user_id = NULL;
    }
    if(keyPairQuery_tiendanube_user_id){
        keyValuePair_free(keyPairQuery_tiendanube_user_id);
        keyPairQuery_tiendanube_user_id = NULL;
    }
    if(keyQuery_tiendanube_access_token){
        free(keyQuery_tiendanube_access_token);
        keyQuery_tiendanube_access_token = NULL;
    }
    if(valueQuery_tiendanube_access_token){
        free(valueQuery_tiendanube_access_token);
        valueQuery_tiendanube_access_token = NULL;
    }
    if(keyPairQuery_tiendanube_access_token){
        keyValuePair_free(keyPairQuery_tiendanube_access_token);
        keyPairQuery_tiendanube_access_token = NULL;
    }
    if(keyQuery_tiendanube_client_secret){
        free(keyQuery_tiendanube_client_secret);
        keyQuery_tiendanube_client_secret = NULL;
    }
    if(valueQuery_tiendanube_client_secret){
        free(valueQuery_tiendanube_client_secret);
        valueQuery_tiendanube_client_secret = NULL;
    }
    if(keyPairQuery_tiendanube_client_secret){
        keyValuePair_free(keyPairQuery_tiendanube_client_secret);
        keyPairQuery_tiendanube_client_secret = NULL;
    }
    if(keyQuery_otto_client_id){
        free(keyQuery_otto_client_id);
        keyQuery_otto_client_id = NULL;
    }
    if(valueQuery_otto_client_id){
        free(valueQuery_otto_client_id);
        valueQuery_otto_client_id = NULL;
    }
    if(keyPairQuery_otto_client_id){
        keyValuePair_free(keyPairQuery_otto_client_id);
        keyPairQuery_otto_client_id = NULL;
    }
    if(keyQuery_otto_client_secret){
        free(keyQuery_otto_client_secret);
        keyQuery_otto_client_secret = NULL;
    }
    if(valueQuery_otto_client_secret){
        free(valueQuery_otto_client_secret);
        valueQuery_otto_client_secret = NULL;
    }
    if(keyPairQuery_otto_client_secret){
        keyValuePair_free(keyPairQuery_otto_client_secret);
        keyPairQuery_otto_client_secret = NULL;
    }
    if(keyQuery_otto_app_id){
        free(keyQuery_otto_app_id);
        keyQuery_otto_app_id = NULL;
    }
    if(valueQuery_otto_app_id){
        free(valueQuery_otto_app_id);
        valueQuery_otto_app_id = NULL;
    }
    if(keyPairQuery_otto_app_id){
        keyValuePair_free(keyPairQuery_otto_app_id);
        keyPairQuery_otto_app_id = NULL;
    }
    if(keyQuery_otto_refresh_token){
        free(keyQuery_otto_refresh_token);
        keyQuery_otto_refresh_token = NULL;
    }
    if(valueQuery_otto_refresh_token){
        free(valueQuery_otto_refresh_token);
        valueQuery_otto_refresh_token = NULL;
    }
    if(keyPairQuery_otto_refresh_token){
        keyValuePair_free(keyPairQuery_otto_refresh_token);
        keyPairQuery_otto_refresh_token = NULL;
    }
    if(keyQuery_otto_environment){
        free(keyQuery_otto_environment);
        keyQuery_otto_environment = NULL;
    }
    if(valueQuery_otto_environment){
        free(valueQuery_otto_environment);
        valueQuery_otto_environment = NULL;
    }
    if(keyPairQuery_otto_environment){
        keyValuePair_free(keyPairQuery_otto_environment);
        keyPairQuery_otto_environment = NULL;
    }
    if(keyQuery_otto_access_token){
        free(keyQuery_otto_access_token);
        keyQuery_otto_access_token = NULL;
    }
    if(valueQuery_otto_access_token){
        free(valueQuery_otto_access_token);
        valueQuery_otto_access_token = NULL;
    }
    if(keyPairQuery_otto_access_token){
        keyValuePair_free(keyPairQuery_otto_access_token);
        keyPairQuery_otto_access_token = NULL;
    }
    if(keyQuery_tiktokshop_app_key){
        free(keyQuery_tiktokshop_app_key);
        keyQuery_tiktokshop_app_key = NULL;
    }
    if(valueQuery_tiktokshop_app_key){
        free(valueQuery_tiktokshop_app_key);
        valueQuery_tiktokshop_app_key = NULL;
    }
    if(keyPairQuery_tiktokshop_app_key){
        keyValuePair_free(keyPairQuery_tiktokshop_app_key);
        keyPairQuery_tiktokshop_app_key = NULL;
    }
    if(keyQuery_tiktokshop_app_secret){
        free(keyQuery_tiktokshop_app_secret);
        keyQuery_tiktokshop_app_secret = NULL;
    }
    if(valueQuery_tiktokshop_app_secret){
        free(valueQuery_tiktokshop_app_secret);
        valueQuery_tiktokshop_app_secret = NULL;
    }
    if(keyPairQuery_tiktokshop_app_secret){
        keyValuePair_free(keyPairQuery_tiktokshop_app_secret);
        keyPairQuery_tiktokshop_app_secret = NULL;
    }
    if(keyQuery_tiktokshop_refresh_token){
        free(keyQuery_tiktokshop_refresh_token);
        keyQuery_tiktokshop_refresh_token = NULL;
    }
    if(valueQuery_tiktokshop_refresh_token){
        free(valueQuery_tiktokshop_refresh_token);
        valueQuery_tiktokshop_refresh_token = NULL;
    }
    if(keyPairQuery_tiktokshop_refresh_token){
        keyValuePair_free(keyPairQuery_tiktokshop_refresh_token);
        keyPairQuery_tiktokshop_refresh_token = NULL;
    }
    if(keyQuery_tiktokshop_access_token){
        free(keyQuery_tiktokshop_access_token);
        keyQuery_tiktokshop_access_token = NULL;
    }
    if(valueQuery_tiktokshop_access_token){
        free(valueQuery_tiktokshop_access_token);
        valueQuery_tiktokshop_access_token = NULL;
    }
    if(keyPairQuery_tiktokshop_access_token){
        keyValuePair_free(keyPairQuery_tiktokshop_access_token);
        keyPairQuery_tiktokshop_access_token = NULL;
    }
    if(keyQuery_salla_client_id){
        free(keyQuery_salla_client_id);
        keyQuery_salla_client_id = NULL;
    }
    if(valueQuery_salla_client_id){
        free(valueQuery_salla_client_id);
        valueQuery_salla_client_id = NULL;
    }
    if(keyPairQuery_salla_client_id){
        keyValuePair_free(keyPairQuery_salla_client_id);
        keyPairQuery_salla_client_id = NULL;
    }
    if(keyQuery_salla_client_secret){
        free(keyQuery_salla_client_secret);
        keyQuery_salla_client_secret = NULL;
    }
    if(valueQuery_salla_client_secret){
        free(valueQuery_salla_client_secret);
        valueQuery_salla_client_secret = NULL;
    }
    if(keyPairQuery_salla_client_secret){
        keyValuePair_free(keyPairQuery_salla_client_secret);
        keyPairQuery_salla_client_secret = NULL;
    }
    if(keyQuery_salla_refresh_token){
        free(keyQuery_salla_refresh_token);
        keyQuery_salla_refresh_token = NULL;
    }
    if(valueQuery_salla_refresh_token){
        free(valueQuery_salla_refresh_token);
        valueQuery_salla_refresh_token = NULL;
    }
    if(keyPairQuery_salla_refresh_token){
        keyValuePair_free(keyPairQuery_salla_refresh_token);
        keyPairQuery_salla_refresh_token = NULL;
    }
    if(keyQuery_salla_access_token){
        free(keyQuery_salla_access_token);
        keyQuery_salla_access_token = NULL;
    }
    if(valueQuery_salla_access_token){
        free(valueQuery_salla_access_token);
        valueQuery_salla_access_token = NULL;
    }
    if(keyPairQuery_salla_access_token){
        keyValuePair_free(keyPairQuery_salla_access_token);
        keyPairQuery_salla_access_token = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// account.failed_webhooks
//
// If the callback of your service for some reason could not accept webhooks from API2Cart, then with the help of this method you can get a list of missed webhooks to perform synchronization again using entity_id. Please note that we keep such records for 24 hours.
//
account_failed_webhooks_200_response_t*
AccountAPI_accountFailedWebhooks(apiClient_t *apiClient, int *start, int *count, char *ids)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/account.failed_webhooks.json");





    // query parameters
    char *keyQuery_start = NULL;
    char * valueQuery_start = NULL;
    keyValuePair_t *keyPairQuery_start = 0;
    if (start)
    {
        keyQuery_start = strdup("start");
        valueQuery_start = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_start, MAX_NUMBER_LENGTH, "%d", *start);
        keyPairQuery_start = keyValuePair_create(keyQuery_start, valueQuery_start);
        list_addElement(localVarQueryParameters,keyPairQuery_start);
    }

    // query parameters
    char *keyQuery_count = NULL;
    char * valueQuery_count = NULL;
    keyValuePair_t *keyPairQuery_count = 0;
    if (count)
    {
        keyQuery_count = strdup("count");
        valueQuery_count = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_count, MAX_NUMBER_LENGTH, "%d", *count);
        keyPairQuery_count = keyValuePair_create(keyQuery_count, valueQuery_count);
        list_addElement(localVarQueryParameters,keyPairQuery_count);
    }

    // query parameters
    char *keyQuery_ids = NULL;
    char * valueQuery_ids = NULL;
    keyValuePair_t *keyPairQuery_ids = 0;
    if (ids)
    {
        keyQuery_ids = strdup("ids");
        valueQuery_ids = strdup((ids));
        keyPairQuery_ids = keyValuePair_create(keyQuery_ids, valueQuery_ids);
        list_addElement(localVarQueryParameters,keyPairQuery_ids);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    account_failed_webhooks_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_failed_webhooks_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_start){
        free(keyQuery_start);
        keyQuery_start = NULL;
    }
    if(valueQuery_start){
        free(valueQuery_start);
        valueQuery_start = NULL;
    }
    if(keyPairQuery_start){
        keyValuePair_free(keyPairQuery_start);
        keyPairQuery_start = NULL;
    }
    if(keyQuery_count){
        free(keyQuery_count);
        keyQuery_count = NULL;
    }
    if(valueQuery_count){
        free(valueQuery_count);
        valueQuery_count = NULL;
    }
    if(keyPairQuery_count){
        keyValuePair_free(keyPairQuery_count);
        keyPairQuery_count = NULL;
    }
    if(keyQuery_ids){
        free(keyQuery_ids);
        keyQuery_ids = NULL;
    }
    if(valueQuery_ids){
        free(valueQuery_ids);
        valueQuery_ids = NULL;
    }
    if(keyPairQuery_ids){
        keyValuePair_free(keyPairQuery_ids);
        keyPairQuery_ids = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// account.supported_platforms
//
// Use this method to retrieve a list of supported platforms and the sets of parameters required for connecting to each of them. Note: some platforms may have multiple connection methods so that the response will contain multiple sets of parameters.
//
account_supported_platforms_200_response_t*
AccountAPI_accountSupportedPlatforms(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/account.supported_platforms.json");




    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    //nonprimitive not container
    account_supported_platforms_200_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *AccountAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = account_supported_platforms_200_response_parseFromJSON(AccountAPIlocalVarJSON);
        cJSON_Delete(AccountAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

