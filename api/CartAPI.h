#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_cart_add_200_response.h"
#include "../model/attribute_add_200_response.h"
#include "../model/attribute_delete_200_response.h"
#include "../model/basket_live_shipping_service_delete_200_response.h"
#include "../model/cart_bridge_200_response.h"
#include "../model/cart_catalog_price_rules_count_200_response.h"
#include "../model/cart_clear_cache_200_response.h"
#include "../model/cart_config_200_response.h"
#include "../model/cart_config_update.h"
#include "../model/cart_config_update_200_response.h"
#include "../model/cart_coupon_add.h"
#include "../model/cart_coupon_add_200_response.h"
#include "../model/cart_coupon_count_200_response.h"
#include "../model/cart_create.h"
#include "../model/cart_delete_200_response.h"
#include "../model/cart_disconnect_200_response.h"
#include "../model/cart_giftcard_add_200_response.h"
#include "../model/cart_giftcard_count_200_response.h"
#include "../model/cart_info_200_response.h"
#include "../model/cart_list_200_response.h"
#include "../model/cart_methods_200_response.h"
#include "../model/cart_plugin_list_200_response.h"
#include "../model/cart_script_add_200_response.h"
#include "../model/cart_validate_200_response.h"
#include "../model/model_response_cart_catalog_price_rules_list.h"
#include "../model/model_response_cart_coupon_list.h"
#include "../model/model_response_cart_gift_card_list.h"
#include "../model/model_response_cart_meta_data_list.h"
#include "../model/model_response_cart_script_list.h"
#include "../model/model_response_cart_shipping_zones_list.h"

// Enum ENTITY for CartAPI_cartCouponConditionAdd
typedef enum  { api2cart_openapi_cartCouponConditionAdd_ENTITY_NULL = 0, api2cart_openapi_cartCouponConditionAdd_ENTITY_order, api2cart_openapi_cartCouponConditionAdd_ENTITY_order_shipping_address, api2cart_openapi_cartCouponConditionAdd_ENTITY_product, api2cart_openapi_cartCouponConditionAdd_ENTITY_customer } api2cart_openapi_cartCouponConditionAdd_entity_e;

// Enum KEY for CartAPI_cartCouponConditionAdd
typedef enum  { api2cart_openapi_cartCouponConditionAdd_KEY_NULL = 0, api2cart_openapi_cartCouponConditionAdd_KEY_total, api2cart_openapi_cartCouponConditionAdd_KEY_subtotal, api2cart_openapi_cartCouponConditionAdd_KEY_shipping_total, api2cart_openapi_cartCouponConditionAdd_KEY_total_quantity, api2cart_openapi_cartCouponConditionAdd_KEY_total_weight, api2cart_openapi_cartCouponConditionAdd_KEY_country, api2cart_openapi_cartCouponConditionAdd_KEY_product_id, api2cart_openapi_cartCouponConditionAdd_KEY_variant_id, api2cart_openapi_cartCouponConditionAdd_KEY_category_id, api2cart_openapi_cartCouponConditionAdd_KEY_customer_id, api2cart_openapi_cartCouponConditionAdd_KEY_item_price, api2cart_openapi_cartCouponConditionAdd_KEY_item_total_price, api2cart_openapi_cartCouponConditionAdd_KEY_item_quantity, api2cart_openapi_cartCouponConditionAdd_KEY_carrier_id } api2cart_openapi_cartCouponConditionAdd_key_e;


// cart.bridge
//
// Get bridge key and store key
//
cart_bridge_200_response_t*
CartAPI_cartBridge(apiClient_t *apiClient);


// cart.catalog_price_rules.count
//
// Get count of cart catalog price rules discounts.
//
cart_catalog_price_rules_count_200_response_t*
CartAPI_cartCatalogPriceRulesCount(apiClient_t *apiClient);


// cart.catalog_price_rules.list
//
// Get cart catalog price rules discounts.
//
model_response_cart_catalog_price_rules_list_t*
CartAPI_cartCatalogPriceRulesList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *ids, char *response_fields, char *params, char *exclude);


// cart.clear_cache
//
// Clear cache on store.
//
cart_clear_cache_200_response_t*
CartAPI_cartClearCache(apiClient_t *apiClient, char *cache_type);


// cart.config
//
// Get list of cart configs
//
cart_config_200_response_t*
CartAPI_cartConfig(apiClient_t *apiClient, char *params, char *exclude);


// cart.config.update
//
// Use this API method to update custom data in client database.
//
cart_config_update_200_response_t*
CartAPI_cartConfigUpdate(apiClient_t *apiClient, cart_config_update_t *cart_config_update);


// cart.coupon.add
//
// Use this method to create a coupon with specified conditions.
//
cart_coupon_add_200_response_t*
CartAPI_cartCouponAdd(apiClient_t *apiClient, cart_coupon_add_t *cart_coupon_add);


// cart.coupon.condition.add
//
// Use this method to add additional conditions for coupon application.
//
basket_live_shipping_service_delete_200_response_t*
CartAPI_cartCouponConditionAdd(apiClient_t *apiClient, char *coupon_id, api2cart_openapi_cartCouponConditionAdd_entity_e entity, api2cart_openapi_cartCouponConditionAdd_key_e key, char *_operator, char *value, char *target, int *include_tax, int *include_shipping, char *store_id);


// cart.coupon.count
//
// This method allows you to get the number of coupons. On some platforms, you can filter the coupons by the date they were active.
//
cart_coupon_count_200_response_t*
CartAPI_cartCouponCount(apiClient_t *apiClient, char *store_id, int *avail, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to);


// cart.coupon.delete
//
// Delete coupon
//
attribute_delete_200_response_t*
CartAPI_cartCouponDelete(apiClient_t *apiClient, char *id, char *store_id);


// cart.coupon.list
//
// Get cart coupon discounts.
//
model_response_cart_coupon_list_t*
CartAPI_cartCouponList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *coupons_ids, char *store_id, char *lang_id, int *avail, char *date_start_from, char *date_start_to, char *date_end_from, char *date_end_to, char *response_fields, char *params, char *exclude);


// cart.create
//
// Add store to the account
//
account_cart_add_200_response_t*
CartAPI_cartCreate(apiClient_t *apiClient, cart_create_t *cart_create);


// cart.delete
//
// Remove store from API2Cart
//
cart_delete_200_response_t*
CartAPI_cartDelete(apiClient_t *apiClient, int *delete_bridge);


// cart.disconnect
//
// Disconnect with the store and clear store session data.
//
cart_disconnect_200_response_t*
CartAPI_cartDisconnect(apiClient_t *apiClient, int *delete_bridge);


// cart.giftcard.add
//
// Use this method to create a gift card for a specified amount.
//
cart_giftcard_add_200_response_t*
CartAPI_cartGiftcardAdd(apiClient_t *apiClient, double amount, char *code, char *owner_email, char *recipient_email, char *recipient_name, char *owner_name);


// cart.giftcard.count
//
// Get gift cards count.
//
cart_giftcard_count_200_response_t*
CartAPI_cartGiftcardCount(apiClient_t *apiClient, char *store_id);


// cart.giftcard.delete
//
// Delete giftcard
//
attribute_delete_200_response_t*
CartAPI_cartGiftcardDelete(apiClient_t *apiClient, char *id);


// cart.giftcard.list
//
// Get gift cards list.
//
model_response_cart_gift_card_list_t*
CartAPI_cartGiftcardList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *store_id, char *response_fields, char *params, char *exclude);


// cart.info
//
// This method allows you to get various information about the store, including a list of stores (in the case of a multistore configuration), a list of supported languages, currencies, carriers, warehouses, and many other information. This information contains data that is relatively stable and rarely changes, so API2Cart can cache certain data to reduce the load on the store and speed up the execution of the request. We also recommend that you cache the response of this method on your side to save requests. If you need to clear the cache for a specific store, then use the cart.validate method.
//
cart_info_200_response_t*
CartAPI_cartInfo(apiClient_t *apiClient, char *store_id, char *response_fields, char *params, char *exclude);


// cart.list
//
// Get list of supported carts
//
cart_list_200_response_t*
CartAPI_cartList(apiClient_t *apiClient);


// cart.meta_data.list
//
// Using this method, you can get a list of metadata for various entities (products, options, customers, orders). Usually this is data created by third-party plugins.
//
model_response_cart_meta_data_list_t*
CartAPI_cartMetaDataList(apiClient_t *apiClient, char *entity_id, int *count, char *page_cursor, char *entity, char *store_id, char *lang_id, char *key, char *response_fields, char *params, char *exclude);


// cart.meta_data.set
//
// Set meta data for a specific entity
//
attribute_add_200_response_t*
CartAPI_cartMetaDataSet(apiClient_t *apiClient, char *entity_id, char *key, char *value, char *_namespace, char *entity, char *store_id, char *lang_id);


// cart.meta_data.unset
//
// Unset meta data for a specific entity
//
basket_live_shipping_service_delete_200_response_t*
CartAPI_cartMetaDataUnset(apiClient_t *apiClient, char *entity_id, char *key, char *id, char *entity, char *store_id);


// cart.methods
//
// Returns a list of supported API methods.
//
cart_methods_200_response_t*
CartAPI_cartMethods(apiClient_t *apiClient);


// cart.plugin.list
//
// Get a list of third-party plugins installed on the store.
//
cart_plugin_list_200_response_t*
CartAPI_cartPluginList(apiClient_t *apiClient, int *start, int *count, char *store_id);


// cart.script.add
//
// Add new script to the storefront
//
cart_script_add_200_response_t*
CartAPI_cartScriptAdd(apiClient_t *apiClient, char *name, char *description, char *html, char *src, char *load_method, char *scope, char *events, char *store_id);


// cart.script.delete
//
// Remove script from the storefront
//
attribute_delete_200_response_t*
CartAPI_cartScriptDelete(apiClient_t *apiClient, char *id, char *store_id);


// cart.script.list
//
// Get scripts installed to the storefront
//
model_response_cart_script_list_t*
CartAPI_cartScriptList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *script_ids, char *store_id, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude);


// cart.shipping_zones.list
//
// Get list of shipping zones
//
model_response_cart_shipping_zones_list_t*
CartAPI_cartShippingZonesList(apiClient_t *apiClient, int *start, int *count, char *store_id, char *response_fields, char *params, char *exclude);


// cart.validate
//
// This method clears the cache in API2Cart for a particular store and checks whether the connection to the store is available. Use this method if there have been any changes in the settings on the storе, for example, if a new plugin has been installed or removed.
//
cart_validate_200_response_t*
CartAPI_cartValidate(apiClient_t *apiClient, int *validate_version);


