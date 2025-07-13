#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_create.h"


char* cart_create_cart_id_ToString(api2cart_openapi_cart_create_CARTID_e cart_id) {
    char* cart_idArray[] =  { "NULL", "3DCart", "3DCartApi", "AceShop", "AmazonSP", "AspDotNetStorefront", "BigCartel", "BigcommerceApi", "Bol", "CommerceHQ", "Creloaded", "Cscart", "Cubecart", "Demandware", "EBay", "Ecwid", "EtsyAPIv3", "Flipkart", "Gambio", "Hybris", "JooCart", "Lazada", "LightSpeed", "Magento1212", "Magento2Api", "MercadoLibre", "MijoShop", "Miva", "Neto", "Opencart14", "Oscmax2", "Oscommerce22ms2", "Otto", "Oxid", "Pinnacle", "Prestashop", "PrestashopApi", "SSPremium", "Salla", "Shopify", "Shopee", "Shoplazza", "Shopline", "Shopware", "ShopwareApi", "Square", "Squarespace", "Temu", "Tiendanube", "TikTokShop", "Tomatocart", "Ubercart", "Virtuemart", "Volusion", "WPecommerce", "Walmart", "WebAsyst", "Wix", "Woocommerce", "WoocommerceApi", "Xcart", "Xtcommerce", "XtcommerceVeyton", "Zencart137", "Zid", "Zoey", "Zoho" };
    return cart_idArray[cart_id];
}

api2cart_openapi_cart_create_CARTID_e cart_create_cart_id_FromString(char* cart_id){
    int stringToReturn = 0;
    char *cart_idArray[] =  { "NULL", "3DCart", "3DCartApi", "AceShop", "AmazonSP", "AspDotNetStorefront", "BigCartel", "BigcommerceApi", "Bol", "CommerceHQ", "Creloaded", "Cscart", "Cubecart", "Demandware", "EBay", "Ecwid", "EtsyAPIv3", "Flipkart", "Gambio", "Hybris", "JooCart", "Lazada", "LightSpeed", "Magento1212", "Magento2Api", "MercadoLibre", "MijoShop", "Miva", "Neto", "Opencart14", "Oscmax2", "Oscommerce22ms2", "Otto", "Oxid", "Pinnacle", "Prestashop", "PrestashopApi", "SSPremium", "Salla", "Shopify", "Shopee", "Shoplazza", "Shopline", "Shopware", "ShopwareApi", "Square", "Squarespace", "Temu", "Tiendanube", "TikTokShop", "Tomatocart", "Ubercart", "Virtuemart", "Volusion", "WPecommerce", "Walmart", "WebAsyst", "Wix", "Woocommerce", "WoocommerceApi", "Xcart", "Xtcommerce", "XtcommerceVeyton", "Zencart137", "Zid", "Zoey", "Zoho" };
    size_t sizeofArray = sizeof(cart_idArray) / sizeof(cart_idArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(cart_id, cart_idArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static cart_create_t *cart_create_create_internal(
    api2cart_openapi_cart_create_CARTID_e cart_id,
    char *store_url,
    char *bridge_url,
    char *store_root,
    char *store_key,
    char *shared_secret,
    int validate_version,
    int verify,
    char *db_tables_prefix,
    char *user_agent,
    char *ftp_host,
    char *ftp_user,
    char *ftp_password,
    int ftp_port,
    char *ftp_store_dir,
    char *api_key_3dcart,
    char *admin_account,
    char *api_path,
    char *api_key_bigcommerce,
    char *client_id,
    char *access_token,
    char *context,
    char *access_token,
    char *api_key_shopify,
    char *api_password,
    char *access_token_shopify,
    char *api_key,
    char *api_username,
    char *encrypted_password,
    char *login,
    char *api_user_adnsf,
    char *api_pass,
    char *private_key,
    char *app_token,
    char *etsy_keystring,
    char *etsy_shared_secret,
    char *token_secret,
    char *etsy_client_id,
    char *etsy_refresh_token,
    char *ebay_client_id,
    char *ebay_client_secret,
    char *ebay_runame,
    char *ebay_access_token,
    char *ebay_refresh_token,
    char *ebay_environment,
    int ebay_site_id,
    char *dw_client_id,
    char *dw_api_pass,
    char *demandware_user_name,
    char *demandware_user_password,
    char *store_id,
    char *seller_id,
    char *environment,
    char *hybris_client_id,
    char *hybris_client_secret,
    char *hybris_username,
    char *hybris_password,
    list_t *hybris_websites,
    char *walmart_client_id,
    char *walmart_client_secret,
    char *walmart_environment,
    char *walmart_channel_type,
    char *walmart_region,
    char *lightspeed_api_key,
    char *lightspeed_api_secret,
    char *shoplazza_access_token,
    char *shoplazza_shared_secret,
    char *shopware_access_key,
    char *shopware_api_key,
    char *shopware_api_secret,
    char *commercehq_api_key,
    char *commercehq_api_password,
    char *_3dcart_private_key,
    char *_3dcart_access_token,
    char *wc_consumer_key,
    char *wc_consumer_secret,
    char *magento_consumer_key,
    char *magento_consumer_secret,
    char *magento_access_token,
    char *magento_token_secret,
    char *prestashop_webservice_key,
    char *wix_app_id,
    char *wix_app_secret_key,
    char *wix_instance_id,
    char *wix_refresh_token,
    char *mercado_libre_app_id,
    char *mercado_libre_app_secret_key,
    char *mercado_libre_refresh_token,
    int zid_client_id,
    char *zid_client_secret,
    char *zid_access_token,
    char *zid_authorization,
    char *zid_refresh_token,
    char *flipkart_client_id,
    char *flipkart_client_secret,
    char *allegro_client_id,
    char *allegro_client_secret,
    char *allegro_access_token,
    char *allegro_refresh_token,
    char *allegro_environment
    ) {
    cart_create_t *cart_create_local_var = malloc(sizeof(cart_create_t));
    if (!cart_create_local_var) {
        return NULL;
    }
    cart_create_local_var->cart_id = cart_id;
    cart_create_local_var->store_url = store_url;
    cart_create_local_var->bridge_url = bridge_url;
    cart_create_local_var->store_root = store_root;
    cart_create_local_var->store_key = store_key;
    cart_create_local_var->shared_secret = shared_secret;
    cart_create_local_var->validate_version = validate_version;
    cart_create_local_var->verify = verify;
    cart_create_local_var->db_tables_prefix = db_tables_prefix;
    cart_create_local_var->user_agent = user_agent;
    cart_create_local_var->ftp_host = ftp_host;
    cart_create_local_var->ftp_user = ftp_user;
    cart_create_local_var->ftp_password = ftp_password;
    cart_create_local_var->ftp_port = ftp_port;
    cart_create_local_var->ftp_store_dir = ftp_store_dir;
    cart_create_local_var->api_key_3dcart = api_key_3dcart;
    cart_create_local_var->admin_account = admin_account;
    cart_create_local_var->api_path = api_path;
    cart_create_local_var->api_key_bigcommerce = api_key_bigcommerce;
    cart_create_local_var->client_id = client_id;
    cart_create_local_var->access_token = access_token;
    cart_create_local_var->context = context;
    cart_create_local_var->access_token = access_token;
    cart_create_local_var->api_key_shopify = api_key_shopify;
    cart_create_local_var->api_password = api_password;
    cart_create_local_var->access_token_shopify = access_token_shopify;
    cart_create_local_var->api_key = api_key;
    cart_create_local_var->api_username = api_username;
    cart_create_local_var->encrypted_password = encrypted_password;
    cart_create_local_var->login = login;
    cart_create_local_var->api_user_adnsf = api_user_adnsf;
    cart_create_local_var->api_pass = api_pass;
    cart_create_local_var->private_key = private_key;
    cart_create_local_var->app_token = app_token;
    cart_create_local_var->etsy_keystring = etsy_keystring;
    cart_create_local_var->etsy_shared_secret = etsy_shared_secret;
    cart_create_local_var->token_secret = token_secret;
    cart_create_local_var->etsy_client_id = etsy_client_id;
    cart_create_local_var->etsy_refresh_token = etsy_refresh_token;
    cart_create_local_var->ebay_client_id = ebay_client_id;
    cart_create_local_var->ebay_client_secret = ebay_client_secret;
    cart_create_local_var->ebay_runame = ebay_runame;
    cart_create_local_var->ebay_access_token = ebay_access_token;
    cart_create_local_var->ebay_refresh_token = ebay_refresh_token;
    cart_create_local_var->ebay_environment = ebay_environment;
    cart_create_local_var->ebay_site_id = ebay_site_id;
    cart_create_local_var->dw_client_id = dw_client_id;
    cart_create_local_var->dw_api_pass = dw_api_pass;
    cart_create_local_var->demandware_user_name = demandware_user_name;
    cart_create_local_var->demandware_user_password = demandware_user_password;
    cart_create_local_var->store_id = store_id;
    cart_create_local_var->seller_id = seller_id;
    cart_create_local_var->environment = environment;
    cart_create_local_var->hybris_client_id = hybris_client_id;
    cart_create_local_var->hybris_client_secret = hybris_client_secret;
    cart_create_local_var->hybris_username = hybris_username;
    cart_create_local_var->hybris_password = hybris_password;
    cart_create_local_var->hybris_websites = hybris_websites;
    cart_create_local_var->walmart_client_id = walmart_client_id;
    cart_create_local_var->walmart_client_secret = walmart_client_secret;
    cart_create_local_var->walmart_environment = walmart_environment;
    cart_create_local_var->walmart_channel_type = walmart_channel_type;
    cart_create_local_var->walmart_region = walmart_region;
    cart_create_local_var->lightspeed_api_key = lightspeed_api_key;
    cart_create_local_var->lightspeed_api_secret = lightspeed_api_secret;
    cart_create_local_var->shoplazza_access_token = shoplazza_access_token;
    cart_create_local_var->shoplazza_shared_secret = shoplazza_shared_secret;
    cart_create_local_var->shopware_access_key = shopware_access_key;
    cart_create_local_var->shopware_api_key = shopware_api_key;
    cart_create_local_var->shopware_api_secret = shopware_api_secret;
    cart_create_local_var->commercehq_api_key = commercehq_api_key;
    cart_create_local_var->commercehq_api_password = commercehq_api_password;
    cart_create_local_var->_3dcart_private_key = _3dcart_private_key;
    cart_create_local_var->_3dcart_access_token = _3dcart_access_token;
    cart_create_local_var->wc_consumer_key = wc_consumer_key;
    cart_create_local_var->wc_consumer_secret = wc_consumer_secret;
    cart_create_local_var->magento_consumer_key = magento_consumer_key;
    cart_create_local_var->magento_consumer_secret = magento_consumer_secret;
    cart_create_local_var->magento_access_token = magento_access_token;
    cart_create_local_var->magento_token_secret = magento_token_secret;
    cart_create_local_var->prestashop_webservice_key = prestashop_webservice_key;
    cart_create_local_var->wix_app_id = wix_app_id;
    cart_create_local_var->wix_app_secret_key = wix_app_secret_key;
    cart_create_local_var->wix_instance_id = wix_instance_id;
    cart_create_local_var->wix_refresh_token = wix_refresh_token;
    cart_create_local_var->mercado_libre_app_id = mercado_libre_app_id;
    cart_create_local_var->mercado_libre_app_secret_key = mercado_libre_app_secret_key;
    cart_create_local_var->mercado_libre_refresh_token = mercado_libre_refresh_token;
    cart_create_local_var->zid_client_id = zid_client_id;
    cart_create_local_var->zid_client_secret = zid_client_secret;
    cart_create_local_var->zid_access_token = zid_access_token;
    cart_create_local_var->zid_authorization = zid_authorization;
    cart_create_local_var->zid_refresh_token = zid_refresh_token;
    cart_create_local_var->flipkart_client_id = flipkart_client_id;
    cart_create_local_var->flipkart_client_secret = flipkart_client_secret;
    cart_create_local_var->allegro_client_id = allegro_client_id;
    cart_create_local_var->allegro_client_secret = allegro_client_secret;
    cart_create_local_var->allegro_access_token = allegro_access_token;
    cart_create_local_var->allegro_refresh_token = allegro_refresh_token;
    cart_create_local_var->allegro_environment = allegro_environment;

    cart_create_local_var->_library_owned = 1;
    return cart_create_local_var;
}

__attribute__((deprecated)) cart_create_t *cart_create_create(
    api2cart_openapi_cart_create_CARTID_e cart_id,
    char *store_url,
    char *bridge_url,
    char *store_root,
    char *store_key,
    char *shared_secret,
    int validate_version,
    int verify,
    char *db_tables_prefix,
    char *user_agent,
    char *ftp_host,
    char *ftp_user,
    char *ftp_password,
    int ftp_port,
    char *ftp_store_dir,
    char *api_key_3dcart,
    char *admin_account,
    char *api_path,
    char *api_key_bigcommerce,
    char *client_id,
    char *access_token,
    char *context,
    char *access_token,
    char *api_key_shopify,
    char *api_password,
    char *access_token_shopify,
    char *api_key,
    char *api_username,
    char *encrypted_password,
    char *login,
    char *api_user_adnsf,
    char *api_pass,
    char *private_key,
    char *app_token,
    char *etsy_keystring,
    char *etsy_shared_secret,
    char *token_secret,
    char *etsy_client_id,
    char *etsy_refresh_token,
    char *ebay_client_id,
    char *ebay_client_secret,
    char *ebay_runame,
    char *ebay_access_token,
    char *ebay_refresh_token,
    char *ebay_environment,
    int ebay_site_id,
    char *dw_client_id,
    char *dw_api_pass,
    char *demandware_user_name,
    char *demandware_user_password,
    char *store_id,
    char *seller_id,
    char *environment,
    char *hybris_client_id,
    char *hybris_client_secret,
    char *hybris_username,
    char *hybris_password,
    list_t *hybris_websites,
    char *walmart_client_id,
    char *walmart_client_secret,
    char *walmart_environment,
    char *walmart_channel_type,
    char *walmart_region,
    char *lightspeed_api_key,
    char *lightspeed_api_secret,
    char *shoplazza_access_token,
    char *shoplazza_shared_secret,
    char *shopware_access_key,
    char *shopware_api_key,
    char *shopware_api_secret,
    char *commercehq_api_key,
    char *commercehq_api_password,
    char *_3dcart_private_key,
    char *_3dcart_access_token,
    char *wc_consumer_key,
    char *wc_consumer_secret,
    char *magento_consumer_key,
    char *magento_consumer_secret,
    char *magento_access_token,
    char *magento_token_secret,
    char *prestashop_webservice_key,
    char *wix_app_id,
    char *wix_app_secret_key,
    char *wix_instance_id,
    char *wix_refresh_token,
    char *mercado_libre_app_id,
    char *mercado_libre_app_secret_key,
    char *mercado_libre_refresh_token,
    int zid_client_id,
    char *zid_client_secret,
    char *zid_access_token,
    char *zid_authorization,
    char *zid_refresh_token,
    char *flipkart_client_id,
    char *flipkart_client_secret,
    char *allegro_client_id,
    char *allegro_client_secret,
    char *allegro_access_token,
    char *allegro_refresh_token,
    char *allegro_environment
    ) {
    return cart_create_create_internal (
        cart_id,
        store_url,
        bridge_url,
        store_root,
        store_key,
        shared_secret,
        validate_version,
        verify,
        db_tables_prefix,
        user_agent,
        ftp_host,
        ftp_user,
        ftp_password,
        ftp_port,
        ftp_store_dir,
        api_key_3dcart,
        admin_account,
        api_path,
        api_key_bigcommerce,
        client_id,
        access_token,
        context,
        access_token,
        api_key_shopify,
        api_password,
        access_token_shopify,
        api_key,
        api_username,
        encrypted_password,
        login,
        api_user_adnsf,
        api_pass,
        private_key,
        app_token,
        etsy_keystring,
        etsy_shared_secret,
        token_secret,
        etsy_client_id,
        etsy_refresh_token,
        ebay_client_id,
        ebay_client_secret,
        ebay_runame,
        ebay_access_token,
        ebay_refresh_token,
        ebay_environment,
        ebay_site_id,
        dw_client_id,
        dw_api_pass,
        demandware_user_name,
        demandware_user_password,
        store_id,
        seller_id,
        environment,
        hybris_client_id,
        hybris_client_secret,
        hybris_username,
        hybris_password,
        hybris_websites,
        walmart_client_id,
        walmart_client_secret,
        walmart_environment,
        walmart_channel_type,
        walmart_region,
        lightspeed_api_key,
        lightspeed_api_secret,
        shoplazza_access_token,
        shoplazza_shared_secret,
        shopware_access_key,
        shopware_api_key,
        shopware_api_secret,
        commercehq_api_key,
        commercehq_api_password,
        _3dcart_private_key,
        _3dcart_access_token,
        wc_consumer_key,
        wc_consumer_secret,
        magento_consumer_key,
        magento_consumer_secret,
        magento_access_token,
        magento_token_secret,
        prestashop_webservice_key,
        wix_app_id,
        wix_app_secret_key,
        wix_instance_id,
        wix_refresh_token,
        mercado_libre_app_id,
        mercado_libre_app_secret_key,
        mercado_libre_refresh_token,
        zid_client_id,
        zid_client_secret,
        zid_access_token,
        zid_authorization,
        zid_refresh_token,
        flipkart_client_id,
        flipkart_client_secret,
        allegro_client_id,
        allegro_client_secret,
        allegro_access_token,
        allegro_refresh_token,
        allegro_environment
        );
}

void cart_create_free(cart_create_t *cart_create) {
    if(NULL == cart_create){
        return ;
    }
    if(cart_create->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cart_create_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cart_create->store_url) {
        free(cart_create->store_url);
        cart_create->store_url = NULL;
    }
    if (cart_create->bridge_url) {
        free(cart_create->bridge_url);
        cart_create->bridge_url = NULL;
    }
    if (cart_create->store_root) {
        free(cart_create->store_root);
        cart_create->store_root = NULL;
    }
    if (cart_create->store_key) {
        free(cart_create->store_key);
        cart_create->store_key = NULL;
    }
    if (cart_create->shared_secret) {
        free(cart_create->shared_secret);
        cart_create->shared_secret = NULL;
    }
    if (cart_create->db_tables_prefix) {
        free(cart_create->db_tables_prefix);
        cart_create->db_tables_prefix = NULL;
    }
    if (cart_create->user_agent) {
        free(cart_create->user_agent);
        cart_create->user_agent = NULL;
    }
    if (cart_create->ftp_host) {
        free(cart_create->ftp_host);
        cart_create->ftp_host = NULL;
    }
    if (cart_create->ftp_user) {
        free(cart_create->ftp_user);
        cart_create->ftp_user = NULL;
    }
    if (cart_create->ftp_password) {
        free(cart_create->ftp_password);
        cart_create->ftp_password = NULL;
    }
    if (cart_create->ftp_store_dir) {
        free(cart_create->ftp_store_dir);
        cart_create->ftp_store_dir = NULL;
    }
    if (cart_create->api_key_3dcart) {
        free(cart_create->api_key_3dcart);
        cart_create->api_key_3dcart = NULL;
    }
    if (cart_create->admin_account) {
        free(cart_create->admin_account);
        cart_create->admin_account = NULL;
    }
    if (cart_create->api_path) {
        free(cart_create->api_path);
        cart_create->api_path = NULL;
    }
    if (cart_create->api_key_bigcommerce) {
        free(cart_create->api_key_bigcommerce);
        cart_create->api_key_bigcommerce = NULL;
    }
    if (cart_create->client_id) {
        free(cart_create->client_id);
        cart_create->client_id = NULL;
    }
    if (cart_create->access_token) {
        free(cart_create->access_token);
        cart_create->access_token = NULL;
    }
    if (cart_create->context) {
        free(cart_create->context);
        cart_create->context = NULL;
    }
    if (cart_create->access_token) {
        free(cart_create->access_token);
        cart_create->access_token = NULL;
    }
    if (cart_create->api_key_shopify) {
        free(cart_create->api_key_shopify);
        cart_create->api_key_shopify = NULL;
    }
    if (cart_create->api_password) {
        free(cart_create->api_password);
        cart_create->api_password = NULL;
    }
    if (cart_create->access_token_shopify) {
        free(cart_create->access_token_shopify);
        cart_create->access_token_shopify = NULL;
    }
    if (cart_create->api_key) {
        free(cart_create->api_key);
        cart_create->api_key = NULL;
    }
    if (cart_create->api_username) {
        free(cart_create->api_username);
        cart_create->api_username = NULL;
    }
    if (cart_create->encrypted_password) {
        free(cart_create->encrypted_password);
        cart_create->encrypted_password = NULL;
    }
    if (cart_create->login) {
        free(cart_create->login);
        cart_create->login = NULL;
    }
    if (cart_create->api_user_adnsf) {
        free(cart_create->api_user_adnsf);
        cart_create->api_user_adnsf = NULL;
    }
    if (cart_create->api_pass) {
        free(cart_create->api_pass);
        cart_create->api_pass = NULL;
    }
    if (cart_create->private_key) {
        free(cart_create->private_key);
        cart_create->private_key = NULL;
    }
    if (cart_create->app_token) {
        free(cart_create->app_token);
        cart_create->app_token = NULL;
    }
    if (cart_create->etsy_keystring) {
        free(cart_create->etsy_keystring);
        cart_create->etsy_keystring = NULL;
    }
    if (cart_create->etsy_shared_secret) {
        free(cart_create->etsy_shared_secret);
        cart_create->etsy_shared_secret = NULL;
    }
    if (cart_create->token_secret) {
        free(cart_create->token_secret);
        cart_create->token_secret = NULL;
    }
    if (cart_create->etsy_client_id) {
        free(cart_create->etsy_client_id);
        cart_create->etsy_client_id = NULL;
    }
    if (cart_create->etsy_refresh_token) {
        free(cart_create->etsy_refresh_token);
        cart_create->etsy_refresh_token = NULL;
    }
    if (cart_create->ebay_client_id) {
        free(cart_create->ebay_client_id);
        cart_create->ebay_client_id = NULL;
    }
    if (cart_create->ebay_client_secret) {
        free(cart_create->ebay_client_secret);
        cart_create->ebay_client_secret = NULL;
    }
    if (cart_create->ebay_runame) {
        free(cart_create->ebay_runame);
        cart_create->ebay_runame = NULL;
    }
    if (cart_create->ebay_access_token) {
        free(cart_create->ebay_access_token);
        cart_create->ebay_access_token = NULL;
    }
    if (cart_create->ebay_refresh_token) {
        free(cart_create->ebay_refresh_token);
        cart_create->ebay_refresh_token = NULL;
    }
    if (cart_create->ebay_environment) {
        free(cart_create->ebay_environment);
        cart_create->ebay_environment = NULL;
    }
    if (cart_create->dw_client_id) {
        free(cart_create->dw_client_id);
        cart_create->dw_client_id = NULL;
    }
    if (cart_create->dw_api_pass) {
        free(cart_create->dw_api_pass);
        cart_create->dw_api_pass = NULL;
    }
    if (cart_create->demandware_user_name) {
        free(cart_create->demandware_user_name);
        cart_create->demandware_user_name = NULL;
    }
    if (cart_create->demandware_user_password) {
        free(cart_create->demandware_user_password);
        cart_create->demandware_user_password = NULL;
    }
    if (cart_create->store_id) {
        free(cart_create->store_id);
        cart_create->store_id = NULL;
    }
    if (cart_create->seller_id) {
        free(cart_create->seller_id);
        cart_create->seller_id = NULL;
    }
    if (cart_create->environment) {
        free(cart_create->environment);
        cart_create->environment = NULL;
    }
    if (cart_create->hybris_client_id) {
        free(cart_create->hybris_client_id);
        cart_create->hybris_client_id = NULL;
    }
    if (cart_create->hybris_client_secret) {
        free(cart_create->hybris_client_secret);
        cart_create->hybris_client_secret = NULL;
    }
    if (cart_create->hybris_username) {
        free(cart_create->hybris_username);
        cart_create->hybris_username = NULL;
    }
    if (cart_create->hybris_password) {
        free(cart_create->hybris_password);
        cart_create->hybris_password = NULL;
    }
    if (cart_create->hybris_websites) {
        list_ForEach(listEntry, cart_create->hybris_websites) {
            account_cart_add_hybris_websites_inner_free(listEntry->data);
        }
        list_freeList(cart_create->hybris_websites);
        cart_create->hybris_websites = NULL;
    }
    if (cart_create->walmart_client_id) {
        free(cart_create->walmart_client_id);
        cart_create->walmart_client_id = NULL;
    }
    if (cart_create->walmart_client_secret) {
        free(cart_create->walmart_client_secret);
        cart_create->walmart_client_secret = NULL;
    }
    if (cart_create->walmart_environment) {
        free(cart_create->walmart_environment);
        cart_create->walmart_environment = NULL;
    }
    if (cart_create->walmart_channel_type) {
        free(cart_create->walmart_channel_type);
        cart_create->walmart_channel_type = NULL;
    }
    if (cart_create->walmart_region) {
        free(cart_create->walmart_region);
        cart_create->walmart_region = NULL;
    }
    if (cart_create->lightspeed_api_key) {
        free(cart_create->lightspeed_api_key);
        cart_create->lightspeed_api_key = NULL;
    }
    if (cart_create->lightspeed_api_secret) {
        free(cart_create->lightspeed_api_secret);
        cart_create->lightspeed_api_secret = NULL;
    }
    if (cart_create->shoplazza_access_token) {
        free(cart_create->shoplazza_access_token);
        cart_create->shoplazza_access_token = NULL;
    }
    if (cart_create->shoplazza_shared_secret) {
        free(cart_create->shoplazza_shared_secret);
        cart_create->shoplazza_shared_secret = NULL;
    }
    if (cart_create->shopware_access_key) {
        free(cart_create->shopware_access_key);
        cart_create->shopware_access_key = NULL;
    }
    if (cart_create->shopware_api_key) {
        free(cart_create->shopware_api_key);
        cart_create->shopware_api_key = NULL;
    }
    if (cart_create->shopware_api_secret) {
        free(cart_create->shopware_api_secret);
        cart_create->shopware_api_secret = NULL;
    }
    if (cart_create->commercehq_api_key) {
        free(cart_create->commercehq_api_key);
        cart_create->commercehq_api_key = NULL;
    }
    if (cart_create->commercehq_api_password) {
        free(cart_create->commercehq_api_password);
        cart_create->commercehq_api_password = NULL;
    }
    if (cart_create->_3dcart_private_key) {
        free(cart_create->_3dcart_private_key);
        cart_create->_3dcart_private_key = NULL;
    }
    if (cart_create->_3dcart_access_token) {
        free(cart_create->_3dcart_access_token);
        cart_create->_3dcart_access_token = NULL;
    }
    if (cart_create->wc_consumer_key) {
        free(cart_create->wc_consumer_key);
        cart_create->wc_consumer_key = NULL;
    }
    if (cart_create->wc_consumer_secret) {
        free(cart_create->wc_consumer_secret);
        cart_create->wc_consumer_secret = NULL;
    }
    if (cart_create->magento_consumer_key) {
        free(cart_create->magento_consumer_key);
        cart_create->magento_consumer_key = NULL;
    }
    if (cart_create->magento_consumer_secret) {
        free(cart_create->magento_consumer_secret);
        cart_create->magento_consumer_secret = NULL;
    }
    if (cart_create->magento_access_token) {
        free(cart_create->magento_access_token);
        cart_create->magento_access_token = NULL;
    }
    if (cart_create->magento_token_secret) {
        free(cart_create->magento_token_secret);
        cart_create->magento_token_secret = NULL;
    }
    if (cart_create->prestashop_webservice_key) {
        free(cart_create->prestashop_webservice_key);
        cart_create->prestashop_webservice_key = NULL;
    }
    if (cart_create->wix_app_id) {
        free(cart_create->wix_app_id);
        cart_create->wix_app_id = NULL;
    }
    if (cart_create->wix_app_secret_key) {
        free(cart_create->wix_app_secret_key);
        cart_create->wix_app_secret_key = NULL;
    }
    if (cart_create->wix_instance_id) {
        free(cart_create->wix_instance_id);
        cart_create->wix_instance_id = NULL;
    }
    if (cart_create->wix_refresh_token) {
        free(cart_create->wix_refresh_token);
        cart_create->wix_refresh_token = NULL;
    }
    if (cart_create->mercado_libre_app_id) {
        free(cart_create->mercado_libre_app_id);
        cart_create->mercado_libre_app_id = NULL;
    }
    if (cart_create->mercado_libre_app_secret_key) {
        free(cart_create->mercado_libre_app_secret_key);
        cart_create->mercado_libre_app_secret_key = NULL;
    }
    if (cart_create->mercado_libre_refresh_token) {
        free(cart_create->mercado_libre_refresh_token);
        cart_create->mercado_libre_refresh_token = NULL;
    }
    if (cart_create->zid_client_secret) {
        free(cart_create->zid_client_secret);
        cart_create->zid_client_secret = NULL;
    }
    if (cart_create->zid_access_token) {
        free(cart_create->zid_access_token);
        cart_create->zid_access_token = NULL;
    }
    if (cart_create->zid_authorization) {
        free(cart_create->zid_authorization);
        cart_create->zid_authorization = NULL;
    }
    if (cart_create->zid_refresh_token) {
        free(cart_create->zid_refresh_token);
        cart_create->zid_refresh_token = NULL;
    }
    if (cart_create->flipkart_client_id) {
        free(cart_create->flipkart_client_id);
        cart_create->flipkart_client_id = NULL;
    }
    if (cart_create->flipkart_client_secret) {
        free(cart_create->flipkart_client_secret);
        cart_create->flipkart_client_secret = NULL;
    }
    if (cart_create->allegro_client_id) {
        free(cart_create->allegro_client_id);
        cart_create->allegro_client_id = NULL;
    }
    if (cart_create->allegro_client_secret) {
        free(cart_create->allegro_client_secret);
        cart_create->allegro_client_secret = NULL;
    }
    if (cart_create->allegro_access_token) {
        free(cart_create->allegro_access_token);
        cart_create->allegro_access_token = NULL;
    }
    if (cart_create->allegro_refresh_token) {
        free(cart_create->allegro_refresh_token);
        cart_create->allegro_refresh_token = NULL;
    }
    if (cart_create->allegro_environment) {
        free(cart_create->allegro_environment);
        cart_create->allegro_environment = NULL;
    }
    free(cart_create);
}

cJSON *cart_create_convertToJSON(cart_create_t *cart_create) {
    cJSON *item = cJSON_CreateObject();

    // cart_create->cart_id
    if (api2cart_openapi_cart_create_CARTID_NULL == cart_create->cart_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cart_id", cart_create_cart_id_ToString(cart_create->cart_id)) == NULL)
    {
    goto fail; //Enum
    }


    // cart_create->store_url
    if(cart_create->store_url) {
    if(cJSON_AddStringToObject(item, "store_url", cart_create->store_url) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->bridge_url
    if(cart_create->bridge_url) {
    if(cJSON_AddStringToObject(item, "bridge_url", cart_create->bridge_url) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->store_root
    if(cart_create->store_root) {
    if(cJSON_AddStringToObject(item, "store_root", cart_create->store_root) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->store_key
    if(cart_create->store_key) {
    if(cJSON_AddStringToObject(item, "store_key", cart_create->store_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shared_secret
    if(cart_create->shared_secret) {
    if(cJSON_AddStringToObject(item, "shared_secret", cart_create->shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->validate_version
    if(cart_create->validate_version) {
    if(cJSON_AddBoolToObject(item, "validate_version", cart_create->validate_version) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_create->verify
    if(cart_create->verify) {
    if(cJSON_AddBoolToObject(item, "verify", cart_create->verify) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_create->db_tables_prefix
    if(cart_create->db_tables_prefix) {
    if(cJSON_AddStringToObject(item, "db_tables_prefix", cart_create->db_tables_prefix) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->user_agent
    if(cart_create->user_agent) {
    if(cJSON_AddStringToObject(item, "user_agent", cart_create->user_agent) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ftp_host
    if(cart_create->ftp_host) {
    if(cJSON_AddStringToObject(item, "ftp_host", cart_create->ftp_host) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ftp_user
    if(cart_create->ftp_user) {
    if(cJSON_AddStringToObject(item, "ftp_user", cart_create->ftp_user) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ftp_password
    if(cart_create->ftp_password) {
    if(cJSON_AddStringToObject(item, "ftp_password", cart_create->ftp_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ftp_port
    if(cart_create->ftp_port) {
    if(cJSON_AddNumberToObject(item, "ftp_port", cart_create->ftp_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_create->ftp_store_dir
    if(cart_create->ftp_store_dir) {
    if(cJSON_AddStringToObject(item, "ftp_store_dir", cart_create->ftp_store_dir) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_key_3dcart
    if(cart_create->api_key_3dcart) {
    if(cJSON_AddStringToObject(item, "apiKey_3dcart", cart_create->api_key_3dcart) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->admin_account
    if(cart_create->admin_account) {
    if(cJSON_AddStringToObject(item, "AdminAccount", cart_create->admin_account) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_path
    if(cart_create->api_path) {
    if(cJSON_AddStringToObject(item, "ApiPath", cart_create->api_path) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_key_bigcommerce
    if(cart_create->api_key_bigcommerce) {
    if(cJSON_AddStringToObject(item, "ApiKey_Bigcommerce", cart_create->api_key_bigcommerce) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->client_id
    if(cart_create->client_id) {
    if(cJSON_AddStringToObject(item, "client_id", cart_create->client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->access_token
    if(cart_create->access_token) {
    if(cJSON_AddStringToObject(item, "accessToken", cart_create->access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->context
    if(cart_create->context) {
    if(cJSON_AddStringToObject(item, "context", cart_create->context) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->access_token
    if(cart_create->access_token) {
    if(cJSON_AddStringToObject(item, "access_token", cart_create->access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_key_shopify
    if(cart_create->api_key_shopify) {
    if(cJSON_AddStringToObject(item, "apiKey_shopify", cart_create->api_key_shopify) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_password
    if(cart_create->api_password) {
    if(cJSON_AddStringToObject(item, "apiPassword", cart_create->api_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->access_token_shopify
    if(cart_create->access_token_shopify) {
    if(cJSON_AddStringToObject(item, "accessToken_shopify", cart_create->access_token_shopify) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_key
    if(cart_create->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", cart_create->api_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_username
    if(cart_create->api_username) {
    if(cJSON_AddStringToObject(item, "apiUsername", cart_create->api_username) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->encrypted_password
    if(cart_create->encrypted_password) {
    if(cJSON_AddStringToObject(item, "EncryptedPassword", cart_create->encrypted_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->login
    if(cart_create->login) {
    if(cJSON_AddStringToObject(item, "Login", cart_create->login) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_user_adnsf
    if(cart_create->api_user_adnsf) {
    if(cJSON_AddStringToObject(item, "apiUser_adnsf", cart_create->api_user_adnsf) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->api_pass
    if(cart_create->api_pass) {
    if(cJSON_AddStringToObject(item, "apiPass", cart_create->api_pass) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->private_key
    if(cart_create->private_key) {
    if(cJSON_AddStringToObject(item, "privateKey", cart_create->private_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->app_token
    if(cart_create->app_token) {
    if(cJSON_AddStringToObject(item, "appToken", cart_create->app_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->etsy_keystring
    if(cart_create->etsy_keystring) {
    if(cJSON_AddStringToObject(item, "etsy_keystring", cart_create->etsy_keystring) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->etsy_shared_secret
    if(cart_create->etsy_shared_secret) {
    if(cJSON_AddStringToObject(item, "etsy_shared_secret", cart_create->etsy_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->token_secret
    if(cart_create->token_secret) {
    if(cJSON_AddStringToObject(item, "tokenSecret", cart_create->token_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->etsy_client_id
    if(cart_create->etsy_client_id) {
    if(cJSON_AddStringToObject(item, "etsy_client_id", cart_create->etsy_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->etsy_refresh_token
    if(cart_create->etsy_refresh_token) {
    if(cJSON_AddStringToObject(item, "etsy_refresh_token", cart_create->etsy_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_client_id
    if(cart_create->ebay_client_id) {
    if(cJSON_AddStringToObject(item, "ebay_client_id", cart_create->ebay_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_client_secret
    if(cart_create->ebay_client_secret) {
    if(cJSON_AddStringToObject(item, "ebay_client_secret", cart_create->ebay_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_runame
    if(cart_create->ebay_runame) {
    if(cJSON_AddStringToObject(item, "ebay_runame", cart_create->ebay_runame) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_access_token
    if(cart_create->ebay_access_token) {
    if(cJSON_AddStringToObject(item, "ebay_access_token", cart_create->ebay_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_refresh_token
    if(cart_create->ebay_refresh_token) {
    if(cJSON_AddStringToObject(item, "ebay_refresh_token", cart_create->ebay_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_environment
    if(cart_create->ebay_environment) {
    if(cJSON_AddStringToObject(item, "ebay_environment", cart_create->ebay_environment) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->ebay_site_id
    if(cart_create->ebay_site_id) {
    if(cJSON_AddNumberToObject(item, "ebay_site_id", cart_create->ebay_site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_create->dw_client_id
    if(cart_create->dw_client_id) {
    if(cJSON_AddStringToObject(item, "dw_client_id", cart_create->dw_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->dw_api_pass
    if(cart_create->dw_api_pass) {
    if(cJSON_AddStringToObject(item, "dw_api_pass", cart_create->dw_api_pass) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->demandware_user_name
    if(cart_create->demandware_user_name) {
    if(cJSON_AddStringToObject(item, "demandware_user_name", cart_create->demandware_user_name) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->demandware_user_password
    if(cart_create->demandware_user_password) {
    if(cJSON_AddStringToObject(item, "demandware_user_password", cart_create->demandware_user_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->store_id
    if (!cart_create->store_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "store_id", cart_create->store_id) == NULL) {
    goto fail; //String
    }


    // cart_create->seller_id
    if(cart_create->seller_id) {
    if(cJSON_AddStringToObject(item, "seller_id", cart_create->seller_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->environment
    if(cart_create->environment) {
    if(cJSON_AddStringToObject(item, "environment", cart_create->environment) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->hybris_client_id
    if(cart_create->hybris_client_id) {
    if(cJSON_AddStringToObject(item, "hybris_client_id", cart_create->hybris_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->hybris_client_secret
    if(cart_create->hybris_client_secret) {
    if(cJSON_AddStringToObject(item, "hybris_client_secret", cart_create->hybris_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->hybris_username
    if(cart_create->hybris_username) {
    if(cJSON_AddStringToObject(item, "hybris_username", cart_create->hybris_username) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->hybris_password
    if(cart_create->hybris_password) {
    if(cJSON_AddStringToObject(item, "hybris_password", cart_create->hybris_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->hybris_websites
    if(cart_create->hybris_websites) {
    cJSON *hybris_websites = cJSON_AddArrayToObject(item, "hybris_websites");
    if(hybris_websites == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *hybris_websitesListEntry;
    if (cart_create->hybris_websites) {
    list_ForEach(hybris_websitesListEntry, cart_create->hybris_websites) {
    cJSON *itemLocal = account_cart_add_hybris_websites_inner_convertToJSON(hybris_websitesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(hybris_websites, itemLocal);
    }
    }
    }


    // cart_create->walmart_client_id
    if(cart_create->walmart_client_id) {
    if(cJSON_AddStringToObject(item, "walmart_client_id", cart_create->walmart_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->walmart_client_secret
    if(cart_create->walmart_client_secret) {
    if(cJSON_AddStringToObject(item, "walmart_client_secret", cart_create->walmart_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->walmart_environment
    if(cart_create->walmart_environment) {
    if(cJSON_AddStringToObject(item, "walmart_environment", cart_create->walmart_environment) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->walmart_channel_type
    if(cart_create->walmart_channel_type) {
    if(cJSON_AddStringToObject(item, "walmart_channel_type", cart_create->walmart_channel_type) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->walmart_region
    if(cart_create->walmart_region) {
    if(cJSON_AddStringToObject(item, "walmart_region", cart_create->walmart_region) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->lightspeed_api_key
    if(cart_create->lightspeed_api_key) {
    if(cJSON_AddStringToObject(item, "lightspeed_api_key", cart_create->lightspeed_api_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->lightspeed_api_secret
    if(cart_create->lightspeed_api_secret) {
    if(cJSON_AddStringToObject(item, "lightspeed_api_secret", cart_create->lightspeed_api_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shoplazza_access_token
    if(cart_create->shoplazza_access_token) {
    if(cJSON_AddStringToObject(item, "shoplazza_access_token", cart_create->shoplazza_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shoplazza_shared_secret
    if(cart_create->shoplazza_shared_secret) {
    if(cJSON_AddStringToObject(item, "shoplazza_shared_secret", cart_create->shoplazza_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shopware_access_key
    if(cart_create->shopware_access_key) {
    if(cJSON_AddStringToObject(item, "shopware_access_key", cart_create->shopware_access_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shopware_api_key
    if(cart_create->shopware_api_key) {
    if(cJSON_AddStringToObject(item, "shopware_api_key", cart_create->shopware_api_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->shopware_api_secret
    if(cart_create->shopware_api_secret) {
    if(cJSON_AddStringToObject(item, "shopware_api_secret", cart_create->shopware_api_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->commercehq_api_key
    if(cart_create->commercehq_api_key) {
    if(cJSON_AddStringToObject(item, "commercehq_api_key", cart_create->commercehq_api_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->commercehq_api_password
    if(cart_create->commercehq_api_password) {
    if(cJSON_AddStringToObject(item, "commercehq_api_password", cart_create->commercehq_api_password) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->_3dcart_private_key
    if(cart_create->_3dcart_private_key) {
    if(cJSON_AddStringToObject(item, "3dcart_private_key", cart_create->_3dcart_private_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->_3dcart_access_token
    if(cart_create->_3dcart_access_token) {
    if(cJSON_AddStringToObject(item, "3dcart_access_token", cart_create->_3dcart_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->wc_consumer_key
    if(cart_create->wc_consumer_key) {
    if(cJSON_AddStringToObject(item, "wc_consumer_key", cart_create->wc_consumer_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->wc_consumer_secret
    if(cart_create->wc_consumer_secret) {
    if(cJSON_AddStringToObject(item, "wc_consumer_secret", cart_create->wc_consumer_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->magento_consumer_key
    if(cart_create->magento_consumer_key) {
    if(cJSON_AddStringToObject(item, "magento_consumer_key", cart_create->magento_consumer_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->magento_consumer_secret
    if(cart_create->magento_consumer_secret) {
    if(cJSON_AddStringToObject(item, "magento_consumer_secret", cart_create->magento_consumer_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->magento_access_token
    if(cart_create->magento_access_token) {
    if(cJSON_AddStringToObject(item, "magento_access_token", cart_create->magento_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->magento_token_secret
    if(cart_create->magento_token_secret) {
    if(cJSON_AddStringToObject(item, "magento_token_secret", cart_create->magento_token_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->prestashop_webservice_key
    if(cart_create->prestashop_webservice_key) {
    if(cJSON_AddStringToObject(item, "prestashop_webservice_key", cart_create->prestashop_webservice_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->wix_app_id
    if (!cart_create->wix_app_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "wix_app_id", cart_create->wix_app_id) == NULL) {
    goto fail; //String
    }


    // cart_create->wix_app_secret_key
    if (!cart_create->wix_app_secret_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "wix_app_secret_key", cart_create->wix_app_secret_key) == NULL) {
    goto fail; //String
    }


    // cart_create->wix_instance_id
    if(cart_create->wix_instance_id) {
    if(cJSON_AddStringToObject(item, "wix_instance_id", cart_create->wix_instance_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->wix_refresh_token
    if(cart_create->wix_refresh_token) {
    if(cJSON_AddStringToObject(item, "wix_refresh_token", cart_create->wix_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->mercado_libre_app_id
    if(cart_create->mercado_libre_app_id) {
    if(cJSON_AddStringToObject(item, "mercado_libre_app_id", cart_create->mercado_libre_app_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->mercado_libre_app_secret_key
    if(cart_create->mercado_libre_app_secret_key) {
    if(cJSON_AddStringToObject(item, "mercado_libre_app_secret_key", cart_create->mercado_libre_app_secret_key) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->mercado_libre_refresh_token
    if(cart_create->mercado_libre_refresh_token) {
    if(cJSON_AddStringToObject(item, "mercado_libre_refresh_token", cart_create->mercado_libre_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->zid_client_id
    if(cart_create->zid_client_id) {
    if(cJSON_AddNumberToObject(item, "zid_client_id", cart_create->zid_client_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_create->zid_client_secret
    if(cart_create->zid_client_secret) {
    if(cJSON_AddStringToObject(item, "zid_client_secret", cart_create->zid_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->zid_access_token
    if(cart_create->zid_access_token) {
    if(cJSON_AddStringToObject(item, "zid_access_token", cart_create->zid_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->zid_authorization
    if(cart_create->zid_authorization) {
    if(cJSON_AddStringToObject(item, "zid_authorization", cart_create->zid_authorization) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->zid_refresh_token
    if(cart_create->zid_refresh_token) {
    if(cJSON_AddStringToObject(item, "zid_refresh_token", cart_create->zid_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->flipkart_client_id
    if(cart_create->flipkart_client_id) {
    if(cJSON_AddStringToObject(item, "flipkart_client_id", cart_create->flipkart_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->flipkart_client_secret
    if(cart_create->flipkart_client_secret) {
    if(cJSON_AddStringToObject(item, "flipkart_client_secret", cart_create->flipkart_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->allegro_client_id
    if(cart_create->allegro_client_id) {
    if(cJSON_AddStringToObject(item, "allegro_client_id", cart_create->allegro_client_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->allegro_client_secret
    if(cart_create->allegro_client_secret) {
    if(cJSON_AddStringToObject(item, "allegro_client_secret", cart_create->allegro_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->allegro_access_token
    if(cart_create->allegro_access_token) {
    if(cJSON_AddStringToObject(item, "allegro_access_token", cart_create->allegro_access_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->allegro_refresh_token
    if(cart_create->allegro_refresh_token) {
    if(cJSON_AddStringToObject(item, "allegro_refresh_token", cart_create->allegro_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // cart_create->allegro_environment
    if(cart_create->allegro_environment) {
    if(cJSON_AddStringToObject(item, "allegro_environment", cart_create->allegro_environment) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_create_t *cart_create_parseFromJSON(cJSON *cart_createJSON){

    cart_create_t *cart_create_local_var = NULL;

    // define the local list for cart_create->hybris_websites
    list_t *hybris_websitesList = NULL;

    // cart_create->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "cart_id");
    if (cJSON_IsNull(cart_id)) {
        cart_id = NULL;
    }
    if (!cart_id) {
        goto end;
    }

    api2cart_openapi_cart_create_CARTID_e cart_idVariable;
    
    if(!cJSON_IsString(cart_id))
    {
    goto end; //Enum
    }
    cart_idVariable = cart_create_cart_id_FromString(cart_id->valuestring);

    // cart_create->store_url
    cJSON *store_url = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "store_url");
    if (cJSON_IsNull(store_url)) {
        store_url = NULL;
    }
    if (store_url) { 
    if(!cJSON_IsString(store_url) && !cJSON_IsNull(store_url))
    {
    goto end; //String
    }
    }

    // cart_create->bridge_url
    cJSON *bridge_url = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "bridge_url");
    if (cJSON_IsNull(bridge_url)) {
        bridge_url = NULL;
    }
    if (bridge_url) { 
    if(!cJSON_IsString(bridge_url) && !cJSON_IsNull(bridge_url))
    {
    goto end; //String
    }
    }

    // cart_create->store_root
    cJSON *store_root = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "store_root");
    if (cJSON_IsNull(store_root)) {
        store_root = NULL;
    }
    if (store_root) { 
    if(!cJSON_IsString(store_root) && !cJSON_IsNull(store_root))
    {
    goto end; //String
    }
    }

    // cart_create->store_key
    cJSON *store_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "store_key");
    if (cJSON_IsNull(store_key)) {
        store_key = NULL;
    }
    if (store_key) { 
    if(!cJSON_IsString(store_key) && !cJSON_IsNull(store_key))
    {
    goto end; //String
    }
    }

    // cart_create->shared_secret
    cJSON *shared_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shared_secret");
    if (cJSON_IsNull(shared_secret)) {
        shared_secret = NULL;
    }
    if (shared_secret) { 
    if(!cJSON_IsString(shared_secret) && !cJSON_IsNull(shared_secret))
    {
    goto end; //String
    }
    }

    // cart_create->validate_version
    cJSON *validate_version = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "validate_version");
    if (cJSON_IsNull(validate_version)) {
        validate_version = NULL;
    }
    if (validate_version) { 
    if(!cJSON_IsBool(validate_version))
    {
    goto end; //Bool
    }
    }

    // cart_create->verify
    cJSON *verify = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "verify");
    if (cJSON_IsNull(verify)) {
        verify = NULL;
    }
    if (verify) { 
    if(!cJSON_IsBool(verify))
    {
    goto end; //Bool
    }
    }

    // cart_create->db_tables_prefix
    cJSON *db_tables_prefix = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "db_tables_prefix");
    if (cJSON_IsNull(db_tables_prefix)) {
        db_tables_prefix = NULL;
    }
    if (db_tables_prefix) { 
    if(!cJSON_IsString(db_tables_prefix) && !cJSON_IsNull(db_tables_prefix))
    {
    goto end; //String
    }
    }

    // cart_create->user_agent
    cJSON *user_agent = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "user_agent");
    if (cJSON_IsNull(user_agent)) {
        user_agent = NULL;
    }
    if (user_agent) { 
    if(!cJSON_IsString(user_agent) && !cJSON_IsNull(user_agent))
    {
    goto end; //String
    }
    }

    // cart_create->ftp_host
    cJSON *ftp_host = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ftp_host");
    if (cJSON_IsNull(ftp_host)) {
        ftp_host = NULL;
    }
    if (ftp_host) { 
    if(!cJSON_IsString(ftp_host) && !cJSON_IsNull(ftp_host))
    {
    goto end; //String
    }
    }

    // cart_create->ftp_user
    cJSON *ftp_user = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ftp_user");
    if (cJSON_IsNull(ftp_user)) {
        ftp_user = NULL;
    }
    if (ftp_user) { 
    if(!cJSON_IsString(ftp_user) && !cJSON_IsNull(ftp_user))
    {
    goto end; //String
    }
    }

    // cart_create->ftp_password
    cJSON *ftp_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ftp_password");
    if (cJSON_IsNull(ftp_password)) {
        ftp_password = NULL;
    }
    if (ftp_password) { 
    if(!cJSON_IsString(ftp_password) && !cJSON_IsNull(ftp_password))
    {
    goto end; //String
    }
    }

    // cart_create->ftp_port
    cJSON *ftp_port = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ftp_port");
    if (cJSON_IsNull(ftp_port)) {
        ftp_port = NULL;
    }
    if (ftp_port) { 
    if(!cJSON_IsNumber(ftp_port))
    {
    goto end; //Numeric
    }
    }

    // cart_create->ftp_store_dir
    cJSON *ftp_store_dir = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ftp_store_dir");
    if (cJSON_IsNull(ftp_store_dir)) {
        ftp_store_dir = NULL;
    }
    if (ftp_store_dir) { 
    if(!cJSON_IsString(ftp_store_dir) && !cJSON_IsNull(ftp_store_dir))
    {
    goto end; //String
    }
    }

    // cart_create->api_key_3dcart
    cJSON *api_key_3dcart = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiKey_3dcart");
    if (cJSON_IsNull(api_key_3dcart)) {
        api_key_3dcart = NULL;
    }
    if (api_key_3dcart) { 
    if(!cJSON_IsString(api_key_3dcart) && !cJSON_IsNull(api_key_3dcart))
    {
    goto end; //String
    }
    }

    // cart_create->admin_account
    cJSON *admin_account = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "AdminAccount");
    if (cJSON_IsNull(admin_account)) {
        admin_account = NULL;
    }
    if (admin_account) { 
    if(!cJSON_IsString(admin_account) && !cJSON_IsNull(admin_account))
    {
    goto end; //String
    }
    }

    // cart_create->api_path
    cJSON *api_path = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ApiPath");
    if (cJSON_IsNull(api_path)) {
        api_path = NULL;
    }
    if (api_path) { 
    if(!cJSON_IsString(api_path) && !cJSON_IsNull(api_path))
    {
    goto end; //String
    }
    }

    // cart_create->api_key_bigcommerce
    cJSON *api_key_bigcommerce = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ApiKey_Bigcommerce");
    if (cJSON_IsNull(api_key_bigcommerce)) {
        api_key_bigcommerce = NULL;
    }
    if (api_key_bigcommerce) { 
    if(!cJSON_IsString(api_key_bigcommerce) && !cJSON_IsNull(api_key_bigcommerce))
    {
    goto end; //String
    }
    }

    // cart_create->client_id
    cJSON *client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "client_id");
    if (cJSON_IsNull(client_id)) {
        client_id = NULL;
    }
    if (client_id) { 
    if(!cJSON_IsString(client_id) && !cJSON_IsNull(client_id))
    {
    goto end; //String
    }
    }

    // cart_create->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "accessToken");
    if (cJSON_IsNull(access_token)) {
        access_token = NULL;
    }
    if (access_token) { 
    if(!cJSON_IsString(access_token) && !cJSON_IsNull(access_token))
    {
    goto end; //String
    }
    }

    // cart_create->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "context");
    if (cJSON_IsNull(context)) {
        context = NULL;
    }
    if (context) { 
    if(!cJSON_IsString(context) && !cJSON_IsNull(context))
    {
    goto end; //String
    }
    }

    // cart_create->access_token
    cJSON *access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "access_token");
    if (cJSON_IsNull(access_token)) {
        access_token = NULL;
    }
    if (access_token) { 
    if(!cJSON_IsString(access_token) && !cJSON_IsNull(access_token))
    {
    goto end; //String
    }
    }

    // cart_create->api_key_shopify
    cJSON *api_key_shopify = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiKey_shopify");
    if (cJSON_IsNull(api_key_shopify)) {
        api_key_shopify = NULL;
    }
    if (api_key_shopify) { 
    if(!cJSON_IsString(api_key_shopify) && !cJSON_IsNull(api_key_shopify))
    {
    goto end; //String
    }
    }

    // cart_create->api_password
    cJSON *api_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiPassword");
    if (cJSON_IsNull(api_password)) {
        api_password = NULL;
    }
    if (api_password) { 
    if(!cJSON_IsString(api_password) && !cJSON_IsNull(api_password))
    {
    goto end; //String
    }
    }

    // cart_create->access_token_shopify
    cJSON *access_token_shopify = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "accessToken_shopify");
    if (cJSON_IsNull(access_token_shopify)) {
        access_token_shopify = NULL;
    }
    if (access_token_shopify) { 
    if(!cJSON_IsString(access_token_shopify) && !cJSON_IsNull(access_token_shopify))
    {
    goto end; //String
    }
    }

    // cart_create->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiKey");
    if (cJSON_IsNull(api_key)) {
        api_key = NULL;
    }
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }

    // cart_create->api_username
    cJSON *api_username = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiUsername");
    if (cJSON_IsNull(api_username)) {
        api_username = NULL;
    }
    if (api_username) { 
    if(!cJSON_IsString(api_username) && !cJSON_IsNull(api_username))
    {
    goto end; //String
    }
    }

    // cart_create->encrypted_password
    cJSON *encrypted_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "EncryptedPassword");
    if (cJSON_IsNull(encrypted_password)) {
        encrypted_password = NULL;
    }
    if (encrypted_password) { 
    if(!cJSON_IsString(encrypted_password) && !cJSON_IsNull(encrypted_password))
    {
    goto end; //String
    }
    }

    // cart_create->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "Login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsString(login) && !cJSON_IsNull(login))
    {
    goto end; //String
    }
    }

    // cart_create->api_user_adnsf
    cJSON *api_user_adnsf = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiUser_adnsf");
    if (cJSON_IsNull(api_user_adnsf)) {
        api_user_adnsf = NULL;
    }
    if (api_user_adnsf) { 
    if(!cJSON_IsString(api_user_adnsf) && !cJSON_IsNull(api_user_adnsf))
    {
    goto end; //String
    }
    }

    // cart_create->api_pass
    cJSON *api_pass = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "apiPass");
    if (cJSON_IsNull(api_pass)) {
        api_pass = NULL;
    }
    if (api_pass) { 
    if(!cJSON_IsString(api_pass) && !cJSON_IsNull(api_pass))
    {
    goto end; //String
    }
    }

    // cart_create->private_key
    cJSON *private_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "privateKey");
    if (cJSON_IsNull(private_key)) {
        private_key = NULL;
    }
    if (private_key) { 
    if(!cJSON_IsString(private_key) && !cJSON_IsNull(private_key))
    {
    goto end; //String
    }
    }

    // cart_create->app_token
    cJSON *app_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "appToken");
    if (cJSON_IsNull(app_token)) {
        app_token = NULL;
    }
    if (app_token) { 
    if(!cJSON_IsString(app_token) && !cJSON_IsNull(app_token))
    {
    goto end; //String
    }
    }

    // cart_create->etsy_keystring
    cJSON *etsy_keystring = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "etsy_keystring");
    if (cJSON_IsNull(etsy_keystring)) {
        etsy_keystring = NULL;
    }
    if (etsy_keystring) { 
    if(!cJSON_IsString(etsy_keystring) && !cJSON_IsNull(etsy_keystring))
    {
    goto end; //String
    }
    }

    // cart_create->etsy_shared_secret
    cJSON *etsy_shared_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "etsy_shared_secret");
    if (cJSON_IsNull(etsy_shared_secret)) {
        etsy_shared_secret = NULL;
    }
    if (etsy_shared_secret) { 
    if(!cJSON_IsString(etsy_shared_secret) && !cJSON_IsNull(etsy_shared_secret))
    {
    goto end; //String
    }
    }

    // cart_create->token_secret
    cJSON *token_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "tokenSecret");
    if (cJSON_IsNull(token_secret)) {
        token_secret = NULL;
    }
    if (token_secret) { 
    if(!cJSON_IsString(token_secret) && !cJSON_IsNull(token_secret))
    {
    goto end; //String
    }
    }

    // cart_create->etsy_client_id
    cJSON *etsy_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "etsy_client_id");
    if (cJSON_IsNull(etsy_client_id)) {
        etsy_client_id = NULL;
    }
    if (etsy_client_id) { 
    if(!cJSON_IsString(etsy_client_id) && !cJSON_IsNull(etsy_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->etsy_refresh_token
    cJSON *etsy_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "etsy_refresh_token");
    if (cJSON_IsNull(etsy_refresh_token)) {
        etsy_refresh_token = NULL;
    }
    if (etsy_refresh_token) { 
    if(!cJSON_IsString(etsy_refresh_token) && !cJSON_IsNull(etsy_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_client_id
    cJSON *ebay_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_client_id");
    if (cJSON_IsNull(ebay_client_id)) {
        ebay_client_id = NULL;
    }
    if (ebay_client_id) { 
    if(!cJSON_IsString(ebay_client_id) && !cJSON_IsNull(ebay_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_client_secret
    cJSON *ebay_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_client_secret");
    if (cJSON_IsNull(ebay_client_secret)) {
        ebay_client_secret = NULL;
    }
    if (ebay_client_secret) { 
    if(!cJSON_IsString(ebay_client_secret) && !cJSON_IsNull(ebay_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_runame
    cJSON *ebay_runame = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_runame");
    if (cJSON_IsNull(ebay_runame)) {
        ebay_runame = NULL;
    }
    if (ebay_runame) { 
    if(!cJSON_IsString(ebay_runame) && !cJSON_IsNull(ebay_runame))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_access_token
    cJSON *ebay_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_access_token");
    if (cJSON_IsNull(ebay_access_token)) {
        ebay_access_token = NULL;
    }
    if (ebay_access_token) { 
    if(!cJSON_IsString(ebay_access_token) && !cJSON_IsNull(ebay_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_refresh_token
    cJSON *ebay_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_refresh_token");
    if (cJSON_IsNull(ebay_refresh_token)) {
        ebay_refresh_token = NULL;
    }
    if (ebay_refresh_token) { 
    if(!cJSON_IsString(ebay_refresh_token) && !cJSON_IsNull(ebay_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_environment
    cJSON *ebay_environment = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_environment");
    if (cJSON_IsNull(ebay_environment)) {
        ebay_environment = NULL;
    }
    if (ebay_environment) { 
    if(!cJSON_IsString(ebay_environment) && !cJSON_IsNull(ebay_environment))
    {
    goto end; //String
    }
    }

    // cart_create->ebay_site_id
    cJSON *ebay_site_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "ebay_site_id");
    if (cJSON_IsNull(ebay_site_id)) {
        ebay_site_id = NULL;
    }
    if (ebay_site_id) { 
    if(!cJSON_IsNumber(ebay_site_id))
    {
    goto end; //Numeric
    }
    }

    // cart_create->dw_client_id
    cJSON *dw_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "dw_client_id");
    if (cJSON_IsNull(dw_client_id)) {
        dw_client_id = NULL;
    }
    if (dw_client_id) { 
    if(!cJSON_IsString(dw_client_id) && !cJSON_IsNull(dw_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->dw_api_pass
    cJSON *dw_api_pass = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "dw_api_pass");
    if (cJSON_IsNull(dw_api_pass)) {
        dw_api_pass = NULL;
    }
    if (dw_api_pass) { 
    if(!cJSON_IsString(dw_api_pass) && !cJSON_IsNull(dw_api_pass))
    {
    goto end; //String
    }
    }

    // cart_create->demandware_user_name
    cJSON *demandware_user_name = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "demandware_user_name");
    if (cJSON_IsNull(demandware_user_name)) {
        demandware_user_name = NULL;
    }
    if (demandware_user_name) { 
    if(!cJSON_IsString(demandware_user_name) && !cJSON_IsNull(demandware_user_name))
    {
    goto end; //String
    }
    }

    // cart_create->demandware_user_password
    cJSON *demandware_user_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "demandware_user_password");
    if (cJSON_IsNull(demandware_user_password)) {
        demandware_user_password = NULL;
    }
    if (demandware_user_password) { 
    if(!cJSON_IsString(demandware_user_password) && !cJSON_IsNull(demandware_user_password))
    {
    goto end; //String
    }
    }

    // cart_create->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (!store_id) {
        goto end;
    }

    
    if(!cJSON_IsString(store_id))
    {
    goto end; //String
    }

    // cart_create->seller_id
    cJSON *seller_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "seller_id");
    if (cJSON_IsNull(seller_id)) {
        seller_id = NULL;
    }
    if (seller_id) { 
    if(!cJSON_IsString(seller_id) && !cJSON_IsNull(seller_id))
    {
    goto end; //String
    }
    }

    // cart_create->environment
    cJSON *environment = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "environment");
    if (cJSON_IsNull(environment)) {
        environment = NULL;
    }
    if (environment) { 
    if(!cJSON_IsString(environment) && !cJSON_IsNull(environment))
    {
    goto end; //String
    }
    }

    // cart_create->hybris_client_id
    cJSON *hybris_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "hybris_client_id");
    if (cJSON_IsNull(hybris_client_id)) {
        hybris_client_id = NULL;
    }
    if (hybris_client_id) { 
    if(!cJSON_IsString(hybris_client_id) && !cJSON_IsNull(hybris_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->hybris_client_secret
    cJSON *hybris_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "hybris_client_secret");
    if (cJSON_IsNull(hybris_client_secret)) {
        hybris_client_secret = NULL;
    }
    if (hybris_client_secret) { 
    if(!cJSON_IsString(hybris_client_secret) && !cJSON_IsNull(hybris_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->hybris_username
    cJSON *hybris_username = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "hybris_username");
    if (cJSON_IsNull(hybris_username)) {
        hybris_username = NULL;
    }
    if (hybris_username) { 
    if(!cJSON_IsString(hybris_username) && !cJSON_IsNull(hybris_username))
    {
    goto end; //String
    }
    }

    // cart_create->hybris_password
    cJSON *hybris_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "hybris_password");
    if (cJSON_IsNull(hybris_password)) {
        hybris_password = NULL;
    }
    if (hybris_password) { 
    if(!cJSON_IsString(hybris_password) && !cJSON_IsNull(hybris_password))
    {
    goto end; //String
    }
    }

    // cart_create->hybris_websites
    cJSON *hybris_websites = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "hybris_websites");
    if (cJSON_IsNull(hybris_websites)) {
        hybris_websites = NULL;
    }
    if (hybris_websites) { 
    cJSON *hybris_websites_local_nonprimitive = NULL;
    if(!cJSON_IsArray(hybris_websites)){
        goto end; //nonprimitive container
    }

    hybris_websitesList = list_createList();

    cJSON_ArrayForEach(hybris_websites_local_nonprimitive,hybris_websites )
    {
        if(!cJSON_IsObject(hybris_websites_local_nonprimitive)){
            goto end;
        }
        account_cart_add_hybris_websites_inner_t *hybris_websitesItem = account_cart_add_hybris_websites_inner_parseFromJSON(hybris_websites_local_nonprimitive);

        list_addElement(hybris_websitesList, hybris_websitesItem);
    }
    }

    // cart_create->walmart_client_id
    cJSON *walmart_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "walmart_client_id");
    if (cJSON_IsNull(walmart_client_id)) {
        walmart_client_id = NULL;
    }
    if (walmart_client_id) { 
    if(!cJSON_IsString(walmart_client_id) && !cJSON_IsNull(walmart_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->walmart_client_secret
    cJSON *walmart_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "walmart_client_secret");
    if (cJSON_IsNull(walmart_client_secret)) {
        walmart_client_secret = NULL;
    }
    if (walmart_client_secret) { 
    if(!cJSON_IsString(walmart_client_secret) && !cJSON_IsNull(walmart_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->walmart_environment
    cJSON *walmart_environment = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "walmart_environment");
    if (cJSON_IsNull(walmart_environment)) {
        walmart_environment = NULL;
    }
    if (walmart_environment) { 
    if(!cJSON_IsString(walmart_environment) && !cJSON_IsNull(walmart_environment))
    {
    goto end; //String
    }
    }

    // cart_create->walmart_channel_type
    cJSON *walmart_channel_type = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "walmart_channel_type");
    if (cJSON_IsNull(walmart_channel_type)) {
        walmart_channel_type = NULL;
    }
    if (walmart_channel_type) { 
    if(!cJSON_IsString(walmart_channel_type) && !cJSON_IsNull(walmart_channel_type))
    {
    goto end; //String
    }
    }

    // cart_create->walmart_region
    cJSON *walmart_region = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "walmart_region");
    if (cJSON_IsNull(walmart_region)) {
        walmart_region = NULL;
    }
    if (walmart_region) { 
    if(!cJSON_IsString(walmart_region) && !cJSON_IsNull(walmart_region))
    {
    goto end; //String
    }
    }

    // cart_create->lightspeed_api_key
    cJSON *lightspeed_api_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "lightspeed_api_key");
    if (cJSON_IsNull(lightspeed_api_key)) {
        lightspeed_api_key = NULL;
    }
    if (lightspeed_api_key) { 
    if(!cJSON_IsString(lightspeed_api_key) && !cJSON_IsNull(lightspeed_api_key))
    {
    goto end; //String
    }
    }

    // cart_create->lightspeed_api_secret
    cJSON *lightspeed_api_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "lightspeed_api_secret");
    if (cJSON_IsNull(lightspeed_api_secret)) {
        lightspeed_api_secret = NULL;
    }
    if (lightspeed_api_secret) { 
    if(!cJSON_IsString(lightspeed_api_secret) && !cJSON_IsNull(lightspeed_api_secret))
    {
    goto end; //String
    }
    }

    // cart_create->shoplazza_access_token
    cJSON *shoplazza_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shoplazza_access_token");
    if (cJSON_IsNull(shoplazza_access_token)) {
        shoplazza_access_token = NULL;
    }
    if (shoplazza_access_token) { 
    if(!cJSON_IsString(shoplazza_access_token) && !cJSON_IsNull(shoplazza_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->shoplazza_shared_secret
    cJSON *shoplazza_shared_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shoplazza_shared_secret");
    if (cJSON_IsNull(shoplazza_shared_secret)) {
        shoplazza_shared_secret = NULL;
    }
    if (shoplazza_shared_secret) { 
    if(!cJSON_IsString(shoplazza_shared_secret) && !cJSON_IsNull(shoplazza_shared_secret))
    {
    goto end; //String
    }
    }

    // cart_create->shopware_access_key
    cJSON *shopware_access_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shopware_access_key");
    if (cJSON_IsNull(shopware_access_key)) {
        shopware_access_key = NULL;
    }
    if (shopware_access_key) { 
    if(!cJSON_IsString(shopware_access_key) && !cJSON_IsNull(shopware_access_key))
    {
    goto end; //String
    }
    }

    // cart_create->shopware_api_key
    cJSON *shopware_api_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shopware_api_key");
    if (cJSON_IsNull(shopware_api_key)) {
        shopware_api_key = NULL;
    }
    if (shopware_api_key) { 
    if(!cJSON_IsString(shopware_api_key) && !cJSON_IsNull(shopware_api_key))
    {
    goto end; //String
    }
    }

    // cart_create->shopware_api_secret
    cJSON *shopware_api_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "shopware_api_secret");
    if (cJSON_IsNull(shopware_api_secret)) {
        shopware_api_secret = NULL;
    }
    if (shopware_api_secret) { 
    if(!cJSON_IsString(shopware_api_secret) && !cJSON_IsNull(shopware_api_secret))
    {
    goto end; //String
    }
    }

    // cart_create->commercehq_api_key
    cJSON *commercehq_api_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "commercehq_api_key");
    if (cJSON_IsNull(commercehq_api_key)) {
        commercehq_api_key = NULL;
    }
    if (commercehq_api_key) { 
    if(!cJSON_IsString(commercehq_api_key) && !cJSON_IsNull(commercehq_api_key))
    {
    goto end; //String
    }
    }

    // cart_create->commercehq_api_password
    cJSON *commercehq_api_password = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "commercehq_api_password");
    if (cJSON_IsNull(commercehq_api_password)) {
        commercehq_api_password = NULL;
    }
    if (commercehq_api_password) { 
    if(!cJSON_IsString(commercehq_api_password) && !cJSON_IsNull(commercehq_api_password))
    {
    goto end; //String
    }
    }

    // cart_create->_3dcart_private_key
    cJSON *_3dcart_private_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "3dcart_private_key");
    if (cJSON_IsNull(_3dcart_private_key)) {
        _3dcart_private_key = NULL;
    }
    if (_3dcart_private_key) { 
    if(!cJSON_IsString(_3dcart_private_key) && !cJSON_IsNull(_3dcart_private_key))
    {
    goto end; //String
    }
    }

    // cart_create->_3dcart_access_token
    cJSON *_3dcart_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "3dcart_access_token");
    if (cJSON_IsNull(_3dcart_access_token)) {
        _3dcart_access_token = NULL;
    }
    if (_3dcart_access_token) { 
    if(!cJSON_IsString(_3dcart_access_token) && !cJSON_IsNull(_3dcart_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->wc_consumer_key
    cJSON *wc_consumer_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wc_consumer_key");
    if (cJSON_IsNull(wc_consumer_key)) {
        wc_consumer_key = NULL;
    }
    if (wc_consumer_key) { 
    if(!cJSON_IsString(wc_consumer_key) && !cJSON_IsNull(wc_consumer_key))
    {
    goto end; //String
    }
    }

    // cart_create->wc_consumer_secret
    cJSON *wc_consumer_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wc_consumer_secret");
    if (cJSON_IsNull(wc_consumer_secret)) {
        wc_consumer_secret = NULL;
    }
    if (wc_consumer_secret) { 
    if(!cJSON_IsString(wc_consumer_secret) && !cJSON_IsNull(wc_consumer_secret))
    {
    goto end; //String
    }
    }

    // cart_create->magento_consumer_key
    cJSON *magento_consumer_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "magento_consumer_key");
    if (cJSON_IsNull(magento_consumer_key)) {
        magento_consumer_key = NULL;
    }
    if (magento_consumer_key) { 
    if(!cJSON_IsString(magento_consumer_key) && !cJSON_IsNull(magento_consumer_key))
    {
    goto end; //String
    }
    }

    // cart_create->magento_consumer_secret
    cJSON *magento_consumer_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "magento_consumer_secret");
    if (cJSON_IsNull(magento_consumer_secret)) {
        magento_consumer_secret = NULL;
    }
    if (magento_consumer_secret) { 
    if(!cJSON_IsString(magento_consumer_secret) && !cJSON_IsNull(magento_consumer_secret))
    {
    goto end; //String
    }
    }

    // cart_create->magento_access_token
    cJSON *magento_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "magento_access_token");
    if (cJSON_IsNull(magento_access_token)) {
        magento_access_token = NULL;
    }
    if (magento_access_token) { 
    if(!cJSON_IsString(magento_access_token) && !cJSON_IsNull(magento_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->magento_token_secret
    cJSON *magento_token_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "magento_token_secret");
    if (cJSON_IsNull(magento_token_secret)) {
        magento_token_secret = NULL;
    }
    if (magento_token_secret) { 
    if(!cJSON_IsString(magento_token_secret) && !cJSON_IsNull(magento_token_secret))
    {
    goto end; //String
    }
    }

    // cart_create->prestashop_webservice_key
    cJSON *prestashop_webservice_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "prestashop_webservice_key");
    if (cJSON_IsNull(prestashop_webservice_key)) {
        prestashop_webservice_key = NULL;
    }
    if (prestashop_webservice_key) { 
    if(!cJSON_IsString(prestashop_webservice_key) && !cJSON_IsNull(prestashop_webservice_key))
    {
    goto end; //String
    }
    }

    // cart_create->wix_app_id
    cJSON *wix_app_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wix_app_id");
    if (cJSON_IsNull(wix_app_id)) {
        wix_app_id = NULL;
    }
    if (!wix_app_id) {
        goto end;
    }

    
    if(!cJSON_IsString(wix_app_id))
    {
    goto end; //String
    }

    // cart_create->wix_app_secret_key
    cJSON *wix_app_secret_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wix_app_secret_key");
    if (cJSON_IsNull(wix_app_secret_key)) {
        wix_app_secret_key = NULL;
    }
    if (!wix_app_secret_key) {
        goto end;
    }

    
    if(!cJSON_IsString(wix_app_secret_key))
    {
    goto end; //String
    }

    // cart_create->wix_instance_id
    cJSON *wix_instance_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wix_instance_id");
    if (cJSON_IsNull(wix_instance_id)) {
        wix_instance_id = NULL;
    }
    if (wix_instance_id) { 
    if(!cJSON_IsString(wix_instance_id) && !cJSON_IsNull(wix_instance_id))
    {
    goto end; //String
    }
    }

    // cart_create->wix_refresh_token
    cJSON *wix_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "wix_refresh_token");
    if (cJSON_IsNull(wix_refresh_token)) {
        wix_refresh_token = NULL;
    }
    if (wix_refresh_token) { 
    if(!cJSON_IsString(wix_refresh_token) && !cJSON_IsNull(wix_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->mercado_libre_app_id
    cJSON *mercado_libre_app_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "mercado_libre_app_id");
    if (cJSON_IsNull(mercado_libre_app_id)) {
        mercado_libre_app_id = NULL;
    }
    if (mercado_libre_app_id) { 
    if(!cJSON_IsString(mercado_libre_app_id) && !cJSON_IsNull(mercado_libre_app_id))
    {
    goto end; //String
    }
    }

    // cart_create->mercado_libre_app_secret_key
    cJSON *mercado_libre_app_secret_key = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "mercado_libre_app_secret_key");
    if (cJSON_IsNull(mercado_libre_app_secret_key)) {
        mercado_libre_app_secret_key = NULL;
    }
    if (mercado_libre_app_secret_key) { 
    if(!cJSON_IsString(mercado_libre_app_secret_key) && !cJSON_IsNull(mercado_libre_app_secret_key))
    {
    goto end; //String
    }
    }

    // cart_create->mercado_libre_refresh_token
    cJSON *mercado_libre_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "mercado_libre_refresh_token");
    if (cJSON_IsNull(mercado_libre_refresh_token)) {
        mercado_libre_refresh_token = NULL;
    }
    if (mercado_libre_refresh_token) { 
    if(!cJSON_IsString(mercado_libre_refresh_token) && !cJSON_IsNull(mercado_libre_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->zid_client_id
    cJSON *zid_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "zid_client_id");
    if (cJSON_IsNull(zid_client_id)) {
        zid_client_id = NULL;
    }
    if (zid_client_id) { 
    if(!cJSON_IsNumber(zid_client_id))
    {
    goto end; //Numeric
    }
    }

    // cart_create->zid_client_secret
    cJSON *zid_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "zid_client_secret");
    if (cJSON_IsNull(zid_client_secret)) {
        zid_client_secret = NULL;
    }
    if (zid_client_secret) { 
    if(!cJSON_IsString(zid_client_secret) && !cJSON_IsNull(zid_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->zid_access_token
    cJSON *zid_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "zid_access_token");
    if (cJSON_IsNull(zid_access_token)) {
        zid_access_token = NULL;
    }
    if (zid_access_token) { 
    if(!cJSON_IsString(zid_access_token) && !cJSON_IsNull(zid_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->zid_authorization
    cJSON *zid_authorization = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "zid_authorization");
    if (cJSON_IsNull(zid_authorization)) {
        zid_authorization = NULL;
    }
    if (zid_authorization) { 
    if(!cJSON_IsString(zid_authorization) && !cJSON_IsNull(zid_authorization))
    {
    goto end; //String
    }
    }

    // cart_create->zid_refresh_token
    cJSON *zid_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "zid_refresh_token");
    if (cJSON_IsNull(zid_refresh_token)) {
        zid_refresh_token = NULL;
    }
    if (zid_refresh_token) { 
    if(!cJSON_IsString(zid_refresh_token) && !cJSON_IsNull(zid_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->flipkart_client_id
    cJSON *flipkart_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "flipkart_client_id");
    if (cJSON_IsNull(flipkart_client_id)) {
        flipkart_client_id = NULL;
    }
    if (flipkart_client_id) { 
    if(!cJSON_IsString(flipkart_client_id) && !cJSON_IsNull(flipkart_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->flipkart_client_secret
    cJSON *flipkart_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "flipkart_client_secret");
    if (cJSON_IsNull(flipkart_client_secret)) {
        flipkart_client_secret = NULL;
    }
    if (flipkart_client_secret) { 
    if(!cJSON_IsString(flipkart_client_secret) && !cJSON_IsNull(flipkart_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->allegro_client_id
    cJSON *allegro_client_id = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "allegro_client_id");
    if (cJSON_IsNull(allegro_client_id)) {
        allegro_client_id = NULL;
    }
    if (allegro_client_id) { 
    if(!cJSON_IsString(allegro_client_id) && !cJSON_IsNull(allegro_client_id))
    {
    goto end; //String
    }
    }

    // cart_create->allegro_client_secret
    cJSON *allegro_client_secret = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "allegro_client_secret");
    if (cJSON_IsNull(allegro_client_secret)) {
        allegro_client_secret = NULL;
    }
    if (allegro_client_secret) { 
    if(!cJSON_IsString(allegro_client_secret) && !cJSON_IsNull(allegro_client_secret))
    {
    goto end; //String
    }
    }

    // cart_create->allegro_access_token
    cJSON *allegro_access_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "allegro_access_token");
    if (cJSON_IsNull(allegro_access_token)) {
        allegro_access_token = NULL;
    }
    if (allegro_access_token) { 
    if(!cJSON_IsString(allegro_access_token) && !cJSON_IsNull(allegro_access_token))
    {
    goto end; //String
    }
    }

    // cart_create->allegro_refresh_token
    cJSON *allegro_refresh_token = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "allegro_refresh_token");
    if (cJSON_IsNull(allegro_refresh_token)) {
        allegro_refresh_token = NULL;
    }
    if (allegro_refresh_token) { 
    if(!cJSON_IsString(allegro_refresh_token) && !cJSON_IsNull(allegro_refresh_token))
    {
    goto end; //String
    }
    }

    // cart_create->allegro_environment
    cJSON *allegro_environment = cJSON_GetObjectItemCaseSensitive(cart_createJSON, "allegro_environment");
    if (cJSON_IsNull(allegro_environment)) {
        allegro_environment = NULL;
    }
    if (allegro_environment) { 
    if(!cJSON_IsString(allegro_environment) && !cJSON_IsNull(allegro_environment))
    {
    goto end; //String
    }
    }


    cart_create_local_var = cart_create_create_internal (
        cart_idVariable,
        store_url && !cJSON_IsNull(store_url) ? strdup(store_url->valuestring) : NULL,
        bridge_url && !cJSON_IsNull(bridge_url) ? strdup(bridge_url->valuestring) : NULL,
        store_root && !cJSON_IsNull(store_root) ? strdup(store_root->valuestring) : NULL,
        store_key && !cJSON_IsNull(store_key) ? strdup(store_key->valuestring) : NULL,
        shared_secret && !cJSON_IsNull(shared_secret) ? strdup(shared_secret->valuestring) : NULL,
        validate_version ? validate_version->valueint : 0,
        verify ? verify->valueint : 0,
        db_tables_prefix && !cJSON_IsNull(db_tables_prefix) ? strdup(db_tables_prefix->valuestring) : NULL,
        user_agent && !cJSON_IsNull(user_agent) ? strdup(user_agent->valuestring) : NULL,
        ftp_host && !cJSON_IsNull(ftp_host) ? strdup(ftp_host->valuestring) : NULL,
        ftp_user && !cJSON_IsNull(ftp_user) ? strdup(ftp_user->valuestring) : NULL,
        ftp_password && !cJSON_IsNull(ftp_password) ? strdup(ftp_password->valuestring) : NULL,
        ftp_port ? ftp_port->valuedouble : 0,
        ftp_store_dir && !cJSON_IsNull(ftp_store_dir) ? strdup(ftp_store_dir->valuestring) : NULL,
        api_key_3dcart && !cJSON_IsNull(api_key_3dcart) ? strdup(api_key_3dcart->valuestring) : NULL,
        admin_account && !cJSON_IsNull(admin_account) ? strdup(admin_account->valuestring) : NULL,
        api_path && !cJSON_IsNull(api_path) ? strdup(api_path->valuestring) : NULL,
        api_key_bigcommerce && !cJSON_IsNull(api_key_bigcommerce) ? strdup(api_key_bigcommerce->valuestring) : NULL,
        client_id && !cJSON_IsNull(client_id) ? strdup(client_id->valuestring) : NULL,
        access_token && !cJSON_IsNull(access_token) ? strdup(access_token->valuestring) : NULL,
        context && !cJSON_IsNull(context) ? strdup(context->valuestring) : NULL,
        access_token && !cJSON_IsNull(access_token) ? strdup(access_token->valuestring) : NULL,
        api_key_shopify && !cJSON_IsNull(api_key_shopify) ? strdup(api_key_shopify->valuestring) : NULL,
        api_password && !cJSON_IsNull(api_password) ? strdup(api_password->valuestring) : NULL,
        access_token_shopify && !cJSON_IsNull(access_token_shopify) ? strdup(access_token_shopify->valuestring) : NULL,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL,
        api_username && !cJSON_IsNull(api_username) ? strdup(api_username->valuestring) : NULL,
        encrypted_password && !cJSON_IsNull(encrypted_password) ? strdup(encrypted_password->valuestring) : NULL,
        login && !cJSON_IsNull(login) ? strdup(login->valuestring) : NULL,
        api_user_adnsf && !cJSON_IsNull(api_user_adnsf) ? strdup(api_user_adnsf->valuestring) : NULL,
        api_pass && !cJSON_IsNull(api_pass) ? strdup(api_pass->valuestring) : NULL,
        private_key && !cJSON_IsNull(private_key) ? strdup(private_key->valuestring) : NULL,
        app_token && !cJSON_IsNull(app_token) ? strdup(app_token->valuestring) : NULL,
        etsy_keystring && !cJSON_IsNull(etsy_keystring) ? strdup(etsy_keystring->valuestring) : NULL,
        etsy_shared_secret && !cJSON_IsNull(etsy_shared_secret) ? strdup(etsy_shared_secret->valuestring) : NULL,
        token_secret && !cJSON_IsNull(token_secret) ? strdup(token_secret->valuestring) : NULL,
        etsy_client_id && !cJSON_IsNull(etsy_client_id) ? strdup(etsy_client_id->valuestring) : NULL,
        etsy_refresh_token && !cJSON_IsNull(etsy_refresh_token) ? strdup(etsy_refresh_token->valuestring) : NULL,
        ebay_client_id && !cJSON_IsNull(ebay_client_id) ? strdup(ebay_client_id->valuestring) : NULL,
        ebay_client_secret && !cJSON_IsNull(ebay_client_secret) ? strdup(ebay_client_secret->valuestring) : NULL,
        ebay_runame && !cJSON_IsNull(ebay_runame) ? strdup(ebay_runame->valuestring) : NULL,
        ebay_access_token && !cJSON_IsNull(ebay_access_token) ? strdup(ebay_access_token->valuestring) : NULL,
        ebay_refresh_token && !cJSON_IsNull(ebay_refresh_token) ? strdup(ebay_refresh_token->valuestring) : NULL,
        ebay_environment && !cJSON_IsNull(ebay_environment) ? strdup(ebay_environment->valuestring) : NULL,
        ebay_site_id ? ebay_site_id->valuedouble : 0,
        dw_client_id && !cJSON_IsNull(dw_client_id) ? strdup(dw_client_id->valuestring) : NULL,
        dw_api_pass && !cJSON_IsNull(dw_api_pass) ? strdup(dw_api_pass->valuestring) : NULL,
        demandware_user_name && !cJSON_IsNull(demandware_user_name) ? strdup(demandware_user_name->valuestring) : NULL,
        demandware_user_password && !cJSON_IsNull(demandware_user_password) ? strdup(demandware_user_password->valuestring) : NULL,
        strdup(store_id->valuestring),
        seller_id && !cJSON_IsNull(seller_id) ? strdup(seller_id->valuestring) : NULL,
        environment && !cJSON_IsNull(environment) ? strdup(environment->valuestring) : NULL,
        hybris_client_id && !cJSON_IsNull(hybris_client_id) ? strdup(hybris_client_id->valuestring) : NULL,
        hybris_client_secret && !cJSON_IsNull(hybris_client_secret) ? strdup(hybris_client_secret->valuestring) : NULL,
        hybris_username && !cJSON_IsNull(hybris_username) ? strdup(hybris_username->valuestring) : NULL,
        hybris_password && !cJSON_IsNull(hybris_password) ? strdup(hybris_password->valuestring) : NULL,
        hybris_websites ? hybris_websitesList : NULL,
        walmart_client_id && !cJSON_IsNull(walmart_client_id) ? strdup(walmart_client_id->valuestring) : NULL,
        walmart_client_secret && !cJSON_IsNull(walmart_client_secret) ? strdup(walmart_client_secret->valuestring) : NULL,
        walmart_environment && !cJSON_IsNull(walmart_environment) ? strdup(walmart_environment->valuestring) : NULL,
        walmart_channel_type && !cJSON_IsNull(walmart_channel_type) ? strdup(walmart_channel_type->valuestring) : NULL,
        walmart_region && !cJSON_IsNull(walmart_region) ? strdup(walmart_region->valuestring) : NULL,
        lightspeed_api_key && !cJSON_IsNull(lightspeed_api_key) ? strdup(lightspeed_api_key->valuestring) : NULL,
        lightspeed_api_secret && !cJSON_IsNull(lightspeed_api_secret) ? strdup(lightspeed_api_secret->valuestring) : NULL,
        shoplazza_access_token && !cJSON_IsNull(shoplazza_access_token) ? strdup(shoplazza_access_token->valuestring) : NULL,
        shoplazza_shared_secret && !cJSON_IsNull(shoplazza_shared_secret) ? strdup(shoplazza_shared_secret->valuestring) : NULL,
        shopware_access_key && !cJSON_IsNull(shopware_access_key) ? strdup(shopware_access_key->valuestring) : NULL,
        shopware_api_key && !cJSON_IsNull(shopware_api_key) ? strdup(shopware_api_key->valuestring) : NULL,
        shopware_api_secret && !cJSON_IsNull(shopware_api_secret) ? strdup(shopware_api_secret->valuestring) : NULL,
        commercehq_api_key && !cJSON_IsNull(commercehq_api_key) ? strdup(commercehq_api_key->valuestring) : NULL,
        commercehq_api_password && !cJSON_IsNull(commercehq_api_password) ? strdup(commercehq_api_password->valuestring) : NULL,
        _3dcart_private_key && !cJSON_IsNull(_3dcart_private_key) ? strdup(_3dcart_private_key->valuestring) : NULL,
        _3dcart_access_token && !cJSON_IsNull(_3dcart_access_token) ? strdup(_3dcart_access_token->valuestring) : NULL,
        wc_consumer_key && !cJSON_IsNull(wc_consumer_key) ? strdup(wc_consumer_key->valuestring) : NULL,
        wc_consumer_secret && !cJSON_IsNull(wc_consumer_secret) ? strdup(wc_consumer_secret->valuestring) : NULL,
        magento_consumer_key && !cJSON_IsNull(magento_consumer_key) ? strdup(magento_consumer_key->valuestring) : NULL,
        magento_consumer_secret && !cJSON_IsNull(magento_consumer_secret) ? strdup(magento_consumer_secret->valuestring) : NULL,
        magento_access_token && !cJSON_IsNull(magento_access_token) ? strdup(magento_access_token->valuestring) : NULL,
        magento_token_secret && !cJSON_IsNull(magento_token_secret) ? strdup(magento_token_secret->valuestring) : NULL,
        prestashop_webservice_key && !cJSON_IsNull(prestashop_webservice_key) ? strdup(prestashop_webservice_key->valuestring) : NULL,
        strdup(wix_app_id->valuestring),
        strdup(wix_app_secret_key->valuestring),
        wix_instance_id && !cJSON_IsNull(wix_instance_id) ? strdup(wix_instance_id->valuestring) : NULL,
        wix_refresh_token && !cJSON_IsNull(wix_refresh_token) ? strdup(wix_refresh_token->valuestring) : NULL,
        mercado_libre_app_id && !cJSON_IsNull(mercado_libre_app_id) ? strdup(mercado_libre_app_id->valuestring) : NULL,
        mercado_libre_app_secret_key && !cJSON_IsNull(mercado_libre_app_secret_key) ? strdup(mercado_libre_app_secret_key->valuestring) : NULL,
        mercado_libre_refresh_token && !cJSON_IsNull(mercado_libre_refresh_token) ? strdup(mercado_libre_refresh_token->valuestring) : NULL,
        zid_client_id ? zid_client_id->valuedouble : 0,
        zid_client_secret && !cJSON_IsNull(zid_client_secret) ? strdup(zid_client_secret->valuestring) : NULL,
        zid_access_token && !cJSON_IsNull(zid_access_token) ? strdup(zid_access_token->valuestring) : NULL,
        zid_authorization && !cJSON_IsNull(zid_authorization) ? strdup(zid_authorization->valuestring) : NULL,
        zid_refresh_token && !cJSON_IsNull(zid_refresh_token) ? strdup(zid_refresh_token->valuestring) : NULL,
        flipkart_client_id && !cJSON_IsNull(flipkart_client_id) ? strdup(flipkart_client_id->valuestring) : NULL,
        flipkart_client_secret && !cJSON_IsNull(flipkart_client_secret) ? strdup(flipkart_client_secret->valuestring) : NULL,
        allegro_client_id && !cJSON_IsNull(allegro_client_id) ? strdup(allegro_client_id->valuestring) : NULL,
        allegro_client_secret && !cJSON_IsNull(allegro_client_secret) ? strdup(allegro_client_secret->valuestring) : NULL,
        allegro_access_token && !cJSON_IsNull(allegro_access_token) ? strdup(allegro_access_token->valuestring) : NULL,
        allegro_refresh_token && !cJSON_IsNull(allegro_refresh_token) ? strdup(allegro_refresh_token->valuestring) : NULL,
        allegro_environment && !cJSON_IsNull(allegro_environment) ? strdup(allegro_environment->valuestring) : NULL
        );

    return cart_create_local_var;
end:
    if (hybris_websitesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hybris_websitesList) {
            account_cart_add_hybris_websites_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(hybris_websitesList);
        hybris_websitesList = NULL;
    }
    return NULL;

}
