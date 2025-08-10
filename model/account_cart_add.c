#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_cart_add.h"


char* account_cart_add_cart_id_ToString(api2cart_openapi_account_cart_add_CARTID_e cart_id) {
    char* cart_idArray[] =  { "NULL", "3DCart", "3DCartApi", "AceShop", "AmazonSP", "AspDotNetStorefront", "BigCartel", "BigcommerceApi", "Bol", "CommerceHQ", "Creloaded", "Cscart", "Cubecart", "Demandware", "EBay", "Ecwid", "EtsyAPIv3", "Flipkart", "Gambio", "Hybris", "JooCart", "Lazada", "LightSpeed", "Magento1212", "Magento2Api", "MercadoLibre", "MijoShop", "Miva", "Neto", "Opencart14", "Oscmax2", "Oscommerce22ms2", "Otto", "Oxid", "Pinnacle", "Prestashop", "PrestashopApi", "SSPremium", "Salla", "Shopify", "Shopee", "Shoplazza", "Shopline", "Shopware", "ShopwareApi", "Square", "Squarespace", "Temu", "Tiendanube", "TikTokShop", "Tomatocart", "Ubercart", "Virtuemart", "Volusion", "WPecommerce", "Walmart", "WebAsyst", "Wix", "Woocommerce", "WoocommerceApi", "Xcart", "Xtcommerce", "XtcommerceVeyton", "Zencart137", "Zid", "Zoey", "Zoho" };
    return cart_idArray[cart_id];
}

api2cart_openapi_account_cart_add_CARTID_e account_cart_add_cart_id_FromString(char* cart_id){
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

static account_cart_add_t *account_cart_add_create_internal(
    api2cart_openapi_account_cart_add_CARTID_e cart_id,
    char *store_url,
    char *bridge_url,
    char *store_root,
    char *store_key,
    int validate_version,
    int verify,
    char *db_tables_prefix,
    char *user_agent,
    char *ftp_host,
    char *ftp_user,
    char *ftp_password,
    int ftp_port,
    char *ftp_store_dir,
    char *_3dcart_private_key,
    char *_3dcart_access_token,
    char *_3dcartapi_api_key,
    char *amazon_sp_client_id,
    char *amazon_sp_client_secret,
    char *amazon_sp_refresh_token,
    char *amazon_sp_aws_region,
    char *amazon_sp_api_environment,
    char *amazon_seller_id,
    char *aspdotnetstorefront_api_user,
    char *aspdotnetstorefront_api_pass,
    char *bigcommerceapi_admin_account,
    char *bigcommerceapi_api_path,
    char *bigcommerceapi_api_key,
    char *bigcommerceapi_client_id,
    char *bigcommerceapi_access_token,
    char *bigcommerceapi_context,
    char *bol_api_key,
    char *bol_api_secret,
    int bol_retailer_id,
    char *bigcartel_user_name,
    char *bigcartel_password,
    char *bricklink_consumer_key,
    char *bricklink_consumer_secret,
    char *bricklink_token,
    char *bricklink_token_secret,
    char *demandware_client_id,
    char *demandware_api_password,
    char *demandware_user_name,
    char *demandware_user_password,
    char *ebay_client_id,
    char *ebay_client_secret,
    char *ebay_runame,
    char *ebay_access_token,
    char *ebay_refresh_token,
    char *ebay_environment,
    int ebay_site_id,
    char *walmart_client_id,
    char *walmart_client_secret,
    char *walmart_environment,
    char *walmart_channel_type,
    char *walmart_region,
    char *ecwid_acess_token,
    char *ecwid_store_id,
    char *lazada_app_id,
    char *lazada_app_secret,
    char *lazada_refresh_token,
    char *lazada_region,
    char *lightspeed_api_key,
    char *lightspeed_api_secret,
    char *etsy_keystring,
    char *etsy_shared_secret,
    char *etsy_access_token,
    char *etsy_token_secret,
    char *etsy_client_id,
    char *etsy_refresh_token,
    char *facebook_app_id,
    char *facebook_app_secret,
    char *facebook_access_token,
    char *facebook_business_id,
    char *neto_api_key,
    char *neto_api_username,
    char *shopline_access_token,
    char *shopline_app_key,
    char *shopline_app_secret,
    char *shopline_shared_secret,
    char *shopify_access_token,
    char *shopify_api_key,
    char *shopify_api_password,
    char *shopify_shared_secret,
    char *shopee_partner_id,
    char *shopee_partner_key,
    char *shopee_shop_id,
    char *shopee_refresh_token,
    char *shopee_region,
    char *shopee_environment,
    char *shoplazza_access_token,
    char *shoplazza_shared_secret,
    char *shopware_access_key,
    char *shopware_api_key,
    char *shopware_api_secret,
    char *miva_access_token,
    char *miva_signature,
    int tiendanube_user_id,
    char *tiendanube_access_token,
    char *tiendanube_client_secret,
    char *volusion_login,
    char *volusion_password,
    char *hybris_client_id,
    char *hybris_client_secret,
    char *hybris_username,
    char *hybris_password,
    list_t *hybris_websites,
    char *square_client_id,
    char *square_client_secret,
    char *square_refresh_token,
    char *squarespace_api_key,
    char *squarespace_client_id,
    char *squarespace_client_secret,
    char *squarespace_access_token,
    char *squarespace_refresh_token,
    char *commercehq_api_key,
    char *commercehq_api_password,
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
    char *allegro_environment,
    char *zoho_client_id,
    char *zoho_client_secret,
    char *zoho_refresh_token,
    char *zoho_region,
    char *otto_client_id,
    char *otto_client_secret,
    char *otto_app_id,
    char *otto_refresh_token,
    char *otto_environment,
    char *otto_access_token,
    char *tiktokshop_app_key,
    char *tiktokshop_app_secret,
    char *tiktokshop_refresh_token,
    char *tiktokshop_access_token,
    char *salla_client_id,
    char *salla_client_secret,
    char *salla_refresh_token,
    char *salla_access_token,
    char *temu_app_key,
    char *temu_app_secret,
    char *temu_access_token,
    char *temu_region
    ) {
    account_cart_add_t *account_cart_add_local_var = malloc(sizeof(account_cart_add_t));
    if (!account_cart_add_local_var) {
        return NULL;
    }
    account_cart_add_local_var->cart_id = cart_id;
    account_cart_add_local_var->store_url = store_url;
    account_cart_add_local_var->bridge_url = bridge_url;
    account_cart_add_local_var->store_root = store_root;
    account_cart_add_local_var->store_key = store_key;
    account_cart_add_local_var->validate_version = validate_version;
    account_cart_add_local_var->verify = verify;
    account_cart_add_local_var->db_tables_prefix = db_tables_prefix;
    account_cart_add_local_var->user_agent = user_agent;
    account_cart_add_local_var->ftp_host = ftp_host;
    account_cart_add_local_var->ftp_user = ftp_user;
    account_cart_add_local_var->ftp_password = ftp_password;
    account_cart_add_local_var->ftp_port = ftp_port;
    account_cart_add_local_var->ftp_store_dir = ftp_store_dir;
    account_cart_add_local_var->_3dcart_private_key = _3dcart_private_key;
    account_cart_add_local_var->_3dcart_access_token = _3dcart_access_token;
    account_cart_add_local_var->_3dcartapi_api_key = _3dcartapi_api_key;
    account_cart_add_local_var->amazon_sp_client_id = amazon_sp_client_id;
    account_cart_add_local_var->amazon_sp_client_secret = amazon_sp_client_secret;
    account_cart_add_local_var->amazon_sp_refresh_token = amazon_sp_refresh_token;
    account_cart_add_local_var->amazon_sp_aws_region = amazon_sp_aws_region;
    account_cart_add_local_var->amazon_sp_api_environment = amazon_sp_api_environment;
    account_cart_add_local_var->amazon_seller_id = amazon_seller_id;
    account_cart_add_local_var->aspdotnetstorefront_api_user = aspdotnetstorefront_api_user;
    account_cart_add_local_var->aspdotnetstorefront_api_pass = aspdotnetstorefront_api_pass;
    account_cart_add_local_var->bigcommerceapi_admin_account = bigcommerceapi_admin_account;
    account_cart_add_local_var->bigcommerceapi_api_path = bigcommerceapi_api_path;
    account_cart_add_local_var->bigcommerceapi_api_key = bigcommerceapi_api_key;
    account_cart_add_local_var->bigcommerceapi_client_id = bigcommerceapi_client_id;
    account_cart_add_local_var->bigcommerceapi_access_token = bigcommerceapi_access_token;
    account_cart_add_local_var->bigcommerceapi_context = bigcommerceapi_context;
    account_cart_add_local_var->bol_api_key = bol_api_key;
    account_cart_add_local_var->bol_api_secret = bol_api_secret;
    account_cart_add_local_var->bol_retailer_id = bol_retailer_id;
    account_cart_add_local_var->bigcartel_user_name = bigcartel_user_name;
    account_cart_add_local_var->bigcartel_password = bigcartel_password;
    account_cart_add_local_var->bricklink_consumer_key = bricklink_consumer_key;
    account_cart_add_local_var->bricklink_consumer_secret = bricklink_consumer_secret;
    account_cart_add_local_var->bricklink_token = bricklink_token;
    account_cart_add_local_var->bricklink_token_secret = bricklink_token_secret;
    account_cart_add_local_var->demandware_client_id = demandware_client_id;
    account_cart_add_local_var->demandware_api_password = demandware_api_password;
    account_cart_add_local_var->demandware_user_name = demandware_user_name;
    account_cart_add_local_var->demandware_user_password = demandware_user_password;
    account_cart_add_local_var->ebay_client_id = ebay_client_id;
    account_cart_add_local_var->ebay_client_secret = ebay_client_secret;
    account_cart_add_local_var->ebay_runame = ebay_runame;
    account_cart_add_local_var->ebay_access_token = ebay_access_token;
    account_cart_add_local_var->ebay_refresh_token = ebay_refresh_token;
    account_cart_add_local_var->ebay_environment = ebay_environment;
    account_cart_add_local_var->ebay_site_id = ebay_site_id;
    account_cart_add_local_var->walmart_client_id = walmart_client_id;
    account_cart_add_local_var->walmart_client_secret = walmart_client_secret;
    account_cart_add_local_var->walmart_environment = walmart_environment;
    account_cart_add_local_var->walmart_channel_type = walmart_channel_type;
    account_cart_add_local_var->walmart_region = walmart_region;
    account_cart_add_local_var->ecwid_acess_token = ecwid_acess_token;
    account_cart_add_local_var->ecwid_store_id = ecwid_store_id;
    account_cart_add_local_var->lazada_app_id = lazada_app_id;
    account_cart_add_local_var->lazada_app_secret = lazada_app_secret;
    account_cart_add_local_var->lazada_refresh_token = lazada_refresh_token;
    account_cart_add_local_var->lazada_region = lazada_region;
    account_cart_add_local_var->lightspeed_api_key = lightspeed_api_key;
    account_cart_add_local_var->lightspeed_api_secret = lightspeed_api_secret;
    account_cart_add_local_var->etsy_keystring = etsy_keystring;
    account_cart_add_local_var->etsy_shared_secret = etsy_shared_secret;
    account_cart_add_local_var->etsy_access_token = etsy_access_token;
    account_cart_add_local_var->etsy_token_secret = etsy_token_secret;
    account_cart_add_local_var->etsy_client_id = etsy_client_id;
    account_cart_add_local_var->etsy_refresh_token = etsy_refresh_token;
    account_cart_add_local_var->facebook_app_id = facebook_app_id;
    account_cart_add_local_var->facebook_app_secret = facebook_app_secret;
    account_cart_add_local_var->facebook_access_token = facebook_access_token;
    account_cart_add_local_var->facebook_business_id = facebook_business_id;
    account_cart_add_local_var->neto_api_key = neto_api_key;
    account_cart_add_local_var->neto_api_username = neto_api_username;
    account_cart_add_local_var->shopline_access_token = shopline_access_token;
    account_cart_add_local_var->shopline_app_key = shopline_app_key;
    account_cart_add_local_var->shopline_app_secret = shopline_app_secret;
    account_cart_add_local_var->shopline_shared_secret = shopline_shared_secret;
    account_cart_add_local_var->shopify_access_token = shopify_access_token;
    account_cart_add_local_var->shopify_api_key = shopify_api_key;
    account_cart_add_local_var->shopify_api_password = shopify_api_password;
    account_cart_add_local_var->shopify_shared_secret = shopify_shared_secret;
    account_cart_add_local_var->shopee_partner_id = shopee_partner_id;
    account_cart_add_local_var->shopee_partner_key = shopee_partner_key;
    account_cart_add_local_var->shopee_shop_id = shopee_shop_id;
    account_cart_add_local_var->shopee_refresh_token = shopee_refresh_token;
    account_cart_add_local_var->shopee_region = shopee_region;
    account_cart_add_local_var->shopee_environment = shopee_environment;
    account_cart_add_local_var->shoplazza_access_token = shoplazza_access_token;
    account_cart_add_local_var->shoplazza_shared_secret = shoplazza_shared_secret;
    account_cart_add_local_var->shopware_access_key = shopware_access_key;
    account_cart_add_local_var->shopware_api_key = shopware_api_key;
    account_cart_add_local_var->shopware_api_secret = shopware_api_secret;
    account_cart_add_local_var->miva_access_token = miva_access_token;
    account_cart_add_local_var->miva_signature = miva_signature;
    account_cart_add_local_var->tiendanube_user_id = tiendanube_user_id;
    account_cart_add_local_var->tiendanube_access_token = tiendanube_access_token;
    account_cart_add_local_var->tiendanube_client_secret = tiendanube_client_secret;
    account_cart_add_local_var->volusion_login = volusion_login;
    account_cart_add_local_var->volusion_password = volusion_password;
    account_cart_add_local_var->hybris_client_id = hybris_client_id;
    account_cart_add_local_var->hybris_client_secret = hybris_client_secret;
    account_cart_add_local_var->hybris_username = hybris_username;
    account_cart_add_local_var->hybris_password = hybris_password;
    account_cart_add_local_var->hybris_websites = hybris_websites;
    account_cart_add_local_var->square_client_id = square_client_id;
    account_cart_add_local_var->square_client_secret = square_client_secret;
    account_cart_add_local_var->square_refresh_token = square_refresh_token;
    account_cart_add_local_var->squarespace_api_key = squarespace_api_key;
    account_cart_add_local_var->squarespace_client_id = squarespace_client_id;
    account_cart_add_local_var->squarespace_client_secret = squarespace_client_secret;
    account_cart_add_local_var->squarespace_access_token = squarespace_access_token;
    account_cart_add_local_var->squarespace_refresh_token = squarespace_refresh_token;
    account_cart_add_local_var->commercehq_api_key = commercehq_api_key;
    account_cart_add_local_var->commercehq_api_password = commercehq_api_password;
    account_cart_add_local_var->wc_consumer_key = wc_consumer_key;
    account_cart_add_local_var->wc_consumer_secret = wc_consumer_secret;
    account_cart_add_local_var->magento_consumer_key = magento_consumer_key;
    account_cart_add_local_var->magento_consumer_secret = magento_consumer_secret;
    account_cart_add_local_var->magento_access_token = magento_access_token;
    account_cart_add_local_var->magento_token_secret = magento_token_secret;
    account_cart_add_local_var->prestashop_webservice_key = prestashop_webservice_key;
    account_cart_add_local_var->wix_app_id = wix_app_id;
    account_cart_add_local_var->wix_app_secret_key = wix_app_secret_key;
    account_cart_add_local_var->wix_instance_id = wix_instance_id;
    account_cart_add_local_var->wix_refresh_token = wix_refresh_token;
    account_cart_add_local_var->mercado_libre_app_id = mercado_libre_app_id;
    account_cart_add_local_var->mercado_libre_app_secret_key = mercado_libre_app_secret_key;
    account_cart_add_local_var->mercado_libre_refresh_token = mercado_libre_refresh_token;
    account_cart_add_local_var->zid_client_id = zid_client_id;
    account_cart_add_local_var->zid_client_secret = zid_client_secret;
    account_cart_add_local_var->zid_access_token = zid_access_token;
    account_cart_add_local_var->zid_authorization = zid_authorization;
    account_cart_add_local_var->zid_refresh_token = zid_refresh_token;
    account_cart_add_local_var->flipkart_client_id = flipkart_client_id;
    account_cart_add_local_var->flipkart_client_secret = flipkart_client_secret;
    account_cart_add_local_var->allegro_client_id = allegro_client_id;
    account_cart_add_local_var->allegro_client_secret = allegro_client_secret;
    account_cart_add_local_var->allegro_access_token = allegro_access_token;
    account_cart_add_local_var->allegro_refresh_token = allegro_refresh_token;
    account_cart_add_local_var->allegro_environment = allegro_environment;
    account_cart_add_local_var->zoho_client_id = zoho_client_id;
    account_cart_add_local_var->zoho_client_secret = zoho_client_secret;
    account_cart_add_local_var->zoho_refresh_token = zoho_refresh_token;
    account_cart_add_local_var->zoho_region = zoho_region;
    account_cart_add_local_var->otto_client_id = otto_client_id;
    account_cart_add_local_var->otto_client_secret = otto_client_secret;
    account_cart_add_local_var->otto_app_id = otto_app_id;
    account_cart_add_local_var->otto_refresh_token = otto_refresh_token;
    account_cart_add_local_var->otto_environment = otto_environment;
    account_cart_add_local_var->otto_access_token = otto_access_token;
    account_cart_add_local_var->tiktokshop_app_key = tiktokshop_app_key;
    account_cart_add_local_var->tiktokshop_app_secret = tiktokshop_app_secret;
    account_cart_add_local_var->tiktokshop_refresh_token = tiktokshop_refresh_token;
    account_cart_add_local_var->tiktokshop_access_token = tiktokshop_access_token;
    account_cart_add_local_var->salla_client_id = salla_client_id;
    account_cart_add_local_var->salla_client_secret = salla_client_secret;
    account_cart_add_local_var->salla_refresh_token = salla_refresh_token;
    account_cart_add_local_var->salla_access_token = salla_access_token;
    account_cart_add_local_var->temu_app_key = temu_app_key;
    account_cart_add_local_var->temu_app_secret = temu_app_secret;
    account_cart_add_local_var->temu_access_token = temu_access_token;
    account_cart_add_local_var->temu_region = temu_region;

    account_cart_add_local_var->_library_owned = 1;
    return account_cart_add_local_var;
}

__attribute__((deprecated)) account_cart_add_t *account_cart_add_create(
    api2cart_openapi_account_cart_add_CARTID_e cart_id,
    char *store_url,
    char *bridge_url,
    char *store_root,
    char *store_key,
    int validate_version,
    int verify,
    char *db_tables_prefix,
    char *user_agent,
    char *ftp_host,
    char *ftp_user,
    char *ftp_password,
    int ftp_port,
    char *ftp_store_dir,
    char *_3dcart_private_key,
    char *_3dcart_access_token,
    char *_3dcartapi_api_key,
    char *amazon_sp_client_id,
    char *amazon_sp_client_secret,
    char *amazon_sp_refresh_token,
    char *amazon_sp_aws_region,
    char *amazon_sp_api_environment,
    char *amazon_seller_id,
    char *aspdotnetstorefront_api_user,
    char *aspdotnetstorefront_api_pass,
    char *bigcommerceapi_admin_account,
    char *bigcommerceapi_api_path,
    char *bigcommerceapi_api_key,
    char *bigcommerceapi_client_id,
    char *bigcommerceapi_access_token,
    char *bigcommerceapi_context,
    char *bol_api_key,
    char *bol_api_secret,
    int bol_retailer_id,
    char *bigcartel_user_name,
    char *bigcartel_password,
    char *bricklink_consumer_key,
    char *bricklink_consumer_secret,
    char *bricklink_token,
    char *bricklink_token_secret,
    char *demandware_client_id,
    char *demandware_api_password,
    char *demandware_user_name,
    char *demandware_user_password,
    char *ebay_client_id,
    char *ebay_client_secret,
    char *ebay_runame,
    char *ebay_access_token,
    char *ebay_refresh_token,
    char *ebay_environment,
    int ebay_site_id,
    char *walmart_client_id,
    char *walmart_client_secret,
    char *walmart_environment,
    char *walmart_channel_type,
    char *walmart_region,
    char *ecwid_acess_token,
    char *ecwid_store_id,
    char *lazada_app_id,
    char *lazada_app_secret,
    char *lazada_refresh_token,
    char *lazada_region,
    char *lightspeed_api_key,
    char *lightspeed_api_secret,
    char *etsy_keystring,
    char *etsy_shared_secret,
    char *etsy_access_token,
    char *etsy_token_secret,
    char *etsy_client_id,
    char *etsy_refresh_token,
    char *facebook_app_id,
    char *facebook_app_secret,
    char *facebook_access_token,
    char *facebook_business_id,
    char *neto_api_key,
    char *neto_api_username,
    char *shopline_access_token,
    char *shopline_app_key,
    char *shopline_app_secret,
    char *shopline_shared_secret,
    char *shopify_access_token,
    char *shopify_api_key,
    char *shopify_api_password,
    char *shopify_shared_secret,
    char *shopee_partner_id,
    char *shopee_partner_key,
    char *shopee_shop_id,
    char *shopee_refresh_token,
    char *shopee_region,
    char *shopee_environment,
    char *shoplazza_access_token,
    char *shoplazza_shared_secret,
    char *shopware_access_key,
    char *shopware_api_key,
    char *shopware_api_secret,
    char *miva_access_token,
    char *miva_signature,
    int tiendanube_user_id,
    char *tiendanube_access_token,
    char *tiendanube_client_secret,
    char *volusion_login,
    char *volusion_password,
    char *hybris_client_id,
    char *hybris_client_secret,
    char *hybris_username,
    char *hybris_password,
    list_t *hybris_websites,
    char *square_client_id,
    char *square_client_secret,
    char *square_refresh_token,
    char *squarespace_api_key,
    char *squarespace_client_id,
    char *squarespace_client_secret,
    char *squarespace_access_token,
    char *squarespace_refresh_token,
    char *commercehq_api_key,
    char *commercehq_api_password,
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
    char *allegro_environment,
    char *zoho_client_id,
    char *zoho_client_secret,
    char *zoho_refresh_token,
    char *zoho_region,
    char *otto_client_id,
    char *otto_client_secret,
    char *otto_app_id,
    char *otto_refresh_token,
    char *otto_environment,
    char *otto_access_token,
    char *tiktokshop_app_key,
    char *tiktokshop_app_secret,
    char *tiktokshop_refresh_token,
    char *tiktokshop_access_token,
    char *salla_client_id,
    char *salla_client_secret,
    char *salla_refresh_token,
    char *salla_access_token,
    char *temu_app_key,
    char *temu_app_secret,
    char *temu_access_token,
    char *temu_region
    ) {
    return account_cart_add_create_internal (
        cart_id,
        store_url,
        bridge_url,
        store_root,
        store_key,
        validate_version,
        verify,
        db_tables_prefix,
        user_agent,
        ftp_host,
        ftp_user,
        ftp_password,
        ftp_port,
        ftp_store_dir,
        _3dcart_private_key,
        _3dcart_access_token,
        _3dcartapi_api_key,
        amazon_sp_client_id,
        amazon_sp_client_secret,
        amazon_sp_refresh_token,
        amazon_sp_aws_region,
        amazon_sp_api_environment,
        amazon_seller_id,
        aspdotnetstorefront_api_user,
        aspdotnetstorefront_api_pass,
        bigcommerceapi_admin_account,
        bigcommerceapi_api_path,
        bigcommerceapi_api_key,
        bigcommerceapi_client_id,
        bigcommerceapi_access_token,
        bigcommerceapi_context,
        bol_api_key,
        bol_api_secret,
        bol_retailer_id,
        bigcartel_user_name,
        bigcartel_password,
        bricklink_consumer_key,
        bricklink_consumer_secret,
        bricklink_token,
        bricklink_token_secret,
        demandware_client_id,
        demandware_api_password,
        demandware_user_name,
        demandware_user_password,
        ebay_client_id,
        ebay_client_secret,
        ebay_runame,
        ebay_access_token,
        ebay_refresh_token,
        ebay_environment,
        ebay_site_id,
        walmart_client_id,
        walmart_client_secret,
        walmart_environment,
        walmart_channel_type,
        walmart_region,
        ecwid_acess_token,
        ecwid_store_id,
        lazada_app_id,
        lazada_app_secret,
        lazada_refresh_token,
        lazada_region,
        lightspeed_api_key,
        lightspeed_api_secret,
        etsy_keystring,
        etsy_shared_secret,
        etsy_access_token,
        etsy_token_secret,
        etsy_client_id,
        etsy_refresh_token,
        facebook_app_id,
        facebook_app_secret,
        facebook_access_token,
        facebook_business_id,
        neto_api_key,
        neto_api_username,
        shopline_access_token,
        shopline_app_key,
        shopline_app_secret,
        shopline_shared_secret,
        shopify_access_token,
        shopify_api_key,
        shopify_api_password,
        shopify_shared_secret,
        shopee_partner_id,
        shopee_partner_key,
        shopee_shop_id,
        shopee_refresh_token,
        shopee_region,
        shopee_environment,
        shoplazza_access_token,
        shoplazza_shared_secret,
        shopware_access_key,
        shopware_api_key,
        shopware_api_secret,
        miva_access_token,
        miva_signature,
        tiendanube_user_id,
        tiendanube_access_token,
        tiendanube_client_secret,
        volusion_login,
        volusion_password,
        hybris_client_id,
        hybris_client_secret,
        hybris_username,
        hybris_password,
        hybris_websites,
        square_client_id,
        square_client_secret,
        square_refresh_token,
        squarespace_api_key,
        squarespace_client_id,
        squarespace_client_secret,
        squarespace_access_token,
        squarespace_refresh_token,
        commercehq_api_key,
        commercehq_api_password,
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
        allegro_environment,
        zoho_client_id,
        zoho_client_secret,
        zoho_refresh_token,
        zoho_region,
        otto_client_id,
        otto_client_secret,
        otto_app_id,
        otto_refresh_token,
        otto_environment,
        otto_access_token,
        tiktokshop_app_key,
        tiktokshop_app_secret,
        tiktokshop_refresh_token,
        tiktokshop_access_token,
        salla_client_id,
        salla_client_secret,
        salla_refresh_token,
        salla_access_token,
        temu_app_key,
        temu_app_secret,
        temu_access_token,
        temu_region
        );
}

void account_cart_add_free(account_cart_add_t *account_cart_add) {
    if(NULL == account_cart_add){
        return ;
    }
    if(account_cart_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_cart_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_cart_add->store_url) {
        free(account_cart_add->store_url);
        account_cart_add->store_url = NULL;
    }
    if (account_cart_add->bridge_url) {
        free(account_cart_add->bridge_url);
        account_cart_add->bridge_url = NULL;
    }
    if (account_cart_add->store_root) {
        free(account_cart_add->store_root);
        account_cart_add->store_root = NULL;
    }
    if (account_cart_add->store_key) {
        free(account_cart_add->store_key);
        account_cart_add->store_key = NULL;
    }
    if (account_cart_add->db_tables_prefix) {
        free(account_cart_add->db_tables_prefix);
        account_cart_add->db_tables_prefix = NULL;
    }
    if (account_cart_add->user_agent) {
        free(account_cart_add->user_agent);
        account_cart_add->user_agent = NULL;
    }
    if (account_cart_add->ftp_host) {
        free(account_cart_add->ftp_host);
        account_cart_add->ftp_host = NULL;
    }
    if (account_cart_add->ftp_user) {
        free(account_cart_add->ftp_user);
        account_cart_add->ftp_user = NULL;
    }
    if (account_cart_add->ftp_password) {
        free(account_cart_add->ftp_password);
        account_cart_add->ftp_password = NULL;
    }
    if (account_cart_add->ftp_store_dir) {
        free(account_cart_add->ftp_store_dir);
        account_cart_add->ftp_store_dir = NULL;
    }
    if (account_cart_add->_3dcart_private_key) {
        free(account_cart_add->_3dcart_private_key);
        account_cart_add->_3dcart_private_key = NULL;
    }
    if (account_cart_add->_3dcart_access_token) {
        free(account_cart_add->_3dcart_access_token);
        account_cart_add->_3dcart_access_token = NULL;
    }
    if (account_cart_add->_3dcartapi_api_key) {
        free(account_cart_add->_3dcartapi_api_key);
        account_cart_add->_3dcartapi_api_key = NULL;
    }
    if (account_cart_add->amazon_sp_client_id) {
        free(account_cart_add->amazon_sp_client_id);
        account_cart_add->amazon_sp_client_id = NULL;
    }
    if (account_cart_add->amazon_sp_client_secret) {
        free(account_cart_add->amazon_sp_client_secret);
        account_cart_add->amazon_sp_client_secret = NULL;
    }
    if (account_cart_add->amazon_sp_refresh_token) {
        free(account_cart_add->amazon_sp_refresh_token);
        account_cart_add->amazon_sp_refresh_token = NULL;
    }
    if (account_cart_add->amazon_sp_aws_region) {
        free(account_cart_add->amazon_sp_aws_region);
        account_cart_add->amazon_sp_aws_region = NULL;
    }
    if (account_cart_add->amazon_sp_api_environment) {
        free(account_cart_add->amazon_sp_api_environment);
        account_cart_add->amazon_sp_api_environment = NULL;
    }
    if (account_cart_add->amazon_seller_id) {
        free(account_cart_add->amazon_seller_id);
        account_cart_add->amazon_seller_id = NULL;
    }
    if (account_cart_add->aspdotnetstorefront_api_user) {
        free(account_cart_add->aspdotnetstorefront_api_user);
        account_cart_add->aspdotnetstorefront_api_user = NULL;
    }
    if (account_cart_add->aspdotnetstorefront_api_pass) {
        free(account_cart_add->aspdotnetstorefront_api_pass);
        account_cart_add->aspdotnetstorefront_api_pass = NULL;
    }
    if (account_cart_add->bigcommerceapi_admin_account) {
        free(account_cart_add->bigcommerceapi_admin_account);
        account_cart_add->bigcommerceapi_admin_account = NULL;
    }
    if (account_cart_add->bigcommerceapi_api_path) {
        free(account_cart_add->bigcommerceapi_api_path);
        account_cart_add->bigcommerceapi_api_path = NULL;
    }
    if (account_cart_add->bigcommerceapi_api_key) {
        free(account_cart_add->bigcommerceapi_api_key);
        account_cart_add->bigcommerceapi_api_key = NULL;
    }
    if (account_cart_add->bigcommerceapi_client_id) {
        free(account_cart_add->bigcommerceapi_client_id);
        account_cart_add->bigcommerceapi_client_id = NULL;
    }
    if (account_cart_add->bigcommerceapi_access_token) {
        free(account_cart_add->bigcommerceapi_access_token);
        account_cart_add->bigcommerceapi_access_token = NULL;
    }
    if (account_cart_add->bigcommerceapi_context) {
        free(account_cart_add->bigcommerceapi_context);
        account_cart_add->bigcommerceapi_context = NULL;
    }
    if (account_cart_add->bol_api_key) {
        free(account_cart_add->bol_api_key);
        account_cart_add->bol_api_key = NULL;
    }
    if (account_cart_add->bol_api_secret) {
        free(account_cart_add->bol_api_secret);
        account_cart_add->bol_api_secret = NULL;
    }
    if (account_cart_add->bigcartel_user_name) {
        free(account_cart_add->bigcartel_user_name);
        account_cart_add->bigcartel_user_name = NULL;
    }
    if (account_cart_add->bigcartel_password) {
        free(account_cart_add->bigcartel_password);
        account_cart_add->bigcartel_password = NULL;
    }
    if (account_cart_add->bricklink_consumer_key) {
        free(account_cart_add->bricklink_consumer_key);
        account_cart_add->bricklink_consumer_key = NULL;
    }
    if (account_cart_add->bricklink_consumer_secret) {
        free(account_cart_add->bricklink_consumer_secret);
        account_cart_add->bricklink_consumer_secret = NULL;
    }
    if (account_cart_add->bricklink_token) {
        free(account_cart_add->bricklink_token);
        account_cart_add->bricklink_token = NULL;
    }
    if (account_cart_add->bricklink_token_secret) {
        free(account_cart_add->bricklink_token_secret);
        account_cart_add->bricklink_token_secret = NULL;
    }
    if (account_cart_add->demandware_client_id) {
        free(account_cart_add->demandware_client_id);
        account_cart_add->demandware_client_id = NULL;
    }
    if (account_cart_add->demandware_api_password) {
        free(account_cart_add->demandware_api_password);
        account_cart_add->demandware_api_password = NULL;
    }
    if (account_cart_add->demandware_user_name) {
        free(account_cart_add->demandware_user_name);
        account_cart_add->demandware_user_name = NULL;
    }
    if (account_cart_add->demandware_user_password) {
        free(account_cart_add->demandware_user_password);
        account_cart_add->demandware_user_password = NULL;
    }
    if (account_cart_add->ebay_client_id) {
        free(account_cart_add->ebay_client_id);
        account_cart_add->ebay_client_id = NULL;
    }
    if (account_cart_add->ebay_client_secret) {
        free(account_cart_add->ebay_client_secret);
        account_cart_add->ebay_client_secret = NULL;
    }
    if (account_cart_add->ebay_runame) {
        free(account_cart_add->ebay_runame);
        account_cart_add->ebay_runame = NULL;
    }
    if (account_cart_add->ebay_access_token) {
        free(account_cart_add->ebay_access_token);
        account_cart_add->ebay_access_token = NULL;
    }
    if (account_cart_add->ebay_refresh_token) {
        free(account_cart_add->ebay_refresh_token);
        account_cart_add->ebay_refresh_token = NULL;
    }
    if (account_cart_add->ebay_environment) {
        free(account_cart_add->ebay_environment);
        account_cart_add->ebay_environment = NULL;
    }
    if (account_cart_add->walmart_client_id) {
        free(account_cart_add->walmart_client_id);
        account_cart_add->walmart_client_id = NULL;
    }
    if (account_cart_add->walmart_client_secret) {
        free(account_cart_add->walmart_client_secret);
        account_cart_add->walmart_client_secret = NULL;
    }
    if (account_cart_add->walmart_environment) {
        free(account_cart_add->walmart_environment);
        account_cart_add->walmart_environment = NULL;
    }
    if (account_cart_add->walmart_channel_type) {
        free(account_cart_add->walmart_channel_type);
        account_cart_add->walmart_channel_type = NULL;
    }
    if (account_cart_add->walmart_region) {
        free(account_cart_add->walmart_region);
        account_cart_add->walmart_region = NULL;
    }
    if (account_cart_add->ecwid_acess_token) {
        free(account_cart_add->ecwid_acess_token);
        account_cart_add->ecwid_acess_token = NULL;
    }
    if (account_cart_add->ecwid_store_id) {
        free(account_cart_add->ecwid_store_id);
        account_cart_add->ecwid_store_id = NULL;
    }
    if (account_cart_add->lazada_app_id) {
        free(account_cart_add->lazada_app_id);
        account_cart_add->lazada_app_id = NULL;
    }
    if (account_cart_add->lazada_app_secret) {
        free(account_cart_add->lazada_app_secret);
        account_cart_add->lazada_app_secret = NULL;
    }
    if (account_cart_add->lazada_refresh_token) {
        free(account_cart_add->lazada_refresh_token);
        account_cart_add->lazada_refresh_token = NULL;
    }
    if (account_cart_add->lazada_region) {
        free(account_cart_add->lazada_region);
        account_cart_add->lazada_region = NULL;
    }
    if (account_cart_add->lightspeed_api_key) {
        free(account_cart_add->lightspeed_api_key);
        account_cart_add->lightspeed_api_key = NULL;
    }
    if (account_cart_add->lightspeed_api_secret) {
        free(account_cart_add->lightspeed_api_secret);
        account_cart_add->lightspeed_api_secret = NULL;
    }
    if (account_cart_add->etsy_keystring) {
        free(account_cart_add->etsy_keystring);
        account_cart_add->etsy_keystring = NULL;
    }
    if (account_cart_add->etsy_shared_secret) {
        free(account_cart_add->etsy_shared_secret);
        account_cart_add->etsy_shared_secret = NULL;
    }
    if (account_cart_add->etsy_access_token) {
        free(account_cart_add->etsy_access_token);
        account_cart_add->etsy_access_token = NULL;
    }
    if (account_cart_add->etsy_token_secret) {
        free(account_cart_add->etsy_token_secret);
        account_cart_add->etsy_token_secret = NULL;
    }
    if (account_cart_add->etsy_client_id) {
        free(account_cart_add->etsy_client_id);
        account_cart_add->etsy_client_id = NULL;
    }
    if (account_cart_add->etsy_refresh_token) {
        free(account_cart_add->etsy_refresh_token);
        account_cart_add->etsy_refresh_token = NULL;
    }
    if (account_cart_add->facebook_app_id) {
        free(account_cart_add->facebook_app_id);
        account_cart_add->facebook_app_id = NULL;
    }
    if (account_cart_add->facebook_app_secret) {
        free(account_cart_add->facebook_app_secret);
        account_cart_add->facebook_app_secret = NULL;
    }
    if (account_cart_add->facebook_access_token) {
        free(account_cart_add->facebook_access_token);
        account_cart_add->facebook_access_token = NULL;
    }
    if (account_cart_add->facebook_business_id) {
        free(account_cart_add->facebook_business_id);
        account_cart_add->facebook_business_id = NULL;
    }
    if (account_cart_add->neto_api_key) {
        free(account_cart_add->neto_api_key);
        account_cart_add->neto_api_key = NULL;
    }
    if (account_cart_add->neto_api_username) {
        free(account_cart_add->neto_api_username);
        account_cart_add->neto_api_username = NULL;
    }
    if (account_cart_add->shopline_access_token) {
        free(account_cart_add->shopline_access_token);
        account_cart_add->shopline_access_token = NULL;
    }
    if (account_cart_add->shopline_app_key) {
        free(account_cart_add->shopline_app_key);
        account_cart_add->shopline_app_key = NULL;
    }
    if (account_cart_add->shopline_app_secret) {
        free(account_cart_add->shopline_app_secret);
        account_cart_add->shopline_app_secret = NULL;
    }
    if (account_cart_add->shopline_shared_secret) {
        free(account_cart_add->shopline_shared_secret);
        account_cart_add->shopline_shared_secret = NULL;
    }
    if (account_cart_add->shopify_access_token) {
        free(account_cart_add->shopify_access_token);
        account_cart_add->shopify_access_token = NULL;
    }
    if (account_cart_add->shopify_api_key) {
        free(account_cart_add->shopify_api_key);
        account_cart_add->shopify_api_key = NULL;
    }
    if (account_cart_add->shopify_api_password) {
        free(account_cart_add->shopify_api_password);
        account_cart_add->shopify_api_password = NULL;
    }
    if (account_cart_add->shopify_shared_secret) {
        free(account_cart_add->shopify_shared_secret);
        account_cart_add->shopify_shared_secret = NULL;
    }
    if (account_cart_add->shopee_partner_id) {
        free(account_cart_add->shopee_partner_id);
        account_cart_add->shopee_partner_id = NULL;
    }
    if (account_cart_add->shopee_partner_key) {
        free(account_cart_add->shopee_partner_key);
        account_cart_add->shopee_partner_key = NULL;
    }
    if (account_cart_add->shopee_shop_id) {
        free(account_cart_add->shopee_shop_id);
        account_cart_add->shopee_shop_id = NULL;
    }
    if (account_cart_add->shopee_refresh_token) {
        free(account_cart_add->shopee_refresh_token);
        account_cart_add->shopee_refresh_token = NULL;
    }
    if (account_cart_add->shopee_region) {
        free(account_cart_add->shopee_region);
        account_cart_add->shopee_region = NULL;
    }
    if (account_cart_add->shopee_environment) {
        free(account_cart_add->shopee_environment);
        account_cart_add->shopee_environment = NULL;
    }
    if (account_cart_add->shoplazza_access_token) {
        free(account_cart_add->shoplazza_access_token);
        account_cart_add->shoplazza_access_token = NULL;
    }
    if (account_cart_add->shoplazza_shared_secret) {
        free(account_cart_add->shoplazza_shared_secret);
        account_cart_add->shoplazza_shared_secret = NULL;
    }
    if (account_cart_add->shopware_access_key) {
        free(account_cart_add->shopware_access_key);
        account_cart_add->shopware_access_key = NULL;
    }
    if (account_cart_add->shopware_api_key) {
        free(account_cart_add->shopware_api_key);
        account_cart_add->shopware_api_key = NULL;
    }
    if (account_cart_add->shopware_api_secret) {
        free(account_cart_add->shopware_api_secret);
        account_cart_add->shopware_api_secret = NULL;
    }
    if (account_cart_add->miva_access_token) {
        free(account_cart_add->miva_access_token);
        account_cart_add->miva_access_token = NULL;
    }
    if (account_cart_add->miva_signature) {
        free(account_cart_add->miva_signature);
        account_cart_add->miva_signature = NULL;
    }
    if (account_cart_add->tiendanube_access_token) {
        free(account_cart_add->tiendanube_access_token);
        account_cart_add->tiendanube_access_token = NULL;
    }
    if (account_cart_add->tiendanube_client_secret) {
        free(account_cart_add->tiendanube_client_secret);
        account_cart_add->tiendanube_client_secret = NULL;
    }
    if (account_cart_add->volusion_login) {
        free(account_cart_add->volusion_login);
        account_cart_add->volusion_login = NULL;
    }
    if (account_cart_add->volusion_password) {
        free(account_cart_add->volusion_password);
        account_cart_add->volusion_password = NULL;
    }
    if (account_cart_add->hybris_client_id) {
        free(account_cart_add->hybris_client_id);
        account_cart_add->hybris_client_id = NULL;
    }
    if (account_cart_add->hybris_client_secret) {
        free(account_cart_add->hybris_client_secret);
        account_cart_add->hybris_client_secret = NULL;
    }
    if (account_cart_add->hybris_username) {
        free(account_cart_add->hybris_username);
        account_cart_add->hybris_username = NULL;
    }
    if (account_cart_add->hybris_password) {
        free(account_cart_add->hybris_password);
        account_cart_add->hybris_password = NULL;
    }
    if (account_cart_add->hybris_websites) {
        list_ForEach(listEntry, account_cart_add->hybris_websites) {
            account_cart_add_hybris_websites_inner_free(listEntry->data);
        }
        list_freeList(account_cart_add->hybris_websites);
        account_cart_add->hybris_websites = NULL;
    }
    if (account_cart_add->square_client_id) {
        free(account_cart_add->square_client_id);
        account_cart_add->square_client_id = NULL;
    }
    if (account_cart_add->square_client_secret) {
        free(account_cart_add->square_client_secret);
        account_cart_add->square_client_secret = NULL;
    }
    if (account_cart_add->square_refresh_token) {
        free(account_cart_add->square_refresh_token);
        account_cart_add->square_refresh_token = NULL;
    }
    if (account_cart_add->squarespace_api_key) {
        free(account_cart_add->squarespace_api_key);
        account_cart_add->squarespace_api_key = NULL;
    }
    if (account_cart_add->squarespace_client_id) {
        free(account_cart_add->squarespace_client_id);
        account_cart_add->squarespace_client_id = NULL;
    }
    if (account_cart_add->squarespace_client_secret) {
        free(account_cart_add->squarespace_client_secret);
        account_cart_add->squarespace_client_secret = NULL;
    }
    if (account_cart_add->squarespace_access_token) {
        free(account_cart_add->squarespace_access_token);
        account_cart_add->squarespace_access_token = NULL;
    }
    if (account_cart_add->squarespace_refresh_token) {
        free(account_cart_add->squarespace_refresh_token);
        account_cart_add->squarespace_refresh_token = NULL;
    }
    if (account_cart_add->commercehq_api_key) {
        free(account_cart_add->commercehq_api_key);
        account_cart_add->commercehq_api_key = NULL;
    }
    if (account_cart_add->commercehq_api_password) {
        free(account_cart_add->commercehq_api_password);
        account_cart_add->commercehq_api_password = NULL;
    }
    if (account_cart_add->wc_consumer_key) {
        free(account_cart_add->wc_consumer_key);
        account_cart_add->wc_consumer_key = NULL;
    }
    if (account_cart_add->wc_consumer_secret) {
        free(account_cart_add->wc_consumer_secret);
        account_cart_add->wc_consumer_secret = NULL;
    }
    if (account_cart_add->magento_consumer_key) {
        free(account_cart_add->magento_consumer_key);
        account_cart_add->magento_consumer_key = NULL;
    }
    if (account_cart_add->magento_consumer_secret) {
        free(account_cart_add->magento_consumer_secret);
        account_cart_add->magento_consumer_secret = NULL;
    }
    if (account_cart_add->magento_access_token) {
        free(account_cart_add->magento_access_token);
        account_cart_add->magento_access_token = NULL;
    }
    if (account_cart_add->magento_token_secret) {
        free(account_cart_add->magento_token_secret);
        account_cart_add->magento_token_secret = NULL;
    }
    if (account_cart_add->prestashop_webservice_key) {
        free(account_cart_add->prestashop_webservice_key);
        account_cart_add->prestashop_webservice_key = NULL;
    }
    if (account_cart_add->wix_app_id) {
        free(account_cart_add->wix_app_id);
        account_cart_add->wix_app_id = NULL;
    }
    if (account_cart_add->wix_app_secret_key) {
        free(account_cart_add->wix_app_secret_key);
        account_cart_add->wix_app_secret_key = NULL;
    }
    if (account_cart_add->wix_instance_id) {
        free(account_cart_add->wix_instance_id);
        account_cart_add->wix_instance_id = NULL;
    }
    if (account_cart_add->wix_refresh_token) {
        free(account_cart_add->wix_refresh_token);
        account_cart_add->wix_refresh_token = NULL;
    }
    if (account_cart_add->mercado_libre_app_id) {
        free(account_cart_add->mercado_libre_app_id);
        account_cart_add->mercado_libre_app_id = NULL;
    }
    if (account_cart_add->mercado_libre_app_secret_key) {
        free(account_cart_add->mercado_libre_app_secret_key);
        account_cart_add->mercado_libre_app_secret_key = NULL;
    }
    if (account_cart_add->mercado_libre_refresh_token) {
        free(account_cart_add->mercado_libre_refresh_token);
        account_cart_add->mercado_libre_refresh_token = NULL;
    }
    if (account_cart_add->zid_client_secret) {
        free(account_cart_add->zid_client_secret);
        account_cart_add->zid_client_secret = NULL;
    }
    if (account_cart_add->zid_access_token) {
        free(account_cart_add->zid_access_token);
        account_cart_add->zid_access_token = NULL;
    }
    if (account_cart_add->zid_authorization) {
        free(account_cart_add->zid_authorization);
        account_cart_add->zid_authorization = NULL;
    }
    if (account_cart_add->zid_refresh_token) {
        free(account_cart_add->zid_refresh_token);
        account_cart_add->zid_refresh_token = NULL;
    }
    if (account_cart_add->flipkart_client_id) {
        free(account_cart_add->flipkart_client_id);
        account_cart_add->flipkart_client_id = NULL;
    }
    if (account_cart_add->flipkart_client_secret) {
        free(account_cart_add->flipkart_client_secret);
        account_cart_add->flipkart_client_secret = NULL;
    }
    if (account_cart_add->allegro_client_id) {
        free(account_cart_add->allegro_client_id);
        account_cart_add->allegro_client_id = NULL;
    }
    if (account_cart_add->allegro_client_secret) {
        free(account_cart_add->allegro_client_secret);
        account_cart_add->allegro_client_secret = NULL;
    }
    if (account_cart_add->allegro_access_token) {
        free(account_cart_add->allegro_access_token);
        account_cart_add->allegro_access_token = NULL;
    }
    if (account_cart_add->allegro_refresh_token) {
        free(account_cart_add->allegro_refresh_token);
        account_cart_add->allegro_refresh_token = NULL;
    }
    if (account_cart_add->allegro_environment) {
        free(account_cart_add->allegro_environment);
        account_cart_add->allegro_environment = NULL;
    }
    if (account_cart_add->zoho_client_id) {
        free(account_cart_add->zoho_client_id);
        account_cart_add->zoho_client_id = NULL;
    }
    if (account_cart_add->zoho_client_secret) {
        free(account_cart_add->zoho_client_secret);
        account_cart_add->zoho_client_secret = NULL;
    }
    if (account_cart_add->zoho_refresh_token) {
        free(account_cart_add->zoho_refresh_token);
        account_cart_add->zoho_refresh_token = NULL;
    }
    if (account_cart_add->zoho_region) {
        free(account_cart_add->zoho_region);
        account_cart_add->zoho_region = NULL;
    }
    if (account_cart_add->otto_client_id) {
        free(account_cart_add->otto_client_id);
        account_cart_add->otto_client_id = NULL;
    }
    if (account_cart_add->otto_client_secret) {
        free(account_cart_add->otto_client_secret);
        account_cart_add->otto_client_secret = NULL;
    }
    if (account_cart_add->otto_app_id) {
        free(account_cart_add->otto_app_id);
        account_cart_add->otto_app_id = NULL;
    }
    if (account_cart_add->otto_refresh_token) {
        free(account_cart_add->otto_refresh_token);
        account_cart_add->otto_refresh_token = NULL;
    }
    if (account_cart_add->otto_environment) {
        free(account_cart_add->otto_environment);
        account_cart_add->otto_environment = NULL;
    }
    if (account_cart_add->otto_access_token) {
        free(account_cart_add->otto_access_token);
        account_cart_add->otto_access_token = NULL;
    }
    if (account_cart_add->tiktokshop_app_key) {
        free(account_cart_add->tiktokshop_app_key);
        account_cart_add->tiktokshop_app_key = NULL;
    }
    if (account_cart_add->tiktokshop_app_secret) {
        free(account_cart_add->tiktokshop_app_secret);
        account_cart_add->tiktokshop_app_secret = NULL;
    }
    if (account_cart_add->tiktokshop_refresh_token) {
        free(account_cart_add->tiktokshop_refresh_token);
        account_cart_add->tiktokshop_refresh_token = NULL;
    }
    if (account_cart_add->tiktokshop_access_token) {
        free(account_cart_add->tiktokshop_access_token);
        account_cart_add->tiktokshop_access_token = NULL;
    }
    if (account_cart_add->salla_client_id) {
        free(account_cart_add->salla_client_id);
        account_cart_add->salla_client_id = NULL;
    }
    if (account_cart_add->salla_client_secret) {
        free(account_cart_add->salla_client_secret);
        account_cart_add->salla_client_secret = NULL;
    }
    if (account_cart_add->salla_refresh_token) {
        free(account_cart_add->salla_refresh_token);
        account_cart_add->salla_refresh_token = NULL;
    }
    if (account_cart_add->salla_access_token) {
        free(account_cart_add->salla_access_token);
        account_cart_add->salla_access_token = NULL;
    }
    if (account_cart_add->temu_app_key) {
        free(account_cart_add->temu_app_key);
        account_cart_add->temu_app_key = NULL;
    }
    if (account_cart_add->temu_app_secret) {
        free(account_cart_add->temu_app_secret);
        account_cart_add->temu_app_secret = NULL;
    }
    if (account_cart_add->temu_access_token) {
        free(account_cart_add->temu_access_token);
        account_cart_add->temu_access_token = NULL;
    }
    if (account_cart_add->temu_region) {
        free(account_cart_add->temu_region);
        account_cart_add->temu_region = NULL;
    }
    free(account_cart_add);
}

cJSON *account_cart_add_convertToJSON(account_cart_add_t *account_cart_add) {
    cJSON *item = cJSON_CreateObject();

    // account_cart_add->cart_id
    if (api2cart_openapi_account_cart_add_CARTID_NULL == account_cart_add->cart_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cart_id", account_cart_add_cart_id_ToString(account_cart_add->cart_id)) == NULL)
    {
    goto fail; //Enum
    }


    // account_cart_add->store_url
    if(account_cart_add->store_url) {
    if(cJSON_AddStringToObject(item, "store_url", account_cart_add->store_url) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bridge_url
    if(account_cart_add->bridge_url) {
    if(cJSON_AddStringToObject(item, "bridge_url", account_cart_add->bridge_url) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->store_root
    if(account_cart_add->store_root) {
    if(cJSON_AddStringToObject(item, "store_root", account_cart_add->store_root) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->store_key
    if(account_cart_add->store_key) {
    if(cJSON_AddStringToObject(item, "store_key", account_cart_add->store_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->validate_version
    if(account_cart_add->validate_version) {
    if(cJSON_AddBoolToObject(item, "validate_version", account_cart_add->validate_version) == NULL) {
    goto fail; //Bool
    }
    }


    // account_cart_add->verify
    if(account_cart_add->verify) {
    if(cJSON_AddBoolToObject(item, "verify", account_cart_add->verify) == NULL) {
    goto fail; //Bool
    }
    }


    // account_cart_add->db_tables_prefix
    if(account_cart_add->db_tables_prefix) {
    if(cJSON_AddStringToObject(item, "db_tables_prefix", account_cart_add->db_tables_prefix) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->user_agent
    if(account_cart_add->user_agent) {
    if(cJSON_AddStringToObject(item, "user_agent", account_cart_add->user_agent) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ftp_host
    if(account_cart_add->ftp_host) {
    if(cJSON_AddStringToObject(item, "ftp_host", account_cart_add->ftp_host) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ftp_user
    if(account_cart_add->ftp_user) {
    if(cJSON_AddStringToObject(item, "ftp_user", account_cart_add->ftp_user) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ftp_password
    if(account_cart_add->ftp_password) {
    if(cJSON_AddStringToObject(item, "ftp_password", account_cart_add->ftp_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ftp_port
    if(account_cart_add->ftp_port) {
    if(cJSON_AddNumberToObject(item, "ftp_port", account_cart_add->ftp_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_add->ftp_store_dir
    if(account_cart_add->ftp_store_dir) {
    if(cJSON_AddStringToObject(item, "ftp_store_dir", account_cart_add->ftp_store_dir) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->_3dcart_private_key
    if(account_cart_add->_3dcart_private_key) {
    if(cJSON_AddStringToObject(item, "3dcart_private_key", account_cart_add->_3dcart_private_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->_3dcart_access_token
    if(account_cart_add->_3dcart_access_token) {
    if(cJSON_AddStringToObject(item, "3dcart_access_token", account_cart_add->_3dcart_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->_3dcartapi_api_key
    if(account_cart_add->_3dcartapi_api_key) {
    if(cJSON_AddStringToObject(item, "3dcartapi_api_key", account_cart_add->_3dcartapi_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_sp_client_id
    if(account_cart_add->amazon_sp_client_id) {
    if(cJSON_AddStringToObject(item, "amazon_sp_client_id", account_cart_add->amazon_sp_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_sp_client_secret
    if(account_cart_add->amazon_sp_client_secret) {
    if(cJSON_AddStringToObject(item, "amazon_sp_client_secret", account_cart_add->amazon_sp_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_sp_refresh_token
    if(account_cart_add->amazon_sp_refresh_token) {
    if(cJSON_AddStringToObject(item, "amazon_sp_refresh_token", account_cart_add->amazon_sp_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_sp_aws_region
    if(account_cart_add->amazon_sp_aws_region) {
    if(cJSON_AddStringToObject(item, "amazon_sp_aws_region", account_cart_add->amazon_sp_aws_region) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_sp_api_environment
    if(account_cart_add->amazon_sp_api_environment) {
    if(cJSON_AddStringToObject(item, "amazon_sp_api_environment", account_cart_add->amazon_sp_api_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->amazon_seller_id
    if(account_cart_add->amazon_seller_id) {
    if(cJSON_AddStringToObject(item, "amazon_seller_id", account_cart_add->amazon_seller_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->aspdotnetstorefront_api_user
    if(account_cart_add->aspdotnetstorefront_api_user) {
    if(cJSON_AddStringToObject(item, "aspdotnetstorefront_api_user", account_cart_add->aspdotnetstorefront_api_user) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->aspdotnetstorefront_api_pass
    if(account_cart_add->aspdotnetstorefront_api_pass) {
    if(cJSON_AddStringToObject(item, "aspdotnetstorefront_api_pass", account_cart_add->aspdotnetstorefront_api_pass) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_admin_account
    if(account_cart_add->bigcommerceapi_admin_account) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_admin_account", account_cart_add->bigcommerceapi_admin_account) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_api_path
    if(account_cart_add->bigcommerceapi_api_path) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_api_path", account_cart_add->bigcommerceapi_api_path) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_api_key
    if(account_cart_add->bigcommerceapi_api_key) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_api_key", account_cart_add->bigcommerceapi_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_client_id
    if(account_cart_add->bigcommerceapi_client_id) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_client_id", account_cart_add->bigcommerceapi_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_access_token
    if(account_cart_add->bigcommerceapi_access_token) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_access_token", account_cart_add->bigcommerceapi_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcommerceapi_context
    if(account_cart_add->bigcommerceapi_context) {
    if(cJSON_AddStringToObject(item, "bigcommerceapi_context", account_cart_add->bigcommerceapi_context) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bol_api_key
    if(account_cart_add->bol_api_key) {
    if(cJSON_AddStringToObject(item, "bol_api_key", account_cart_add->bol_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bol_api_secret
    if(account_cart_add->bol_api_secret) {
    if(cJSON_AddStringToObject(item, "bol_api_secret", account_cart_add->bol_api_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bol_retailer_id
    if(account_cart_add->bol_retailer_id) {
    if(cJSON_AddNumberToObject(item, "bol_retailer_id", account_cart_add->bol_retailer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_add->bigcartel_user_name
    if(account_cart_add->bigcartel_user_name) {
    if(cJSON_AddStringToObject(item, "bigcartel_user_name", account_cart_add->bigcartel_user_name) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bigcartel_password
    if(account_cart_add->bigcartel_password) {
    if(cJSON_AddStringToObject(item, "bigcartel_password", account_cart_add->bigcartel_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bricklink_consumer_key
    if(account_cart_add->bricklink_consumer_key) {
    if(cJSON_AddStringToObject(item, "bricklink_consumer_key", account_cart_add->bricklink_consumer_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bricklink_consumer_secret
    if(account_cart_add->bricklink_consumer_secret) {
    if(cJSON_AddStringToObject(item, "bricklink_consumer_secret", account_cart_add->bricklink_consumer_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bricklink_token
    if(account_cart_add->bricklink_token) {
    if(cJSON_AddStringToObject(item, "bricklink_token", account_cart_add->bricklink_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->bricklink_token_secret
    if(account_cart_add->bricklink_token_secret) {
    if(cJSON_AddStringToObject(item, "bricklink_token_secret", account_cart_add->bricklink_token_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->demandware_client_id
    if(account_cart_add->demandware_client_id) {
    if(cJSON_AddStringToObject(item, "demandware_client_id", account_cart_add->demandware_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->demandware_api_password
    if(account_cart_add->demandware_api_password) {
    if(cJSON_AddStringToObject(item, "demandware_api_password", account_cart_add->demandware_api_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->demandware_user_name
    if(account_cart_add->demandware_user_name) {
    if(cJSON_AddStringToObject(item, "demandware_user_name", account_cart_add->demandware_user_name) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->demandware_user_password
    if(account_cart_add->demandware_user_password) {
    if(cJSON_AddStringToObject(item, "demandware_user_password", account_cart_add->demandware_user_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_client_id
    if(account_cart_add->ebay_client_id) {
    if(cJSON_AddStringToObject(item, "ebay_client_id", account_cart_add->ebay_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_client_secret
    if(account_cart_add->ebay_client_secret) {
    if(cJSON_AddStringToObject(item, "ebay_client_secret", account_cart_add->ebay_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_runame
    if(account_cart_add->ebay_runame) {
    if(cJSON_AddStringToObject(item, "ebay_runame", account_cart_add->ebay_runame) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_access_token
    if(account_cart_add->ebay_access_token) {
    if(cJSON_AddStringToObject(item, "ebay_access_token", account_cart_add->ebay_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_refresh_token
    if(account_cart_add->ebay_refresh_token) {
    if(cJSON_AddStringToObject(item, "ebay_refresh_token", account_cart_add->ebay_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_environment
    if(account_cart_add->ebay_environment) {
    if(cJSON_AddStringToObject(item, "ebay_environment", account_cart_add->ebay_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ebay_site_id
    if(account_cart_add->ebay_site_id) {
    if(cJSON_AddNumberToObject(item, "ebay_site_id", account_cart_add->ebay_site_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_add->walmart_client_id
    if(account_cart_add->walmart_client_id) {
    if(cJSON_AddStringToObject(item, "walmart_client_id", account_cart_add->walmart_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->walmart_client_secret
    if(account_cart_add->walmart_client_secret) {
    if(cJSON_AddStringToObject(item, "walmart_client_secret", account_cart_add->walmart_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->walmart_environment
    if(account_cart_add->walmart_environment) {
    if(cJSON_AddStringToObject(item, "walmart_environment", account_cart_add->walmart_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->walmart_channel_type
    if(account_cart_add->walmart_channel_type) {
    if(cJSON_AddStringToObject(item, "walmart_channel_type", account_cart_add->walmart_channel_type) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->walmart_region
    if(account_cart_add->walmart_region) {
    if(cJSON_AddStringToObject(item, "walmart_region", account_cart_add->walmart_region) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ecwid_acess_token
    if(account_cart_add->ecwid_acess_token) {
    if(cJSON_AddStringToObject(item, "ecwid_acess_token", account_cart_add->ecwid_acess_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->ecwid_store_id
    if(account_cart_add->ecwid_store_id) {
    if(cJSON_AddStringToObject(item, "ecwid_store_id", account_cart_add->ecwid_store_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lazada_app_id
    if(account_cart_add->lazada_app_id) {
    if(cJSON_AddStringToObject(item, "lazada_app_id", account_cart_add->lazada_app_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lazada_app_secret
    if(account_cart_add->lazada_app_secret) {
    if(cJSON_AddStringToObject(item, "lazada_app_secret", account_cart_add->lazada_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lazada_refresh_token
    if(account_cart_add->lazada_refresh_token) {
    if(cJSON_AddStringToObject(item, "lazada_refresh_token", account_cart_add->lazada_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lazada_region
    if(account_cart_add->lazada_region) {
    if(cJSON_AddStringToObject(item, "lazada_region", account_cart_add->lazada_region) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lightspeed_api_key
    if(account_cart_add->lightspeed_api_key) {
    if(cJSON_AddStringToObject(item, "lightspeed_api_key", account_cart_add->lightspeed_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->lightspeed_api_secret
    if(account_cart_add->lightspeed_api_secret) {
    if(cJSON_AddStringToObject(item, "lightspeed_api_secret", account_cart_add->lightspeed_api_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_keystring
    if(account_cart_add->etsy_keystring) {
    if(cJSON_AddStringToObject(item, "etsy_keystring", account_cart_add->etsy_keystring) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_shared_secret
    if(account_cart_add->etsy_shared_secret) {
    if(cJSON_AddStringToObject(item, "etsy_shared_secret", account_cart_add->etsy_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_access_token
    if(account_cart_add->etsy_access_token) {
    if(cJSON_AddStringToObject(item, "etsy_access_token", account_cart_add->etsy_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_token_secret
    if(account_cart_add->etsy_token_secret) {
    if(cJSON_AddStringToObject(item, "etsy_token_secret", account_cart_add->etsy_token_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_client_id
    if(account_cart_add->etsy_client_id) {
    if(cJSON_AddStringToObject(item, "etsy_client_id", account_cart_add->etsy_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->etsy_refresh_token
    if(account_cart_add->etsy_refresh_token) {
    if(cJSON_AddStringToObject(item, "etsy_refresh_token", account_cart_add->etsy_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->facebook_app_id
    if(account_cart_add->facebook_app_id) {
    if(cJSON_AddStringToObject(item, "facebook_app_id", account_cart_add->facebook_app_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->facebook_app_secret
    if(account_cart_add->facebook_app_secret) {
    if(cJSON_AddStringToObject(item, "facebook_app_secret", account_cart_add->facebook_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->facebook_access_token
    if(account_cart_add->facebook_access_token) {
    if(cJSON_AddStringToObject(item, "facebook_access_token", account_cart_add->facebook_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->facebook_business_id
    if(account_cart_add->facebook_business_id) {
    if(cJSON_AddStringToObject(item, "facebook_business_id", account_cart_add->facebook_business_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->neto_api_key
    if(account_cart_add->neto_api_key) {
    if(cJSON_AddStringToObject(item, "neto_api_key", account_cart_add->neto_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->neto_api_username
    if(account_cart_add->neto_api_username) {
    if(cJSON_AddStringToObject(item, "neto_api_username", account_cart_add->neto_api_username) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopline_access_token
    if(account_cart_add->shopline_access_token) {
    if(cJSON_AddStringToObject(item, "shopline_access_token", account_cart_add->shopline_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopline_app_key
    if(account_cart_add->shopline_app_key) {
    if(cJSON_AddStringToObject(item, "shopline_app_key", account_cart_add->shopline_app_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopline_app_secret
    if(account_cart_add->shopline_app_secret) {
    if(cJSON_AddStringToObject(item, "shopline_app_secret", account_cart_add->shopline_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopline_shared_secret
    if(account_cart_add->shopline_shared_secret) {
    if(cJSON_AddStringToObject(item, "shopline_shared_secret", account_cart_add->shopline_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopify_access_token
    if(account_cart_add->shopify_access_token) {
    if(cJSON_AddStringToObject(item, "shopify_access_token", account_cart_add->shopify_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopify_api_key
    if(account_cart_add->shopify_api_key) {
    if(cJSON_AddStringToObject(item, "shopify_api_key", account_cart_add->shopify_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopify_api_password
    if(account_cart_add->shopify_api_password) {
    if(cJSON_AddStringToObject(item, "shopify_api_password", account_cart_add->shopify_api_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopify_shared_secret
    if(account_cart_add->shopify_shared_secret) {
    if(cJSON_AddStringToObject(item, "shopify_shared_secret", account_cart_add->shopify_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_partner_id
    if(account_cart_add->shopee_partner_id) {
    if(cJSON_AddStringToObject(item, "shopee_partner_id", account_cart_add->shopee_partner_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_partner_key
    if(account_cart_add->shopee_partner_key) {
    if(cJSON_AddStringToObject(item, "shopee_partner_key", account_cart_add->shopee_partner_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_shop_id
    if(account_cart_add->shopee_shop_id) {
    if(cJSON_AddStringToObject(item, "shopee_shop_id", account_cart_add->shopee_shop_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_refresh_token
    if(account_cart_add->shopee_refresh_token) {
    if(cJSON_AddStringToObject(item, "shopee_refresh_token", account_cart_add->shopee_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_region
    if(account_cart_add->shopee_region) {
    if(cJSON_AddStringToObject(item, "shopee_region", account_cart_add->shopee_region) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopee_environment
    if(account_cart_add->shopee_environment) {
    if(cJSON_AddStringToObject(item, "shopee_environment", account_cart_add->shopee_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shoplazza_access_token
    if(account_cart_add->shoplazza_access_token) {
    if(cJSON_AddStringToObject(item, "shoplazza_access_token", account_cart_add->shoplazza_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shoplazza_shared_secret
    if(account_cart_add->shoplazza_shared_secret) {
    if(cJSON_AddStringToObject(item, "shoplazza_shared_secret", account_cart_add->shoplazza_shared_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopware_access_key
    if(account_cart_add->shopware_access_key) {
    if(cJSON_AddStringToObject(item, "shopware_access_key", account_cart_add->shopware_access_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopware_api_key
    if(account_cart_add->shopware_api_key) {
    if(cJSON_AddStringToObject(item, "shopware_api_key", account_cart_add->shopware_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->shopware_api_secret
    if(account_cart_add->shopware_api_secret) {
    if(cJSON_AddStringToObject(item, "shopware_api_secret", account_cart_add->shopware_api_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->miva_access_token
    if(account_cart_add->miva_access_token) {
    if(cJSON_AddStringToObject(item, "miva_access_token", account_cart_add->miva_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->miva_signature
    if(account_cart_add->miva_signature) {
    if(cJSON_AddStringToObject(item, "miva_signature", account_cart_add->miva_signature) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiendanube_user_id
    if(account_cart_add->tiendanube_user_id) {
    if(cJSON_AddNumberToObject(item, "tiendanube_user_id", account_cart_add->tiendanube_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_add->tiendanube_access_token
    if(account_cart_add->tiendanube_access_token) {
    if(cJSON_AddStringToObject(item, "tiendanube_access_token", account_cart_add->tiendanube_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiendanube_client_secret
    if(account_cart_add->tiendanube_client_secret) {
    if(cJSON_AddStringToObject(item, "tiendanube_client_secret", account_cart_add->tiendanube_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->volusion_login
    if(account_cart_add->volusion_login) {
    if(cJSON_AddStringToObject(item, "volusion_login", account_cart_add->volusion_login) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->volusion_password
    if(account_cart_add->volusion_password) {
    if(cJSON_AddStringToObject(item, "volusion_password", account_cart_add->volusion_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->hybris_client_id
    if(account_cart_add->hybris_client_id) {
    if(cJSON_AddStringToObject(item, "hybris_client_id", account_cart_add->hybris_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->hybris_client_secret
    if(account_cart_add->hybris_client_secret) {
    if(cJSON_AddStringToObject(item, "hybris_client_secret", account_cart_add->hybris_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->hybris_username
    if(account_cart_add->hybris_username) {
    if(cJSON_AddStringToObject(item, "hybris_username", account_cart_add->hybris_username) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->hybris_password
    if(account_cart_add->hybris_password) {
    if(cJSON_AddStringToObject(item, "hybris_password", account_cart_add->hybris_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->hybris_websites
    if(account_cart_add->hybris_websites) {
    cJSON *hybris_websites = cJSON_AddArrayToObject(item, "hybris_websites");
    if(hybris_websites == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *hybris_websitesListEntry;
    if (account_cart_add->hybris_websites) {
    list_ForEach(hybris_websitesListEntry, account_cart_add->hybris_websites) {
    cJSON *itemLocal = account_cart_add_hybris_websites_inner_convertToJSON(hybris_websitesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(hybris_websites, itemLocal);
    }
    }
    }


    // account_cart_add->square_client_id
    if(account_cart_add->square_client_id) {
    if(cJSON_AddStringToObject(item, "square_client_id", account_cart_add->square_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->square_client_secret
    if(account_cart_add->square_client_secret) {
    if(cJSON_AddStringToObject(item, "square_client_secret", account_cart_add->square_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->square_refresh_token
    if(account_cart_add->square_refresh_token) {
    if(cJSON_AddStringToObject(item, "square_refresh_token", account_cart_add->square_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->squarespace_api_key
    if(account_cart_add->squarespace_api_key) {
    if(cJSON_AddStringToObject(item, "squarespace_api_key", account_cart_add->squarespace_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->squarespace_client_id
    if(account_cart_add->squarespace_client_id) {
    if(cJSON_AddStringToObject(item, "squarespace_client_id", account_cart_add->squarespace_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->squarespace_client_secret
    if(account_cart_add->squarespace_client_secret) {
    if(cJSON_AddStringToObject(item, "squarespace_client_secret", account_cart_add->squarespace_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->squarespace_access_token
    if(account_cart_add->squarespace_access_token) {
    if(cJSON_AddStringToObject(item, "squarespace_access_token", account_cart_add->squarespace_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->squarespace_refresh_token
    if(account_cart_add->squarespace_refresh_token) {
    if(cJSON_AddStringToObject(item, "squarespace_refresh_token", account_cart_add->squarespace_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->commercehq_api_key
    if(account_cart_add->commercehq_api_key) {
    if(cJSON_AddStringToObject(item, "commercehq_api_key", account_cart_add->commercehq_api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->commercehq_api_password
    if(account_cart_add->commercehq_api_password) {
    if(cJSON_AddStringToObject(item, "commercehq_api_password", account_cart_add->commercehq_api_password) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wc_consumer_key
    if(account_cart_add->wc_consumer_key) {
    if(cJSON_AddStringToObject(item, "wc_consumer_key", account_cart_add->wc_consumer_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wc_consumer_secret
    if(account_cart_add->wc_consumer_secret) {
    if(cJSON_AddStringToObject(item, "wc_consumer_secret", account_cart_add->wc_consumer_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->magento_consumer_key
    if(account_cart_add->magento_consumer_key) {
    if(cJSON_AddStringToObject(item, "magento_consumer_key", account_cart_add->magento_consumer_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->magento_consumer_secret
    if(account_cart_add->magento_consumer_secret) {
    if(cJSON_AddStringToObject(item, "magento_consumer_secret", account_cart_add->magento_consumer_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->magento_access_token
    if(account_cart_add->magento_access_token) {
    if(cJSON_AddStringToObject(item, "magento_access_token", account_cart_add->magento_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->magento_token_secret
    if(account_cart_add->magento_token_secret) {
    if(cJSON_AddStringToObject(item, "magento_token_secret", account_cart_add->magento_token_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->prestashop_webservice_key
    if(account_cart_add->prestashop_webservice_key) {
    if(cJSON_AddStringToObject(item, "prestashop_webservice_key", account_cart_add->prestashop_webservice_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wix_app_id
    if(account_cart_add->wix_app_id) {
    if(cJSON_AddStringToObject(item, "wix_app_id", account_cart_add->wix_app_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wix_app_secret_key
    if(account_cart_add->wix_app_secret_key) {
    if(cJSON_AddStringToObject(item, "wix_app_secret_key", account_cart_add->wix_app_secret_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wix_instance_id
    if(account_cart_add->wix_instance_id) {
    if(cJSON_AddStringToObject(item, "wix_instance_id", account_cart_add->wix_instance_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->wix_refresh_token
    if(account_cart_add->wix_refresh_token) {
    if(cJSON_AddStringToObject(item, "wix_refresh_token", account_cart_add->wix_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->mercado_libre_app_id
    if(account_cart_add->mercado_libre_app_id) {
    if(cJSON_AddStringToObject(item, "mercado_libre_app_id", account_cart_add->mercado_libre_app_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->mercado_libre_app_secret_key
    if(account_cart_add->mercado_libre_app_secret_key) {
    if(cJSON_AddStringToObject(item, "mercado_libre_app_secret_key", account_cart_add->mercado_libre_app_secret_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->mercado_libre_refresh_token
    if(account_cart_add->mercado_libre_refresh_token) {
    if(cJSON_AddStringToObject(item, "mercado_libre_refresh_token", account_cart_add->mercado_libre_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zid_client_id
    if(account_cart_add->zid_client_id) {
    if(cJSON_AddNumberToObject(item, "zid_client_id", account_cart_add->zid_client_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_cart_add->zid_client_secret
    if(account_cart_add->zid_client_secret) {
    if(cJSON_AddStringToObject(item, "zid_client_secret", account_cart_add->zid_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zid_access_token
    if(account_cart_add->zid_access_token) {
    if(cJSON_AddStringToObject(item, "zid_access_token", account_cart_add->zid_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zid_authorization
    if(account_cart_add->zid_authorization) {
    if(cJSON_AddStringToObject(item, "zid_authorization", account_cart_add->zid_authorization) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zid_refresh_token
    if(account_cart_add->zid_refresh_token) {
    if(cJSON_AddStringToObject(item, "zid_refresh_token", account_cart_add->zid_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->flipkart_client_id
    if(account_cart_add->flipkart_client_id) {
    if(cJSON_AddStringToObject(item, "flipkart_client_id", account_cart_add->flipkart_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->flipkart_client_secret
    if(account_cart_add->flipkart_client_secret) {
    if(cJSON_AddStringToObject(item, "flipkart_client_secret", account_cart_add->flipkart_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->allegro_client_id
    if(account_cart_add->allegro_client_id) {
    if(cJSON_AddStringToObject(item, "allegro_client_id", account_cart_add->allegro_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->allegro_client_secret
    if(account_cart_add->allegro_client_secret) {
    if(cJSON_AddStringToObject(item, "allegro_client_secret", account_cart_add->allegro_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->allegro_access_token
    if(account_cart_add->allegro_access_token) {
    if(cJSON_AddStringToObject(item, "allegro_access_token", account_cart_add->allegro_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->allegro_refresh_token
    if(account_cart_add->allegro_refresh_token) {
    if(cJSON_AddStringToObject(item, "allegro_refresh_token", account_cart_add->allegro_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->allegro_environment
    if(account_cart_add->allegro_environment) {
    if(cJSON_AddStringToObject(item, "allegro_environment", account_cart_add->allegro_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zoho_client_id
    if(account_cart_add->zoho_client_id) {
    if(cJSON_AddStringToObject(item, "zoho_client_id", account_cart_add->zoho_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zoho_client_secret
    if(account_cart_add->zoho_client_secret) {
    if(cJSON_AddStringToObject(item, "zoho_client_secret", account_cart_add->zoho_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zoho_refresh_token
    if(account_cart_add->zoho_refresh_token) {
    if(cJSON_AddStringToObject(item, "zoho_refresh_token", account_cart_add->zoho_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->zoho_region
    if(account_cart_add->zoho_region) {
    if(cJSON_AddStringToObject(item, "zoho_region", account_cart_add->zoho_region) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_client_id
    if(account_cart_add->otto_client_id) {
    if(cJSON_AddStringToObject(item, "otto_client_id", account_cart_add->otto_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_client_secret
    if(account_cart_add->otto_client_secret) {
    if(cJSON_AddStringToObject(item, "otto_client_secret", account_cart_add->otto_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_app_id
    if(account_cart_add->otto_app_id) {
    if(cJSON_AddStringToObject(item, "otto_app_id", account_cart_add->otto_app_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_refresh_token
    if(account_cart_add->otto_refresh_token) {
    if(cJSON_AddStringToObject(item, "otto_refresh_token", account_cart_add->otto_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_environment
    if(account_cart_add->otto_environment) {
    if(cJSON_AddStringToObject(item, "otto_environment", account_cart_add->otto_environment) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->otto_access_token
    if(account_cart_add->otto_access_token) {
    if(cJSON_AddStringToObject(item, "otto_access_token", account_cart_add->otto_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiktokshop_app_key
    if(account_cart_add->tiktokshop_app_key) {
    if(cJSON_AddStringToObject(item, "tiktokshop_app_key", account_cart_add->tiktokshop_app_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiktokshop_app_secret
    if(account_cart_add->tiktokshop_app_secret) {
    if(cJSON_AddStringToObject(item, "tiktokshop_app_secret", account_cart_add->tiktokshop_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiktokshop_refresh_token
    if(account_cart_add->tiktokshop_refresh_token) {
    if(cJSON_AddStringToObject(item, "tiktokshop_refresh_token", account_cart_add->tiktokshop_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->tiktokshop_access_token
    if(account_cart_add->tiktokshop_access_token) {
    if(cJSON_AddStringToObject(item, "tiktokshop_access_token", account_cart_add->tiktokshop_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->salla_client_id
    if(account_cart_add->salla_client_id) {
    if(cJSON_AddStringToObject(item, "salla_client_id", account_cart_add->salla_client_id) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->salla_client_secret
    if(account_cart_add->salla_client_secret) {
    if(cJSON_AddStringToObject(item, "salla_client_secret", account_cart_add->salla_client_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->salla_refresh_token
    if(account_cart_add->salla_refresh_token) {
    if(cJSON_AddStringToObject(item, "salla_refresh_token", account_cart_add->salla_refresh_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->salla_access_token
    if(account_cart_add->salla_access_token) {
    if(cJSON_AddStringToObject(item, "salla_access_token", account_cart_add->salla_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->temu_app_key
    if(account_cart_add->temu_app_key) {
    if(cJSON_AddStringToObject(item, "temu_app_key", account_cart_add->temu_app_key) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->temu_app_secret
    if(account_cart_add->temu_app_secret) {
    if(cJSON_AddStringToObject(item, "temu_app_secret", account_cart_add->temu_app_secret) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->temu_access_token
    if(account_cart_add->temu_access_token) {
    if(cJSON_AddStringToObject(item, "temu_access_token", account_cart_add->temu_access_token) == NULL) {
    goto fail; //String
    }
    }


    // account_cart_add->temu_region
    if(account_cart_add->temu_region) {
    if(cJSON_AddStringToObject(item, "temu_region", account_cart_add->temu_region) == NULL) {
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

account_cart_add_t *account_cart_add_parseFromJSON(cJSON *account_cart_addJSON){

    account_cart_add_t *account_cart_add_local_var = NULL;

    // define the local list for account_cart_add->hybris_websites
    list_t *hybris_websitesList = NULL;

    // account_cart_add->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "cart_id");
    if (cJSON_IsNull(cart_id)) {
        cart_id = NULL;
    }
    if (!cart_id) {
        goto end;
    }

    api2cart_openapi_account_cart_add_CARTID_e cart_idVariable;
    
    if(!cJSON_IsString(cart_id))
    {
    goto end; //Enum
    }
    cart_idVariable = account_cart_add_cart_id_FromString(cart_id->valuestring);

    // account_cart_add->store_url
    cJSON *store_url = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "store_url");
    if (cJSON_IsNull(store_url)) {
        store_url = NULL;
    }
    if (store_url) { 
    if(!cJSON_IsString(store_url) && !cJSON_IsNull(store_url))
    {
    goto end; //String
    }
    }

    // account_cart_add->bridge_url
    cJSON *bridge_url = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bridge_url");
    if (cJSON_IsNull(bridge_url)) {
        bridge_url = NULL;
    }
    if (bridge_url) { 
    if(!cJSON_IsString(bridge_url) && !cJSON_IsNull(bridge_url))
    {
    goto end; //String
    }
    }

    // account_cart_add->store_root
    cJSON *store_root = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "store_root");
    if (cJSON_IsNull(store_root)) {
        store_root = NULL;
    }
    if (store_root) { 
    if(!cJSON_IsString(store_root) && !cJSON_IsNull(store_root))
    {
    goto end; //String
    }
    }

    // account_cart_add->store_key
    cJSON *store_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "store_key");
    if (cJSON_IsNull(store_key)) {
        store_key = NULL;
    }
    if (store_key) { 
    if(!cJSON_IsString(store_key) && !cJSON_IsNull(store_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->validate_version
    cJSON *validate_version = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "validate_version");
    if (cJSON_IsNull(validate_version)) {
        validate_version = NULL;
    }
    if (validate_version) { 
    if(!cJSON_IsBool(validate_version))
    {
    goto end; //Bool
    }
    }

    // account_cart_add->verify
    cJSON *verify = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "verify");
    if (cJSON_IsNull(verify)) {
        verify = NULL;
    }
    if (verify) { 
    if(!cJSON_IsBool(verify))
    {
    goto end; //Bool
    }
    }

    // account_cart_add->db_tables_prefix
    cJSON *db_tables_prefix = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "db_tables_prefix");
    if (cJSON_IsNull(db_tables_prefix)) {
        db_tables_prefix = NULL;
    }
    if (db_tables_prefix) { 
    if(!cJSON_IsString(db_tables_prefix) && !cJSON_IsNull(db_tables_prefix))
    {
    goto end; //String
    }
    }

    // account_cart_add->user_agent
    cJSON *user_agent = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "user_agent");
    if (cJSON_IsNull(user_agent)) {
        user_agent = NULL;
    }
    if (user_agent) { 
    if(!cJSON_IsString(user_agent) && !cJSON_IsNull(user_agent))
    {
    goto end; //String
    }
    }

    // account_cart_add->ftp_host
    cJSON *ftp_host = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ftp_host");
    if (cJSON_IsNull(ftp_host)) {
        ftp_host = NULL;
    }
    if (ftp_host) { 
    if(!cJSON_IsString(ftp_host) && !cJSON_IsNull(ftp_host))
    {
    goto end; //String
    }
    }

    // account_cart_add->ftp_user
    cJSON *ftp_user = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ftp_user");
    if (cJSON_IsNull(ftp_user)) {
        ftp_user = NULL;
    }
    if (ftp_user) { 
    if(!cJSON_IsString(ftp_user) && !cJSON_IsNull(ftp_user))
    {
    goto end; //String
    }
    }

    // account_cart_add->ftp_password
    cJSON *ftp_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ftp_password");
    if (cJSON_IsNull(ftp_password)) {
        ftp_password = NULL;
    }
    if (ftp_password) { 
    if(!cJSON_IsString(ftp_password) && !cJSON_IsNull(ftp_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->ftp_port
    cJSON *ftp_port = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ftp_port");
    if (cJSON_IsNull(ftp_port)) {
        ftp_port = NULL;
    }
    if (ftp_port) { 
    if(!cJSON_IsNumber(ftp_port))
    {
    goto end; //Numeric
    }
    }

    // account_cart_add->ftp_store_dir
    cJSON *ftp_store_dir = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ftp_store_dir");
    if (cJSON_IsNull(ftp_store_dir)) {
        ftp_store_dir = NULL;
    }
    if (ftp_store_dir) { 
    if(!cJSON_IsString(ftp_store_dir) && !cJSON_IsNull(ftp_store_dir))
    {
    goto end; //String
    }
    }

    // account_cart_add->_3dcart_private_key
    cJSON *_3dcart_private_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "3dcart_private_key");
    if (cJSON_IsNull(_3dcart_private_key)) {
        _3dcart_private_key = NULL;
    }
    if (_3dcart_private_key) { 
    if(!cJSON_IsString(_3dcart_private_key) && !cJSON_IsNull(_3dcart_private_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->_3dcart_access_token
    cJSON *_3dcart_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "3dcart_access_token");
    if (cJSON_IsNull(_3dcart_access_token)) {
        _3dcart_access_token = NULL;
    }
    if (_3dcart_access_token) { 
    if(!cJSON_IsString(_3dcart_access_token) && !cJSON_IsNull(_3dcart_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->_3dcartapi_api_key
    cJSON *_3dcartapi_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "3dcartapi_api_key");
    if (cJSON_IsNull(_3dcartapi_api_key)) {
        _3dcartapi_api_key = NULL;
    }
    if (_3dcartapi_api_key) { 
    if(!cJSON_IsString(_3dcartapi_api_key) && !cJSON_IsNull(_3dcartapi_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_sp_client_id
    cJSON *amazon_sp_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_sp_client_id");
    if (cJSON_IsNull(amazon_sp_client_id)) {
        amazon_sp_client_id = NULL;
    }
    if (amazon_sp_client_id) { 
    if(!cJSON_IsString(amazon_sp_client_id) && !cJSON_IsNull(amazon_sp_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_sp_client_secret
    cJSON *amazon_sp_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_sp_client_secret");
    if (cJSON_IsNull(amazon_sp_client_secret)) {
        amazon_sp_client_secret = NULL;
    }
    if (amazon_sp_client_secret) { 
    if(!cJSON_IsString(amazon_sp_client_secret) && !cJSON_IsNull(amazon_sp_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_sp_refresh_token
    cJSON *amazon_sp_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_sp_refresh_token");
    if (cJSON_IsNull(amazon_sp_refresh_token)) {
        amazon_sp_refresh_token = NULL;
    }
    if (amazon_sp_refresh_token) { 
    if(!cJSON_IsString(amazon_sp_refresh_token) && !cJSON_IsNull(amazon_sp_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_sp_aws_region
    cJSON *amazon_sp_aws_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_sp_aws_region");
    if (cJSON_IsNull(amazon_sp_aws_region)) {
        amazon_sp_aws_region = NULL;
    }
    if (amazon_sp_aws_region) { 
    if(!cJSON_IsString(amazon_sp_aws_region) && !cJSON_IsNull(amazon_sp_aws_region))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_sp_api_environment
    cJSON *amazon_sp_api_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_sp_api_environment");
    if (cJSON_IsNull(amazon_sp_api_environment)) {
        amazon_sp_api_environment = NULL;
    }
    if (amazon_sp_api_environment) { 
    if(!cJSON_IsString(amazon_sp_api_environment) && !cJSON_IsNull(amazon_sp_api_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->amazon_seller_id
    cJSON *amazon_seller_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "amazon_seller_id");
    if (cJSON_IsNull(amazon_seller_id)) {
        amazon_seller_id = NULL;
    }
    if (amazon_seller_id) { 
    if(!cJSON_IsString(amazon_seller_id) && !cJSON_IsNull(amazon_seller_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->aspdotnetstorefront_api_user
    cJSON *aspdotnetstorefront_api_user = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "aspdotnetstorefront_api_user");
    if (cJSON_IsNull(aspdotnetstorefront_api_user)) {
        aspdotnetstorefront_api_user = NULL;
    }
    if (aspdotnetstorefront_api_user) { 
    if(!cJSON_IsString(aspdotnetstorefront_api_user) && !cJSON_IsNull(aspdotnetstorefront_api_user))
    {
    goto end; //String
    }
    }

    // account_cart_add->aspdotnetstorefront_api_pass
    cJSON *aspdotnetstorefront_api_pass = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "aspdotnetstorefront_api_pass");
    if (cJSON_IsNull(aspdotnetstorefront_api_pass)) {
        aspdotnetstorefront_api_pass = NULL;
    }
    if (aspdotnetstorefront_api_pass) { 
    if(!cJSON_IsString(aspdotnetstorefront_api_pass) && !cJSON_IsNull(aspdotnetstorefront_api_pass))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_admin_account
    cJSON *bigcommerceapi_admin_account = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_admin_account");
    if (cJSON_IsNull(bigcommerceapi_admin_account)) {
        bigcommerceapi_admin_account = NULL;
    }
    if (bigcommerceapi_admin_account) { 
    if(!cJSON_IsString(bigcommerceapi_admin_account) && !cJSON_IsNull(bigcommerceapi_admin_account))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_api_path
    cJSON *bigcommerceapi_api_path = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_api_path");
    if (cJSON_IsNull(bigcommerceapi_api_path)) {
        bigcommerceapi_api_path = NULL;
    }
    if (bigcommerceapi_api_path) { 
    if(!cJSON_IsString(bigcommerceapi_api_path) && !cJSON_IsNull(bigcommerceapi_api_path))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_api_key
    cJSON *bigcommerceapi_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_api_key");
    if (cJSON_IsNull(bigcommerceapi_api_key)) {
        bigcommerceapi_api_key = NULL;
    }
    if (bigcommerceapi_api_key) { 
    if(!cJSON_IsString(bigcommerceapi_api_key) && !cJSON_IsNull(bigcommerceapi_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_client_id
    cJSON *bigcommerceapi_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_client_id");
    if (cJSON_IsNull(bigcommerceapi_client_id)) {
        bigcommerceapi_client_id = NULL;
    }
    if (bigcommerceapi_client_id) { 
    if(!cJSON_IsString(bigcommerceapi_client_id) && !cJSON_IsNull(bigcommerceapi_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_access_token
    cJSON *bigcommerceapi_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_access_token");
    if (cJSON_IsNull(bigcommerceapi_access_token)) {
        bigcommerceapi_access_token = NULL;
    }
    if (bigcommerceapi_access_token) { 
    if(!cJSON_IsString(bigcommerceapi_access_token) && !cJSON_IsNull(bigcommerceapi_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcommerceapi_context
    cJSON *bigcommerceapi_context = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcommerceapi_context");
    if (cJSON_IsNull(bigcommerceapi_context)) {
        bigcommerceapi_context = NULL;
    }
    if (bigcommerceapi_context) { 
    if(!cJSON_IsString(bigcommerceapi_context) && !cJSON_IsNull(bigcommerceapi_context))
    {
    goto end; //String
    }
    }

    // account_cart_add->bol_api_key
    cJSON *bol_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bol_api_key");
    if (cJSON_IsNull(bol_api_key)) {
        bol_api_key = NULL;
    }
    if (bol_api_key) { 
    if(!cJSON_IsString(bol_api_key) && !cJSON_IsNull(bol_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->bol_api_secret
    cJSON *bol_api_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bol_api_secret");
    if (cJSON_IsNull(bol_api_secret)) {
        bol_api_secret = NULL;
    }
    if (bol_api_secret) { 
    if(!cJSON_IsString(bol_api_secret) && !cJSON_IsNull(bol_api_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->bol_retailer_id
    cJSON *bol_retailer_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bol_retailer_id");
    if (cJSON_IsNull(bol_retailer_id)) {
        bol_retailer_id = NULL;
    }
    if (bol_retailer_id) { 
    if(!cJSON_IsNumber(bol_retailer_id))
    {
    goto end; //Numeric
    }
    }

    // account_cart_add->bigcartel_user_name
    cJSON *bigcartel_user_name = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcartel_user_name");
    if (cJSON_IsNull(bigcartel_user_name)) {
        bigcartel_user_name = NULL;
    }
    if (bigcartel_user_name) { 
    if(!cJSON_IsString(bigcartel_user_name) && !cJSON_IsNull(bigcartel_user_name))
    {
    goto end; //String
    }
    }

    // account_cart_add->bigcartel_password
    cJSON *bigcartel_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bigcartel_password");
    if (cJSON_IsNull(bigcartel_password)) {
        bigcartel_password = NULL;
    }
    if (bigcartel_password) { 
    if(!cJSON_IsString(bigcartel_password) && !cJSON_IsNull(bigcartel_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->bricklink_consumer_key
    cJSON *bricklink_consumer_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bricklink_consumer_key");
    if (cJSON_IsNull(bricklink_consumer_key)) {
        bricklink_consumer_key = NULL;
    }
    if (bricklink_consumer_key) { 
    if(!cJSON_IsString(bricklink_consumer_key) && !cJSON_IsNull(bricklink_consumer_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->bricklink_consumer_secret
    cJSON *bricklink_consumer_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bricklink_consumer_secret");
    if (cJSON_IsNull(bricklink_consumer_secret)) {
        bricklink_consumer_secret = NULL;
    }
    if (bricklink_consumer_secret) { 
    if(!cJSON_IsString(bricklink_consumer_secret) && !cJSON_IsNull(bricklink_consumer_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->bricklink_token
    cJSON *bricklink_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bricklink_token");
    if (cJSON_IsNull(bricklink_token)) {
        bricklink_token = NULL;
    }
    if (bricklink_token) { 
    if(!cJSON_IsString(bricklink_token) && !cJSON_IsNull(bricklink_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->bricklink_token_secret
    cJSON *bricklink_token_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "bricklink_token_secret");
    if (cJSON_IsNull(bricklink_token_secret)) {
        bricklink_token_secret = NULL;
    }
    if (bricklink_token_secret) { 
    if(!cJSON_IsString(bricklink_token_secret) && !cJSON_IsNull(bricklink_token_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->demandware_client_id
    cJSON *demandware_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "demandware_client_id");
    if (cJSON_IsNull(demandware_client_id)) {
        demandware_client_id = NULL;
    }
    if (demandware_client_id) { 
    if(!cJSON_IsString(demandware_client_id) && !cJSON_IsNull(demandware_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->demandware_api_password
    cJSON *demandware_api_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "demandware_api_password");
    if (cJSON_IsNull(demandware_api_password)) {
        demandware_api_password = NULL;
    }
    if (demandware_api_password) { 
    if(!cJSON_IsString(demandware_api_password) && !cJSON_IsNull(demandware_api_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->demandware_user_name
    cJSON *demandware_user_name = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "demandware_user_name");
    if (cJSON_IsNull(demandware_user_name)) {
        demandware_user_name = NULL;
    }
    if (demandware_user_name) { 
    if(!cJSON_IsString(demandware_user_name) && !cJSON_IsNull(demandware_user_name))
    {
    goto end; //String
    }
    }

    // account_cart_add->demandware_user_password
    cJSON *demandware_user_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "demandware_user_password");
    if (cJSON_IsNull(demandware_user_password)) {
        demandware_user_password = NULL;
    }
    if (demandware_user_password) { 
    if(!cJSON_IsString(demandware_user_password) && !cJSON_IsNull(demandware_user_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_client_id
    cJSON *ebay_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_client_id");
    if (cJSON_IsNull(ebay_client_id)) {
        ebay_client_id = NULL;
    }
    if (ebay_client_id) { 
    if(!cJSON_IsString(ebay_client_id) && !cJSON_IsNull(ebay_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_client_secret
    cJSON *ebay_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_client_secret");
    if (cJSON_IsNull(ebay_client_secret)) {
        ebay_client_secret = NULL;
    }
    if (ebay_client_secret) { 
    if(!cJSON_IsString(ebay_client_secret) && !cJSON_IsNull(ebay_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_runame
    cJSON *ebay_runame = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_runame");
    if (cJSON_IsNull(ebay_runame)) {
        ebay_runame = NULL;
    }
    if (ebay_runame) { 
    if(!cJSON_IsString(ebay_runame) && !cJSON_IsNull(ebay_runame))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_access_token
    cJSON *ebay_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_access_token");
    if (cJSON_IsNull(ebay_access_token)) {
        ebay_access_token = NULL;
    }
    if (ebay_access_token) { 
    if(!cJSON_IsString(ebay_access_token) && !cJSON_IsNull(ebay_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_refresh_token
    cJSON *ebay_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_refresh_token");
    if (cJSON_IsNull(ebay_refresh_token)) {
        ebay_refresh_token = NULL;
    }
    if (ebay_refresh_token) { 
    if(!cJSON_IsString(ebay_refresh_token) && !cJSON_IsNull(ebay_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_environment
    cJSON *ebay_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_environment");
    if (cJSON_IsNull(ebay_environment)) {
        ebay_environment = NULL;
    }
    if (ebay_environment) { 
    if(!cJSON_IsString(ebay_environment) && !cJSON_IsNull(ebay_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->ebay_site_id
    cJSON *ebay_site_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ebay_site_id");
    if (cJSON_IsNull(ebay_site_id)) {
        ebay_site_id = NULL;
    }
    if (ebay_site_id) { 
    if(!cJSON_IsNumber(ebay_site_id))
    {
    goto end; //Numeric
    }
    }

    // account_cart_add->walmart_client_id
    cJSON *walmart_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "walmart_client_id");
    if (cJSON_IsNull(walmart_client_id)) {
        walmart_client_id = NULL;
    }
    if (walmart_client_id) { 
    if(!cJSON_IsString(walmart_client_id) && !cJSON_IsNull(walmart_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->walmart_client_secret
    cJSON *walmart_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "walmart_client_secret");
    if (cJSON_IsNull(walmart_client_secret)) {
        walmart_client_secret = NULL;
    }
    if (walmart_client_secret) { 
    if(!cJSON_IsString(walmart_client_secret) && !cJSON_IsNull(walmart_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->walmart_environment
    cJSON *walmart_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "walmart_environment");
    if (cJSON_IsNull(walmart_environment)) {
        walmart_environment = NULL;
    }
    if (walmart_environment) { 
    if(!cJSON_IsString(walmart_environment) && !cJSON_IsNull(walmart_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->walmart_channel_type
    cJSON *walmart_channel_type = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "walmart_channel_type");
    if (cJSON_IsNull(walmart_channel_type)) {
        walmart_channel_type = NULL;
    }
    if (walmart_channel_type) { 
    if(!cJSON_IsString(walmart_channel_type) && !cJSON_IsNull(walmart_channel_type))
    {
    goto end; //String
    }
    }

    // account_cart_add->walmart_region
    cJSON *walmart_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "walmart_region");
    if (cJSON_IsNull(walmart_region)) {
        walmart_region = NULL;
    }
    if (walmart_region) { 
    if(!cJSON_IsString(walmart_region) && !cJSON_IsNull(walmart_region))
    {
    goto end; //String
    }
    }

    // account_cart_add->ecwid_acess_token
    cJSON *ecwid_acess_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ecwid_acess_token");
    if (cJSON_IsNull(ecwid_acess_token)) {
        ecwid_acess_token = NULL;
    }
    if (ecwid_acess_token) { 
    if(!cJSON_IsString(ecwid_acess_token) && !cJSON_IsNull(ecwid_acess_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->ecwid_store_id
    cJSON *ecwid_store_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "ecwid_store_id");
    if (cJSON_IsNull(ecwid_store_id)) {
        ecwid_store_id = NULL;
    }
    if (ecwid_store_id) { 
    if(!cJSON_IsString(ecwid_store_id) && !cJSON_IsNull(ecwid_store_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->lazada_app_id
    cJSON *lazada_app_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lazada_app_id");
    if (cJSON_IsNull(lazada_app_id)) {
        lazada_app_id = NULL;
    }
    if (lazada_app_id) { 
    if(!cJSON_IsString(lazada_app_id) && !cJSON_IsNull(lazada_app_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->lazada_app_secret
    cJSON *lazada_app_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lazada_app_secret");
    if (cJSON_IsNull(lazada_app_secret)) {
        lazada_app_secret = NULL;
    }
    if (lazada_app_secret) { 
    if(!cJSON_IsString(lazada_app_secret) && !cJSON_IsNull(lazada_app_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->lazada_refresh_token
    cJSON *lazada_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lazada_refresh_token");
    if (cJSON_IsNull(lazada_refresh_token)) {
        lazada_refresh_token = NULL;
    }
    if (lazada_refresh_token) { 
    if(!cJSON_IsString(lazada_refresh_token) && !cJSON_IsNull(lazada_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->lazada_region
    cJSON *lazada_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lazada_region");
    if (cJSON_IsNull(lazada_region)) {
        lazada_region = NULL;
    }
    if (lazada_region) { 
    if(!cJSON_IsString(lazada_region) && !cJSON_IsNull(lazada_region))
    {
    goto end; //String
    }
    }

    // account_cart_add->lightspeed_api_key
    cJSON *lightspeed_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lightspeed_api_key");
    if (cJSON_IsNull(lightspeed_api_key)) {
        lightspeed_api_key = NULL;
    }
    if (lightspeed_api_key) { 
    if(!cJSON_IsString(lightspeed_api_key) && !cJSON_IsNull(lightspeed_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->lightspeed_api_secret
    cJSON *lightspeed_api_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "lightspeed_api_secret");
    if (cJSON_IsNull(lightspeed_api_secret)) {
        lightspeed_api_secret = NULL;
    }
    if (lightspeed_api_secret) { 
    if(!cJSON_IsString(lightspeed_api_secret) && !cJSON_IsNull(lightspeed_api_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_keystring
    cJSON *etsy_keystring = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_keystring");
    if (cJSON_IsNull(etsy_keystring)) {
        etsy_keystring = NULL;
    }
    if (etsy_keystring) { 
    if(!cJSON_IsString(etsy_keystring) && !cJSON_IsNull(etsy_keystring))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_shared_secret
    cJSON *etsy_shared_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_shared_secret");
    if (cJSON_IsNull(etsy_shared_secret)) {
        etsy_shared_secret = NULL;
    }
    if (etsy_shared_secret) { 
    if(!cJSON_IsString(etsy_shared_secret) && !cJSON_IsNull(etsy_shared_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_access_token
    cJSON *etsy_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_access_token");
    if (cJSON_IsNull(etsy_access_token)) {
        etsy_access_token = NULL;
    }
    if (etsy_access_token) { 
    if(!cJSON_IsString(etsy_access_token) && !cJSON_IsNull(etsy_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_token_secret
    cJSON *etsy_token_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_token_secret");
    if (cJSON_IsNull(etsy_token_secret)) {
        etsy_token_secret = NULL;
    }
    if (etsy_token_secret) { 
    if(!cJSON_IsString(etsy_token_secret) && !cJSON_IsNull(etsy_token_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_client_id
    cJSON *etsy_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_client_id");
    if (cJSON_IsNull(etsy_client_id)) {
        etsy_client_id = NULL;
    }
    if (etsy_client_id) { 
    if(!cJSON_IsString(etsy_client_id) && !cJSON_IsNull(etsy_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->etsy_refresh_token
    cJSON *etsy_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "etsy_refresh_token");
    if (cJSON_IsNull(etsy_refresh_token)) {
        etsy_refresh_token = NULL;
    }
    if (etsy_refresh_token) { 
    if(!cJSON_IsString(etsy_refresh_token) && !cJSON_IsNull(etsy_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->facebook_app_id
    cJSON *facebook_app_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "facebook_app_id");
    if (cJSON_IsNull(facebook_app_id)) {
        facebook_app_id = NULL;
    }
    if (facebook_app_id) { 
    if(!cJSON_IsString(facebook_app_id) && !cJSON_IsNull(facebook_app_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->facebook_app_secret
    cJSON *facebook_app_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "facebook_app_secret");
    if (cJSON_IsNull(facebook_app_secret)) {
        facebook_app_secret = NULL;
    }
    if (facebook_app_secret) { 
    if(!cJSON_IsString(facebook_app_secret) && !cJSON_IsNull(facebook_app_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->facebook_access_token
    cJSON *facebook_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "facebook_access_token");
    if (cJSON_IsNull(facebook_access_token)) {
        facebook_access_token = NULL;
    }
    if (facebook_access_token) { 
    if(!cJSON_IsString(facebook_access_token) && !cJSON_IsNull(facebook_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->facebook_business_id
    cJSON *facebook_business_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "facebook_business_id");
    if (cJSON_IsNull(facebook_business_id)) {
        facebook_business_id = NULL;
    }
    if (facebook_business_id) { 
    if(!cJSON_IsString(facebook_business_id) && !cJSON_IsNull(facebook_business_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->neto_api_key
    cJSON *neto_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "neto_api_key");
    if (cJSON_IsNull(neto_api_key)) {
        neto_api_key = NULL;
    }
    if (neto_api_key) { 
    if(!cJSON_IsString(neto_api_key) && !cJSON_IsNull(neto_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->neto_api_username
    cJSON *neto_api_username = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "neto_api_username");
    if (cJSON_IsNull(neto_api_username)) {
        neto_api_username = NULL;
    }
    if (neto_api_username) { 
    if(!cJSON_IsString(neto_api_username) && !cJSON_IsNull(neto_api_username))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopline_access_token
    cJSON *shopline_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopline_access_token");
    if (cJSON_IsNull(shopline_access_token)) {
        shopline_access_token = NULL;
    }
    if (shopline_access_token) { 
    if(!cJSON_IsString(shopline_access_token) && !cJSON_IsNull(shopline_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopline_app_key
    cJSON *shopline_app_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopline_app_key");
    if (cJSON_IsNull(shopline_app_key)) {
        shopline_app_key = NULL;
    }
    if (shopline_app_key) { 
    if(!cJSON_IsString(shopline_app_key) && !cJSON_IsNull(shopline_app_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopline_app_secret
    cJSON *shopline_app_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopline_app_secret");
    if (cJSON_IsNull(shopline_app_secret)) {
        shopline_app_secret = NULL;
    }
    if (shopline_app_secret) { 
    if(!cJSON_IsString(shopline_app_secret) && !cJSON_IsNull(shopline_app_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopline_shared_secret
    cJSON *shopline_shared_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopline_shared_secret");
    if (cJSON_IsNull(shopline_shared_secret)) {
        shopline_shared_secret = NULL;
    }
    if (shopline_shared_secret) { 
    if(!cJSON_IsString(shopline_shared_secret) && !cJSON_IsNull(shopline_shared_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopify_access_token
    cJSON *shopify_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopify_access_token");
    if (cJSON_IsNull(shopify_access_token)) {
        shopify_access_token = NULL;
    }
    if (shopify_access_token) { 
    if(!cJSON_IsString(shopify_access_token) && !cJSON_IsNull(shopify_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopify_api_key
    cJSON *shopify_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopify_api_key");
    if (cJSON_IsNull(shopify_api_key)) {
        shopify_api_key = NULL;
    }
    if (shopify_api_key) { 
    if(!cJSON_IsString(shopify_api_key) && !cJSON_IsNull(shopify_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopify_api_password
    cJSON *shopify_api_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopify_api_password");
    if (cJSON_IsNull(shopify_api_password)) {
        shopify_api_password = NULL;
    }
    if (shopify_api_password) { 
    if(!cJSON_IsString(shopify_api_password) && !cJSON_IsNull(shopify_api_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopify_shared_secret
    cJSON *shopify_shared_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopify_shared_secret");
    if (cJSON_IsNull(shopify_shared_secret)) {
        shopify_shared_secret = NULL;
    }
    if (shopify_shared_secret) { 
    if(!cJSON_IsString(shopify_shared_secret) && !cJSON_IsNull(shopify_shared_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_partner_id
    cJSON *shopee_partner_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_partner_id");
    if (cJSON_IsNull(shopee_partner_id)) {
        shopee_partner_id = NULL;
    }
    if (shopee_partner_id) { 
    if(!cJSON_IsString(shopee_partner_id) && !cJSON_IsNull(shopee_partner_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_partner_key
    cJSON *shopee_partner_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_partner_key");
    if (cJSON_IsNull(shopee_partner_key)) {
        shopee_partner_key = NULL;
    }
    if (shopee_partner_key) { 
    if(!cJSON_IsString(shopee_partner_key) && !cJSON_IsNull(shopee_partner_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_shop_id
    cJSON *shopee_shop_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_shop_id");
    if (cJSON_IsNull(shopee_shop_id)) {
        shopee_shop_id = NULL;
    }
    if (shopee_shop_id) { 
    if(!cJSON_IsString(shopee_shop_id) && !cJSON_IsNull(shopee_shop_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_refresh_token
    cJSON *shopee_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_refresh_token");
    if (cJSON_IsNull(shopee_refresh_token)) {
        shopee_refresh_token = NULL;
    }
    if (shopee_refresh_token) { 
    if(!cJSON_IsString(shopee_refresh_token) && !cJSON_IsNull(shopee_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_region
    cJSON *shopee_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_region");
    if (cJSON_IsNull(shopee_region)) {
        shopee_region = NULL;
    }
    if (shopee_region) { 
    if(!cJSON_IsString(shopee_region) && !cJSON_IsNull(shopee_region))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopee_environment
    cJSON *shopee_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopee_environment");
    if (cJSON_IsNull(shopee_environment)) {
        shopee_environment = NULL;
    }
    if (shopee_environment) { 
    if(!cJSON_IsString(shopee_environment) && !cJSON_IsNull(shopee_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->shoplazza_access_token
    cJSON *shoplazza_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shoplazza_access_token");
    if (cJSON_IsNull(shoplazza_access_token)) {
        shoplazza_access_token = NULL;
    }
    if (shoplazza_access_token) { 
    if(!cJSON_IsString(shoplazza_access_token) && !cJSON_IsNull(shoplazza_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->shoplazza_shared_secret
    cJSON *shoplazza_shared_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shoplazza_shared_secret");
    if (cJSON_IsNull(shoplazza_shared_secret)) {
        shoplazza_shared_secret = NULL;
    }
    if (shoplazza_shared_secret) { 
    if(!cJSON_IsString(shoplazza_shared_secret) && !cJSON_IsNull(shoplazza_shared_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopware_access_key
    cJSON *shopware_access_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopware_access_key");
    if (cJSON_IsNull(shopware_access_key)) {
        shopware_access_key = NULL;
    }
    if (shopware_access_key) { 
    if(!cJSON_IsString(shopware_access_key) && !cJSON_IsNull(shopware_access_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopware_api_key
    cJSON *shopware_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopware_api_key");
    if (cJSON_IsNull(shopware_api_key)) {
        shopware_api_key = NULL;
    }
    if (shopware_api_key) { 
    if(!cJSON_IsString(shopware_api_key) && !cJSON_IsNull(shopware_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->shopware_api_secret
    cJSON *shopware_api_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "shopware_api_secret");
    if (cJSON_IsNull(shopware_api_secret)) {
        shopware_api_secret = NULL;
    }
    if (shopware_api_secret) { 
    if(!cJSON_IsString(shopware_api_secret) && !cJSON_IsNull(shopware_api_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->miva_access_token
    cJSON *miva_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "miva_access_token");
    if (cJSON_IsNull(miva_access_token)) {
        miva_access_token = NULL;
    }
    if (miva_access_token) { 
    if(!cJSON_IsString(miva_access_token) && !cJSON_IsNull(miva_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->miva_signature
    cJSON *miva_signature = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "miva_signature");
    if (cJSON_IsNull(miva_signature)) {
        miva_signature = NULL;
    }
    if (miva_signature) { 
    if(!cJSON_IsString(miva_signature) && !cJSON_IsNull(miva_signature))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiendanube_user_id
    cJSON *tiendanube_user_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiendanube_user_id");
    if (cJSON_IsNull(tiendanube_user_id)) {
        tiendanube_user_id = NULL;
    }
    if (tiendanube_user_id) { 
    if(!cJSON_IsNumber(tiendanube_user_id))
    {
    goto end; //Numeric
    }
    }

    // account_cart_add->tiendanube_access_token
    cJSON *tiendanube_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiendanube_access_token");
    if (cJSON_IsNull(tiendanube_access_token)) {
        tiendanube_access_token = NULL;
    }
    if (tiendanube_access_token) { 
    if(!cJSON_IsString(tiendanube_access_token) && !cJSON_IsNull(tiendanube_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiendanube_client_secret
    cJSON *tiendanube_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiendanube_client_secret");
    if (cJSON_IsNull(tiendanube_client_secret)) {
        tiendanube_client_secret = NULL;
    }
    if (tiendanube_client_secret) { 
    if(!cJSON_IsString(tiendanube_client_secret) && !cJSON_IsNull(tiendanube_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->volusion_login
    cJSON *volusion_login = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "volusion_login");
    if (cJSON_IsNull(volusion_login)) {
        volusion_login = NULL;
    }
    if (volusion_login) { 
    if(!cJSON_IsString(volusion_login) && !cJSON_IsNull(volusion_login))
    {
    goto end; //String
    }
    }

    // account_cart_add->volusion_password
    cJSON *volusion_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "volusion_password");
    if (cJSON_IsNull(volusion_password)) {
        volusion_password = NULL;
    }
    if (volusion_password) { 
    if(!cJSON_IsString(volusion_password) && !cJSON_IsNull(volusion_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->hybris_client_id
    cJSON *hybris_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "hybris_client_id");
    if (cJSON_IsNull(hybris_client_id)) {
        hybris_client_id = NULL;
    }
    if (hybris_client_id) { 
    if(!cJSON_IsString(hybris_client_id) && !cJSON_IsNull(hybris_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->hybris_client_secret
    cJSON *hybris_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "hybris_client_secret");
    if (cJSON_IsNull(hybris_client_secret)) {
        hybris_client_secret = NULL;
    }
    if (hybris_client_secret) { 
    if(!cJSON_IsString(hybris_client_secret) && !cJSON_IsNull(hybris_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->hybris_username
    cJSON *hybris_username = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "hybris_username");
    if (cJSON_IsNull(hybris_username)) {
        hybris_username = NULL;
    }
    if (hybris_username) { 
    if(!cJSON_IsString(hybris_username) && !cJSON_IsNull(hybris_username))
    {
    goto end; //String
    }
    }

    // account_cart_add->hybris_password
    cJSON *hybris_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "hybris_password");
    if (cJSON_IsNull(hybris_password)) {
        hybris_password = NULL;
    }
    if (hybris_password) { 
    if(!cJSON_IsString(hybris_password) && !cJSON_IsNull(hybris_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->hybris_websites
    cJSON *hybris_websites = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "hybris_websites");
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

    // account_cart_add->square_client_id
    cJSON *square_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "square_client_id");
    if (cJSON_IsNull(square_client_id)) {
        square_client_id = NULL;
    }
    if (square_client_id) { 
    if(!cJSON_IsString(square_client_id) && !cJSON_IsNull(square_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->square_client_secret
    cJSON *square_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "square_client_secret");
    if (cJSON_IsNull(square_client_secret)) {
        square_client_secret = NULL;
    }
    if (square_client_secret) { 
    if(!cJSON_IsString(square_client_secret) && !cJSON_IsNull(square_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->square_refresh_token
    cJSON *square_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "square_refresh_token");
    if (cJSON_IsNull(square_refresh_token)) {
        square_refresh_token = NULL;
    }
    if (square_refresh_token) { 
    if(!cJSON_IsString(square_refresh_token) && !cJSON_IsNull(square_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->squarespace_api_key
    cJSON *squarespace_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "squarespace_api_key");
    if (cJSON_IsNull(squarespace_api_key)) {
        squarespace_api_key = NULL;
    }
    if (squarespace_api_key) { 
    if(!cJSON_IsString(squarespace_api_key) && !cJSON_IsNull(squarespace_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->squarespace_client_id
    cJSON *squarespace_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "squarespace_client_id");
    if (cJSON_IsNull(squarespace_client_id)) {
        squarespace_client_id = NULL;
    }
    if (squarespace_client_id) { 
    if(!cJSON_IsString(squarespace_client_id) && !cJSON_IsNull(squarespace_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->squarespace_client_secret
    cJSON *squarespace_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "squarespace_client_secret");
    if (cJSON_IsNull(squarespace_client_secret)) {
        squarespace_client_secret = NULL;
    }
    if (squarespace_client_secret) { 
    if(!cJSON_IsString(squarespace_client_secret) && !cJSON_IsNull(squarespace_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->squarespace_access_token
    cJSON *squarespace_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "squarespace_access_token");
    if (cJSON_IsNull(squarespace_access_token)) {
        squarespace_access_token = NULL;
    }
    if (squarespace_access_token) { 
    if(!cJSON_IsString(squarespace_access_token) && !cJSON_IsNull(squarespace_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->squarespace_refresh_token
    cJSON *squarespace_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "squarespace_refresh_token");
    if (cJSON_IsNull(squarespace_refresh_token)) {
        squarespace_refresh_token = NULL;
    }
    if (squarespace_refresh_token) { 
    if(!cJSON_IsString(squarespace_refresh_token) && !cJSON_IsNull(squarespace_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->commercehq_api_key
    cJSON *commercehq_api_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "commercehq_api_key");
    if (cJSON_IsNull(commercehq_api_key)) {
        commercehq_api_key = NULL;
    }
    if (commercehq_api_key) { 
    if(!cJSON_IsString(commercehq_api_key) && !cJSON_IsNull(commercehq_api_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->commercehq_api_password
    cJSON *commercehq_api_password = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "commercehq_api_password");
    if (cJSON_IsNull(commercehq_api_password)) {
        commercehq_api_password = NULL;
    }
    if (commercehq_api_password) { 
    if(!cJSON_IsString(commercehq_api_password) && !cJSON_IsNull(commercehq_api_password))
    {
    goto end; //String
    }
    }

    // account_cart_add->wc_consumer_key
    cJSON *wc_consumer_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wc_consumer_key");
    if (cJSON_IsNull(wc_consumer_key)) {
        wc_consumer_key = NULL;
    }
    if (wc_consumer_key) { 
    if(!cJSON_IsString(wc_consumer_key) && !cJSON_IsNull(wc_consumer_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->wc_consumer_secret
    cJSON *wc_consumer_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wc_consumer_secret");
    if (cJSON_IsNull(wc_consumer_secret)) {
        wc_consumer_secret = NULL;
    }
    if (wc_consumer_secret) { 
    if(!cJSON_IsString(wc_consumer_secret) && !cJSON_IsNull(wc_consumer_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->magento_consumer_key
    cJSON *magento_consumer_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "magento_consumer_key");
    if (cJSON_IsNull(magento_consumer_key)) {
        magento_consumer_key = NULL;
    }
    if (magento_consumer_key) { 
    if(!cJSON_IsString(magento_consumer_key) && !cJSON_IsNull(magento_consumer_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->magento_consumer_secret
    cJSON *magento_consumer_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "magento_consumer_secret");
    if (cJSON_IsNull(magento_consumer_secret)) {
        magento_consumer_secret = NULL;
    }
    if (magento_consumer_secret) { 
    if(!cJSON_IsString(magento_consumer_secret) && !cJSON_IsNull(magento_consumer_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->magento_access_token
    cJSON *magento_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "magento_access_token");
    if (cJSON_IsNull(magento_access_token)) {
        magento_access_token = NULL;
    }
    if (magento_access_token) { 
    if(!cJSON_IsString(magento_access_token) && !cJSON_IsNull(magento_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->magento_token_secret
    cJSON *magento_token_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "magento_token_secret");
    if (cJSON_IsNull(magento_token_secret)) {
        magento_token_secret = NULL;
    }
    if (magento_token_secret) { 
    if(!cJSON_IsString(magento_token_secret) && !cJSON_IsNull(magento_token_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->prestashop_webservice_key
    cJSON *prestashop_webservice_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "prestashop_webservice_key");
    if (cJSON_IsNull(prestashop_webservice_key)) {
        prestashop_webservice_key = NULL;
    }
    if (prestashop_webservice_key) { 
    if(!cJSON_IsString(prestashop_webservice_key) && !cJSON_IsNull(prestashop_webservice_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->wix_app_id
    cJSON *wix_app_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wix_app_id");
    if (cJSON_IsNull(wix_app_id)) {
        wix_app_id = NULL;
    }
    if (wix_app_id) { 
    if(!cJSON_IsString(wix_app_id) && !cJSON_IsNull(wix_app_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->wix_app_secret_key
    cJSON *wix_app_secret_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wix_app_secret_key");
    if (cJSON_IsNull(wix_app_secret_key)) {
        wix_app_secret_key = NULL;
    }
    if (wix_app_secret_key) { 
    if(!cJSON_IsString(wix_app_secret_key) && !cJSON_IsNull(wix_app_secret_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->wix_instance_id
    cJSON *wix_instance_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wix_instance_id");
    if (cJSON_IsNull(wix_instance_id)) {
        wix_instance_id = NULL;
    }
    if (wix_instance_id) { 
    if(!cJSON_IsString(wix_instance_id) && !cJSON_IsNull(wix_instance_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->wix_refresh_token
    cJSON *wix_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "wix_refresh_token");
    if (cJSON_IsNull(wix_refresh_token)) {
        wix_refresh_token = NULL;
    }
    if (wix_refresh_token) { 
    if(!cJSON_IsString(wix_refresh_token) && !cJSON_IsNull(wix_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->mercado_libre_app_id
    cJSON *mercado_libre_app_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "mercado_libre_app_id");
    if (cJSON_IsNull(mercado_libre_app_id)) {
        mercado_libre_app_id = NULL;
    }
    if (mercado_libre_app_id) { 
    if(!cJSON_IsString(mercado_libre_app_id) && !cJSON_IsNull(mercado_libre_app_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->mercado_libre_app_secret_key
    cJSON *mercado_libre_app_secret_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "mercado_libre_app_secret_key");
    if (cJSON_IsNull(mercado_libre_app_secret_key)) {
        mercado_libre_app_secret_key = NULL;
    }
    if (mercado_libre_app_secret_key) { 
    if(!cJSON_IsString(mercado_libre_app_secret_key) && !cJSON_IsNull(mercado_libre_app_secret_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->mercado_libre_refresh_token
    cJSON *mercado_libre_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "mercado_libre_refresh_token");
    if (cJSON_IsNull(mercado_libre_refresh_token)) {
        mercado_libre_refresh_token = NULL;
    }
    if (mercado_libre_refresh_token) { 
    if(!cJSON_IsString(mercado_libre_refresh_token) && !cJSON_IsNull(mercado_libre_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->zid_client_id
    cJSON *zid_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zid_client_id");
    if (cJSON_IsNull(zid_client_id)) {
        zid_client_id = NULL;
    }
    if (zid_client_id) { 
    if(!cJSON_IsNumber(zid_client_id))
    {
    goto end; //Numeric
    }
    }

    // account_cart_add->zid_client_secret
    cJSON *zid_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zid_client_secret");
    if (cJSON_IsNull(zid_client_secret)) {
        zid_client_secret = NULL;
    }
    if (zid_client_secret) { 
    if(!cJSON_IsString(zid_client_secret) && !cJSON_IsNull(zid_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->zid_access_token
    cJSON *zid_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zid_access_token");
    if (cJSON_IsNull(zid_access_token)) {
        zid_access_token = NULL;
    }
    if (zid_access_token) { 
    if(!cJSON_IsString(zid_access_token) && !cJSON_IsNull(zid_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->zid_authorization
    cJSON *zid_authorization = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zid_authorization");
    if (cJSON_IsNull(zid_authorization)) {
        zid_authorization = NULL;
    }
    if (zid_authorization) { 
    if(!cJSON_IsString(zid_authorization) && !cJSON_IsNull(zid_authorization))
    {
    goto end; //String
    }
    }

    // account_cart_add->zid_refresh_token
    cJSON *zid_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zid_refresh_token");
    if (cJSON_IsNull(zid_refresh_token)) {
        zid_refresh_token = NULL;
    }
    if (zid_refresh_token) { 
    if(!cJSON_IsString(zid_refresh_token) && !cJSON_IsNull(zid_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->flipkart_client_id
    cJSON *flipkart_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "flipkart_client_id");
    if (cJSON_IsNull(flipkart_client_id)) {
        flipkart_client_id = NULL;
    }
    if (flipkart_client_id) { 
    if(!cJSON_IsString(flipkart_client_id) && !cJSON_IsNull(flipkart_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->flipkart_client_secret
    cJSON *flipkart_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "flipkart_client_secret");
    if (cJSON_IsNull(flipkart_client_secret)) {
        flipkart_client_secret = NULL;
    }
    if (flipkart_client_secret) { 
    if(!cJSON_IsString(flipkart_client_secret) && !cJSON_IsNull(flipkart_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->allegro_client_id
    cJSON *allegro_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "allegro_client_id");
    if (cJSON_IsNull(allegro_client_id)) {
        allegro_client_id = NULL;
    }
    if (allegro_client_id) { 
    if(!cJSON_IsString(allegro_client_id) && !cJSON_IsNull(allegro_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->allegro_client_secret
    cJSON *allegro_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "allegro_client_secret");
    if (cJSON_IsNull(allegro_client_secret)) {
        allegro_client_secret = NULL;
    }
    if (allegro_client_secret) { 
    if(!cJSON_IsString(allegro_client_secret) && !cJSON_IsNull(allegro_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->allegro_access_token
    cJSON *allegro_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "allegro_access_token");
    if (cJSON_IsNull(allegro_access_token)) {
        allegro_access_token = NULL;
    }
    if (allegro_access_token) { 
    if(!cJSON_IsString(allegro_access_token) && !cJSON_IsNull(allegro_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->allegro_refresh_token
    cJSON *allegro_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "allegro_refresh_token");
    if (cJSON_IsNull(allegro_refresh_token)) {
        allegro_refresh_token = NULL;
    }
    if (allegro_refresh_token) { 
    if(!cJSON_IsString(allegro_refresh_token) && !cJSON_IsNull(allegro_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->allegro_environment
    cJSON *allegro_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "allegro_environment");
    if (cJSON_IsNull(allegro_environment)) {
        allegro_environment = NULL;
    }
    if (allegro_environment) { 
    if(!cJSON_IsString(allegro_environment) && !cJSON_IsNull(allegro_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->zoho_client_id
    cJSON *zoho_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zoho_client_id");
    if (cJSON_IsNull(zoho_client_id)) {
        zoho_client_id = NULL;
    }
    if (zoho_client_id) { 
    if(!cJSON_IsString(zoho_client_id) && !cJSON_IsNull(zoho_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->zoho_client_secret
    cJSON *zoho_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zoho_client_secret");
    if (cJSON_IsNull(zoho_client_secret)) {
        zoho_client_secret = NULL;
    }
    if (zoho_client_secret) { 
    if(!cJSON_IsString(zoho_client_secret) && !cJSON_IsNull(zoho_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->zoho_refresh_token
    cJSON *zoho_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zoho_refresh_token");
    if (cJSON_IsNull(zoho_refresh_token)) {
        zoho_refresh_token = NULL;
    }
    if (zoho_refresh_token) { 
    if(!cJSON_IsString(zoho_refresh_token) && !cJSON_IsNull(zoho_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->zoho_region
    cJSON *zoho_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "zoho_region");
    if (cJSON_IsNull(zoho_region)) {
        zoho_region = NULL;
    }
    if (zoho_region) { 
    if(!cJSON_IsString(zoho_region) && !cJSON_IsNull(zoho_region))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_client_id
    cJSON *otto_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_client_id");
    if (cJSON_IsNull(otto_client_id)) {
        otto_client_id = NULL;
    }
    if (otto_client_id) { 
    if(!cJSON_IsString(otto_client_id) && !cJSON_IsNull(otto_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_client_secret
    cJSON *otto_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_client_secret");
    if (cJSON_IsNull(otto_client_secret)) {
        otto_client_secret = NULL;
    }
    if (otto_client_secret) { 
    if(!cJSON_IsString(otto_client_secret) && !cJSON_IsNull(otto_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_app_id
    cJSON *otto_app_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_app_id");
    if (cJSON_IsNull(otto_app_id)) {
        otto_app_id = NULL;
    }
    if (otto_app_id) { 
    if(!cJSON_IsString(otto_app_id) && !cJSON_IsNull(otto_app_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_refresh_token
    cJSON *otto_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_refresh_token");
    if (cJSON_IsNull(otto_refresh_token)) {
        otto_refresh_token = NULL;
    }
    if (otto_refresh_token) { 
    if(!cJSON_IsString(otto_refresh_token) && !cJSON_IsNull(otto_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_environment
    cJSON *otto_environment = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_environment");
    if (cJSON_IsNull(otto_environment)) {
        otto_environment = NULL;
    }
    if (otto_environment) { 
    if(!cJSON_IsString(otto_environment) && !cJSON_IsNull(otto_environment))
    {
    goto end; //String
    }
    }

    // account_cart_add->otto_access_token
    cJSON *otto_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "otto_access_token");
    if (cJSON_IsNull(otto_access_token)) {
        otto_access_token = NULL;
    }
    if (otto_access_token) { 
    if(!cJSON_IsString(otto_access_token) && !cJSON_IsNull(otto_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiktokshop_app_key
    cJSON *tiktokshop_app_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiktokshop_app_key");
    if (cJSON_IsNull(tiktokshop_app_key)) {
        tiktokshop_app_key = NULL;
    }
    if (tiktokshop_app_key) { 
    if(!cJSON_IsString(tiktokshop_app_key) && !cJSON_IsNull(tiktokshop_app_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiktokshop_app_secret
    cJSON *tiktokshop_app_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiktokshop_app_secret");
    if (cJSON_IsNull(tiktokshop_app_secret)) {
        tiktokshop_app_secret = NULL;
    }
    if (tiktokshop_app_secret) { 
    if(!cJSON_IsString(tiktokshop_app_secret) && !cJSON_IsNull(tiktokshop_app_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiktokshop_refresh_token
    cJSON *tiktokshop_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiktokshop_refresh_token");
    if (cJSON_IsNull(tiktokshop_refresh_token)) {
        tiktokshop_refresh_token = NULL;
    }
    if (tiktokshop_refresh_token) { 
    if(!cJSON_IsString(tiktokshop_refresh_token) && !cJSON_IsNull(tiktokshop_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->tiktokshop_access_token
    cJSON *tiktokshop_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "tiktokshop_access_token");
    if (cJSON_IsNull(tiktokshop_access_token)) {
        tiktokshop_access_token = NULL;
    }
    if (tiktokshop_access_token) { 
    if(!cJSON_IsString(tiktokshop_access_token) && !cJSON_IsNull(tiktokshop_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->salla_client_id
    cJSON *salla_client_id = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "salla_client_id");
    if (cJSON_IsNull(salla_client_id)) {
        salla_client_id = NULL;
    }
    if (salla_client_id) { 
    if(!cJSON_IsString(salla_client_id) && !cJSON_IsNull(salla_client_id))
    {
    goto end; //String
    }
    }

    // account_cart_add->salla_client_secret
    cJSON *salla_client_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "salla_client_secret");
    if (cJSON_IsNull(salla_client_secret)) {
        salla_client_secret = NULL;
    }
    if (salla_client_secret) { 
    if(!cJSON_IsString(salla_client_secret) && !cJSON_IsNull(salla_client_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->salla_refresh_token
    cJSON *salla_refresh_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "salla_refresh_token");
    if (cJSON_IsNull(salla_refresh_token)) {
        salla_refresh_token = NULL;
    }
    if (salla_refresh_token) { 
    if(!cJSON_IsString(salla_refresh_token) && !cJSON_IsNull(salla_refresh_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->salla_access_token
    cJSON *salla_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "salla_access_token");
    if (cJSON_IsNull(salla_access_token)) {
        salla_access_token = NULL;
    }
    if (salla_access_token) { 
    if(!cJSON_IsString(salla_access_token) && !cJSON_IsNull(salla_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->temu_app_key
    cJSON *temu_app_key = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "temu_app_key");
    if (cJSON_IsNull(temu_app_key)) {
        temu_app_key = NULL;
    }
    if (temu_app_key) { 
    if(!cJSON_IsString(temu_app_key) && !cJSON_IsNull(temu_app_key))
    {
    goto end; //String
    }
    }

    // account_cart_add->temu_app_secret
    cJSON *temu_app_secret = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "temu_app_secret");
    if (cJSON_IsNull(temu_app_secret)) {
        temu_app_secret = NULL;
    }
    if (temu_app_secret) { 
    if(!cJSON_IsString(temu_app_secret) && !cJSON_IsNull(temu_app_secret))
    {
    goto end; //String
    }
    }

    // account_cart_add->temu_access_token
    cJSON *temu_access_token = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "temu_access_token");
    if (cJSON_IsNull(temu_access_token)) {
        temu_access_token = NULL;
    }
    if (temu_access_token) { 
    if(!cJSON_IsString(temu_access_token) && !cJSON_IsNull(temu_access_token))
    {
    goto end; //String
    }
    }

    // account_cart_add->temu_region
    cJSON *temu_region = cJSON_GetObjectItemCaseSensitive(account_cart_addJSON, "temu_region");
    if (cJSON_IsNull(temu_region)) {
        temu_region = NULL;
    }
    if (temu_region) { 
    if(!cJSON_IsString(temu_region) && !cJSON_IsNull(temu_region))
    {
    goto end; //String
    }
    }


    account_cart_add_local_var = account_cart_add_create_internal (
        cart_idVariable,
        store_url && !cJSON_IsNull(store_url) ? strdup(store_url->valuestring) : NULL,
        bridge_url && !cJSON_IsNull(bridge_url) ? strdup(bridge_url->valuestring) : NULL,
        store_root && !cJSON_IsNull(store_root) ? strdup(store_root->valuestring) : NULL,
        store_key && !cJSON_IsNull(store_key) ? strdup(store_key->valuestring) : NULL,
        validate_version ? validate_version->valueint : 0,
        verify ? verify->valueint : 0,
        db_tables_prefix && !cJSON_IsNull(db_tables_prefix) ? strdup(db_tables_prefix->valuestring) : NULL,
        user_agent && !cJSON_IsNull(user_agent) ? strdup(user_agent->valuestring) : NULL,
        ftp_host && !cJSON_IsNull(ftp_host) ? strdup(ftp_host->valuestring) : NULL,
        ftp_user && !cJSON_IsNull(ftp_user) ? strdup(ftp_user->valuestring) : NULL,
        ftp_password && !cJSON_IsNull(ftp_password) ? strdup(ftp_password->valuestring) : NULL,
        ftp_port ? ftp_port->valuedouble : 0,
        ftp_store_dir && !cJSON_IsNull(ftp_store_dir) ? strdup(ftp_store_dir->valuestring) : NULL,
        _3dcart_private_key && !cJSON_IsNull(_3dcart_private_key) ? strdup(_3dcart_private_key->valuestring) : NULL,
        _3dcart_access_token && !cJSON_IsNull(_3dcart_access_token) ? strdup(_3dcart_access_token->valuestring) : NULL,
        _3dcartapi_api_key && !cJSON_IsNull(_3dcartapi_api_key) ? strdup(_3dcartapi_api_key->valuestring) : NULL,
        amazon_sp_client_id && !cJSON_IsNull(amazon_sp_client_id) ? strdup(amazon_sp_client_id->valuestring) : NULL,
        amazon_sp_client_secret && !cJSON_IsNull(amazon_sp_client_secret) ? strdup(amazon_sp_client_secret->valuestring) : NULL,
        amazon_sp_refresh_token && !cJSON_IsNull(amazon_sp_refresh_token) ? strdup(amazon_sp_refresh_token->valuestring) : NULL,
        amazon_sp_aws_region && !cJSON_IsNull(amazon_sp_aws_region) ? strdup(amazon_sp_aws_region->valuestring) : NULL,
        amazon_sp_api_environment && !cJSON_IsNull(amazon_sp_api_environment) ? strdup(amazon_sp_api_environment->valuestring) : NULL,
        amazon_seller_id && !cJSON_IsNull(amazon_seller_id) ? strdup(amazon_seller_id->valuestring) : NULL,
        aspdotnetstorefront_api_user && !cJSON_IsNull(aspdotnetstorefront_api_user) ? strdup(aspdotnetstorefront_api_user->valuestring) : NULL,
        aspdotnetstorefront_api_pass && !cJSON_IsNull(aspdotnetstorefront_api_pass) ? strdup(aspdotnetstorefront_api_pass->valuestring) : NULL,
        bigcommerceapi_admin_account && !cJSON_IsNull(bigcommerceapi_admin_account) ? strdup(bigcommerceapi_admin_account->valuestring) : NULL,
        bigcommerceapi_api_path && !cJSON_IsNull(bigcommerceapi_api_path) ? strdup(bigcommerceapi_api_path->valuestring) : NULL,
        bigcommerceapi_api_key && !cJSON_IsNull(bigcommerceapi_api_key) ? strdup(bigcommerceapi_api_key->valuestring) : NULL,
        bigcommerceapi_client_id && !cJSON_IsNull(bigcommerceapi_client_id) ? strdup(bigcommerceapi_client_id->valuestring) : NULL,
        bigcommerceapi_access_token && !cJSON_IsNull(bigcommerceapi_access_token) ? strdup(bigcommerceapi_access_token->valuestring) : NULL,
        bigcommerceapi_context && !cJSON_IsNull(bigcommerceapi_context) ? strdup(bigcommerceapi_context->valuestring) : NULL,
        bol_api_key && !cJSON_IsNull(bol_api_key) ? strdup(bol_api_key->valuestring) : NULL,
        bol_api_secret && !cJSON_IsNull(bol_api_secret) ? strdup(bol_api_secret->valuestring) : NULL,
        bol_retailer_id ? bol_retailer_id->valuedouble : 0,
        bigcartel_user_name && !cJSON_IsNull(bigcartel_user_name) ? strdup(bigcartel_user_name->valuestring) : NULL,
        bigcartel_password && !cJSON_IsNull(bigcartel_password) ? strdup(bigcartel_password->valuestring) : NULL,
        bricklink_consumer_key && !cJSON_IsNull(bricklink_consumer_key) ? strdup(bricklink_consumer_key->valuestring) : NULL,
        bricklink_consumer_secret && !cJSON_IsNull(bricklink_consumer_secret) ? strdup(bricklink_consumer_secret->valuestring) : NULL,
        bricklink_token && !cJSON_IsNull(bricklink_token) ? strdup(bricklink_token->valuestring) : NULL,
        bricklink_token_secret && !cJSON_IsNull(bricklink_token_secret) ? strdup(bricklink_token_secret->valuestring) : NULL,
        demandware_client_id && !cJSON_IsNull(demandware_client_id) ? strdup(demandware_client_id->valuestring) : NULL,
        demandware_api_password && !cJSON_IsNull(demandware_api_password) ? strdup(demandware_api_password->valuestring) : NULL,
        demandware_user_name && !cJSON_IsNull(demandware_user_name) ? strdup(demandware_user_name->valuestring) : NULL,
        demandware_user_password && !cJSON_IsNull(demandware_user_password) ? strdup(demandware_user_password->valuestring) : NULL,
        ebay_client_id && !cJSON_IsNull(ebay_client_id) ? strdup(ebay_client_id->valuestring) : NULL,
        ebay_client_secret && !cJSON_IsNull(ebay_client_secret) ? strdup(ebay_client_secret->valuestring) : NULL,
        ebay_runame && !cJSON_IsNull(ebay_runame) ? strdup(ebay_runame->valuestring) : NULL,
        ebay_access_token && !cJSON_IsNull(ebay_access_token) ? strdup(ebay_access_token->valuestring) : NULL,
        ebay_refresh_token && !cJSON_IsNull(ebay_refresh_token) ? strdup(ebay_refresh_token->valuestring) : NULL,
        ebay_environment && !cJSON_IsNull(ebay_environment) ? strdup(ebay_environment->valuestring) : NULL,
        ebay_site_id ? ebay_site_id->valuedouble : 0,
        walmart_client_id && !cJSON_IsNull(walmart_client_id) ? strdup(walmart_client_id->valuestring) : NULL,
        walmart_client_secret && !cJSON_IsNull(walmart_client_secret) ? strdup(walmart_client_secret->valuestring) : NULL,
        walmart_environment && !cJSON_IsNull(walmart_environment) ? strdup(walmart_environment->valuestring) : NULL,
        walmart_channel_type && !cJSON_IsNull(walmart_channel_type) ? strdup(walmart_channel_type->valuestring) : NULL,
        walmart_region && !cJSON_IsNull(walmart_region) ? strdup(walmart_region->valuestring) : NULL,
        ecwid_acess_token && !cJSON_IsNull(ecwid_acess_token) ? strdup(ecwid_acess_token->valuestring) : NULL,
        ecwid_store_id && !cJSON_IsNull(ecwid_store_id) ? strdup(ecwid_store_id->valuestring) : NULL,
        lazada_app_id && !cJSON_IsNull(lazada_app_id) ? strdup(lazada_app_id->valuestring) : NULL,
        lazada_app_secret && !cJSON_IsNull(lazada_app_secret) ? strdup(lazada_app_secret->valuestring) : NULL,
        lazada_refresh_token && !cJSON_IsNull(lazada_refresh_token) ? strdup(lazada_refresh_token->valuestring) : NULL,
        lazada_region && !cJSON_IsNull(lazada_region) ? strdup(lazada_region->valuestring) : NULL,
        lightspeed_api_key && !cJSON_IsNull(lightspeed_api_key) ? strdup(lightspeed_api_key->valuestring) : NULL,
        lightspeed_api_secret && !cJSON_IsNull(lightspeed_api_secret) ? strdup(lightspeed_api_secret->valuestring) : NULL,
        etsy_keystring && !cJSON_IsNull(etsy_keystring) ? strdup(etsy_keystring->valuestring) : NULL,
        etsy_shared_secret && !cJSON_IsNull(etsy_shared_secret) ? strdup(etsy_shared_secret->valuestring) : NULL,
        etsy_access_token && !cJSON_IsNull(etsy_access_token) ? strdup(etsy_access_token->valuestring) : NULL,
        etsy_token_secret && !cJSON_IsNull(etsy_token_secret) ? strdup(etsy_token_secret->valuestring) : NULL,
        etsy_client_id && !cJSON_IsNull(etsy_client_id) ? strdup(etsy_client_id->valuestring) : NULL,
        etsy_refresh_token && !cJSON_IsNull(etsy_refresh_token) ? strdup(etsy_refresh_token->valuestring) : NULL,
        facebook_app_id && !cJSON_IsNull(facebook_app_id) ? strdup(facebook_app_id->valuestring) : NULL,
        facebook_app_secret && !cJSON_IsNull(facebook_app_secret) ? strdup(facebook_app_secret->valuestring) : NULL,
        facebook_access_token && !cJSON_IsNull(facebook_access_token) ? strdup(facebook_access_token->valuestring) : NULL,
        facebook_business_id && !cJSON_IsNull(facebook_business_id) ? strdup(facebook_business_id->valuestring) : NULL,
        neto_api_key && !cJSON_IsNull(neto_api_key) ? strdup(neto_api_key->valuestring) : NULL,
        neto_api_username && !cJSON_IsNull(neto_api_username) ? strdup(neto_api_username->valuestring) : NULL,
        shopline_access_token && !cJSON_IsNull(shopline_access_token) ? strdup(shopline_access_token->valuestring) : NULL,
        shopline_app_key && !cJSON_IsNull(shopline_app_key) ? strdup(shopline_app_key->valuestring) : NULL,
        shopline_app_secret && !cJSON_IsNull(shopline_app_secret) ? strdup(shopline_app_secret->valuestring) : NULL,
        shopline_shared_secret && !cJSON_IsNull(shopline_shared_secret) ? strdup(shopline_shared_secret->valuestring) : NULL,
        shopify_access_token && !cJSON_IsNull(shopify_access_token) ? strdup(shopify_access_token->valuestring) : NULL,
        shopify_api_key && !cJSON_IsNull(shopify_api_key) ? strdup(shopify_api_key->valuestring) : NULL,
        shopify_api_password && !cJSON_IsNull(shopify_api_password) ? strdup(shopify_api_password->valuestring) : NULL,
        shopify_shared_secret && !cJSON_IsNull(shopify_shared_secret) ? strdup(shopify_shared_secret->valuestring) : NULL,
        shopee_partner_id && !cJSON_IsNull(shopee_partner_id) ? strdup(shopee_partner_id->valuestring) : NULL,
        shopee_partner_key && !cJSON_IsNull(shopee_partner_key) ? strdup(shopee_partner_key->valuestring) : NULL,
        shopee_shop_id && !cJSON_IsNull(shopee_shop_id) ? strdup(shopee_shop_id->valuestring) : NULL,
        shopee_refresh_token && !cJSON_IsNull(shopee_refresh_token) ? strdup(shopee_refresh_token->valuestring) : NULL,
        shopee_region && !cJSON_IsNull(shopee_region) ? strdup(shopee_region->valuestring) : NULL,
        shopee_environment && !cJSON_IsNull(shopee_environment) ? strdup(shopee_environment->valuestring) : NULL,
        shoplazza_access_token && !cJSON_IsNull(shoplazza_access_token) ? strdup(shoplazza_access_token->valuestring) : NULL,
        shoplazza_shared_secret && !cJSON_IsNull(shoplazza_shared_secret) ? strdup(shoplazza_shared_secret->valuestring) : NULL,
        shopware_access_key && !cJSON_IsNull(shopware_access_key) ? strdup(shopware_access_key->valuestring) : NULL,
        shopware_api_key && !cJSON_IsNull(shopware_api_key) ? strdup(shopware_api_key->valuestring) : NULL,
        shopware_api_secret && !cJSON_IsNull(shopware_api_secret) ? strdup(shopware_api_secret->valuestring) : NULL,
        miva_access_token && !cJSON_IsNull(miva_access_token) ? strdup(miva_access_token->valuestring) : NULL,
        miva_signature && !cJSON_IsNull(miva_signature) ? strdup(miva_signature->valuestring) : NULL,
        tiendanube_user_id ? tiendanube_user_id->valuedouble : 0,
        tiendanube_access_token && !cJSON_IsNull(tiendanube_access_token) ? strdup(tiendanube_access_token->valuestring) : NULL,
        tiendanube_client_secret && !cJSON_IsNull(tiendanube_client_secret) ? strdup(tiendanube_client_secret->valuestring) : NULL,
        volusion_login && !cJSON_IsNull(volusion_login) ? strdup(volusion_login->valuestring) : NULL,
        volusion_password && !cJSON_IsNull(volusion_password) ? strdup(volusion_password->valuestring) : NULL,
        hybris_client_id && !cJSON_IsNull(hybris_client_id) ? strdup(hybris_client_id->valuestring) : NULL,
        hybris_client_secret && !cJSON_IsNull(hybris_client_secret) ? strdup(hybris_client_secret->valuestring) : NULL,
        hybris_username && !cJSON_IsNull(hybris_username) ? strdup(hybris_username->valuestring) : NULL,
        hybris_password && !cJSON_IsNull(hybris_password) ? strdup(hybris_password->valuestring) : NULL,
        hybris_websites ? hybris_websitesList : NULL,
        square_client_id && !cJSON_IsNull(square_client_id) ? strdup(square_client_id->valuestring) : NULL,
        square_client_secret && !cJSON_IsNull(square_client_secret) ? strdup(square_client_secret->valuestring) : NULL,
        square_refresh_token && !cJSON_IsNull(square_refresh_token) ? strdup(square_refresh_token->valuestring) : NULL,
        squarespace_api_key && !cJSON_IsNull(squarespace_api_key) ? strdup(squarespace_api_key->valuestring) : NULL,
        squarespace_client_id && !cJSON_IsNull(squarespace_client_id) ? strdup(squarespace_client_id->valuestring) : NULL,
        squarespace_client_secret && !cJSON_IsNull(squarespace_client_secret) ? strdup(squarespace_client_secret->valuestring) : NULL,
        squarespace_access_token && !cJSON_IsNull(squarespace_access_token) ? strdup(squarespace_access_token->valuestring) : NULL,
        squarespace_refresh_token && !cJSON_IsNull(squarespace_refresh_token) ? strdup(squarespace_refresh_token->valuestring) : NULL,
        commercehq_api_key && !cJSON_IsNull(commercehq_api_key) ? strdup(commercehq_api_key->valuestring) : NULL,
        commercehq_api_password && !cJSON_IsNull(commercehq_api_password) ? strdup(commercehq_api_password->valuestring) : NULL,
        wc_consumer_key && !cJSON_IsNull(wc_consumer_key) ? strdup(wc_consumer_key->valuestring) : NULL,
        wc_consumer_secret && !cJSON_IsNull(wc_consumer_secret) ? strdup(wc_consumer_secret->valuestring) : NULL,
        magento_consumer_key && !cJSON_IsNull(magento_consumer_key) ? strdup(magento_consumer_key->valuestring) : NULL,
        magento_consumer_secret && !cJSON_IsNull(magento_consumer_secret) ? strdup(magento_consumer_secret->valuestring) : NULL,
        magento_access_token && !cJSON_IsNull(magento_access_token) ? strdup(magento_access_token->valuestring) : NULL,
        magento_token_secret && !cJSON_IsNull(magento_token_secret) ? strdup(magento_token_secret->valuestring) : NULL,
        prestashop_webservice_key && !cJSON_IsNull(prestashop_webservice_key) ? strdup(prestashop_webservice_key->valuestring) : NULL,
        wix_app_id && !cJSON_IsNull(wix_app_id) ? strdup(wix_app_id->valuestring) : NULL,
        wix_app_secret_key && !cJSON_IsNull(wix_app_secret_key) ? strdup(wix_app_secret_key->valuestring) : NULL,
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
        allegro_environment && !cJSON_IsNull(allegro_environment) ? strdup(allegro_environment->valuestring) : NULL,
        zoho_client_id && !cJSON_IsNull(zoho_client_id) ? strdup(zoho_client_id->valuestring) : NULL,
        zoho_client_secret && !cJSON_IsNull(zoho_client_secret) ? strdup(zoho_client_secret->valuestring) : NULL,
        zoho_refresh_token && !cJSON_IsNull(zoho_refresh_token) ? strdup(zoho_refresh_token->valuestring) : NULL,
        zoho_region && !cJSON_IsNull(zoho_region) ? strdup(zoho_region->valuestring) : NULL,
        otto_client_id && !cJSON_IsNull(otto_client_id) ? strdup(otto_client_id->valuestring) : NULL,
        otto_client_secret && !cJSON_IsNull(otto_client_secret) ? strdup(otto_client_secret->valuestring) : NULL,
        otto_app_id && !cJSON_IsNull(otto_app_id) ? strdup(otto_app_id->valuestring) : NULL,
        otto_refresh_token && !cJSON_IsNull(otto_refresh_token) ? strdup(otto_refresh_token->valuestring) : NULL,
        otto_environment && !cJSON_IsNull(otto_environment) ? strdup(otto_environment->valuestring) : NULL,
        otto_access_token && !cJSON_IsNull(otto_access_token) ? strdup(otto_access_token->valuestring) : NULL,
        tiktokshop_app_key && !cJSON_IsNull(tiktokshop_app_key) ? strdup(tiktokshop_app_key->valuestring) : NULL,
        tiktokshop_app_secret && !cJSON_IsNull(tiktokshop_app_secret) ? strdup(tiktokshop_app_secret->valuestring) : NULL,
        tiktokshop_refresh_token && !cJSON_IsNull(tiktokshop_refresh_token) ? strdup(tiktokshop_refresh_token->valuestring) : NULL,
        tiktokshop_access_token && !cJSON_IsNull(tiktokshop_access_token) ? strdup(tiktokshop_access_token->valuestring) : NULL,
        salla_client_id && !cJSON_IsNull(salla_client_id) ? strdup(salla_client_id->valuestring) : NULL,
        salla_client_secret && !cJSON_IsNull(salla_client_secret) ? strdup(salla_client_secret->valuestring) : NULL,
        salla_refresh_token && !cJSON_IsNull(salla_refresh_token) ? strdup(salla_refresh_token->valuestring) : NULL,
        salla_access_token && !cJSON_IsNull(salla_access_token) ? strdup(salla_access_token->valuestring) : NULL,
        temu_app_key && !cJSON_IsNull(temu_app_key) ? strdup(temu_app_key->valuestring) : NULL,
        temu_app_secret && !cJSON_IsNull(temu_app_secret) ? strdup(temu_app_secret->valuestring) : NULL,
        temu_access_token && !cJSON_IsNull(temu_access_token) ? strdup(temu_access_token->valuestring) : NULL,
        temu_region && !cJSON_IsNull(temu_region) ? strdup(temu_region->valuestring) : NULL
        );

    return account_cart_add_local_var;
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
