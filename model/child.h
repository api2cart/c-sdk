/*
 * child.h
 *
 * 
 */

#ifndef _child_H_
#define _child_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct child_t child_t;

#include "a2_c_date_time.h"
#include "discount.h"
#include "image.h"
#include "object.h"
#include "product_advanced_price.h"
#include "product_child_item_combination.h"
#include "product_inventory.h"



typedef struct child_t {
    char *id; // string
    char *parent_id; // string
    char *sku; // string
    char *upc; // string
    char *ean; // string
    char *mpn; // string
    char *gtin; // string
    char *isbn; // string
    char *url; // string
    char *seo_url; // string
    int sort_order; //numeric
    struct a2_c_date_time_t *created_time; //model
    struct a2_c_date_time_t *modified_time; //model
    char *name; // string
    char *short_description; // string
    char *full_description; // string
    list_t *images; //nonprimitive container
    list_t *combination; //nonprimitive container
    double default_price; //numeric
    double cost_price; //numeric
    double list_price; //numeric
    double wholesale_price; //numeric
    list_t *advanced_price; //nonprimitive container
    char *tax_class_id; // string
    int avail_for_sale; //boolean
    int allow_backorders; //boolean
    int in_stock; //boolean
    int on_sale; //boolean
    int manage_stock; //boolean
    double inventory_level; //numeric
    list_t *inventory; //nonprimitive container
    double min_quantity; //numeric
    double low_stock_threshold; //numeric
    double default_qty_in_pack; //numeric
    int is_qty_in_pack_fixed; //boolean
    char *weight_unit; // string
    double weight; //numeric
    char *dimensions_unit; // string
    double width; //numeric
    double height; //numeric
    double length; //numeric
    char *meta_title; // string
    char *meta_description; // string
    char *meta_keywords; // string
    list_t *discounts; //nonprimitive container
    int is_virtual; //boolean
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} child_t;

__attribute__((deprecated)) child_t *child_create(
    char *id,
    char *parent_id,
    char *sku,
    char *upc,
    char *ean,
    char *mpn,
    char *gtin,
    char *isbn,
    char *url,
    char *seo_url,
    int sort_order,
    a2_c_date_time_t *created_time,
    a2_c_date_time_t *modified_time,
    char *name,
    char *short_description,
    char *full_description,
    list_t *images,
    list_t *combination,
    double default_price,
    double cost_price,
    double list_price,
    double wholesale_price,
    list_t *advanced_price,
    char *tax_class_id,
    int avail_for_sale,
    int allow_backorders,
    int in_stock,
    int on_sale,
    int manage_stock,
    double inventory_level,
    list_t *inventory,
    double min_quantity,
    double low_stock_threshold,
    double default_qty_in_pack,
    int is_qty_in_pack_fixed,
    char *weight_unit,
    double weight,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    char *meta_title,
    char *meta_description,
    char *meta_keywords,
    list_t *discounts,
    int is_virtual,
    object_t *additional_fields,
    object_t *custom_fields
);

void child_free(child_t *child);

child_t *child_parseFromJSON(cJSON *childJSON);

cJSON *child_convertToJSON(child_t *child);

#endif /* _child_H_ */

