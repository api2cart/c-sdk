/*
 * cart_create.h
 *
 * 
 */

#ifndef _cart_create_H_
#define _cart_create_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_create_t cart_create_t;

#include "account_cart_add_hybris_websites_inner.h"

// Enum CARTID for cart_create

typedef enum  { api2cart_openapi_cart_create_CARTID_NULL = 0, api2cart_openapi_cart_create_CARTID__3DCart, api2cart_openapi_cart_create_CARTID__3DCartApi, api2cart_openapi_cart_create_CARTID_AceShop, api2cart_openapi_cart_create_CARTID_AmazonSP, api2cart_openapi_cart_create_CARTID_AspDotNetStorefront, api2cart_openapi_cart_create_CARTID_BigCartel, api2cart_openapi_cart_create_CARTID_BigcommerceApi, api2cart_openapi_cart_create_CARTID_Bol, api2cart_openapi_cart_create_CARTID_CommerceHQ, api2cart_openapi_cart_create_CARTID_Creloaded, api2cart_openapi_cart_create_CARTID_Cscart, api2cart_openapi_cart_create_CARTID_Cubecart, api2cart_openapi_cart_create_CARTID_Demandware, api2cart_openapi_cart_create_CARTID_EBay, api2cart_openapi_cart_create_CARTID_Ecwid, api2cart_openapi_cart_create_CARTID_EtsyAPIv3, api2cart_openapi_cart_create_CARTID_Flipkart, api2cart_openapi_cart_create_CARTID_Gambio, api2cart_openapi_cart_create_CARTID_Hybris, api2cart_openapi_cart_create_CARTID_JooCart, api2cart_openapi_cart_create_CARTID_Lazada, api2cart_openapi_cart_create_CARTID_LightSpeed, api2cart_openapi_cart_create_CARTID_Magento1212, api2cart_openapi_cart_create_CARTID_Magento2Api, api2cart_openapi_cart_create_CARTID_MercadoLibre, api2cart_openapi_cart_create_CARTID_MijoShop, api2cart_openapi_cart_create_CARTID_Miva, api2cart_openapi_cart_create_CARTID_Neto, api2cart_openapi_cart_create_CARTID_Opencart14, api2cart_openapi_cart_create_CARTID_Oscmax2, api2cart_openapi_cart_create_CARTID_Oscommerce22ms2, api2cart_openapi_cart_create_CARTID_Otto, api2cart_openapi_cart_create_CARTID_Oxid, api2cart_openapi_cart_create_CARTID_Pinnacle, api2cart_openapi_cart_create_CARTID_Prestashop, api2cart_openapi_cart_create_CARTID_PrestashopApi, api2cart_openapi_cart_create_CARTID_SSPremium, api2cart_openapi_cart_create_CARTID_Salla, api2cart_openapi_cart_create_CARTID_Shopify, api2cart_openapi_cart_create_CARTID_Shopee, api2cart_openapi_cart_create_CARTID_Shoplazza, api2cart_openapi_cart_create_CARTID_Shopline, api2cart_openapi_cart_create_CARTID_Shopware, api2cart_openapi_cart_create_CARTID_ShopwareApi, api2cart_openapi_cart_create_CARTID_Square, api2cart_openapi_cart_create_CARTID_Squarespace, api2cart_openapi_cart_create_CARTID_Temu, api2cart_openapi_cart_create_CARTID_Tiendanube, api2cart_openapi_cart_create_CARTID_TikTokShop, api2cart_openapi_cart_create_CARTID_Tomatocart, api2cart_openapi_cart_create_CARTID_Ubercart, api2cart_openapi_cart_create_CARTID_Virtuemart, api2cart_openapi_cart_create_CARTID_Volusion, api2cart_openapi_cart_create_CARTID_WPecommerce, api2cart_openapi_cart_create_CARTID_Walmart, api2cart_openapi_cart_create_CARTID_WebAsyst, api2cart_openapi_cart_create_CARTID_Wix, api2cart_openapi_cart_create_CARTID_Woocommerce, api2cart_openapi_cart_create_CARTID_WoocommerceApi, api2cart_openapi_cart_create_CARTID_Xcart, api2cart_openapi_cart_create_CARTID_Xtcommerce, api2cart_openapi_cart_create_CARTID_XtcommerceVeyton, api2cart_openapi_cart_create_CARTID_Zencart137, api2cart_openapi_cart_create_CARTID_Zid, api2cart_openapi_cart_create_CARTID_Zoey, api2cart_openapi_cart_create_CARTID_Zoho } api2cart_openapi_cart_create_CARTID_e;

char* cart_create_cart_id_ToString(api2cart_openapi_cart_create_CARTID_e cart_id);

api2cart_openapi_cart_create_CARTID_e cart_create_cart_id_FromString(char* cart_id);



typedef struct cart_create_t {
    api2cart_openapi_cart_create_CARTID_e cart_id; //enum
    char *store_url; // string
    char *bridge_url; // string
    char *store_root; // string
    char *store_key; // string
    char *shared_secret; // string
    int validate_version; //boolean
    int verify; //boolean
    char *db_tables_prefix; // string
    char *user_agent; // string
    char *ftp_host; // string
    char *ftp_user; // string
    char *ftp_password; // string
    int ftp_port; //numeric
    char *ftp_store_dir; // string
    char *api_key_3dcart; // string
    char *admin_account; // string
    char *api_path; // string
    char *api_key_bigcommerce; // string
    char *client_id; // string
    char *access_token; // string
    char *context; // string
    char *access_token; // string
    char *api_key_shopify; // string
    char *api_password; // string
    char *access_token_shopify; // string
    char *api_key; // string
    char *api_username; // string
    char *encrypted_password; // string
    char *login; // string
    char *api_user_adnsf; // string
    char *api_pass; // string
    char *private_key; // string
    char *app_token; // string
    char *etsy_keystring; // string
    char *etsy_shared_secret; // string
    char *token_secret; // string
    char *etsy_client_id; // string
    char *etsy_refresh_token; // string
    char *ebay_client_id; // string
    char *ebay_client_secret; // string
    char *ebay_runame; // string
    char *ebay_access_token; // string
    char *ebay_refresh_token; // string
    char *ebay_environment; // string
    int ebay_site_id; //numeric
    char *dw_client_id; // string
    char *dw_api_pass; // string
    char *demandware_user_name; // string
    char *demandware_user_password; // string
    char *store_id; // string
    char *seller_id; // string
    char *environment; // string
    char *hybris_client_id; // string
    char *hybris_client_secret; // string
    char *hybris_username; // string
    char *hybris_password; // string
    list_t *hybris_websites; //nonprimitive container
    char *walmart_client_id; // string
    char *walmart_client_secret; // string
    char *walmart_environment; // string
    char *walmart_channel_type; // string
    char *walmart_region; // string
    char *lightspeed_api_key; // string
    char *lightspeed_api_secret; // string
    char *shoplazza_access_token; // string
    char *shoplazza_shared_secret; // string
    char *shopware_access_key; // string
    char *shopware_api_key; // string
    char *shopware_api_secret; // string
    char *commercehq_api_key; // string
    char *commercehq_api_password; // string
    char *_3dcart_private_key; // string
    char *_3dcart_access_token; // string
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

    int _library_owned; // Is the library responsible for freeing this object?
} cart_create_t;

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
);

void cart_create_free(cart_create_t *cart_create);

cart_create_t *cart_create_parseFromJSON(cJSON *cart_createJSON);

cJSON *cart_create_convertToJSON(cart_create_t *cart_create);

#endif /* _cart_create_H_ */

