/*
 * product_update_batch_payload_inner.h
 *
 * 
 */

#ifndef _product_update_batch_payload_inner_H_
#define _product_update_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_update_batch_payload_inner_t product_update_batch_payload_inner_t;

#include "product_update_batch_payload_inner_advanced_prices_inner.h"
#include "product_update_batch_payload_inner_images_inner.h"



typedef struct product_update_batch_payload_inner_t {
    char *id; // string
    char *name; // string
    char *description; // string
    char *short_description; // string
    char *sku; // string
    char *model; // string
    double price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    double cost_price; //numeric
    double old_price; //numeric
    double fixed_cost_shipping_price; //numeric
    list_t *advanced_prices; //nonprimitive container
    double quantity; //numeric
    double increase_quantity; //numeric
    double reduce_quantity; //numeric
    double reserve_quantity; //numeric
    char *store_id; // string
    char *lang_id; // string
    char *status; // string
    char *type; // string
    char *condition; // string
    char *visible; // string
    int available_for_view; //boolean
    int available_for_sale; //boolean
    char *avail_from; // string
    double weight; //numeric
    double length; //numeric
    double width; //numeric
    double height; //numeric
    char *dimensions_unit; // string
    char *weight_unit; // string
    int manage_stock; //boolean
    int in_stock; //boolean
    char *backorder_status; // string
    int is_free_shipping; //boolean
    int is_virtual; //boolean
    int taxable; //boolean
    int downloadable; //boolean
    char *warehouse_id; // string
    char *tax_class_id; // string
    list_t *categories_ids; //primitive container
    char *meta_title; // string
    char *meta_description; // string
    list_t *meta_keywords; //primitive container
    char *url; // string
    char *seo_url; // string
    char *manufacturer; // string
    char *manufacturer_id; // string
    char *mpn; // string
    char *gtin; // string
    char *upc; // string
    char *isbn; // string
    char *ean; // string
    char *barcode; // string
    list_t *images; //nonprimitive container
    list_t *related_products_ids; //primitive container
    list_t *up_sell_products_ids; //primitive container
    list_t *cross_sell_products_ids; //primitive container
    list_t *tags; //primitive container
    list_t *search_keywords; //primitive container
    char *harmonized_system_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_update_batch_payload_inner_t;

__attribute__((deprecated)) product_update_batch_payload_inner_t *product_update_batch_payload_inner_create(
    char *id,
    char *name,
    char *description,
    char *short_description,
    char *sku,
    char *model,
    double price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    double cost_price,
    double old_price,
    double fixed_cost_shipping_price,
    list_t *advanced_prices,
    double quantity,
    double increase_quantity,
    double reduce_quantity,
    double reserve_quantity,
    char *store_id,
    char *lang_id,
    char *status,
    char *type,
    char *condition,
    char *visible,
    int available_for_view,
    int available_for_sale,
    char *avail_from,
    double weight,
    double length,
    double width,
    double height,
    char *dimensions_unit,
    char *weight_unit,
    int manage_stock,
    int in_stock,
    char *backorder_status,
    int is_free_shipping,
    int is_virtual,
    int taxable,
    int downloadable,
    char *warehouse_id,
    char *tax_class_id,
    list_t *categories_ids,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    char *url,
    char *seo_url,
    char *manufacturer,
    char *manufacturer_id,
    char *mpn,
    char *gtin,
    char *upc,
    char *isbn,
    char *ean,
    char *barcode,
    list_t *images,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids,
    list_t *tags,
    list_t *search_keywords,
    char *harmonized_system_code
);

void product_update_batch_payload_inner_free(product_update_batch_payload_inner_t *product_update_batch_payload_inner);

product_update_batch_payload_inner_t *product_update_batch_payload_inner_parseFromJSON(cJSON *product_update_batch_payload_innerJSON);

cJSON *product_update_batch_payload_inner_convertToJSON(product_update_batch_payload_inner_t *product_update_batch_payload_inner);

#endif /* _product_update_batch_payload_inner_H_ */

