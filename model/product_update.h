/*
 * product_update.h
 *
 * 
 */

#ifndef _product_update_H_
#define _product_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_update_t product_update_t;

#include "product_add_manufacturer_info.h"
#include "product_add_package_details.h"
#include "product_add_personalization_details.h"
#include "product_add_specifics_inner.h"
#include "product_add_tier_prices_inner.h"



typedef struct product_update_t {
    char *id; // string
    char *model; // string
    char *sku; // string
    char *name; // string
    char *description; // string
    char *short_description; // string
    double price; //numeric
    double old_price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    double retail_price; //numeric
    list_t *tier_prices; //nonprimitive container
    double reserve_price; //numeric
    double buyitnow_price; //numeric
    int taxable; //boolean
    char *tax_class_id; // string
    char *type; // string
    char *status; // string
    char *condition; // string
    char *visible; // string
    int in_stock; //boolean
    int avail; //boolean
    char *avail_from; // string
    char *product_class; // string
    char *brand_name; // string
    int available_for_view; //boolean
    char *stores_ids; // string
    char *store_id; // string
    char *lang_id; // string
    double quantity; //numeric
    double reserve_quantity; //numeric
    int manage_stock; //boolean
    char *backorder_status; // string
    double increase_quantity; //numeric
    double reduce_quantity; //numeric
    double low_stock_threshold; //numeric
    char *warehouse_id; // string
    double weight; //numeric
    char *weight_unit; // string
    double height; //numeric
    double length; //numeric
    double width; //numeric
    char *dimensions_unit; // string
    int is_virtual; //boolean
    int is_free_shipping; //boolean
    char *gtin; // string
    char *upc; // string
    char *mpn; // string
    char *ean; // string
    char *isbn; // string
    char *barcode; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    char *categories_ids; // string
    char *related_products_ids; // string
    char *up_sell_products_ids; // string
    char *cross_sell_products_ids; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *seo_url; // string
    char *search_keywords; // string
    char *tags; // string
    char *delivery_code; // string
    struct product_add_package_details_t *package_details; //model
    char *country_of_origin; // string
    char *harmonized_system_code; // string
    int shipping_template_id; //numeric
    char *when_made; // string
    int is_supply; //boolean
    int downloadable; //boolean
    list_t *materials; //primitive container
    int auto_renew; //boolean
    int on_sale; //boolean
    char *production_partner_ids; // string
    struct product_add_manufacturer_info_t *manufacturer_info; //model
    char *report_request_id; // string
    int disable_report_cache; //boolean
    int reindex; //boolean
    int clear_cache; //boolean
    int check_process_status; //boolean
    list_t *specifics; //nonprimitive container
    int shop_section_id; //numeric
    struct product_add_personalization_details_t *personalization_details; //model
    char *external_product_link; // string
    char *marketplace_item_properties; // string
    double min_order_quantity; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_update_t;

__attribute__((deprecated)) product_update_t *product_update_create(
    char *id,
    char *model,
    char *sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    double old_price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    double cost_price,
    double fixed_cost_shipping_price,
    double retail_price,
    list_t *tier_prices,
    double reserve_price,
    double buyitnow_price,
    int taxable,
    char *tax_class_id,
    char *type,
    char *status,
    char *condition,
    char *visible,
    int in_stock,
    int avail,
    char *avail_from,
    char *product_class,
    char *brand_name,
    int available_for_view,
    char *stores_ids,
    char *store_id,
    char *lang_id,
    double quantity,
    double reserve_quantity,
    int manage_stock,
    char *backorder_status,
    double increase_quantity,
    double reduce_quantity,
    double low_stock_threshold,
    char *warehouse_id,
    double weight,
    char *weight_unit,
    double height,
    double length,
    double width,
    char *dimensions_unit,
    int is_virtual,
    int is_free_shipping,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *barcode,
    char *manufacturer,
    char *manufacturer_id,
    char *categories_ids,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *seo_url,
    char *search_keywords,
    char *tags,
    char *delivery_code,
    product_add_package_details_t *package_details,
    char *country_of_origin,
    char *harmonized_system_code,
    int shipping_template_id,
    char *when_made,
    int is_supply,
    int downloadable,
    list_t *materials,
    int auto_renew,
    int on_sale,
    char *production_partner_ids,
    product_add_manufacturer_info_t *manufacturer_info,
    char *report_request_id,
    int disable_report_cache,
    int reindex,
    int clear_cache,
    int check_process_status,
    list_t *specifics,
    int shop_section_id,
    product_add_personalization_details_t *personalization_details,
    char *external_product_link,
    char *marketplace_item_properties,
    double min_order_quantity
);

void product_update_free(product_update_t *product_update);

product_update_t *product_update_parseFromJSON(cJSON *product_updateJSON);

cJSON *product_update_convertToJSON(product_update_t *product_update);

#endif /* _product_update_H_ */

