cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator C)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=implicit-function-declaration")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=missing-declarations")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=int-conversion")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()
endif()

set(pkgName "api2cart_openapi")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/model_return.c
    model/a2_c_date_time.c
    model/account_cart_add.c
    model/account_cart_add_200_response.c
    model/account_cart_add_200_response_result.c
    model/account_cart_add_hybris_websites_inner.c
    model/account_cart_list_200_response.c
    model/account_cart_list_200_response_result.c
    model/account_cart_list_200_response_result_carts_inner.c
    model/account_config_update_200_response.c
    model/account_config_update_200_response_result.c
    model/account_failed_webhooks_200_response.c
    model/account_failed_webhooks_200_response_result.c
    model/account_failed_webhooks_200_response_result_webhook_inner.c
    model/account_supported_platforms_200_response.c
    model/account_supported_platforms_200_response_result.c
    model/account_supported_platforms_200_response_result_supported_platforms_inner.c
    model/account_supported_platforms_200_response_result_supported_platforms_inner_params.c
    model/account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner.c
    model/attribute_add_200_response.c
    model/attribute_add_200_response_result.c
    model/attribute_assign_group_200_response.c
    model/attribute_assign_group_200_response_result.c
    model/attribute_count_200_response.c
    model/attribute_count_200_response_result.c
    model/attribute_delete_200_response.c
    model/attribute_delete_200_response_result.c
    model/attribute_info_200_response.c
    model/attribute_type_list_200_response.c
    model/attribute_type_list_200_response_result.c
    model/attribute_unassign_group_200_response.c
    model/attribute_unassign_group_200_response_result.c
    model/attribute_update_200_response.c
    model/attribute_update_200_response_result.c
    model/attribute_value_delete_200_response.c
    model/attribute_value_delete_200_response_result.c
    model/base_customer.c
    model/basket.c
    model/basket_info_200_response.c
    model/basket_item.c
    model/basket_item_add_200_response.c
    model/basket_item_add_200_response_result.c
    model/basket_item_option.c
    model/basket_live_shipping_service.c
    model/basket_live_shipping_service_create_200_response.c
    model/basket_live_shipping_service_create_200_response_result.c
    model/basket_live_shipping_service_delete_200_response.c
    model/basket_live_shipping_service_delete_200_response_result.c
    model/basket_live_shipping_service_list_200_response.c
    model/basket_live_shipping_service_list_200_response_result.c
    model/batch_job.c
    model/batch_job_result.c
    model/batch_job_result_item.c
    model/brand.c
    model/carrier.c
    model/cart.c
    model/cart_bridge_200_response.c
    model/cart_bridge_200_response_result.c
    model/cart_catalog_price_rules_count_200_response.c
    model/cart_catalog_price_rules_count_200_response_result.c
    model/cart_channel.c
    model/cart_clear_cache_200_response.c
    model/cart_clear_cache_200_response_result.c
    model/cart_config_200_response.c
    model/cart_config_200_response_result.c
    model/cart_config_update.c
    model/cart_config_update_200_response.c
    model/cart_coupon_add.c
    model/cart_coupon_add_200_response.c
    model/cart_coupon_add_200_response_result.c
    model/cart_coupon_count_200_response.c
    model/cart_coupon_count_200_response_result.c
    model/cart_create.c
    model/cart_delete_200_response.c
    model/cart_delete_200_response_result.c
    model/cart_disconnect_200_response.c
    model/cart_disconnect_200_response_result.c
    model/cart_giftcard_add_200_response.c
    model/cart_giftcard_add_200_response_result.c
    model/cart_giftcard_count_200_response.c
    model/cart_giftcard_count_200_response_result.c
    model/cart_info_200_response.c
    model/cart_list_200_response.c
    model/cart_list_200_response_result.c
    model/cart_list_200_response_result_supported_carts_inner.c
    model/cart_meta_data.c
    model/cart_methods_200_response.c
    model/cart_methods_200_response_result.c
    model/cart_plugin_list_200_response.c
    model/cart_plugin_list_200_response_result.c
    model/cart_script_add_200_response.c
    model/cart_script_add_200_response_result.c
    model/cart_shipping_method.c
    model/cart_shipping_method_rate.c
    model/cart_shipping_zone.c
    model/cart_shipping_zone2.c
    model/cart_store_info.c
    model/cart_validate_200_response.c
    model/cart_validate_200_response_result.c
    model/cart_warehouse.c
    model/catalog_price_rule.c
    model/catalog_price_rule_action.c
    model/category.c
    model/category_add_200_response.c
    model/category_add_200_response_result.c
    model/category_add_batch.c
    model/category_add_batch_200_response.c
    model/category_add_batch_200_response_result.c
    model/category_add_batch_payload_inner.c
    model/category_add_batch_payload_inner_images_inner.c
    model/category_count_200_response.c
    model/category_count_200_response_result.c
    model/category_delete_200_response.c
    model/category_delete_200_response_result.c
    model/category_find_200_response.c
    model/category_find_200_response_result.c
    model/category_find_200_response_result_category_inner.c
    model/category_image_add_200_response.c
    model/category_image_add_200_response_result.c
    model/category_info_200_response.c
    model/child.c
    model/country.c
    model/coupon.c
    model/coupon_action.c
    model/coupon_code.c
    model/coupon_condition.c
    model/coupon_history.c
    model/currency.c
    model/customer.c
    model/customer_add.c
    model/customer_add_200_response.c
    model/customer_add_200_response_result.c
    model/customer_add_address_inner.c
    model/customer_add_consents_inner.c
    model/customer_address.c
    model/customer_address_add.c
    model/customer_attribute.c
    model/customer_attribute_value.c
    model/customer_consent.c
    model/customer_count_200_response.c
    model/customer_count_200_response_result.c
    model/customer_delete_200_response.c
    model/customer_delete_200_response_result.c
    model/customer_find_200_response.c
    model/customer_find_200_response_result.c
    model/customer_group.c
    model/customer_group_add_200_response.c
    model/customer_group_add_200_response_result.c
    model/customer_info_200_response.c
    model/customer_update.c
    model/customer_update_address_inner.c
    model/customer_wish_list.c
    model/customer_wish_list_item.c
    model/discount.c
    model/gift_card.c
    model/image.c
    model/info.c
    model/language.c
    model/marketplace_product.c
    model/media.c
    model/model_response_attribute_attributeset_list.c
    model/model_response_attribute_group_list.c
    model/model_response_attribute_list.c
    model/model_response_batch_job_list.c
    model/model_response_cart_catalog_price_rules_list.c
    model/model_response_cart_coupon_list.c
    model/model_response_cart_gift_card_list.c
    model/model_response_cart_meta_data_list.c
    model/model_response_cart_script_list.c
    model/model_response_cart_shipping_zones_list.c
    model/model_response_category_list.c
    model/model_response_customer_attribute_list.c
    model/model_response_customer_group_list.c
    model/model_response_customer_list.c
    model/model_response_customer_wishlist_list.c
    model/model_response_marketplace_product_find.c
    model/model_response_order_abandoned_list.c
    model/model_response_order_list.c
    model/model_response_order_preestimate_shipping_list.c
    model/model_response_order_shipment_list.c
    model/model_response_order_status_list.c
    model/model_response_order_transaction_list.c
    model/model_response_product_attribute_list.c
    model/model_response_product_brand_list.c
    model/model_response_product_child_item_list.c
    model/model_response_product_currency_list.c
    model/model_response_product_list.c
    model/model_response_product_option_list.c
    model/model_response_product_review_list.c
    model/model_response_return_list.c
    model/model_response_subscriber_list.c
    model/model_response_tax_class_info.c
    model/model_response_tax_class_list.c
    model/order.c
    model/order_abandoned.c
    model/order_add.c
    model/order_add_200_response.c
    model/order_add_200_response_result.c
    model/order_add_note_attributes_inner.c
    model/order_add_order_item_inner.c
    model/order_add_order_item_inner_order_item_option_inner.c
    model/order_add_order_item_inner_order_item_property_inner.c
    model/order_count_200_response.c
    model/order_count_200_response_result.c
    model/order_financial_status_list_200_response.c
    model/order_financial_status_list_200_response_result.c
    model/order_financial_status_list_200_response_result_order_financial_statuses_inner.c
    model/order_find_200_response.c
    model/order_find_200_response_result.c
    model/order_fulfillment_status_list_200_response.c
    model/order_fulfillment_status_list_200_response_result.c
    model/order_info_200_response.c
    model/order_item.c
    model/order_item_option.c
    model/order_payment_method.c
    model/order_preestimate_shipping.c
    model/order_preestimate_shipping_list.c
    model/order_preestimate_shipping_list_order_item_inner.c
    model/order_preestimate_shipping_list_order_item_inner_order_item_option_inner.c
    model/order_refund.c
    model/order_refund_add.c
    model/order_refund_add_200_response.c
    model/order_refund_add_200_response_result.c
    model/order_refund_add_items_inner.c
    model/order_return_add.c
    model/order_return_add_200_response.c
    model/order_return_add_200_response_result.c
    model/order_return_add_order_products_inner.c
    model/order_return_update.c
    model/order_return_update_order_products_inner.c
    model/order_shipment_add.c
    model/order_shipment_add_200_response.c
    model/order_shipment_add_200_response_result.c
    model/order_shipment_add_batch.c
    model/order_shipment_add_batch_payload_inner.c
    model/order_shipment_add_batch_payload_inner_items_inner.c
    model/order_shipment_add_items_inner.c
    model/order_shipment_add_tracking_numbers_inner.c
    model/order_shipment_delete_200_response.c
    model/order_shipment_delete_200_response_result.c
    model/order_shipment_info_200_response.c
    model/order_shipment_tracking_add.c
    model/order_shipment_tracking_add_200_response.c
    model/order_shipment_tracking_add_200_response_result.c
    model/order_shipment_update.c
    model/order_shipping_method.c
    model/order_status.c
    model/order_status_history_item.c
    model/order_status_refund.c
    model/order_status_refund_item.c
    model/order_total.c
    model/order_totals.c
    model/order_totals_new_discount.c
    model/order_transaction.c
    model/pagination.c
    model/plugin.c
    model/plugin_list.c
    model/product.c
    model/product_add.c
    model/product_add_200_response.c
    model/product_add_200_response_result.c
    model/product_add_batch.c
    model/product_add_batch_payload_inner.c
    model/product_add_batch_payload_inner_advanced_prices_inner.c
    model/product_add_batch_payload_inner_images_inner.c
    model/product_add_best_offer.c
    model/product_add_certifications_inner.c
    model/product_add_certifications_inner_files_inner.c
    model/product_add_certifications_inner_images_inner.c
    model/product_add_files_inner.c
    model/product_add_group_prices_inner.c
    model/product_add_logistic_info_inner.c
    model/product_add_manufacturer_info.c
    model/product_add_package_details.c
    model/product_add_sales_tax.c
    model/product_add_seller_profiles.c
    model/product_add_shipping_details_inner.c
    model/product_add_size_chart.c
    model/product_add_specifics_inner.c
    model/product_add_specifics_inner_booking_details.c
    model/product_add_specifics_inner_booking_details_availabilities_inner.c
    model/product_add_specifics_inner_booking_details_availabilities_inner_times_inner.c
    model/product_add_specifics_inner_booking_details_overrides_inner.c
    model/product_add_specifics_inner_food_details.c
    model/product_add_specifics_inner_group_products_details_inner.c
    model/product_add_tier_prices_inner.c
    model/product_advanced_price.c
    model/product_attribute.c
    model/product_attribute_value_set_200_response.c
    model/product_attribute_value_set_200_response_result.c
    model/product_attribute_value_unset_200_response.c
    model/product_attribute_value_unset_200_response_result.c
    model/product_child_item_combination.c
    model/product_child_item_find_200_response.c
    model/product_child_item_find_200_response_result.c
    model/product_child_item_info_200_response.c
    model/product_count_200_response.c
    model/product_count_200_response_result.c
    model/product_currency_add_200_response.c
    model/product_currency_add_200_response_result.c
    model/product_delete_batch.c
    model/product_delete_batch_payload_inner.c
    model/product_find_200_response.c
    model/product_find_200_response_result.c
    model/product_find_200_response_result_product_inner.c
    model/product_group_item.c
    model/product_group_price.c
    model/product_image_add.c
    model/product_image_add_200_response.c
    model/product_image_add_200_response_result.c
    model/product_image_update_200_response.c
    model/product_image_update_200_response_result.c
    model/product_info_200_response.c
    model/product_inventory.c
    model/product_manufacturer_add_200_response.c
    model/product_manufacturer_add_200_response_result.c
    model/product_option.c
    model/product_option_add.c
    model/product_option_add_200_response.c
    model/product_option_add_200_response_result.c
    model/product_option_add_values_inner.c
    model/product_option_assign_200_response.c
    model/product_option_assign_200_response_result.c
    model/product_option_item.c
    model/product_option_value_add_200_response.c
    model/product_option_value_add_200_response_result.c
    model/product_option_value_assign_200_response.c
    model/product_option_value_assign_200_response_result.c
    model/product_price_add.c
    model/product_price_update.c
    model/product_price_update_group_prices_inner.c
    model/product_review.c
    model/product_review_rating.c
    model/product_tax_add.c
    model/product_tax_add_200_response.c
    model/product_tax_add_200_response_result.c
    model/product_tax_add_tax_rates_inner.c
    model/product_tier_price.c
    model/product_update.c
    model/product_update_batch.c
    model/product_update_batch_payload_inner.c
    model/product_update_batch_payload_inner_advanced_prices_inner.c
    model/product_update_batch_payload_inner_images_inner.c
    model/product_variant_add.c
    model/product_variant_add_200_response.c
    model/product_variant_add_200_response_result.c
    model/product_variant_add_attributes_inner.c
    model/product_variant_add_batch.c
    model/product_variant_add_batch_payload_inner.c
    model/product_variant_add_batch_payload_inner_combination_inner.c
    model/product_variant_count_200_response.c
    model/product_variant_count_200_response_result.c
    model/product_variant_delete_batch.c
    model/product_variant_delete_batch_payload_inner.c
    model/product_variant_image_add.c
    model/product_variant_image_add_200_response.c
    model/product_variant_image_add_200_response_result.c
    model/product_variant_list_200_response.c
    model/product_variant_list_200_response_result.c
    model/product_variant_price_add.c
    model/product_variant_price_update.c
    model/product_variant_update.c
    model/product_variant_update_batch.c
    model/product_variant_update_batch_payload_inner.c
    model/product_variant_update_options_inner.c
    model/response_attribute_attributeset_list_result.c
    model/response_attribute_group_list_result.c
    model/response_attribute_list_result.c
    model/response_batch_job_list_result.c
    model/response_batch_job_result.c
    model/response_cart_catalog_price_rules_list_result.c
    model/response_cart_coupon_list_result.c
    model/response_cart_giftcard_list_result.c
    model/response_cart_meta_data_list_result.c
    model/response_cart_script_list_result.c
    model/response_cart_shipping_zones_list_result.c
    model/response_category_list_result.c
    model/response_customer_attribute_list_result.c
    model/response_customer_group_list_result.c
    model/response_customer_list_result.c
    model/response_customer_wishlist_list_result.c
    model/response_marketplace_product_find_result.c
    model/response_order_abandoned_list_result.c
    model/response_order_list_result.c
    model/response_order_preestimate_shipping_list_result.c
    model/response_order_shipment_list_result.c
    model/response_order_status_list_result.c
    model/response_order_transaction_list_result.c
    model/response_product_attribute_list_result.c
    model/response_product_brand_list_result.c
    model/response_product_child_item_list_result.c
    model/response_product_currency_list_result.c
    model/response_product_list_result.c
    model/response_product_option_list_result.c
    model/response_product_review_list_result.c
    model/response_return_list_result.c
    model/response_subscriber_list_result.c
    model/response_tax_class_info_result.c
    model/response_tax_class_list_result.c
    model/return_action.c
    model/return_action_list_200_response.c
    model/return_action_list_200_response_result.c
    model/return_count_200_response.c
    model/return_count_200_response_result.c
    model/return_info_200_response.c
    model/return_order_product.c
    model/return_reason.c
    model/return_reason_list_200_response.c
    model/return_reason_list_200_response_result.c
    model/return_status.c
    model/return_status_list_200_response.c
    model/return_status_list_200_response_result.c
    model/script.c
    model/shipment.c
    model/shipment_item.c
    model/shipment_tracking_number.c
    model/special_price.c
    model/state.c
    model/status.c
    model/store_attribute.c
    model/store_attribute_attribute_set.c
    model/store_attribute_group.c
    model/subscriber.c
    model/tax_class.c
    model/tax_class_countries.c
    model/tax_class_rate.c
    model/tax_class_states.c
    model/tax_class_zip_codes.c
    model/tax_class_zip_codes_range.c
    model/webhook.c
    model/webhook_count_200_response.c
    model/webhook_count_200_response_result.c
    model/webhook_events_200_response.c
    model/webhook_events_200_response_result.c
    model/webhook_events_200_response_result_events_inner.c
    model/webhook_list_200_response.c
    model/webhook_list_200_response_result.c
    api/AccountAPI.c
    api/AttributeAPI.c
    api/BasketAPI.c
    api/BatchAPI.c
    api/BridgeAPI.c
    api/CartAPI.c
    api/CategoryAPI.c
    api/CustomerAPI.c
    api/MarketplaceAPI.c
    api/OrderAPI.c
    api/ProductAPI.c
    api/ReturnAPI.c
    api/SubscriberAPI.c
    api/TaxAPI.c
    api/WebhookAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/any_type.h
    model/model_return.h
    model/a2_c_date_time.h
    model/account_cart_add.h
    model/account_cart_add_200_response.h
    model/account_cart_add_200_response_result.h
    model/account_cart_add_hybris_websites_inner.h
    model/account_cart_list_200_response.h
    model/account_cart_list_200_response_result.h
    model/account_cart_list_200_response_result_carts_inner.h
    model/account_config_update_200_response.h
    model/account_config_update_200_response_result.h
    model/account_failed_webhooks_200_response.h
    model/account_failed_webhooks_200_response_result.h
    model/account_failed_webhooks_200_response_result_webhook_inner.h
    model/account_supported_platforms_200_response.h
    model/account_supported_platforms_200_response_result.h
    model/account_supported_platforms_200_response_result_supported_platforms_inner.h
    model/account_supported_platforms_200_response_result_supported_platforms_inner_params.h
    model/account_supported_platforms_200_response_result_supported_platforms_inner_params_required_inner_inner.h
    model/attribute_add_200_response.h
    model/attribute_add_200_response_result.h
    model/attribute_assign_group_200_response.h
    model/attribute_assign_group_200_response_result.h
    model/attribute_count_200_response.h
    model/attribute_count_200_response_result.h
    model/attribute_delete_200_response.h
    model/attribute_delete_200_response_result.h
    model/attribute_info_200_response.h
    model/attribute_type_list_200_response.h
    model/attribute_type_list_200_response_result.h
    model/attribute_unassign_group_200_response.h
    model/attribute_unassign_group_200_response_result.h
    model/attribute_update_200_response.h
    model/attribute_update_200_response_result.h
    model/attribute_value_delete_200_response.h
    model/attribute_value_delete_200_response_result.h
    model/base_customer.h
    model/basket.h
    model/basket_info_200_response.h
    model/basket_item.h
    model/basket_item_add_200_response.h
    model/basket_item_add_200_response_result.h
    model/basket_item_option.h
    model/basket_live_shipping_service.h
    model/basket_live_shipping_service_create_200_response.h
    model/basket_live_shipping_service_create_200_response_result.h
    model/basket_live_shipping_service_delete_200_response.h
    model/basket_live_shipping_service_delete_200_response_result.h
    model/basket_live_shipping_service_list_200_response.h
    model/basket_live_shipping_service_list_200_response_result.h
    model/batch_job.h
    model/batch_job_result.h
    model/batch_job_result_item.h
    model/brand.h
    model/carrier.h
    model/cart.h
    model/cart_bridge_200_response.h
    model/cart_bridge_200_response_result.h
    model/cart_catalog_price_rules_count_200_response.h
    model/cart_catalog_price_rules_count_200_response_result.h
    model/cart_channel.h
    model/cart_clear_cache_200_response.h
    model/cart_clear_cache_200_response_result.h
    model/cart_config_200_response.h
    model/cart_config_200_response_result.h
    model/cart_config_update.h
    model/cart_config_update_200_response.h
    model/cart_coupon_add.h
    model/cart_coupon_add_200_response.h
    model/cart_coupon_add_200_response_result.h
    model/cart_coupon_count_200_response.h
    model/cart_coupon_count_200_response_result.h
    model/cart_create.h
    model/cart_delete_200_response.h
    model/cart_delete_200_response_result.h
    model/cart_disconnect_200_response.h
    model/cart_disconnect_200_response_result.h
    model/cart_giftcard_add_200_response.h
    model/cart_giftcard_add_200_response_result.h
    model/cart_giftcard_count_200_response.h
    model/cart_giftcard_count_200_response_result.h
    model/cart_info_200_response.h
    model/cart_list_200_response.h
    model/cart_list_200_response_result.h
    model/cart_list_200_response_result_supported_carts_inner.h
    model/cart_meta_data.h
    model/cart_methods_200_response.h
    model/cart_methods_200_response_result.h
    model/cart_plugin_list_200_response.h
    model/cart_plugin_list_200_response_result.h
    model/cart_script_add_200_response.h
    model/cart_script_add_200_response_result.h
    model/cart_shipping_method.h
    model/cart_shipping_method_rate.h
    model/cart_shipping_zone.h
    model/cart_shipping_zone2.h
    model/cart_store_info.h
    model/cart_validate_200_response.h
    model/cart_validate_200_response_result.h
    model/cart_warehouse.h
    model/catalog_price_rule.h
    model/catalog_price_rule_action.h
    model/category.h
    model/category_add_200_response.h
    model/category_add_200_response_result.h
    model/category_add_batch.h
    model/category_add_batch_200_response.h
    model/category_add_batch_200_response_result.h
    model/category_add_batch_payload_inner.h
    model/category_add_batch_payload_inner_images_inner.h
    model/category_count_200_response.h
    model/category_count_200_response_result.h
    model/category_delete_200_response.h
    model/category_delete_200_response_result.h
    model/category_find_200_response.h
    model/category_find_200_response_result.h
    model/category_find_200_response_result_category_inner.h
    model/category_image_add_200_response.h
    model/category_image_add_200_response_result.h
    model/category_info_200_response.h
    model/child.h
    model/country.h
    model/coupon.h
    model/coupon_action.h
    model/coupon_code.h
    model/coupon_condition.h
    model/coupon_history.h
    model/currency.h
    model/customer.h
    model/customer_add.h
    model/customer_add_200_response.h
    model/customer_add_200_response_result.h
    model/customer_add_address_inner.h
    model/customer_add_consents_inner.h
    model/customer_address.h
    model/customer_address_add.h
    model/customer_attribute.h
    model/customer_attribute_value.h
    model/customer_consent.h
    model/customer_count_200_response.h
    model/customer_count_200_response_result.h
    model/customer_delete_200_response.h
    model/customer_delete_200_response_result.h
    model/customer_find_200_response.h
    model/customer_find_200_response_result.h
    model/customer_group.h
    model/customer_group_add_200_response.h
    model/customer_group_add_200_response_result.h
    model/customer_info_200_response.h
    model/customer_update.h
    model/customer_update_address_inner.h
    model/customer_wish_list.h
    model/customer_wish_list_item.h
    model/discount.h
    model/gift_card.h
    model/image.h
    model/info.h
    model/language.h
    model/marketplace_product.h
    model/media.h
    model/model_response_attribute_attributeset_list.h
    model/model_response_attribute_group_list.h
    model/model_response_attribute_list.h
    model/model_response_batch_job_list.h
    model/model_response_cart_catalog_price_rules_list.h
    model/model_response_cart_coupon_list.h
    model/model_response_cart_gift_card_list.h
    model/model_response_cart_meta_data_list.h
    model/model_response_cart_script_list.h
    model/model_response_cart_shipping_zones_list.h
    model/model_response_category_list.h
    model/model_response_customer_attribute_list.h
    model/model_response_customer_group_list.h
    model/model_response_customer_list.h
    model/model_response_customer_wishlist_list.h
    model/model_response_marketplace_product_find.h
    model/model_response_order_abandoned_list.h
    model/model_response_order_list.h
    model/model_response_order_preestimate_shipping_list.h
    model/model_response_order_shipment_list.h
    model/model_response_order_status_list.h
    model/model_response_order_transaction_list.h
    model/model_response_product_attribute_list.h
    model/model_response_product_brand_list.h
    model/model_response_product_child_item_list.h
    model/model_response_product_currency_list.h
    model/model_response_product_list.h
    model/model_response_product_option_list.h
    model/model_response_product_review_list.h
    model/model_response_return_list.h
    model/model_response_subscriber_list.h
    model/model_response_tax_class_info.h
    model/model_response_tax_class_list.h
    model/order.h
    model/order_abandoned.h
    model/order_add.h
    model/order_add_200_response.h
    model/order_add_200_response_result.h
    model/order_add_note_attributes_inner.h
    model/order_add_order_item_inner.h
    model/order_add_order_item_inner_order_item_option_inner.h
    model/order_add_order_item_inner_order_item_property_inner.h
    model/order_count_200_response.h
    model/order_count_200_response_result.h
    model/order_financial_status_list_200_response.h
    model/order_financial_status_list_200_response_result.h
    model/order_financial_status_list_200_response_result_order_financial_statuses_inner.h
    model/order_find_200_response.h
    model/order_find_200_response_result.h
    model/order_fulfillment_status_list_200_response.h
    model/order_fulfillment_status_list_200_response_result.h
    model/order_info_200_response.h
    model/order_item.h
    model/order_item_option.h
    model/order_payment_method.h
    model/order_preestimate_shipping.h
    model/order_preestimate_shipping_list.h
    model/order_preestimate_shipping_list_order_item_inner.h
    model/order_preestimate_shipping_list_order_item_inner_order_item_option_inner.h
    model/order_refund.h
    model/order_refund_add.h
    model/order_refund_add_200_response.h
    model/order_refund_add_200_response_result.h
    model/order_refund_add_items_inner.h
    model/order_return_add.h
    model/order_return_add_200_response.h
    model/order_return_add_200_response_result.h
    model/order_return_add_order_products_inner.h
    model/order_return_update.h
    model/order_return_update_order_products_inner.h
    model/order_shipment_add.h
    model/order_shipment_add_200_response.h
    model/order_shipment_add_200_response_result.h
    model/order_shipment_add_batch.h
    model/order_shipment_add_batch_payload_inner.h
    model/order_shipment_add_batch_payload_inner_items_inner.h
    model/order_shipment_add_items_inner.h
    model/order_shipment_add_tracking_numbers_inner.h
    model/order_shipment_delete_200_response.h
    model/order_shipment_delete_200_response_result.h
    model/order_shipment_info_200_response.h
    model/order_shipment_tracking_add.h
    model/order_shipment_tracking_add_200_response.h
    model/order_shipment_tracking_add_200_response_result.h
    model/order_shipment_update.h
    model/order_shipping_method.h
    model/order_status.h
    model/order_status_history_item.h
    model/order_status_refund.h
    model/order_status_refund_item.h
    model/order_total.h
    model/order_totals.h
    model/order_totals_new_discount.h
    model/order_transaction.h
    model/pagination.h
    model/plugin.h
    model/plugin_list.h
    model/product.h
    model/product_add.h
    model/product_add_200_response.h
    model/product_add_200_response_result.h
    model/product_add_batch.h
    model/product_add_batch_payload_inner.h
    model/product_add_batch_payload_inner_advanced_prices_inner.h
    model/product_add_batch_payload_inner_images_inner.h
    model/product_add_best_offer.h
    model/product_add_certifications_inner.h
    model/product_add_certifications_inner_files_inner.h
    model/product_add_certifications_inner_images_inner.h
    model/product_add_files_inner.h
    model/product_add_group_prices_inner.h
    model/product_add_logistic_info_inner.h
    model/product_add_manufacturer_info.h
    model/product_add_package_details.h
    model/product_add_sales_tax.h
    model/product_add_seller_profiles.h
    model/product_add_shipping_details_inner.h
    model/product_add_size_chart.h
    model/product_add_specifics_inner.h
    model/product_add_specifics_inner_booking_details.h
    model/product_add_specifics_inner_booking_details_availabilities_inner.h
    model/product_add_specifics_inner_booking_details_availabilities_inner_times_inner.h
    model/product_add_specifics_inner_booking_details_overrides_inner.h
    model/product_add_specifics_inner_food_details.h
    model/product_add_specifics_inner_group_products_details_inner.h
    model/product_add_tier_prices_inner.h
    model/product_advanced_price.h
    model/product_attribute.h
    model/product_attribute_value_set_200_response.h
    model/product_attribute_value_set_200_response_result.h
    model/product_attribute_value_unset_200_response.h
    model/product_attribute_value_unset_200_response_result.h
    model/product_child_item_combination.h
    model/product_child_item_find_200_response.h
    model/product_child_item_find_200_response_result.h
    model/product_child_item_info_200_response.h
    model/product_count_200_response.h
    model/product_count_200_response_result.h
    model/product_currency_add_200_response.h
    model/product_currency_add_200_response_result.h
    model/product_delete_batch.h
    model/product_delete_batch_payload_inner.h
    model/product_find_200_response.h
    model/product_find_200_response_result.h
    model/product_find_200_response_result_product_inner.h
    model/product_group_item.h
    model/product_group_price.h
    model/product_image_add.h
    model/product_image_add_200_response.h
    model/product_image_add_200_response_result.h
    model/product_image_update_200_response.h
    model/product_image_update_200_response_result.h
    model/product_info_200_response.h
    model/product_inventory.h
    model/product_manufacturer_add_200_response.h
    model/product_manufacturer_add_200_response_result.h
    model/product_option.h
    model/product_option_add.h
    model/product_option_add_200_response.h
    model/product_option_add_200_response_result.h
    model/product_option_add_values_inner.h
    model/product_option_assign_200_response.h
    model/product_option_assign_200_response_result.h
    model/product_option_item.h
    model/product_option_value_add_200_response.h
    model/product_option_value_add_200_response_result.h
    model/product_option_value_assign_200_response.h
    model/product_option_value_assign_200_response_result.h
    model/product_price_add.h
    model/product_price_update.h
    model/product_price_update_group_prices_inner.h
    model/product_review.h
    model/product_review_rating.h
    model/product_tax_add.h
    model/product_tax_add_200_response.h
    model/product_tax_add_200_response_result.h
    model/product_tax_add_tax_rates_inner.h
    model/product_tier_price.h
    model/product_update.h
    model/product_update_batch.h
    model/product_update_batch_payload_inner.h
    model/product_update_batch_payload_inner_advanced_prices_inner.h
    model/product_update_batch_payload_inner_images_inner.h
    model/product_variant_add.h
    model/product_variant_add_200_response.h
    model/product_variant_add_200_response_result.h
    model/product_variant_add_attributes_inner.h
    model/product_variant_add_batch.h
    model/product_variant_add_batch_payload_inner.h
    model/product_variant_add_batch_payload_inner_combination_inner.h
    model/product_variant_count_200_response.h
    model/product_variant_count_200_response_result.h
    model/product_variant_delete_batch.h
    model/product_variant_delete_batch_payload_inner.h
    model/product_variant_image_add.h
    model/product_variant_image_add_200_response.h
    model/product_variant_image_add_200_response_result.h
    model/product_variant_list_200_response.h
    model/product_variant_list_200_response_result.h
    model/product_variant_price_add.h
    model/product_variant_price_update.h
    model/product_variant_update.h
    model/product_variant_update_batch.h
    model/product_variant_update_batch_payload_inner.h
    model/product_variant_update_options_inner.h
    model/response_attribute_attributeset_list_result.h
    model/response_attribute_group_list_result.h
    model/response_attribute_list_result.h
    model/response_batch_job_list_result.h
    model/response_batch_job_result.h
    model/response_cart_catalog_price_rules_list_result.h
    model/response_cart_coupon_list_result.h
    model/response_cart_giftcard_list_result.h
    model/response_cart_meta_data_list_result.h
    model/response_cart_script_list_result.h
    model/response_cart_shipping_zones_list_result.h
    model/response_category_list_result.h
    model/response_customer_attribute_list_result.h
    model/response_customer_group_list_result.h
    model/response_customer_list_result.h
    model/response_customer_wishlist_list_result.h
    model/response_marketplace_product_find_result.h
    model/response_order_abandoned_list_result.h
    model/response_order_list_result.h
    model/response_order_preestimate_shipping_list_result.h
    model/response_order_shipment_list_result.h
    model/response_order_status_list_result.h
    model/response_order_transaction_list_result.h
    model/response_product_attribute_list_result.h
    model/response_product_brand_list_result.h
    model/response_product_child_item_list_result.h
    model/response_product_currency_list_result.h
    model/response_product_list_result.h
    model/response_product_option_list_result.h
    model/response_product_review_list_result.h
    model/response_return_list_result.h
    model/response_subscriber_list_result.h
    model/response_tax_class_info_result.h
    model/response_tax_class_list_result.h
    model/return_action.h
    model/return_action_list_200_response.h
    model/return_action_list_200_response_result.h
    model/return_count_200_response.h
    model/return_count_200_response_result.h
    model/return_info_200_response.h
    model/return_order_product.h
    model/return_reason.h
    model/return_reason_list_200_response.h
    model/return_reason_list_200_response_result.h
    model/return_status.h
    model/return_status_list_200_response.h
    model/return_status_list_200_response_result.h
    model/script.h
    model/shipment.h
    model/shipment_item.h
    model/shipment_tracking_number.h
    model/special_price.h
    model/state.h
    model/status.h
    model/store_attribute.h
    model/store_attribute_attribute_set.h
    model/store_attribute_group.h
    model/subscriber.h
    model/tax_class.h
    model/tax_class_countries.h
    model/tax_class_rate.h
    model/tax_class_states.h
    model/tax_class_zip_codes.h
    model/tax_class_zip_codes_range.h
    model/webhook.h
    model/webhook_count_200_response.h
    model/webhook_count_200_response_result.h
    model/webhook_events_200_response.h
    model/webhook_events_200_response_result.h
    model/webhook_events_200_response_result_events_inner.h
    model/webhook_list_200_response.h
    model/webhook_list_200_response_result.h
    api/AccountAPI.h
    api/AttributeAPI.h
    api/BasketAPI.h
    api/BatchAPI.h
    api/BridgeAPI.h
    api/CartAPI.h
    api/CategoryAPI.h
    api/CustomerAPI.h
    api/MarketplaceAPI.h
    api/OrderAPI.h
    api/ProductAPI.h
    api/ReturnAPI.h
    api/SubscriberAPI.h
    api/TaxAPI.h
    api/WebhookAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AccountAPI.c
#    unit-tests/manual-AttributeAPI.c
#    unit-tests/manual-BasketAPI.c
#    unit-tests/manual-BatchAPI.c
#    unit-tests/manual-BridgeAPI.c
#    unit-tests/manual-CartAPI.c
#    unit-tests/manual-CategoryAPI.c
#    unit-tests/manual-CustomerAPI.c
#    unit-tests/manual-MarketplaceAPI.c
#    unit-tests/manual-OrderAPI.c
#    unit-tests/manual-ProductAPI.c
#    unit-tests/manual-ReturnAPI.c
#    unit-tests/manual-SubscriberAPI.c
#    unit-tests/manual-TaxAPI.c
#    unit-tests/manual-WebhookAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
