/*
 * product.h
 *
 * 
 */

#ifndef _product_H_
#define _product_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_t product_t;

#include "a2_c_date_time.h"
#include "discount.h"
#include "image.h"
#include "object.h"
#include "product_advanced_price.h"
#include "product_group_item.h"
#include "product_group_price.h"
#include "product_inventory.h"
#include "product_option.h"
#include "product_tier_price.h"
#include "special_price.h"



typedef struct product_t {
    char *id; // string
    char *type; // string
    char *u_model; // string
    char *u_sku; // string
    char *name; // string
    char *description; // string
    char *short_description; // string
    double price; //numeric
    list_t *advanced_price; //nonprimitive container
    double cost_price; //numeric
    double quantity; //numeric
    list_t *inventory; //nonprimitive container
    list_t *group_items; //nonprimitive container
    char *u_brand_id; // string
    char *u_brand; // string
    list_t *categories_ids; //primitive container
    list_t *stores_ids; //primitive container
    char *url; // string
    char *seo_url; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    int avail_sale; //boolean
    int avail_view; //boolean
    int is_virtual; //boolean
    int is_downloadable; //boolean
    double weight; //numeric
    char *weight_unit; // string
    int sort_order; //numeric
    int in_stock; //boolean
    int on_sale; //boolean
    char *backorders; // string
    char *manage_stock; // string
    int is_stock_managed; //boolean
    struct a2_c_date_time_t *create_at; //model
    struct a2_c_date_time_t *modified_at; //model
    char *tax_class_id; // string
    struct special_price_t *special_price; //model
    list_t *tier_price; //nonprimitive container
    list_t *group_price; //nonprimitive container
    list_t *images; //nonprimitive container
    list_t *product_options; //nonprimitive container
    char *u_upc; // string
    char *u_mpn; // string
    char *u_gtin; // string
    char *u_isbn; // string
    char *u_ean; // string
    list_t *related_products_ids; //primitive container
    list_t *up_sell_products_ids; //primitive container
    list_t *cross_sell_products_ids; //primitive container
    char *dimensions_unit; // string
    double width; //numeric
    double height; //numeric
    double length; //numeric
    list_t *discounts; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_t;

__attribute__((deprecated)) product_t *product_create(
    char *id,
    char *type,
    char *u_model,
    char *u_sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    list_t *advanced_price,
    double cost_price,
    double quantity,
    list_t *inventory,
    list_t *group_items,
    char *u_brand_id,
    char *u_brand,
    list_t *categories_ids,
    list_t *stores_ids,
    char *url,
    char *seo_url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    int avail_sale,
    int avail_view,
    int is_virtual,
    int is_downloadable,
    double weight,
    char *weight_unit,
    int sort_order,
    int in_stock,
    int on_sale,
    char *backorders,
    char *manage_stock,
    int is_stock_managed,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *tax_class_id,
    special_price_t *special_price,
    list_t *tier_price,
    list_t *group_price,
    list_t *images,
    list_t *product_options,
    char *u_upc,
    char *u_mpn,
    char *u_gtin,
    char *u_isbn,
    char *u_ean,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    list_t *discounts,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_free(product_t *product);

product_t *product_parseFromJSON(cJSON *productJSON);

cJSON *product_convertToJSON(product_t *product);

#endif /* _product_H_ */

