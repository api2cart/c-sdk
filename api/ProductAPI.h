#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/account_config_update_200_response.h"
#include "../model/attribute_delete_200_response.h"
#include "../model/attribute_value_delete_200_response.h"
#include "../model/cart_validate_200_response.h"
#include "../model/category_add_batch_200_response.h"
#include "../model/customer_delete_200_response.h"
#include "../model/model_response_product_attribute_list.h"
#include "../model/model_response_product_brand_list.h"
#include "../model/model_response_product_child_item_list.h"
#include "../model/model_response_product_currency_list.h"
#include "../model/model_response_product_list.h"
#include "../model/model_response_product_option_list.h"
#include "../model/model_response_product_review_list.h"
#include "../model/product_add.h"
#include "../model/product_add_200_response.h"
#include "../model/product_add_batch.h"
#include "../model/product_attribute_value_set_200_response.h"
#include "../model/product_attribute_value_unset_200_response.h"
#include "../model/product_child_item_find_200_response.h"
#include "../model/product_child_item_info_200_response.h"
#include "../model/product_count_200_response.h"
#include "../model/product_currency_add_200_response.h"
#include "../model/product_delete_batch.h"
#include "../model/product_find_200_response.h"
#include "../model/product_image_add.h"
#include "../model/product_image_add_200_response.h"
#include "../model/product_image_update_200_response.h"
#include "../model/product_info_200_response.h"
#include "../model/product_manufacturer_add_200_response.h"
#include "../model/product_option_add.h"
#include "../model/product_option_add_200_response.h"
#include "../model/product_option_assign_200_response.h"
#include "../model/product_option_value_add_200_response.h"
#include "../model/product_option_value_assign_200_response.h"
#include "../model/product_price_add.h"
#include "../model/product_price_update.h"
#include "../model/product_tax_add.h"
#include "../model/product_tax_add_200_response.h"
#include "../model/product_update.h"
#include "../model/product_update_batch.h"
#include "../model/product_variant_add.h"
#include "../model/product_variant_add_200_response.h"
#include "../model/product_variant_add_batch.h"
#include "../model/product_variant_delete_batch.h"
#include "../model/product_variant_image_add.h"
#include "../model/product_variant_image_add_200_response.h"
#include "../model/product_variant_price_add.h"
#include "../model/product_variant_price_update.h"
#include "../model/product_variant_update.h"
#include "../model/product_variant_update_batch.h"


// product.add
//
// Add new product to store.
//
product_add_200_response_t*
ProductAPI_productAdd(apiClient_t *apiClient, product_add_t *product_add);


// product.add.batch
//
// Add new products to the store.
//
category_add_batch_200_response_t*
ProductAPI_productAddBatch(apiClient_t *apiClient, product_add_batch_t *product_add_batch);


// product.attribute.list
//
// Get list of attributes and values.
//
model_response_product_attribute_list_t*
ProductAPI_productAttributeList(apiClient_t *apiClient, char *product_id, int *start, int *count, char *page_cursor, char *attribute_id, char *variant_id, char *attribute_group_id, char *lang_id, char *store_id, char *set_name, char *sort_by, char *sort_direction, char *response_fields, char *params, char *exclude);


// product.attribute.value.set
//
// Set attribute value to product.
//
product_attribute_value_set_200_response_t*
ProductAPI_productAttributeValueSet(apiClient_t *apiClient, char *product_id, char *attribute_id, char *attribute_group_id, char *attribute_name, char *value, int *value_id, char *lang_id, char *store_id);


// product.attribute.value.unset
//
// Removes attribute value for a product.
//
product_attribute_value_unset_200_response_t*
ProductAPI_productAttributeValueUnset(apiClient_t *apiClient, char *product_id, char *attribute_id, char *store_id, int *include_default, int *reindex, int *clear_cache);


// product.brand.list
//
// Get list of brands from your store.
//
model_response_product_brand_list_t*
ProductAPI_productBrandList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *brand_ids, char *category_id, char *parent_id, char *store_id, char *lang_id, char *find_where, char *find_value, char *created_from, char *created_to, char *modified_from, char *modified_to, char *response_fields, char *params, char *exclude);


// product.child_item.find
//
// Search product child item (bundled item or configurable product variant) in store catalog.
//
product_child_item_find_200_response_t*
ProductAPI_productChildItemFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *store_id);


// product.child_item.info
//
// Get child for specific product.
//
product_child_item_info_200_response_t*
ProductAPI_productChildItemInfo(apiClient_t *apiClient, char *product_id, char *id, char *store_id, char *lang_id, char *currency_id, char *response_fields, char *params, char *exclude, int *use_latest_api_version);


// product.child_item.list
//
// Get a list of a product's child items, such as variants or bundle components. The total_count field in the response indicates the total number of items in the context of the current filter.
//
model_response_product_child_item_list_t*
ProductAPI_productChildItemList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *product_id, char *product_ids, char *sku, char *store_id, char *lang_id, char *currency_id, int *avail_sale, char *find_value, char *find_where, char *created_from, char *created_to, char *modified_from, char *modified_to, int *return_global, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *use_latest_api_version);


// product.count
//
// Count products in store.
//
product_count_200_response_t*
ProductAPI_productCount(apiClient_t *apiClient, char *product_ids, char *since_id, char *categories_ids, char *category_id, char *store_id, char *lang_id, int *avail_view, int *avail_sale, char *created_from, char *created_to, char *modified_from, char *modified_to, char *brand_name, list_t *product_attributes, char *status, char *type, char *visible, char *find_value, char *find_where, char *report_request_id, int *return_global, int *disable_report_cache, int *use_latest_api_version);


// product.currency.add
//
// Add currency and/or set default in store
//
product_currency_add_200_response_t*
ProductAPI_productCurrencyAdd(apiClient_t *apiClient, char *iso3, double rate, char *name, int *avail, char *symbol_left, char *symbol_right, int *_default);


// product.currency.list
//
// Get list of currencies
//
model_response_product_currency_list_t*
ProductAPI_productCurrencyList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, int *_default, int *avail, char *response_fields, char *params, char *exclude);


// product.delete
//
// Product delete
//
customer_delete_200_response_t*
ProductAPI_productDelete(apiClient_t *apiClient, char *id, char *store_id);


// product.delete.batch
//
// Remove product from the store.
//
category_add_batch_200_response_t*
ProductAPI_productDeleteBatch(apiClient_t *apiClient, product_delete_batch_t *product_delete_batch);


// product.find
//
// Search product in store catalog. \"Apple\" is specified here by default.
//
product_find_200_response_t*
ProductAPI_productFind(apiClient_t *apiClient, char *find_value, char *find_where, char *find_params, char *find_what, char *lang_id, char *store_id);


// product.image.add
//
// Add image to product
//
product_image_add_200_response_t*
ProductAPI_productImageAdd(apiClient_t *apiClient, product_image_add_t *product_image_add);


// product.image.delete
//
// Delete image
//
attribute_delete_200_response_t*
ProductAPI_productImageDelete(apiClient_t *apiClient, char *product_id, char *id, char *store_id);


// product.image.update
//
// Update details of image
//
product_image_update_200_response_t*
ProductAPI_productImageUpdate(apiClient_t *apiClient, char *product_id, char *id, char *variant_ids, char *store_id, char *lang_id, char *image_name, char *type, char *label, int *position, int *hidden);


// product.info
//
// Get information about a specific product by its ID. In the case of a multistore configuration, use the store_id filter to get a response in the context of a specific store.
//
product_info_200_response_t*
ProductAPI_productInfo(apiClient_t *apiClient, char *id, char *store_id, char *lang_id, char *currency_id, char *response_fields, char *params, char *exclude, char *report_request_id, int *disable_report_cache, int *use_latest_api_version);


// product.list
//
// Get list of products from your store. Returns 10 products by default.
//
model_response_product_list_t*
ProductAPI_productList(apiClient_t *apiClient, int *start, int *count, char *page_cursor, char *product_ids, char *since_id, char *categories_ids, char *category_id, char *store_id, char *lang_id, char *currency_id, int *avail_view, int *avail_sale, char *created_from, char *created_to, char *modified_from, char *modified_to, char *sku, char *brand_name, list_t *product_attributes, char *status, char *type, char *visible, char *find_value, char *find_where, int *return_global, char *params, char *response_fields, char *exclude, char *sort_by, char *sort_direction, char *report_request_id, int *disable_cache, int *disable_report_cache, int *use_latest_api_version);


// product.manufacturer.add
//
// Add manufacturer to store and assign to product
//
product_manufacturer_add_200_response_t*
ProductAPI_productManufacturerAdd(apiClient_t *apiClient, char *product_id, char *manufacturer, char *store_id);


// product.option.add
//
// Add product option from store.
//
product_option_add_200_response_t*
ProductAPI_productOptionAdd(apiClient_t *apiClient, product_option_add_t *product_option_add);


// product.option.assign
//
// Assign option from product.
//
product_option_assign_200_response_t*
ProductAPI_productOptionAssign(apiClient_t *apiClient, char *product_id, char *option_id, int *required, int *sort_order, char *option_values, int *clear_cache);


// product.option.delete
//
// Product option delete.
//
attribute_delete_200_response_t*
ProductAPI_productOptionDelete(apiClient_t *apiClient, char *option_id, char *product_id, char *store_id);


// product.option.list
//
// Get list of options.
//
model_response_product_option_list_t*
ProductAPI_productOptionList(apiClient_t *apiClient, int *start, int *count, char *product_id, char *lang_id, char *store_id, char *response_fields, char *params, char *exclude);


// product.option.value.add
//
// Add product option item from option.
//
product_option_value_add_200_response_t*
ProductAPI_productOptionValueAdd(apiClient_t *apiClient, char *product_id, char *option_id, char *option_value, int *sort_order, char *display_value, int *is_default, int *clear_cache);


// product.option.value.assign
//
// Assign product option item from product.
//
product_option_value_assign_200_response_t*
ProductAPI_productOptionValueAssign(apiClient_t *apiClient, int *product_option_id, char *option_value_id, int *clear_cache);


// product.option.value.delete
//
// Product option value delete.
//
attribute_delete_200_response_t*
ProductAPI_productOptionValueDelete(apiClient_t *apiClient, char *option_id, char *option_value_id, char *product_id, char *store_id);


// product.option.value.update
//
// Update product option item from option.
//
account_config_update_200_response_t*
ProductAPI_productOptionValueUpdate(apiClient_t *apiClient, char *product_id, char *option_id, char *option_value_id, char *option_value, double price, double quantity, char *display_value, int *clear_cache);


// product.price.add
//
// Add some prices to the product.
//
cart_validate_200_response_t*
ProductAPI_productPriceAdd(apiClient_t *apiClient, product_price_add_t *product_price_add);


// product.price.delete
//
// Delete some prices of the product
//
attribute_delete_200_response_t*
ProductAPI_productPriceDelete(apiClient_t *apiClient, char *product_id, char *group_prices, char *store_id);


// product.price.update
//
// Update some prices of the product.
//
account_config_update_200_response_t*
ProductAPI_productPriceUpdate(apiClient_t *apiClient, product_price_update_t *product_price_update);


// product.review.list
//
// Get reviews of a specific product.
//
model_response_product_review_list_t*
ProductAPI_productReviewList(apiClient_t *apiClient, char *product_id, int *start, int *count, char *page_cursor, char *ids, char *store_id, char *status, char *response_fields, char *params, char *exclude);


// product.store.assign
//
// Assign product to store
//
account_config_update_200_response_t*
ProductAPI_productStoreAssign(apiClient_t *apiClient, char *product_id, char *store_id);


// product.tax.add
//
// Add tax class and tax rate to store and assign to product.
//
product_tax_add_200_response_t*
ProductAPI_productTaxAdd(apiClient_t *apiClient, product_tax_add_t *product_tax_add);


// product.update
//
// This method can be used to update certain product data. The list of supported parameters depends on the specific platform. Please transmit only those parameters that are supported by the particular platform. Please note that to update the product quantity, it is recommended to use relative parameters (increase_quantity or reduce_quantity) to avoid unexpected overwrites on heavily loaded stores.
//
account_config_update_200_response_t*
ProductAPI_productUpdate(apiClient_t *apiClient, product_update_t *product_update);


// product.update.batch
//
// Update products on the store.
//
category_add_batch_200_response_t*
ProductAPI_productUpdateBatch(apiClient_t *apiClient, product_update_batch_t *product_update_batch);


// product.variant.add
//
// Add variant to product.
//
product_variant_add_200_response_t*
ProductAPI_productVariantAdd(apiClient_t *apiClient, product_variant_add_t *product_variant_add);


// product.variant.add.batch
//
// Add new product variants to the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantAddBatch(apiClient_t *apiClient, product_variant_add_batch_t *product_variant_add_batch);


// product.variant.delete
//
// Delete variant.
//
attribute_value_delete_200_response_t*
ProductAPI_productVariantDelete(apiClient_t *apiClient, char *id, char *product_id, char *store_id);


// product.variant.delete.batch
//
// Remove product variants from the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantDeleteBatch(apiClient_t *apiClient, product_variant_delete_batch_t *product_variant_delete_batch);


// product.variant.image.add
//
// Add image to product
//
product_variant_image_add_200_response_t*
ProductAPI_productVariantImageAdd(apiClient_t *apiClient, product_variant_image_add_t *product_variant_image_add);


// product.variant.image.delete
//
// Delete  image to product
//
attribute_delete_200_response_t*
ProductAPI_productVariantImageDelete(apiClient_t *apiClient, char *product_id, char *product_variant_id, char *id, char *store_id);


// product.variant.price.add
//
// Add some prices to the product variant.
//
cart_validate_200_response_t*
ProductAPI_productVariantPriceAdd(apiClient_t *apiClient, product_variant_price_add_t *product_variant_price_add);


// product.variant.price.delete
//
// Delete some prices of the product variant.
//
attribute_delete_200_response_t*
ProductAPI_productVariantPriceDelete(apiClient_t *apiClient, char *id, char *product_id, char *group_prices, char *store_id);


// product.variant.price.update
//
// Update some prices of the product variant.
//
account_config_update_200_response_t*
ProductAPI_productVariantPriceUpdate(apiClient_t *apiClient, product_variant_price_update_t *product_variant_price_update);


// product.variant.update
//
// Update variant.
//
account_config_update_200_response_t*
ProductAPI_productVariantUpdate(apiClient_t *apiClient, product_variant_update_t *product_variant_update);


// product.variant.update.batch
//
// Update products variants on the store.
//
category_add_batch_200_response_t*
ProductAPI_productVariantUpdateBatch(apiClient_t *apiClient, product_variant_update_batch_t *product_variant_update_batch);


