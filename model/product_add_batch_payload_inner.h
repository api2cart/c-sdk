/*
 * product_add_batch_payload_inner.h
 *
 * 
 */

#ifndef _product_add_batch_payload_inner_H_
#define _product_add_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_batch_payload_inner_t product_add_batch_payload_inner_t;

#include "object.h"
#include "product_add_batch_payload_inner_advanced_prices_inner.h"
#include "product_add_batch_payload_inner_images_inner.h"
#include "product_add_files_inner.h"



typedef struct product_add_batch_payload_inner_t {
    char *name; // string
    char *description; // string
    char *short_description; // string
    char *sku; // string
    char *model; // string
    char *asin; // string
    char *upc; // string
    char *ean; // string
    char *gtin; // string
    char *mpn; // string
    char *barcode; // string
    double price; //numeric
    double old_price; //numeric
    double cost_price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    list_t *advanced_prices; //nonprimitive container
    double fixed_cost_shipping_price; //numeric
    double quantity; //numeric
    int manage_stock; //boolean
    char *product_type; // string
    object_t *marketplace_item_properties; //object
    object_t *specifics; //object
    int is_free_shipping; //boolean
    int taxable; //boolean
    char *status; // string
    char *condition; // string
    char *visible; // string
    int available_for_view; //boolean
    int available_for_sale; //boolean
    int is_virtual; //boolean
    int in_stock; //boolean
    char *type; // string
    int downloadable; //boolean
    double weight; //numeric
    double length; //numeric
    double width; //numeric
    double height; //numeric
    char *weight_unit; // string
    char *dimensions_unit; // string
    char *store_id; // string
    char *lang_id; // string
    char *category_id; // string
    char *warehouse_id; // string
    list_t *categories_ids; //primitive container
    list_t *related_products_ids; //primitive container
    list_t *up_sell_products_ids; //primitive container
    list_t *cross_sell_products_ids; //primitive container
    list_t *stores_ids; //primitive container
    char *tax_class_id; // string
    char *meta_title; // string
    char *meta_description; // string
    list_t *meta_keywords; //primitive container
    list_t *search_keywords; //primitive container
    char *harmonized_system_code; // string
    char *url; // string
    char *seo_url; // string
    char *external_product_link; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    char *backorder_status; // string
    list_t *images; //nonprimitive container
    list_t *tags; //primitive container
    list_t *files; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_batch_payload_inner_t;

__attribute__((deprecated)) product_add_batch_payload_inner_t *product_add_batch_payload_inner_create(
    char *name,
    char *description,
    char *short_description,
    char *sku,
    char *model,
    char *asin,
    char *upc,
    char *ean,
    char *gtin,
    char *mpn,
    char *barcode,
    double price,
    double old_price,
    double cost_price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    list_t *advanced_prices,
    double fixed_cost_shipping_price,
    double quantity,
    int manage_stock,
    char *product_type,
    object_t *marketplace_item_properties,
    object_t *specifics,
    int is_free_shipping,
    int taxable,
    char *status,
    char *condition,
    char *visible,
    int available_for_view,
    int available_for_sale,
    int is_virtual,
    int in_stock,
    char *type,
    int downloadable,
    double weight,
    double length,
    double width,
    double height,
    char *weight_unit,
    char *dimensions_unit,
    char *store_id,
    char *lang_id,
    char *category_id,
    char *warehouse_id,
    list_t *categories_ids,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids,
    list_t *stores_ids,
    char *tax_class_id,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    list_t *search_keywords,
    char *harmonized_system_code,
    char *url,
    char *seo_url,
    char *external_product_link,
    char *manufacturer,
    char *manufacturer_id,
    char *backorder_status,
    list_t *images,
    list_t *tags,
    list_t *files
);

void product_add_batch_payload_inner_free(product_add_batch_payload_inner_t *product_add_batch_payload_inner);

product_add_batch_payload_inner_t *product_add_batch_payload_inner_parseFromJSON(cJSON *product_add_batch_payload_innerJSON);

cJSON *product_add_batch_payload_inner_convertToJSON(product_add_batch_payload_inner_t *product_add_batch_payload_inner);

#endif /* _product_add_batch_payload_inner_H_ */

