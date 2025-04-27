/*
 * product_add.h
 *
 * 
 */

#ifndef _product_add_H_
#define _product_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_t product_add_t;

#include "product_add_best_offer.h"
#include "product_add_certifications_inner.h"
#include "product_add_files_inner.h"
#include "product_add_group_prices_inner.h"
#include "product_add_logistic_info_inner.h"
#include "product_add_manufacturer_info.h"
#include "product_add_package_details.h"
#include "product_add_sales_tax.h"
#include "product_add_seller_profiles.h"
#include "product_add_shipping_details_inner.h"
#include "product_add_size_chart.h"
#include "product_add_specifics_inner.h"
#include "product_add_tier_prices_inner.h"



typedef struct product_add_t {
    char *name; // string
    char *model; // string
    char *description; // string
    double price; //numeric
    char *sku; // string
    char *short_description; // string
    char *type; // string
    char *status; // string
    char *visible; // string
    char *category_id; // string
    char *categories_ids; // string
    char *product_class; // string
    char *product_type; // string
    int is_virtual; //boolean
    int downloadable; //boolean
    int is_supply; //boolean
    int available_for_view; //boolean
    int available_for_sale; //boolean
    char *store_id; // string
    char *stores_ids; // string
    char *lang_id; // string
    double old_price; //numeric
    double special_price; //numeric
    double wholesale_price; //numeric
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    list_t *tier_prices; //nonprimitive container
    list_t *group_prices; //nonprimitive container
    double buyitnow_price; //numeric
    double reserve_price; //numeric
    double quantity; //numeric
    int in_stock; //boolean
    int manage_stock; //boolean
    char *warehouse_id; // string
    char *backorder_status; // string
    double min_order_quantity; //numeric
    double max_order_quantity; //numeric
    double weight; //numeric
    char *weight_unit; // string
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *dimensions_unit; // string
    char *barcode; // string
    char *upc; // string
    char *ean; // string
    char *isbn; // string
    char *gtin; // string
    char *mpn; // string
    char *asin; // string
    char *product_reference; // string
    char *harmonized_system_code; // string
    char *country_of_origin; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    struct product_add_manufacturer_info_t *manufacturer_info; //model
    char *brand_name; // string
    char *image_url; // string
    char *image_name; // string
    list_t *additional_image_urls; //primitive container
    list_t *files; //nonprimitive container
    struct product_add_size_chart_t *size_chart; //model
    char *related_products_ids; // string
    char *up_sell_products_ids; // string
    char *cross_sell_products_ids; // string
    char *attribute_set_name; // string
    char *attribute_name; // string
    char *search_keywords; // string
    char *tags; // string
    list_t *materials; //primitive container
    list_t *certifications; //nonprimitive container
    list_t *specifics; //nonprimitive container
    char *avail_from; // string
    char *sprice_create; // string
    char *sprice_modified; // string
    char *sprice_expire; // string
    char *created_at; // string
    int auto_renew; //boolean
    char *when_made; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *url; // string
    char *seo_url; // string
    char *tax_class_id; // string
    int taxable; //boolean
    struct product_add_sales_tax_t *sales_tax; //model
    char *condition; // string
    char *condition_description; // string
    int allow_display_condition; //boolean
    list_t *payment_methods; //primitive container
    char *paypal_email; // string
    int shipping_template_id; //numeric
    list_t *shipping_details; //nonprimitive container
    int is_free_shipping; //boolean
    char *delivery_code; // string
    char *delivery_type; // string
    int delivery_time; //numeric
    char *delivery_option_ids; // string
    struct product_add_package_details_t *package_details; //model
    list_t *logistic_info; //nonprimitive container
    char *listing_duration; // string
    char *listing_type; // string
    int return_accepted; //boolean
    struct product_add_seller_profiles_t *seller_profiles; //model
    char *auction_confidentiality_level; // string
    struct product_add_best_offer_t *best_offer; //model
    char *production_partner_ids; // string
    char *marketplace_item_properties; // string
    int clear_cache; //boolean
    int viewed_count; //numeric
    int ordered_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_t;

__attribute__((deprecated)) product_add_t *product_add_create(
    char *name,
    char *model,
    char *description,
    double price,
    char *sku,
    char *short_description,
    char *type,
    char *status,
    char *visible,
    char *category_id,
    char *categories_ids,
    char *product_class,
    char *product_type,
    int is_virtual,
    int downloadable,
    int is_supply,
    int available_for_view,
    int available_for_sale,
    char *store_id,
    char *stores_ids,
    char *lang_id,
    double old_price,
    double special_price,
    double wholesale_price,
    double cost_price,
    double fixed_cost_shipping_price,
    list_t *tier_prices,
    list_t *group_prices,
    double buyitnow_price,
    double reserve_price,
    double quantity,
    int in_stock,
    int manage_stock,
    char *warehouse_id,
    char *backorder_status,
    double min_order_quantity,
    double max_order_quantity,
    double weight,
    char *weight_unit,
    double width,
    double height,
    double length,
    char *dimensions_unit,
    char *barcode,
    char *upc,
    char *ean,
    char *isbn,
    char *gtin,
    char *mpn,
    char *asin,
    char *product_reference,
    char *harmonized_system_code,
    char *country_of_origin,
    char *manufacturer,
    char *manufacturer_id,
    product_add_manufacturer_info_t *manufacturer_info,
    char *brand_name,
    char *image_url,
    char *image_name,
    list_t *additional_image_urls,
    list_t *files,
    product_add_size_chart_t *size_chart,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *attribute_set_name,
    char *attribute_name,
    char *search_keywords,
    char *tags,
    list_t *materials,
    list_t *certifications,
    list_t *specifics,
    char *avail_from,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    char *created_at,
    int auto_renew,
    char *when_made,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *seo_url,
    char *tax_class_id,
    int taxable,
    product_add_sales_tax_t *sales_tax,
    char *condition,
    char *condition_description,
    int allow_display_condition,
    list_t *payment_methods,
    char *paypal_email,
    int shipping_template_id,
    list_t *shipping_details,
    int is_free_shipping,
    char *delivery_code,
    char *delivery_type,
    int delivery_time,
    char *delivery_option_ids,
    product_add_package_details_t *package_details,
    list_t *logistic_info,
    char *listing_duration,
    char *listing_type,
    int return_accepted,
    product_add_seller_profiles_t *seller_profiles,
    char *auction_confidentiality_level,
    product_add_best_offer_t *best_offer,
    char *production_partner_ids,
    char *marketplace_item_properties,
    int clear_cache,
    int viewed_count,
    int ordered_count
);

void product_add_free(product_add_t *product_add);

product_add_t *product_add_parseFromJSON(cJSON *product_addJSON);

cJSON *product_add_convertToJSON(product_add_t *product_add);

#endif /* _product_add_H_ */

