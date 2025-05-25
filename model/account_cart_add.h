/*
 * account_cart_add.h
 *
 * 
 */

#ifndef _account_cart_add_H_
#define _account_cart_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_cart_add_t account_cart_add_t;

#include "account_cart_add_hybris_websites_inner.h"

// Enum CARTID for account_cart_add

typedef enum  { api2cart_openapi_account_cart_add_CARTID_NULL = 0, api2cart_openapi_account_cart_add_CARTID__3DCart, api2cart_openapi_account_cart_add_CARTID__3DCartApi, api2cart_openapi_account_cart_add_CARTID_AceShop, api2cart_openapi_account_cart_add_CARTID_AmazonSP, api2cart_openapi_account_cart_add_CARTID_AspDotNetStorefront, api2cart_openapi_account_cart_add_CARTID_BigCartel, api2cart_openapi_account_cart_add_CARTID_BigcommerceApi, api2cart_openapi_account_cart_add_CARTID_Bol, api2cart_openapi_account_cart_add_CARTID_CommerceHQ, api2cart_openapi_account_cart_add_CARTID_Creloaded, api2cart_openapi_account_cart_add_CARTID_Cscart, api2cart_openapi_account_cart_add_CARTID_Cubecart, api2cart_openapi_account_cart_add_CARTID_Demandware, api2cart_openapi_account_cart_add_CARTID_EBay, api2cart_openapi_account_cart_add_CARTID_Ecwid, api2cart_openapi_account_cart_add_CARTID_EtsyAPIv3, api2cart_openapi_account_cart_add_CARTID_Flipkart, api2cart_openapi_account_cart_add_CARTID_Gambio, api2cart_openapi_account_cart_add_CARTID_Hybris, api2cart_openapi_account_cart_add_CARTID_JooCart, api2cart_openapi_account_cart_add_CARTID_Lazada, api2cart_openapi_account_cart_add_CARTID_LightSpeed, api2cart_openapi_account_cart_add_CARTID_Magento1212, api2cart_openapi_account_cart_add_CARTID_Magento2Api, api2cart_openapi_account_cart_add_CARTID_MercadoLibre, api2cart_openapi_account_cart_add_CARTID_MijoShop, api2cart_openapi_account_cart_add_CARTID_Miva, api2cart_openapi_account_cart_add_CARTID_Neto, api2cart_openapi_account_cart_add_CARTID_Opencart14, api2cart_openapi_account_cart_add_CARTID_Oscmax2, api2cart_openapi_account_cart_add_CARTID_Oscommerce22ms2, api2cart_openapi_account_cart_add_CARTID_Otto, api2cart_openapi_account_cart_add_CARTID_Oxid, api2cart_openapi_account_cart_add_CARTID_Pinnacle, api2cart_openapi_account_cart_add_CARTID_Prestashop, api2cart_openapi_account_cart_add_CARTID_PrestashopApi, api2cart_openapi_account_cart_add_CARTID_SSPremium, api2cart_openapi_account_cart_add_CARTID_Salla, api2cart_openapi_account_cart_add_CARTID_Shopify, api2cart_openapi_account_cart_add_CARTID_Shopee, api2cart_openapi_account_cart_add_CARTID_Shoplazza, api2cart_openapi_account_cart_add_CARTID_Shopline, api2cart_openapi_account_cart_add_CARTID_Shopware, api2cart_openapi_account_cart_add_CARTID_ShopwareApi, api2cart_openapi_account_cart_add_CARTID_Square, api2cart_openapi_account_cart_add_CARTID_Squarespace, api2cart_openapi_account_cart_add_CARTID_Tiendanube, api2cart_openapi_account_cart_add_CARTID_TikTokShop, api2cart_openapi_account_cart_add_CARTID_Tomatocart, api2cart_openapi_account_cart_add_CARTID_Ubercart, api2cart_openapi_account_cart_add_CARTID_Virtuemart, api2cart_openapi_account_cart_add_CARTID_Volusion, api2cart_openapi_account_cart_add_CARTID_WPecommerce, api2cart_openapi_account_cart_add_CARTID_Walmart, api2cart_openapi_account_cart_add_CARTID_WebAsyst, api2cart_openapi_account_cart_add_CARTID_Wix, api2cart_openapi_account_cart_add_CARTID_Woocommerce, api2cart_openapi_account_cart_add_CARTID_WoocommerceApi, api2cart_openapi_account_cart_add_CARTID_Xcart, api2cart_openapi_account_cart_add_CARTID_Xtcommerce, api2cart_openapi_account_cart_add_CARTID_XtcommerceVeyton, api2cart_openapi_account_cart_add_CARTID_Zencart137, api2cart_openapi_account_cart_add_CARTID_Zid, api2cart_openapi_account_cart_add_CARTID_Zoey, api2cart_openapi_account_cart_add_CARTID_Zoho } api2cart_openapi_account_cart_add_CARTID_e;

char* account_cart_add_cart_id_ToString(api2cart_openapi_account_cart_add_CARTID_e cart_id);

api2cart_openapi_account_cart_add_CARTID_e account_cart_add_cart_id_FromString(char* cart_id);



typedef struct account_cart_add_t {
    api2cart_openapi_account_cart_add_CARTID_e cart_id; //enum
    char *store_url; // string
    char *bridge_url; // string
    char *store_root; // string
    char *store_key; // string
    int validate_version; //boolean
    int verify; //boolean
    char *db_tables_prefix; // string
    char *user_agent; // string
    char *ftp_host; // string
    char *ftp_user; // string
    char *ftp_password; // string
    int ftp_port; //numeric
    char *ftp_store_dir; // string
    char *_3dcart_private_key; // string
    char *_3dcart_access_token; // string
    char *_3dcartapi_api_key; // string
    char *amazon_sp_client_id; // string
    char *amazon_sp_client_secret; // string
    char *amazon_sp_refresh_token; // string
    char *amazon_sp_aws_region; // string
    char *amazon_sp_api_environment; // string
    char *amazon_seller_id; // string
    char *aspdotnetstorefront_api_user; // string
    char *aspdotnetstorefront_api_pass; // string
    char *bigcommerceapi_admin_account; // string
    char *bigcommerceapi_api_path; // string
    char *bigcommerceapi_api_key; // string
    char *bigcommerceapi_client_id; // string
    char *bigcommerceapi_access_token; // string
    char *bigcommerceapi_context; // string
    char *bol_api_key; // string
    char *bol_api_secret; // string
    int bol_retailer_id; //numeric
    char *bigcartel_user_name; // string
    char *bigcartel_password; // string
    char *demandware_client_id; // string
    char *demandware_api_password; // string
    char *demandware_user_name; // string
    char *demandware_user_password; // string
    char *ebay_client_id; // string
    char *ebay_client_secret; // string
    char *ebay_runame; // string
    char *ebay_access_token; // string
    char *ebay_refresh_token; // string
    char *ebay_environment; // string
    int ebay_site_id; //numeric
    char *walmart_client_id; // string
    char *walmart_client_secret; // string
    char *walmart_environment; // string
    char *walmart_channel_type; // string
    char *walmart_region; // string
    char *ecwid_acess_token; // string
    char *ecwid_store_id; // string
    char *lazada_app_id; // string
    char *lazada_app_secret; // string
    char *lazada_refresh_token; // string
    char *lazada_region; // string
    char *lightspeed_api_key; // string
    char *lightspeed_api_secret; // string
    char *etsy_keystring; // string
    char *etsy_shared_secret; // string
    char *etsy_access_token; // string
    char *etsy_token_secret; // string
    char *etsy_client_id; // string
    char *etsy_refresh_token; // string
    char *facebook_app_id; // string
    char *facebook_app_secret; // string
    char *facebook_access_token; // string
    char *facebook_business_id; // string
    char *neto_api_key; // string
    char *neto_api_username; // string
    char *shopline_access_token; // string
    char *shopline_app_key; // string
    char *shopline_app_secret; // string
    char *shopline_shared_secret; // string
    char *shopify_access_token; // string
    char *shopify_api_key; // string
    char *shopify_api_password; // string
    char *shopify_shared_secret; // string
    char *shopee_partner_id; // string
    char *shopee_partner_key; // string
    char *shopee_shop_id; // string
    char *shopee_refresh_token; // string
    char *shopee_region; // string
    char *shopee_environment; // string
    char *shoplazza_access_token; // string
    char *shoplazza_shared_secret; // string
    char *shopware_access_key; // string
    char *shopware_api_key; // string
    char *shopware_api_secret; // string
    char *miva_access_token; // string
    char *miva_signature; // string
    int tiendanube_user_id; //numeric
    char *tiendanube_access_token; // string
    char *tiendanube_client_secret; // string
    char *volusion_login; // string
    char *volusion_password; // string
    char *hybris_client_id; // string
    char *hybris_client_secret; // string
    char *hybris_username; // string
    char *hybris_password; // string
    list_t *hybris_websites; //nonprimitive container
    char *square_client_id; // string
    char *square_client_secret; // string
    char *square_refresh_token; // string
    char *squarespace_api_key; // string
    char *squarespace_client_id; // string
    char *squarespace_client_secret; // string
    char *squarespace_access_token; // string
    char *squarespace_refresh_token; // string
    char *commercehq_api_key; // string
    char *commercehq_api_password; // string
    char *wc_consumer_key; // string
    char *wc_consumer_secret; // string
    char *magento_consumer_key; // string
    char *magento_consumer_secret; // string
    char *magento_access_token; // string
    char *magento_token_secret; // string
    char *prestashop_webservice_key; // string
    char *wix_app_id; // string
    char *wix_app_secret_key; // string
    char *wix_instance_id; // string
    char *wix_refresh_token; // string
    char *mercado_libre_app_id; // string
    char *mercado_libre_app_secret_key; // string
    char *mercado_libre_refresh_token; // string
    int zid_client_id; //numeric
    char *zid_client_secret; // string
    char *zid_access_token; // string
    char *zid_authorization; // string
    char *zid_refresh_token; // string
    char *flipkart_client_id; // string
    char *flipkart_client_secret; // string
    char *allegro_client_id; // string
    char *allegro_client_secret; // string
    char *allegro_access_token; // string
    char *allegro_refresh_token; // string
    char *allegro_environment; // string
    char *zoho_client_id; // string
    char *zoho_client_secret; // string
    char *zoho_refresh_token; // string
    char *zoho_region; // string
    char *otto_client_id; // string
    char *otto_client_secret; // string
    char *otto_app_id; // string
    char *otto_refresh_token; // string
    char *otto_environment; // string
    char *otto_access_token; // string
    char *tiktokshop_app_key; // string
    char *tiktokshop_app_secret; // string
    char *tiktokshop_refresh_token; // string
    char *tiktokshop_access_token; // string
    char *salla_client_id; // string
    char *salla_client_secret; // string
    char *salla_refresh_token; // string
    char *salla_access_token; // string
    char *temu_app_key; // string
    char *temu_app_secret; // string
    char *temu_access_token; // string
    char *temu_region; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_cart_add_t;

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
);

void account_cart_add_free(account_cart_add_t *account_cart_add);

account_cart_add_t *account_cart_add_parseFromJSON(cJSON *account_cart_addJSON);

cJSON *account_cart_add_convertToJSON(account_cart_add_t *account_cart_add);

#endif /* _account_cart_add_H_ */

