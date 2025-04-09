/*
 * product_variant_update.h
 *
 * 
 */

#ifndef _product_variant_update_H_
#define _product_variant_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_update_t product_variant_update_t;

#include "product_variant_update_options_inner.h"



typedef struct product_variant_update_t {
    char *store_id; // string
    char *id; // string
    char *product_id; // string
    char *warehouse_id; // string
    double reserve_quantity; //numeric
    double quantity; //numeric
    double increase_quantity; //numeric
    double reduce_quantity; //numeric
    double price; //numeric
    double special_price; //numeric
    double retail_price; //numeric
    double old_price; //numeric
    double cost_price; //numeric
    double fixed_cost_shipping_price; //numeric
    char *sprice_create; // string
    char *sprice_expire; // string
    int manage_stock; //boolean
    int in_stock; //boolean
    char *name; // string
    char *description; // string
    char *sku; // string
    char *meta_title; // string
    char *meta_description; // string
    char *meta_keywords; // string
    char *short_description; // string
    char *visible; // string
    char *status; // string
    char *backorder_status; // string
    double weight; //numeric
    char *barcode; // string
    int reindex; //boolean
    int taxable; //boolean
    list_t *options; //nonprimitive container
    char *harmonized_system_code; // string
    char *country_of_origin; // string
    double width; //numeric
    char *weight_unit; // string
    double height; //numeric
    double length; //numeric
    char *gtin; // string
    int clear_cache; //boolean
    char *lang_id; // string
    char *model; // string
    int available_for_sale; //boolean
    char *upc; // string
    char *mpn; // string
    char *ean; // string
    char *isbn; // string
    int avail; //boolean
    int is_default; //boolean
    int is_free_shipping; //boolean
    char *tax_class_id; // string
    int is_virtual; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_update_t;

__attribute__((deprecated)) product_variant_update_t *product_variant_update_create(
    char *store_id,
    char *id,
    char *product_id,
    char *warehouse_id,
    double reserve_quantity,
    double quantity,
    double increase_quantity,
    double reduce_quantity,
    double price,
    double special_price,
    double retail_price,
    double old_price,
    double cost_price,
    double fixed_cost_shipping_price,
    char *sprice_create,
    char *sprice_expire,
    int manage_stock,
    int in_stock,
    char *name,
    char *description,
    char *sku,
    char *meta_title,
    char *meta_description,
    char *meta_keywords,
    char *short_description,
    char *visible,
    char *status,
    char *backorder_status,
    double weight,
    char *barcode,
    int reindex,
    int taxable,
    list_t *options,
    char *harmonized_system_code,
    char *country_of_origin,
    double width,
    char *weight_unit,
    double height,
    double length,
    char *gtin,
    int clear_cache,
    char *lang_id,
    char *model,
    int available_for_sale,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    int avail,
    int is_default,
    int is_free_shipping,
    char *tax_class_id,
    int is_virtual
);

void product_variant_update_free(product_variant_update_t *product_variant_update);

product_variant_update_t *product_variant_update_parseFromJSON(cJSON *product_variant_updateJSON);

cJSON *product_variant_update_convertToJSON(product_variant_update_t *product_variant_update);

#endif /* _product_variant_update_H_ */

