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
    char *name; // string
    char *model; // string
    char *sku; // string
    char *barcode; // string
    char *gtin; // string
    double price; //numeric
    double old_price; //numeric
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    list_t *attributes; //nonprimitive container
    char *description; // string
    double special_price; //numeric
    char *sprice_create; // string
    char *sprice_modified; // string
    char *sprice_expire; // string
    int available_for_view; //boolean
    int available_for_sale; //boolean
    double weight; //numeric
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *weight_unit; // string
    char *short_description; // string
    char *warehouse_id; // string
    double quantity; //numeric
    char *created_at; // string
    char *manufacturer; // string
    char *tax_class_id; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    char *url; // string
    char *store_id; // string
    char *lang_id; // string
    int clear_cache; //boolean
    int taxable; //boolean
    char *harmonized_system_code; // string
    char *country_of_origin; // string
    int manage_stock; //boolean
    char *upc; // string
    char *mpn; // string
    char *ean; // string
    char *isbn; // string
    char *stores_ids; // string
    int is_default; //boolean
    int is_free_shipping; //boolean
    char *marketplace_item_properties; // string
    int in_stock; //boolean
    char *backorder_status; // string
    list_t *tier_prices; //nonprimitive container
    int is_virtual; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_add_t;

__attribute__((deprecated)) product_variant_add_t *product_variant_add_create(
    char *product_id,
    char *name,
    char *model,
    char *sku,
    char *barcode,
    char *gtin,
    double price,
    double old_price,
    double cost_price,
    double fixed_cost_shipping_price,
    list_t *attributes,
    char *description,
    double special_price,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    int available_for_view,
    int available_for_sale,
    double weight,
    double width,
    double height,
    double length,
    char *weight_unit,
    char *short_description,
    char *warehouse_id,
    double quantity,
    char *created_at,
    char *manufacturer,
    char *tax_class_id,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *store_id,
    char *lang_id,
    int clear_cache,
    int taxable,
    char *harmonized_system_code,
    char *country_of_origin,
    int manage_stock,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *stores_ids,
    int is_default,
    int is_free_shipping,
    char *marketplace_item_properties,
    int in_stock,
    char *backorder_status,
    list_t *tier_prices,
    int is_virtual
);

void product_variant_add_free(product_variant_add_t *product_variant_add);

product_variant_add_t *product_variant_add_parseFromJSON(cJSON *product_variant_addJSON);

cJSON *product_variant_add_convertToJSON(product_variant_add_t *product_variant_add);

#endif /* _product_variant_add_H_ */

