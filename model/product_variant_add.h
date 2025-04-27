/*
 * product_variant_add.h
 *
 * 
 */

#ifndef _product_variant_add_H_
#define _product_variant_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_add_t product_variant_add_t;

#include "product_add_tier_prices_inner.h"
#include "product_variant_add_attributes_inner.h"



typedef struct product_variant_add_t {
    char *product_id; // string
    list_t *attributes; //nonprimitive container
    char *name; // string
    char *model; // string
    char *description; // string
    char *short_description; // string
    int available_for_view; //boolean
    int available_for_sale; //boolean
    int is_virtual; //boolean
    int is_default; //boolean
    char *store_id; // string
    char *stores_ids; // string
    char *lang_id; // string
    double price; //numeric
    double old_price; //numeric
    double cost_price; //numeric
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_modified; // string
    char *sprice_expire; // string
    list_t *tier_prices; //nonprimitive container
    double quantity; //numeric
    char *warehouse_id; // string
    int in_stock; //boolean
    char *backorder_status; // string
    int manage_stock; //boolean
    double weight; //numeric
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *weight_unit; // string
    char *sku; // string
    char *barcode; // string
    char *gtin; // string
    char *upc; // string
    char *ean; // string
    char *mpn; // string
    char *isbn; // string
    char *manufacturer; // string
    char *created_at; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *url; // string
    char *tax_class_id; // string
    int taxable; //boolean
    double fixed_cost_shipping_price; //numeric
    int is_free_shipping; //boolean
    char *country_of_origin; // string
    char *harmonized_system_code; // string
    char *marketplace_item_properties; // string
    int clear_cache; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_t;

__attribute__((deprecated)) product_variant_add_t *product_variant_add_create(
    char *product_id,
    list_t *attributes,
    char *name,
    char *model,
    char *description,
    char *short_description,
    int available_for_view,
    int available_for_sale,
    int is_virtual,
    int is_default,
    char *store_id,
    char *stores_ids,
    char *lang_id,
    double price,
    double old_price,
    double cost_price,
    double special_price,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    list_t *tier_prices,
    double quantity,
    char *warehouse_id,
    int in_stock,
    char *backorder_status,
    int manage_stock,
    double weight,
    double width,
    double height,
    double length,
    char *weight_unit,
    char *sku,
    char *barcode,
    char *gtin,
    char *upc,
    char *ean,
    char *mpn,
    char *isbn,
    char *manufacturer,
    char *created_at,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *tax_class_id,
    int taxable,
    double fixed_cost_shipping_price,
    int is_free_shipping,
    char *country_of_origin,
    char *harmonized_system_code,
    char *marketplace_item_properties,
    int clear_cache
);

void product_variant_add_free(product_variant_add_t *product_variant_add);

product_variant_add_t *product_variant_add_parseFromJSON(cJSON *product_variant_addJSON);

cJSON *product_variant_add_convertToJSON(product_variant_add_t *product_variant_add);

#endif /* _product_variant_add_H_ */

