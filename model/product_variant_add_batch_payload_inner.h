/*
 * product_variant_add_batch_payload_inner.h
 *
 * 
 */

#ifndef _product_variant_add_batch_payload_inner_H_
#define _product_variant_add_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_add_batch_payload_inner_t product_variant_add_batch_payload_inner_t;

#include "object.h"
#include "product_add_batch_payload_inner_images_inner.h"
#include "product_update_batch_payload_inner_advanced_prices_inner.h"
#include "product_variant_add_batch_payload_inner_combination_inner.h"



typedef struct product_variant_add_batch_payload_inner_t {
    char *product_id; // string
    list_t *combination; //nonprimitive container
    char *name; // string
    char *description; // string
    char *short_description; // string
    char *sku; // string
    char *model; // string
    double price; //numeric
    double old_price; //numeric
    double cost_price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    list_t *advanced_prices; //nonprimitive container
    double meta_title; //numeric
    double meta_description; //numeric
    list_t *meta_keywords; //primitive container
    list_t *categories_ids; //primitive container
    list_t *stores_ids; //primitive container
    double weight; //numeric
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *weight_unit; // string
    char *warehouse_id; // string
    double quantity; //numeric
    int manage_stock; //boolean
    int in_stock; //boolean
    char *store_id; // string
    char *lang_id; // string
    char *tax_class_id; // string
    char *backorder_status; // string
    char *status; // string
    char *visible; // string
    int is_virtual; //boolean
    int downloadable; //boolean
    int is_default; //boolean
    char *upc; // string
    char *isbn; // string
    char *mpn; // string
    char *ean; // string
    char *barcode; // string
    int available_for_sale; //boolean
    int is_free_shipping; //boolean
    int taxable; //boolean
    char *seo_url; // string
    char *manufacturer_id; // string
    char *harmonized_system_code; // string
    object_t *marketplace_item_properties; //object
    list_t *images; //nonprimitive container
    list_t *product_images_ids; //primitive container
    list_t *related_products_ids; //primitive container
    list_t *up_sell_products_ids; //primitive container
    list_t *cross_sell_products_ids; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_batch_payload_inner_t;

__attribute__((deprecated)) product_variant_add_batch_payload_inner_t *product_variant_add_batch_payload_inner_create(
    char *product_id,
    list_t *combination,
    char *name,
    char *description,
    char *short_description,
    char *sku,
    char *model,
    double price,
    double old_price,
    double cost_price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    list_t *advanced_prices,
    double meta_title,
    double meta_description,
    list_t *meta_keywords,
    list_t *categories_ids,
    list_t *stores_ids,
    double weight,
    double width,
    double height,
    double length,
    char *weight_unit,
    char *warehouse_id,
    double quantity,
    int manage_stock,
    int in_stock,
    char *store_id,
    char *lang_id,
    char *tax_class_id,
    char *backorder_status,
    char *status,
    char *visible,
    int is_virtual,
    int downloadable,
    int is_default,
    char *upc,
    char *isbn,
    char *mpn,
    char *ean,
    char *barcode,
    int available_for_sale,
    int is_free_shipping,
    int taxable,
    char *seo_url,
    char *manufacturer_id,
    char *harmonized_system_code,
    object_t *marketplace_item_properties,
    list_t *images,
    list_t *product_images_ids,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids
);

void product_variant_add_batch_payload_inner_free(product_variant_add_batch_payload_inner_t *product_variant_add_batch_payload_inner);

product_variant_add_batch_payload_inner_t *product_variant_add_batch_payload_inner_parseFromJSON(cJSON *product_variant_add_batch_payload_innerJSON);

cJSON *product_variant_add_batch_payload_inner_convertToJSON(product_variant_add_batch_payload_inner_t *product_variant_add_batch_payload_inner);

#endif /* _product_variant_add_batch_payload_inner_H_ */

