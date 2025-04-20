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
    char *sku; // string
    char *description; // string
    double price; //numeric
    double old_price; //numeric
    double special_price; //numeric
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    char *sprice_create; // string
    char *sprice_modified; // string
    char *sprice_expire; // string
    list_t *tier_prices; //nonprimitive container
    list_t *group_prices; //nonprimitive container
    int available_for_view; //boolean
    int available_for_sale; //boolean
    double weight; //numeric
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *weight_unit; // string
    char *dimensions_unit; // string
    char *short_description; // string
    char *warehouse_id; // string
    char *backorder_status; // string
    double quantity; //numeric
    int downloadable; //boolean
    double wholesale_price; //numeric
    char *created_at; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    char *categories_ids; // string
    char *related_products_ids; // string
    char *up_sell_products_ids; // string
    char *cross_sell_products_ids; // string
    char *tax_class_id; // string
    char *type; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *url; // string
    char *lang_id; // string
    char *stores_ids; // string
    char *category_id; // string
    int viewed_count; //numeric
    int ordered_count; //numeric
    char *attribute_set_name; // string
    char *attribute_name; // string
    int shipping_template_id; //numeric
    char *production_partner_ids; // string
    char *condition; // string
    char *listing_duration; // string
    char *listing_type; // string
    list_t *payment_methods; //primitive container
    int return_accepted; //boolean
    list_t *shipping_details; //nonprimitive container
    char *paypal_email; // string
    struct product_add_seller_profiles_t *seller_profiles; //model
    struct product_add_package_details_t *package_details; //model
    struct product_add_best_offer_t *best_offer; //model
    struct product_add_sales_tax_t *sales_tax; //model
    char *barcode; // string
    char *upc; // string
    char *ean; // string
    char *isbn; // string
    list_t *specifics; //nonprimitive container
    char *image_url; // string
    char *image_name; // string
    list_t *additional_image_urls; //primitive container
    double reserve_price; //numeric
    double buyitnow_price; //numeric
    char *condition_description; // string
    char *auction_confidentiality_level; // string
    list_t *logistic_info; //nonprimitive container
    char *avail_from; // string
    char *tags; // string
    int clear_cache; //boolean
    char *asin; // string
    char *gtin; // string
    char *mpn; // string
    int taxable; //boolean
    char *visible; // string
    char *status; // string
    char *seo_url; // string
    char *product_class; // string
    char *product_type; // string
    char *marketplace_item_properties; // string
    int manage_stock; //boolean
    char *harmonized_system_code; // string
    char *country_of_origin; // string
    list_t *files; //nonprimitive container
    char *search_keywords; // string
    char *store_id; // string
    char *brand_name; // string
    int is_virtual; //boolean
    int is_free_shipping; //boolean
    int in_stock; //boolean
    char *delivery_code; // string
    char *product_reference; // string
    char *delivery_type; // string
    int delivery_time; //numeric
    struct product_add_size_chart_t *size_chart; //model
    list_t *certifications; //nonprimitive container
    char *delivery_option_ids; // string
    struct product_add_manufacturer_info_t *manufacturer_info; //model
    char *when_made; // string
    int is_supply; //boolean
    list_t *materials; //primitive container
    int auto_renew; //boolean
    int allow_display_condition; //boolean
    double min_order_quantity; //numeric
    double max_order_quantity; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_t;

__attribute__((deprecated)) product_add_t *product_add_create(
    char *name,
    char *model,
    char *sku,
    char *description,
    double price,
    double old_price,
    double special_price,
    double cost_price,
    double fixed_cost_shipping_price,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    list_t *tier_prices,
    list_t *group_prices,
    int available_for_view,
    int available_for_sale,
    double weight,
    double width,
    double height,
    double length,
    char *weight_unit,
    char *dimensions_unit,
    char *short_description,
    char *warehouse_id,
    char *backorder_status,
    double quantity,
    int downloadable,
    double wholesale_price,
    char *created_at,
    char *manufacturer,
    char *manufacturer_id,
    char *categories_ids,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *tax_class_id,
    char *type,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *lang_id,
    char *stores_ids,
    char *category_id,
    int viewed_count,
    int ordered_count,
    char *attribute_set_name,
    char *attribute_name,
    int shipping_template_id,
    char *production_partner_ids,
    char *condition,
    char *listing_duration,
    char *listing_type,
    list_t *payment_methods,
    int return_accepted,
    list_t *shipping_details,
    char *paypal_email,
    product_add_seller_profiles_t *seller_profiles,
    product_add_package_details_t *package_details,
    product_add_best_offer_t *best_offer,
    product_add_sales_tax_t *sales_tax,
    char *barcode,
    char *upc,
    char *ean,
    char *isbn,
    list_t *specifics,
    char *image_url,
    char *image_name,
    list_t *additional_image_urls,
    double reserve_price,
    double buyitnow_price,
    char *condition_description,
    char *auction_confidentiality_level,
    list_t *logistic_info,
    char *avail_from,
    char *tags,
    int clear_cache,
    char *asin,
    char *gtin,
    char *mpn,
    int taxable,
    char *visible,
    char *status,
    char *seo_url,
    char *product_class,
    char *product_type,
    char *marketplace_item_properties,
    int manage_stock,
    char *harmonized_system_code,
    char *country_of_origin,
    list_t *files,
    char *search_keywords,
    char *store_id,
    char *brand_name,
    int is_virtual,
    int is_free_shipping,
    int in_stock,
    char *delivery_code,
    char *product_reference,
    char *delivery_type,
    int delivery_time,
    product_add_size_chart_t *size_chart,
    list_t *certifications,
    char *delivery_option_ids,
    product_add_manufacturer_info_t *manufacturer_info,
    char *when_made,
    int is_supply,
    list_t *materials,
    int auto_renew,
    int allow_display_condition,
    double min_order_quantity,
    double max_order_quantity
);

void product_add_free(product_add_t *product_add);

product_add_t *product_add_parseFromJSON(cJSON *product_addJSON);

cJSON *product_add_convertToJSON(product_add_t *product_add);

#endif /* _product_add_H_ */

