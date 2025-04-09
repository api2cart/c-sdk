/*
 * product_variant_update_batch_payload_inner.h
 *
 * 
 */

#ifndef _product_variant_update_batch_payload_inner_H_
#define _product_variant_update_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_update_batch_payload_inner_t product_variant_update_batch_payload_inner_t;

#include "product_add_batch_payload_inner_images_inner.h"
#include "product_update_batch_payload_inner_advanced_prices_inner.h"



typedef struct product_variant_update_batch_payload_inner_t {
    char *id; // string
    char *product_id; // string
    char *name; // string
    char *description; // string
    char *short_description; // string
    char *sku; // string
    char *upc; // string
    char *mpn; // string
    char *gtin; // string
    char *isbn; // string
    char *status; // string
    double price; //numeric
    double special_price; //numeric
    double cost_price; //numeric
    double retail_price; //numeric
    list_t *advanced_prices; //nonprimitive container
    double quantity; //numeric
    double reserve_quantity; //numeric
    double increase_quantity; //numeric
    double reduce_quantity; //numeric
    char *warehouse_id; // string
    char *manufacturer_id; // string
    double weight; //numeric
    double height; //numeric
    double length; //numeric
    double width; //numeric
    char *store_id; // string
    char *lang_id; // string
    char *tax_class_id; // string
    char *backorder_status; // string
    char *visible; // string
    int is_default; //boolean
    int in_stock; //boolean
    int is_virtual; //boolean
    int downloadable; //boolean
    int manage_stock; //boolean
    int is_free_shipping; //boolean
    char *seo_url; // string
    char *meta_title; // string
    char *meta_description; // string
    list_t *meta_keywords; //primitive container
    list_t *categories_ids; //primitive container
    list_t *stores_ids; //primitive container
    list_t *images; //nonprimitive container
    list_t *product_images_ids; //primitive container
    list_t *related_products_ids; //primitive container
    list_t *up_sell_products_ids; //primitive container
    list_t *cross_sell_products_ids; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_update_batch_payload_inner_t;

__attribute__((deprecated)) product_variant_update_batch_payload_inner_t *product_variant_update_batch_payload_inner_create(
    char *id,
    char *product_id,
    char *name,
    char *description,
    char *short_description,
    char *sku,
    char *upc,
    char *mpn,
    char *gtin,
    char *isbn,
    char *status,
    double price,
    double special_price,
    double cost_price,
    double retail_price,
    list_t *advanced_prices,
    double quantity,
    double reserve_quantity,
    double increase_quantity,
    double reduce_quantity,
    char *warehouse_id,
    char *manufacturer_id,
    double weight,
    double height,
    double length,
    double width,
    char *store_id,
    char *lang_id,
    char *tax_class_id,
    char *backorder_status,
    char *visible,
    int is_default,
    int in_stock,
    int is_virtual,
    int downloadable,
    int manage_stock,
    int is_free_shipping,
    char *seo_url,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    list_t *categories_ids,
    list_t *stores_ids,
    list_t *images,
    list_t *product_images_ids,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids
);

void product_variant_update_batch_payload_inner_free(product_variant_update_batch_payload_inner_t *product_variant_update_batch_payload_inner);

product_variant_update_batch_payload_inner_t *product_variant_update_batch_payload_inner_parseFromJSON(cJSON *product_variant_update_batch_payload_innerJSON);

cJSON *product_variant_update_batch_payload_inner_convertToJSON(product_variant_update_batch_payload_inner_t *product_variant_update_batch_payload_inner);

#endif /* _product_variant_update_batch_payload_inner_H_ */

