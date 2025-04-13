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



typedef struct product_update_t {
    char *id; // string
    char *model; // string
    double old_price; //numeric
    double price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    double retail_price; //numeric
    double quantity; //numeric
    int available_for_view; //boolean
    double weight; //numeric
    char *weight_unit; // string
    char *dimensions_unit; // string
    double increase_quantity; //numeric
    double reduce_quantity; //numeric
    char *warehouse_id; // string
    double reserve_quantity; //numeric
    int manage_stock; //boolean
    char *backorder_status; // string
    char *name; // string
    char *sku; // string
    char *visible; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    char *categories_ids; // string
    char *related_products_ids; // string
    char *up_sell_products_ids; // string
    char *cross_sell_products_ids; // string
    char *description; // string
    char *short_description; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *store_id; // string
    char *lang_id; // string
    int in_stock; //boolean
    char *status; // string
    char *seo_url; // string
    char *report_request_id; // string
    int disable_report_cache; //boolean
    int reindex; //boolean
    char *tags; // string
    int clear_cache; //boolean
    char *gtin; // string
    char *upc; // string
    char *mpn; // string
    char *ean; // string
    char *isbn; // string
    int taxable; //boolean
    char *product_class; // string
    double height; //numeric
    double length; //numeric
    double width; //numeric
    char *harmonized_system_code; // string
    char *country_of_origin; // string
    char *search_keywords; // string
    char *barcode; // string
    int is_virtual; //boolean
    int is_free_shipping; //boolean
    double reserve_price; //numeric
    double buyitnow_price; //numeric
    char *avail_from; // string
    char *tax_class_id; // string
    char *type; // string
    int avail; //boolean
    char *delivery_code; // string
    int check_process_status; //boolean
    struct product_add_package_details_t *package_details; //model
    char *stores_ids; // string
    struct product_add_manufacturer_info_t *manufacturer_info; //model
    char *production_partner_ids; // string
    int shipping_template_id; //numeric
    char *when_made; // string
    int is_supply; //boolean
    int downloadable; //boolean
    list_t *materials; //primitive container
    int auto_renew; //boolean
    int on_sale; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_update_t;

__attribute__((deprecated)) product_update_t *product_update_create(
    char *id,
    char *model,
    double old_price,
    double price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    double cost_price,
    double fixed_cost_shipping_price,
    double retail_price,
    double quantity,
    int available_for_view,
    double weight,
    char *weight_unit,
    char *dimensions_unit,
    double increase_quantity,
    double reduce_quantity,
    char *warehouse_id,
    double reserve_quantity,
    int manage_stock,
    char *backorder_status,
    char *name,
    char *sku,
    char *visible,
    char *manufacturer,
    char *manufacturer_id,
    char *categories_ids,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *description,
    char *short_description,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *store_id,
    char *lang_id,
    int in_stock,
    char *status,
    char *seo_url,
    char *report_request_id,
    int disable_report_cache,
    int reindex,
    char *tags,
    int clear_cache,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    int taxable,
    char *product_class,
    double height,
    double length,
    double width,
    char *harmonized_system_code,
    char *country_of_origin,
    char *search_keywords,
    char *barcode,
    int is_virtual,
    int is_free_shipping,
    double reserve_price,
    double buyitnow_price,
    char *avail_from,
    char *tax_class_id,
    char *type,
    int avail,
    char *delivery_code,
    int check_process_status,
    product_add_package_details_t *package_details,
    char *stores_ids,
    product_add_manufacturer_info_t *manufacturer_info,
    char *production_partner_ids,
    int shipping_template_id,
    char *when_made,
    int is_supply,
    int downloadable,
    list_t *materials,
    int auto_renew,
    int on_sale
);

void product_update_free(product_update_t *product_update);

product_update_t *product_update_parseFromJSON(cJSON *product_updateJSON);

cJSON *product_update_convertToJSON(product_update_t *product_update);

#endif /* _product_update_H_ */

