#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_add.h"



static product_variant_add_t *product_variant_add_create_internal(
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
    ) {
    product_variant_add_t *product_variant_add_local_var = malloc(sizeof(product_variant_add_t));
    if (!product_variant_add_local_var) {
        return NULL;
    }
    product_variant_add_local_var->product_id = product_id;
    product_variant_add_local_var->attributes = attributes;
    product_variant_add_local_var->name = name;
    product_variant_add_local_var->model = model;
    product_variant_add_local_var->description = description;
    product_variant_add_local_var->short_description = short_description;
    product_variant_add_local_var->available_for_view = available_for_view;
    product_variant_add_local_var->available_for_sale = available_for_sale;
    product_variant_add_local_var->is_virtual = is_virtual;
    product_variant_add_local_var->is_default = is_default;
    product_variant_add_local_var->store_id = store_id;
    product_variant_add_local_var->stores_ids = stores_ids;
    product_variant_add_local_var->lang_id = lang_id;
    product_variant_add_local_var->price = price;
    product_variant_add_local_var->old_price = old_price;
    product_variant_add_local_var->cost_price = cost_price;
    product_variant_add_local_var->special_price = special_price;
    product_variant_add_local_var->sprice_create = sprice_create;
    product_variant_add_local_var->sprice_modified = sprice_modified;
    product_variant_add_local_var->sprice_expire = sprice_expire;
    product_variant_add_local_var->tier_prices = tier_prices;
    product_variant_add_local_var->quantity = quantity;
    product_variant_add_local_var->warehouse_id = warehouse_id;
    product_variant_add_local_var->in_stock = in_stock;
    product_variant_add_local_var->backorder_status = backorder_status;
    product_variant_add_local_var->manage_stock = manage_stock;
    product_variant_add_local_var->weight = weight;
    product_variant_add_local_var->width = width;
    product_variant_add_local_var->height = height;
    product_variant_add_local_var->length = length;
    product_variant_add_local_var->weight_unit = weight_unit;
    product_variant_add_local_var->sku = sku;
    product_variant_add_local_var->barcode = barcode;
    product_variant_add_local_var->gtin = gtin;
    product_variant_add_local_var->upc = upc;
    product_variant_add_local_var->ean = ean;
    product_variant_add_local_var->mpn = mpn;
    product_variant_add_local_var->isbn = isbn;
    product_variant_add_local_var->manufacturer = manufacturer;
    product_variant_add_local_var->created_at = created_at;
    product_variant_add_local_var->meta_title = meta_title;
    product_variant_add_local_var->meta_keywords = meta_keywords;
    product_variant_add_local_var->meta_description = meta_description;
    product_variant_add_local_var->url = url;
    product_variant_add_local_var->tax_class_id = tax_class_id;
    product_variant_add_local_var->taxable = taxable;
    product_variant_add_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_variant_add_local_var->is_free_shipping = is_free_shipping;
    product_variant_add_local_var->country_of_origin = country_of_origin;
    product_variant_add_local_var->harmonized_system_code = harmonized_system_code;
    product_variant_add_local_var->marketplace_item_properties = marketplace_item_properties;
    product_variant_add_local_var->clear_cache = clear_cache;

    product_variant_add_local_var->_library_owned = 1;
    return product_variant_add_local_var;
}

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
    ) {
    return product_variant_add_create_internal (
        product_id,
        attributes,
        name,
        model,
        description,
        short_description,
        available_for_view,
        available_for_sale,
        is_virtual,
        is_default,
        store_id,
        stores_ids,
        lang_id,
        price,
        old_price,
        cost_price,
        special_price,
        sprice_create,
        sprice_modified,
        sprice_expire,
        tier_prices,
        quantity,
        warehouse_id,
        in_stock,
        backorder_status,
        manage_stock,
        weight,
        width,
        height,
        length,
        weight_unit,
        sku,
        barcode,
        gtin,
        upc,
        ean,
        mpn,
        isbn,
        manufacturer,
        created_at,
        meta_title,
        meta_keywords,
        meta_description,
        url,
        tax_class_id,
        taxable,
        fixed_cost_shipping_price,
        is_free_shipping,
        country_of_origin,
        harmonized_system_code,
        marketplace_item_properties,
        clear_cache
        );
}

void product_variant_add_free(product_variant_add_t *product_variant_add) {
    if(NULL == product_variant_add){
        return ;
    }
    if(product_variant_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_add->product_id) {
        free(product_variant_add->product_id);
        product_variant_add->product_id = NULL;
    }
    if (product_variant_add->attributes) {
        list_ForEach(listEntry, product_variant_add->attributes) {
            product_variant_add_attributes_inner_free(listEntry->data);
        }
        list_freeList(product_variant_add->attributes);
        product_variant_add->attributes = NULL;
    }
    if (product_variant_add->name) {
        free(product_variant_add->name);
        product_variant_add->name = NULL;
    }
    if (product_variant_add->model) {
        free(product_variant_add->model);
        product_variant_add->model = NULL;
    }
    if (product_variant_add->description) {
        free(product_variant_add->description);
        product_variant_add->description = NULL;
    }
    if (product_variant_add->short_description) {
        free(product_variant_add->short_description);
        product_variant_add->short_description = NULL;
    }
    if (product_variant_add->store_id) {
        free(product_variant_add->store_id);
        product_variant_add->store_id = NULL;
    }
    if (product_variant_add->stores_ids) {
        free(product_variant_add->stores_ids);
        product_variant_add->stores_ids = NULL;
    }
    if (product_variant_add->lang_id) {
        free(product_variant_add->lang_id);
        product_variant_add->lang_id = NULL;
    }
    if (product_variant_add->sprice_create) {
        free(product_variant_add->sprice_create);
        product_variant_add->sprice_create = NULL;
    }
    if (product_variant_add->sprice_modified) {
        free(product_variant_add->sprice_modified);
        product_variant_add->sprice_modified = NULL;
    }
    if (product_variant_add->sprice_expire) {
        free(product_variant_add->sprice_expire);
        product_variant_add->sprice_expire = NULL;
    }
    if (product_variant_add->tier_prices) {
        list_ForEach(listEntry, product_variant_add->tier_prices) {
            product_add_tier_prices_inner_free(listEntry->data);
        }
        list_freeList(product_variant_add->tier_prices);
        product_variant_add->tier_prices = NULL;
    }
    if (product_variant_add->warehouse_id) {
        free(product_variant_add->warehouse_id);
        product_variant_add->warehouse_id = NULL;
    }
    if (product_variant_add->backorder_status) {
        free(product_variant_add->backorder_status);
        product_variant_add->backorder_status = NULL;
    }
    if (product_variant_add->weight_unit) {
        free(product_variant_add->weight_unit);
        product_variant_add->weight_unit = NULL;
    }
    if (product_variant_add->sku) {
        free(product_variant_add->sku);
        product_variant_add->sku = NULL;
    }
    if (product_variant_add->barcode) {
        free(product_variant_add->barcode);
        product_variant_add->barcode = NULL;
    }
    if (product_variant_add->gtin) {
        free(product_variant_add->gtin);
        product_variant_add->gtin = NULL;
    }
    if (product_variant_add->upc) {
        free(product_variant_add->upc);
        product_variant_add->upc = NULL;
    }
    if (product_variant_add->ean) {
        free(product_variant_add->ean);
        product_variant_add->ean = NULL;
    }
    if (product_variant_add->mpn) {
        free(product_variant_add->mpn);
        product_variant_add->mpn = NULL;
    }
    if (product_variant_add->isbn) {
        free(product_variant_add->isbn);
        product_variant_add->isbn = NULL;
    }
    if (product_variant_add->manufacturer) {
        free(product_variant_add->manufacturer);
        product_variant_add->manufacturer = NULL;
    }
    if (product_variant_add->created_at) {
        free(product_variant_add->created_at);
        product_variant_add->created_at = NULL;
    }
    if (product_variant_add->meta_title) {
        free(product_variant_add->meta_title);
        product_variant_add->meta_title = NULL;
    }
    if (product_variant_add->meta_keywords) {
        free(product_variant_add->meta_keywords);
        product_variant_add->meta_keywords = NULL;
    }
    if (product_variant_add->meta_description) {
        free(product_variant_add->meta_description);
        product_variant_add->meta_description = NULL;
    }
    if (product_variant_add->url) {
        free(product_variant_add->url);
        product_variant_add->url = NULL;
    }
    if (product_variant_add->tax_class_id) {
        free(product_variant_add->tax_class_id);
        product_variant_add->tax_class_id = NULL;
    }
    if (product_variant_add->country_of_origin) {
        free(product_variant_add->country_of_origin);
        product_variant_add->country_of_origin = NULL;
    }
    if (product_variant_add->harmonized_system_code) {
        free(product_variant_add->harmonized_system_code);
        product_variant_add->harmonized_system_code = NULL;
    }
    if (product_variant_add->marketplace_item_properties) {
        free(product_variant_add->marketplace_item_properties);
        product_variant_add->marketplace_item_properties = NULL;
    }
    free(product_variant_add);
}

cJSON *product_variant_add_convertToJSON(product_variant_add_t *product_variant_add) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_add->product_id
    if(product_variant_add->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_variant_add->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->attributes
    if(product_variant_add->attributes) {
    cJSON *attributes = cJSON_AddArrayToObject(item, "attributes");
    if(attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *attributesListEntry;
    if (product_variant_add->attributes) {
    list_ForEach(attributesListEntry, product_variant_add->attributes) {
    cJSON *itemLocal = product_variant_add_attributes_inner_convertToJSON(attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(attributes, itemLocal);
    }
    }
    }


    // product_variant_add->name
    if(product_variant_add->name) {
    if(cJSON_AddStringToObject(item, "name", product_variant_add->name) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->model
    if (!product_variant_add->model) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "model", product_variant_add->model) == NULL) {
    goto fail; //String
    }


    // product_variant_add->description
    if(product_variant_add->description) {
    if(cJSON_AddStringToObject(item, "description", product_variant_add->description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->short_description
    if(product_variant_add->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_variant_add->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->available_for_view
    if(product_variant_add->available_for_view) {
    if(cJSON_AddBoolToObject(item, "available_for_view", product_variant_add->available_for_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->available_for_sale
    if(product_variant_add->available_for_sale) {
    if(cJSON_AddBoolToObject(item, "available_for_sale", product_variant_add->available_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->is_virtual
    if(product_variant_add->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_variant_add->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->is_default
    if(product_variant_add->is_default) {
    if(cJSON_AddBoolToObject(item, "is_default", product_variant_add->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->store_id
    if(product_variant_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_variant_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->stores_ids
    if(product_variant_add->stores_ids) {
    if(cJSON_AddStringToObject(item, "stores_ids", product_variant_add->stores_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->lang_id
    if(product_variant_add->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_variant_add->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->price
    if(product_variant_add->price) {
    if(cJSON_AddNumberToObject(item, "price", product_variant_add->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->old_price
    if(product_variant_add->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_variant_add->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->cost_price
    if(product_variant_add->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_variant_add->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->special_price
    if(product_variant_add->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_variant_add->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->sprice_create
    if(product_variant_add->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_variant_add->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->sprice_modified
    if(product_variant_add->sprice_modified) {
    if(cJSON_AddStringToObject(item, "sprice_modified", product_variant_add->sprice_modified) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->sprice_expire
    if(product_variant_add->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_variant_add->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->tier_prices
    if(product_variant_add->tier_prices) {
    cJSON *tier_prices = cJSON_AddArrayToObject(item, "tier_prices");
    if(tier_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tier_pricesListEntry;
    if (product_variant_add->tier_prices) {
    list_ForEach(tier_pricesListEntry, product_variant_add->tier_prices) {
    cJSON *itemLocal = product_add_tier_prices_inner_convertToJSON(tier_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tier_prices, itemLocal);
    }
    }
    }


    // product_variant_add->quantity
    if(product_variant_add->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_variant_add->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->warehouse_id
    if(product_variant_add->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_variant_add->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->in_stock
    if(product_variant_add->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_variant_add->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->backorder_status
    if(product_variant_add->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_variant_add->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->manage_stock
    if(product_variant_add->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_variant_add->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->weight
    if(product_variant_add->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_variant_add->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->width
    if(product_variant_add->width) {
    if(cJSON_AddNumberToObject(item, "width", product_variant_add->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->height
    if(product_variant_add->height) {
    if(cJSON_AddNumberToObject(item, "height", product_variant_add->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->length
    if(product_variant_add->length) {
    if(cJSON_AddNumberToObject(item, "length", product_variant_add->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->weight_unit
    if(product_variant_add->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_variant_add->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->sku
    if(product_variant_add->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_variant_add->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->barcode
    if(product_variant_add->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_variant_add->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->gtin
    if(product_variant_add->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_variant_add->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->upc
    if(product_variant_add->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_variant_add->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->ean
    if(product_variant_add->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_variant_add->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->mpn
    if(product_variant_add->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_variant_add->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->isbn
    if(product_variant_add->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", product_variant_add->isbn) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->manufacturer
    if(product_variant_add->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", product_variant_add->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->created_at
    if(product_variant_add->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", product_variant_add->created_at) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->meta_title
    if(product_variant_add->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_variant_add->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->meta_keywords
    if(product_variant_add->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", product_variant_add->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->meta_description
    if(product_variant_add->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_variant_add->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->url
    if(product_variant_add->url) {
    if(cJSON_AddStringToObject(item, "url", product_variant_add->url) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->tax_class_id
    if(product_variant_add->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_variant_add->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->taxable
    if(product_variant_add->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_variant_add->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->fixed_cost_shipping_price
    if(product_variant_add->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_variant_add->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_add->is_free_shipping
    if(product_variant_add->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_variant_add->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_add->country_of_origin
    if(product_variant_add->country_of_origin) {
    if(cJSON_AddStringToObject(item, "country_of_origin", product_variant_add->country_of_origin) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->harmonized_system_code
    if(product_variant_add->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_variant_add->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->marketplace_item_properties
    if(product_variant_add->marketplace_item_properties) {
    if(cJSON_AddStringToObject(item, "marketplace_item_properties", product_variant_add->marketplace_item_properties) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_add->clear_cache
    if(product_variant_add->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_variant_add->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_variant_add_t *product_variant_add_parseFromJSON(cJSON *product_variant_addJSON){

    product_variant_add_t *product_variant_add_local_var = NULL;

    // define the local list for product_variant_add->attributes
    list_t *attributesList = NULL;

    // define the local list for product_variant_add->tier_prices
    list_t *tier_pricesList = NULL;

    // product_variant_add->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_variant_add->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "attributes");
    if (cJSON_IsNull(attributes)) {
        attributes = NULL;
    }
    if (attributes) { 
    cJSON *attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(attributes)){
        goto end; //nonprimitive container
    }

    attributesList = list_createList();

    cJSON_ArrayForEach(attributes_local_nonprimitive,attributes )
    {
        if(!cJSON_IsObject(attributes_local_nonprimitive)){
            goto end;
        }
        product_variant_add_attributes_inner_t *attributesItem = product_variant_add_attributes_inner_parseFromJSON(attributes_local_nonprimitive);

        list_addElement(attributesList, attributesItem);
    }
    }

    // product_variant_add->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_variant_add->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (!model) {
        goto end;
    }

    
    if(!cJSON_IsString(model))
    {
    goto end; //String
    }

    // product_variant_add->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_variant_add->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_variant_add->available_for_view
    cJSON *available_for_view = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "available_for_view");
    if (cJSON_IsNull(available_for_view)) {
        available_for_view = NULL;
    }
    if (available_for_view) { 
    if(!cJSON_IsBool(available_for_view))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->available_for_sale
    cJSON *available_for_sale = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "available_for_sale");
    if (cJSON_IsNull(available_for_sale)) {
        available_for_sale = NULL;
    }
    if (available_for_sale) { 
    if(!cJSON_IsBool(available_for_sale))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "is_default");
    if (cJSON_IsNull(is_default)) {
        is_default = NULL;
    }
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_variant_add->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    if(!cJSON_IsString(stores_ids) && !cJSON_IsNull(stores_ids))
    {
    goto end; //String
    }
    }

    // product_variant_add->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_variant_add->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_variant_add->sprice_modified
    cJSON *sprice_modified = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "sprice_modified");
    if (cJSON_IsNull(sprice_modified)) {
        sprice_modified = NULL;
    }
    if (sprice_modified) { 
    if(!cJSON_IsString(sprice_modified) && !cJSON_IsNull(sprice_modified))
    {
    goto end; //String
    }
    }

    // product_variant_add->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_variant_add->tier_prices
    cJSON *tier_prices = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "tier_prices");
    if (cJSON_IsNull(tier_prices)) {
        tier_prices = NULL;
    }
    if (tier_prices) { 
    cJSON *tier_prices_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tier_prices)){
        goto end; //nonprimitive container
    }

    tier_pricesList = list_createList();

    cJSON_ArrayForEach(tier_prices_local_nonprimitive,tier_prices )
    {
        if(!cJSON_IsObject(tier_prices_local_nonprimitive)){
            goto end;
        }
        product_add_tier_prices_inner_t *tier_pricesItem = product_add_tier_prices_inner_parseFromJSON(tier_prices_local_nonprimitive);

        list_addElement(tier_pricesList, tier_pricesItem);
    }
    }

    // product_variant_add->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_variant_add->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_variant_add->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_variant_add->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_variant_add->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_variant_add->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_variant_add->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_variant_add->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_variant_add->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_variant_add->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // product_variant_add->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // product_variant_add->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at) && !cJSON_IsNull(created_at))
    {
    goto end; //String
    }
    }

    // product_variant_add->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_variant_add->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // product_variant_add->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_variant_add->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product_variant_add->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_variant_add->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_add->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_variant_add->country_of_origin
    cJSON *country_of_origin = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "country_of_origin");
    if (cJSON_IsNull(country_of_origin)) {
        country_of_origin = NULL;
    }
    if (country_of_origin) { 
    if(!cJSON_IsString(country_of_origin) && !cJSON_IsNull(country_of_origin))
    {
    goto end; //String
    }
    }

    // product_variant_add->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }

    // product_variant_add->marketplace_item_properties
    cJSON *marketplace_item_properties = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "marketplace_item_properties");
    if (cJSON_IsNull(marketplace_item_properties)) {
        marketplace_item_properties = NULL;
    }
    if (marketplace_item_properties) { 
    if(!cJSON_IsString(marketplace_item_properties) && !cJSON_IsNull(marketplace_item_properties))
    {
    goto end; //String
    }
    }

    // product_variant_add->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_variant_addJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }


    product_variant_add_local_var = product_variant_add_create_internal (
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        attributes ? attributesList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        strdup(model->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        available_for_view ? available_for_view->valueint : 0,
        available_for_sale ? available_for_sale->valueint : 0,
        is_virtual ? is_virtual->valueint : 0,
        is_default ? is_default->valueint : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        stores_ids && !cJSON_IsNull(stores_ids) ? strdup(stores_ids->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        old_price ? old_price->valuedouble : 0,
        cost_price ? cost_price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_modified && !cJSON_IsNull(sprice_modified) ? strdup(sprice_modified->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        tier_prices ? tier_pricesList : NULL,
        quantity ? quantity->valuedouble : 0,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        in_stock ? in_stock->valueint : 0,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        manage_stock ? manage_stock->valueint : 0,
        weight ? weight->valuedouble : 0,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        created_at && !cJSON_IsNull(created_at) ? strdup(created_at->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        taxable ? taxable->valueint : 0,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        is_free_shipping ? is_free_shipping->valueint : 0,
        country_of_origin && !cJSON_IsNull(country_of_origin) ? strdup(country_of_origin->valuestring) : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL,
        marketplace_item_properties && !cJSON_IsNull(marketplace_item_properties) ? strdup(marketplace_item_properties->valuestring) : NULL,
        clear_cache ? clear_cache->valueint : 0
        );

    return product_variant_add_local_var;
end:
    if (attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attributesList) {
            product_variant_add_attributes_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attributesList);
        attributesList = NULL;
    }
    if (tier_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tier_pricesList) {
            product_add_tier_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tier_pricesList);
        tier_pricesList = NULL;
    }
    return NULL;

}
