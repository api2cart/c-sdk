#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add_batch_payload_inner.h"



static product_add_batch_payload_inner_t *product_add_batch_payload_inner_create_internal(
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
    char *manufacturer,
    char *manufacturer_id,
    char *backorder_status,
    list_t *images,
    list_t *tags,
    list_t *files
    ) {
    product_add_batch_payload_inner_t *product_add_batch_payload_inner_local_var = malloc(sizeof(product_add_batch_payload_inner_t));
    if (!product_add_batch_payload_inner_local_var) {
        return NULL;
    }
    product_add_batch_payload_inner_local_var->name = name;
    product_add_batch_payload_inner_local_var->description = description;
    product_add_batch_payload_inner_local_var->short_description = short_description;
    product_add_batch_payload_inner_local_var->sku = sku;
    product_add_batch_payload_inner_local_var->model = model;
    product_add_batch_payload_inner_local_var->asin = asin;
    product_add_batch_payload_inner_local_var->upc = upc;
    product_add_batch_payload_inner_local_var->ean = ean;
    product_add_batch_payload_inner_local_var->gtin = gtin;
    product_add_batch_payload_inner_local_var->mpn = mpn;
    product_add_batch_payload_inner_local_var->barcode = barcode;
    product_add_batch_payload_inner_local_var->price = price;
    product_add_batch_payload_inner_local_var->old_price = old_price;
    product_add_batch_payload_inner_local_var->cost_price = cost_price;
    product_add_batch_payload_inner_local_var->special_price = special_price;
    product_add_batch_payload_inner_local_var->sprice_create = sprice_create;
    product_add_batch_payload_inner_local_var->sprice_expire = sprice_expire;
    product_add_batch_payload_inner_local_var->advanced_prices = advanced_prices;
    product_add_batch_payload_inner_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_add_batch_payload_inner_local_var->quantity = quantity;
    product_add_batch_payload_inner_local_var->manage_stock = manage_stock;
    product_add_batch_payload_inner_local_var->product_type = product_type;
    product_add_batch_payload_inner_local_var->marketplace_item_properties = marketplace_item_properties;
    product_add_batch_payload_inner_local_var->is_free_shipping = is_free_shipping;
    product_add_batch_payload_inner_local_var->taxable = taxable;
    product_add_batch_payload_inner_local_var->status = status;
    product_add_batch_payload_inner_local_var->condition = condition;
    product_add_batch_payload_inner_local_var->visible = visible;
    product_add_batch_payload_inner_local_var->available_for_view = available_for_view;
    product_add_batch_payload_inner_local_var->available_for_sale = available_for_sale;
    product_add_batch_payload_inner_local_var->is_virtual = is_virtual;
    product_add_batch_payload_inner_local_var->in_stock = in_stock;
    product_add_batch_payload_inner_local_var->type = type;
    product_add_batch_payload_inner_local_var->downloadable = downloadable;
    product_add_batch_payload_inner_local_var->weight = weight;
    product_add_batch_payload_inner_local_var->length = length;
    product_add_batch_payload_inner_local_var->width = width;
    product_add_batch_payload_inner_local_var->height = height;
    product_add_batch_payload_inner_local_var->weight_unit = weight_unit;
    product_add_batch_payload_inner_local_var->dimensions_unit = dimensions_unit;
    product_add_batch_payload_inner_local_var->store_id = store_id;
    product_add_batch_payload_inner_local_var->lang_id = lang_id;
    product_add_batch_payload_inner_local_var->category_id = category_id;
    product_add_batch_payload_inner_local_var->warehouse_id = warehouse_id;
    product_add_batch_payload_inner_local_var->categories_ids = categories_ids;
    product_add_batch_payload_inner_local_var->related_products_ids = related_products_ids;
    product_add_batch_payload_inner_local_var->up_sell_products_ids = up_sell_products_ids;
    product_add_batch_payload_inner_local_var->cross_sell_products_ids = cross_sell_products_ids;
    product_add_batch_payload_inner_local_var->stores_ids = stores_ids;
    product_add_batch_payload_inner_local_var->tax_class_id = tax_class_id;
    product_add_batch_payload_inner_local_var->meta_title = meta_title;
    product_add_batch_payload_inner_local_var->meta_description = meta_description;
    product_add_batch_payload_inner_local_var->meta_keywords = meta_keywords;
    product_add_batch_payload_inner_local_var->search_keywords = search_keywords;
    product_add_batch_payload_inner_local_var->harmonized_system_code = harmonized_system_code;
    product_add_batch_payload_inner_local_var->url = url;
    product_add_batch_payload_inner_local_var->seo_url = seo_url;
    product_add_batch_payload_inner_local_var->manufacturer = manufacturer;
    product_add_batch_payload_inner_local_var->manufacturer_id = manufacturer_id;
    product_add_batch_payload_inner_local_var->backorder_status = backorder_status;
    product_add_batch_payload_inner_local_var->images = images;
    product_add_batch_payload_inner_local_var->tags = tags;
    product_add_batch_payload_inner_local_var->files = files;

    product_add_batch_payload_inner_local_var->_library_owned = 1;
    return product_add_batch_payload_inner_local_var;
}

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
    char *manufacturer,
    char *manufacturer_id,
    char *backorder_status,
    list_t *images,
    list_t *tags,
    list_t *files
    ) {
    return product_add_batch_payload_inner_create_internal (
        name,
        description,
        short_description,
        sku,
        model,
        asin,
        upc,
        ean,
        gtin,
        mpn,
        barcode,
        price,
        old_price,
        cost_price,
        special_price,
        sprice_create,
        sprice_expire,
        advanced_prices,
        fixed_cost_shipping_price,
        quantity,
        manage_stock,
        product_type,
        marketplace_item_properties,
        is_free_shipping,
        taxable,
        status,
        condition,
        visible,
        available_for_view,
        available_for_sale,
        is_virtual,
        in_stock,
        type,
        downloadable,
        weight,
        length,
        width,
        height,
        weight_unit,
        dimensions_unit,
        store_id,
        lang_id,
        category_id,
        warehouse_id,
        categories_ids,
        related_products_ids,
        up_sell_products_ids,
        cross_sell_products_ids,
        stores_ids,
        tax_class_id,
        meta_title,
        meta_description,
        meta_keywords,
        search_keywords,
        harmonized_system_code,
        url,
        seo_url,
        manufacturer,
        manufacturer_id,
        backorder_status,
        images,
        tags,
        files
        );
}

void product_add_batch_payload_inner_free(product_add_batch_payload_inner_t *product_add_batch_payload_inner) {
    if(NULL == product_add_batch_payload_inner){
        return ;
    }
    if(product_add_batch_payload_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_batch_payload_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add_batch_payload_inner->name) {
        free(product_add_batch_payload_inner->name);
        product_add_batch_payload_inner->name = NULL;
    }
    if (product_add_batch_payload_inner->description) {
        free(product_add_batch_payload_inner->description);
        product_add_batch_payload_inner->description = NULL;
    }
    if (product_add_batch_payload_inner->short_description) {
        free(product_add_batch_payload_inner->short_description);
        product_add_batch_payload_inner->short_description = NULL;
    }
    if (product_add_batch_payload_inner->sku) {
        free(product_add_batch_payload_inner->sku);
        product_add_batch_payload_inner->sku = NULL;
    }
    if (product_add_batch_payload_inner->model) {
        free(product_add_batch_payload_inner->model);
        product_add_batch_payload_inner->model = NULL;
    }
    if (product_add_batch_payload_inner->asin) {
        free(product_add_batch_payload_inner->asin);
        product_add_batch_payload_inner->asin = NULL;
    }
    if (product_add_batch_payload_inner->upc) {
        free(product_add_batch_payload_inner->upc);
        product_add_batch_payload_inner->upc = NULL;
    }
    if (product_add_batch_payload_inner->ean) {
        free(product_add_batch_payload_inner->ean);
        product_add_batch_payload_inner->ean = NULL;
    }
    if (product_add_batch_payload_inner->gtin) {
        free(product_add_batch_payload_inner->gtin);
        product_add_batch_payload_inner->gtin = NULL;
    }
    if (product_add_batch_payload_inner->mpn) {
        free(product_add_batch_payload_inner->mpn);
        product_add_batch_payload_inner->mpn = NULL;
    }
    if (product_add_batch_payload_inner->barcode) {
        free(product_add_batch_payload_inner->barcode);
        product_add_batch_payload_inner->barcode = NULL;
    }
    if (product_add_batch_payload_inner->sprice_create) {
        free(product_add_batch_payload_inner->sprice_create);
        product_add_batch_payload_inner->sprice_create = NULL;
    }
    if (product_add_batch_payload_inner->sprice_expire) {
        free(product_add_batch_payload_inner->sprice_expire);
        product_add_batch_payload_inner->sprice_expire = NULL;
    }
    if (product_add_batch_payload_inner->advanced_prices) {
        list_ForEach(listEntry, product_add_batch_payload_inner->advanced_prices) {
            product_add_batch_payload_inner_advanced_prices_inner_free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->advanced_prices);
        product_add_batch_payload_inner->advanced_prices = NULL;
    }
    if (product_add_batch_payload_inner->product_type) {
        free(product_add_batch_payload_inner->product_type);
        product_add_batch_payload_inner->product_type = NULL;
    }
    if (product_add_batch_payload_inner->marketplace_item_properties) {
        object_free(product_add_batch_payload_inner->marketplace_item_properties);
        product_add_batch_payload_inner->marketplace_item_properties = NULL;
    }
    if (product_add_batch_payload_inner->status) {
        free(product_add_batch_payload_inner->status);
        product_add_batch_payload_inner->status = NULL;
    }
    if (product_add_batch_payload_inner->condition) {
        free(product_add_batch_payload_inner->condition);
        product_add_batch_payload_inner->condition = NULL;
    }
    if (product_add_batch_payload_inner->visible) {
        free(product_add_batch_payload_inner->visible);
        product_add_batch_payload_inner->visible = NULL;
    }
    if (product_add_batch_payload_inner->type) {
        free(product_add_batch_payload_inner->type);
        product_add_batch_payload_inner->type = NULL;
    }
    if (product_add_batch_payload_inner->weight_unit) {
        free(product_add_batch_payload_inner->weight_unit);
        product_add_batch_payload_inner->weight_unit = NULL;
    }
    if (product_add_batch_payload_inner->dimensions_unit) {
        free(product_add_batch_payload_inner->dimensions_unit);
        product_add_batch_payload_inner->dimensions_unit = NULL;
    }
    if (product_add_batch_payload_inner->store_id) {
        free(product_add_batch_payload_inner->store_id);
        product_add_batch_payload_inner->store_id = NULL;
    }
    if (product_add_batch_payload_inner->lang_id) {
        free(product_add_batch_payload_inner->lang_id);
        product_add_batch_payload_inner->lang_id = NULL;
    }
    if (product_add_batch_payload_inner->category_id) {
        free(product_add_batch_payload_inner->category_id);
        product_add_batch_payload_inner->category_id = NULL;
    }
    if (product_add_batch_payload_inner->warehouse_id) {
        free(product_add_batch_payload_inner->warehouse_id);
        product_add_batch_payload_inner->warehouse_id = NULL;
    }
    if (product_add_batch_payload_inner->categories_ids) {
        list_ForEach(listEntry, product_add_batch_payload_inner->categories_ids) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->categories_ids);
        product_add_batch_payload_inner->categories_ids = NULL;
    }
    if (product_add_batch_payload_inner->related_products_ids) {
        list_ForEach(listEntry, product_add_batch_payload_inner->related_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->related_products_ids);
        product_add_batch_payload_inner->related_products_ids = NULL;
    }
    if (product_add_batch_payload_inner->up_sell_products_ids) {
        list_ForEach(listEntry, product_add_batch_payload_inner->up_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->up_sell_products_ids);
        product_add_batch_payload_inner->up_sell_products_ids = NULL;
    }
    if (product_add_batch_payload_inner->cross_sell_products_ids) {
        list_ForEach(listEntry, product_add_batch_payload_inner->cross_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->cross_sell_products_ids);
        product_add_batch_payload_inner->cross_sell_products_ids = NULL;
    }
    if (product_add_batch_payload_inner->stores_ids) {
        list_ForEach(listEntry, product_add_batch_payload_inner->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->stores_ids);
        product_add_batch_payload_inner->stores_ids = NULL;
    }
    if (product_add_batch_payload_inner->tax_class_id) {
        free(product_add_batch_payload_inner->tax_class_id);
        product_add_batch_payload_inner->tax_class_id = NULL;
    }
    if (product_add_batch_payload_inner->meta_title) {
        free(product_add_batch_payload_inner->meta_title);
        product_add_batch_payload_inner->meta_title = NULL;
    }
    if (product_add_batch_payload_inner->meta_description) {
        free(product_add_batch_payload_inner->meta_description);
        product_add_batch_payload_inner->meta_description = NULL;
    }
    if (product_add_batch_payload_inner->meta_keywords) {
        list_ForEach(listEntry, product_add_batch_payload_inner->meta_keywords) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->meta_keywords);
        product_add_batch_payload_inner->meta_keywords = NULL;
    }
    if (product_add_batch_payload_inner->search_keywords) {
        list_ForEach(listEntry, product_add_batch_payload_inner->search_keywords) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->search_keywords);
        product_add_batch_payload_inner->search_keywords = NULL;
    }
    if (product_add_batch_payload_inner->harmonized_system_code) {
        free(product_add_batch_payload_inner->harmonized_system_code);
        product_add_batch_payload_inner->harmonized_system_code = NULL;
    }
    if (product_add_batch_payload_inner->url) {
        free(product_add_batch_payload_inner->url);
        product_add_batch_payload_inner->url = NULL;
    }
    if (product_add_batch_payload_inner->seo_url) {
        free(product_add_batch_payload_inner->seo_url);
        product_add_batch_payload_inner->seo_url = NULL;
    }
    if (product_add_batch_payload_inner->manufacturer) {
        free(product_add_batch_payload_inner->manufacturer);
        product_add_batch_payload_inner->manufacturer = NULL;
    }
    if (product_add_batch_payload_inner->manufacturer_id) {
        free(product_add_batch_payload_inner->manufacturer_id);
        product_add_batch_payload_inner->manufacturer_id = NULL;
    }
    if (product_add_batch_payload_inner->backorder_status) {
        free(product_add_batch_payload_inner->backorder_status);
        product_add_batch_payload_inner->backorder_status = NULL;
    }
    if (product_add_batch_payload_inner->images) {
        list_ForEach(listEntry, product_add_batch_payload_inner->images) {
            product_add_batch_payload_inner_images_inner_free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->images);
        product_add_batch_payload_inner->images = NULL;
    }
    if (product_add_batch_payload_inner->tags) {
        list_ForEach(listEntry, product_add_batch_payload_inner->tags) {
            free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->tags);
        product_add_batch_payload_inner->tags = NULL;
    }
    if (product_add_batch_payload_inner->files) {
        list_ForEach(listEntry, product_add_batch_payload_inner->files) {
            product_add_files_inner_free(listEntry->data);
        }
        list_freeList(product_add_batch_payload_inner->files);
        product_add_batch_payload_inner->files = NULL;
    }
    free(product_add_batch_payload_inner);
}

cJSON *product_add_batch_payload_inner_convertToJSON(product_add_batch_payload_inner_t *product_add_batch_payload_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_add_batch_payload_inner->name
    if(product_add_batch_payload_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_add_batch_payload_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->description
    if(product_add_batch_payload_inner->description) {
    if(cJSON_AddStringToObject(item, "description", product_add_batch_payload_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->short_description
    if(product_add_batch_payload_inner->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_add_batch_payload_inner->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->sku
    if(product_add_batch_payload_inner->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_add_batch_payload_inner->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->model
    if(product_add_batch_payload_inner->model) {
    if(cJSON_AddStringToObject(item, "model", product_add_batch_payload_inner->model) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->asin
    if(product_add_batch_payload_inner->asin) {
    if(cJSON_AddStringToObject(item, "asin", product_add_batch_payload_inner->asin) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->upc
    if(product_add_batch_payload_inner->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_add_batch_payload_inner->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->ean
    if(product_add_batch_payload_inner->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_add_batch_payload_inner->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->gtin
    if(product_add_batch_payload_inner->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_add_batch_payload_inner->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->mpn
    if(product_add_batch_payload_inner->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_add_batch_payload_inner->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->barcode
    if(product_add_batch_payload_inner->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_add_batch_payload_inner->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->price
    if(product_add_batch_payload_inner->price) {
    if(cJSON_AddNumberToObject(item, "price", product_add_batch_payload_inner->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->old_price
    if(product_add_batch_payload_inner->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_add_batch_payload_inner->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->cost_price
    if(product_add_batch_payload_inner->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_add_batch_payload_inner->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->special_price
    if(product_add_batch_payload_inner->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_add_batch_payload_inner->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->sprice_create
    if(product_add_batch_payload_inner->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_add_batch_payload_inner->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->sprice_expire
    if(product_add_batch_payload_inner->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_add_batch_payload_inner->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->advanced_prices
    if(product_add_batch_payload_inner->advanced_prices) {
    cJSON *advanced_prices = cJSON_AddArrayToObject(item, "advanced_prices");
    if(advanced_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *advanced_pricesListEntry;
    if (product_add_batch_payload_inner->advanced_prices) {
    list_ForEach(advanced_pricesListEntry, product_add_batch_payload_inner->advanced_prices) {
    cJSON *itemLocal = product_add_batch_payload_inner_advanced_prices_inner_convertToJSON(advanced_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(advanced_prices, itemLocal);
    }
    }
    }


    // product_add_batch_payload_inner->fixed_cost_shipping_price
    if(product_add_batch_payload_inner->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_add_batch_payload_inner->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->quantity
    if(product_add_batch_payload_inner->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_add_batch_payload_inner->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->manage_stock
    if(product_add_batch_payload_inner->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_add_batch_payload_inner->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->product_type
    if(product_add_batch_payload_inner->product_type) {
    if(cJSON_AddStringToObject(item, "product_type", product_add_batch_payload_inner->product_type) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->marketplace_item_properties
    if(product_add_batch_payload_inner->marketplace_item_properties) {
    cJSON *marketplace_item_properties_object = object_convertToJSON(product_add_batch_payload_inner->marketplace_item_properties);
    if(marketplace_item_properties_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "marketplace_item_properties", marketplace_item_properties_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add_batch_payload_inner->is_free_shipping
    if(product_add_batch_payload_inner->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_add_batch_payload_inner->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->taxable
    if(product_add_batch_payload_inner->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_add_batch_payload_inner->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->status
    if(product_add_batch_payload_inner->status) {
    if(cJSON_AddStringToObject(item, "status", product_add_batch_payload_inner->status) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->condition
    if(product_add_batch_payload_inner->condition) {
    if(cJSON_AddStringToObject(item, "condition", product_add_batch_payload_inner->condition) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->visible
    if(product_add_batch_payload_inner->visible) {
    if(cJSON_AddStringToObject(item, "visible", product_add_batch_payload_inner->visible) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->available_for_view
    if(product_add_batch_payload_inner->available_for_view) {
    if(cJSON_AddBoolToObject(item, "available_for_view", product_add_batch_payload_inner->available_for_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->available_for_sale
    if(product_add_batch_payload_inner->available_for_sale) {
    if(cJSON_AddBoolToObject(item, "available_for_sale", product_add_batch_payload_inner->available_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->is_virtual
    if(product_add_batch_payload_inner->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_add_batch_payload_inner->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->in_stock
    if(product_add_batch_payload_inner->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_add_batch_payload_inner->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->type
    if(product_add_batch_payload_inner->type) {
    if(cJSON_AddStringToObject(item, "type", product_add_batch_payload_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->downloadable
    if(product_add_batch_payload_inner->downloadable) {
    if(cJSON_AddBoolToObject(item, "downloadable", product_add_batch_payload_inner->downloadable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add_batch_payload_inner->weight
    if(product_add_batch_payload_inner->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_add_batch_payload_inner->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->length
    if(product_add_batch_payload_inner->length) {
    if(cJSON_AddNumberToObject(item, "length", product_add_batch_payload_inner->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->width
    if(product_add_batch_payload_inner->width) {
    if(cJSON_AddNumberToObject(item, "width", product_add_batch_payload_inner->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->height
    if(product_add_batch_payload_inner->height) {
    if(cJSON_AddNumberToObject(item, "height", product_add_batch_payload_inner->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add_batch_payload_inner->weight_unit
    if(product_add_batch_payload_inner->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_add_batch_payload_inner->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->dimensions_unit
    if(product_add_batch_payload_inner->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", product_add_batch_payload_inner->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->store_id
    if(product_add_batch_payload_inner->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_add_batch_payload_inner->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->lang_id
    if(product_add_batch_payload_inner->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_add_batch_payload_inner->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->category_id
    if(product_add_batch_payload_inner->category_id) {
    if(cJSON_AddStringToObject(item, "category_id", product_add_batch_payload_inner->category_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->warehouse_id
    if(product_add_batch_payload_inner->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_add_batch_payload_inner->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->categories_ids
    if(product_add_batch_payload_inner->categories_ids) {
    cJSON *categories_ids = cJSON_AddArrayToObject(item, "categories_ids");
    if(categories_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *categories_idsListEntry;
    list_ForEach(categories_idsListEntry, product_add_batch_payload_inner->categories_ids) {
    if(cJSON_AddStringToObject(categories_ids, "", categories_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->related_products_ids
    if(product_add_batch_payload_inner->related_products_ids) {
    cJSON *related_products_ids = cJSON_AddArrayToObject(item, "related_products_ids");
    if(related_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *related_products_idsListEntry;
    list_ForEach(related_products_idsListEntry, product_add_batch_payload_inner->related_products_ids) {
    if(cJSON_AddStringToObject(related_products_ids, "", related_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->up_sell_products_ids
    if(product_add_batch_payload_inner->up_sell_products_ids) {
    cJSON *up_sell_products_ids = cJSON_AddArrayToObject(item, "up_sell_products_ids");
    if(up_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *up_sell_products_idsListEntry;
    list_ForEach(up_sell_products_idsListEntry, product_add_batch_payload_inner->up_sell_products_ids) {
    if(cJSON_AddStringToObject(up_sell_products_ids, "", up_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->cross_sell_products_ids
    if(product_add_batch_payload_inner->cross_sell_products_ids) {
    cJSON *cross_sell_products_ids = cJSON_AddArrayToObject(item, "cross_sell_products_ids");
    if(cross_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cross_sell_products_idsListEntry;
    list_ForEach(cross_sell_products_idsListEntry, product_add_batch_payload_inner->cross_sell_products_ids) {
    if(cJSON_AddStringToObject(cross_sell_products_ids, "", cross_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->stores_ids
    if(product_add_batch_payload_inner->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, product_add_batch_payload_inner->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->tax_class_id
    if(product_add_batch_payload_inner->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_add_batch_payload_inner->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->meta_title
    if(product_add_batch_payload_inner->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_add_batch_payload_inner->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->meta_description
    if(product_add_batch_payload_inner->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_add_batch_payload_inner->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->meta_keywords
    if(product_add_batch_payload_inner->meta_keywords) {
    cJSON *meta_keywords = cJSON_AddArrayToObject(item, "meta_keywords");
    if(meta_keywords == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *meta_keywordsListEntry;
    list_ForEach(meta_keywordsListEntry, product_add_batch_payload_inner->meta_keywords) {
    if(cJSON_AddStringToObject(meta_keywords, "", meta_keywordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->search_keywords
    if(product_add_batch_payload_inner->search_keywords) {
    cJSON *search_keywords = cJSON_AddArrayToObject(item, "search_keywords");
    if(search_keywords == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *search_keywordsListEntry;
    list_ForEach(search_keywordsListEntry, product_add_batch_payload_inner->search_keywords) {
    if(cJSON_AddStringToObject(search_keywords, "", search_keywordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->harmonized_system_code
    if(product_add_batch_payload_inner->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_add_batch_payload_inner->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->url
    if(product_add_batch_payload_inner->url) {
    if(cJSON_AddStringToObject(item, "url", product_add_batch_payload_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->seo_url
    if(product_add_batch_payload_inner->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", product_add_batch_payload_inner->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->manufacturer
    if(product_add_batch_payload_inner->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", product_add_batch_payload_inner->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->manufacturer_id
    if(product_add_batch_payload_inner->manufacturer_id) {
    if(cJSON_AddStringToObject(item, "manufacturer_id", product_add_batch_payload_inner->manufacturer_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->backorder_status
    if(product_add_batch_payload_inner->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_add_batch_payload_inner->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_add_batch_payload_inner->images
    if(product_add_batch_payload_inner->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (product_add_batch_payload_inner->images) {
    list_ForEach(imagesListEntry, product_add_batch_payload_inner->images) {
    cJSON *itemLocal = product_add_batch_payload_inner_images_inner_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // product_add_batch_payload_inner->tags
    if(product_add_batch_payload_inner->tags) {
    cJSON *tags = cJSON_AddArrayToObject(item, "tags");
    if(tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tagsListEntry;
    list_ForEach(tagsListEntry, product_add_batch_payload_inner->tags) {
    if(cJSON_AddStringToObject(tags, "", tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add_batch_payload_inner->files
    if(product_add_batch_payload_inner->files) {
    cJSON *files = cJSON_AddArrayToObject(item, "files");
    if(files == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *filesListEntry;
    if (product_add_batch_payload_inner->files) {
    list_ForEach(filesListEntry, product_add_batch_payload_inner->files) {
    cJSON *itemLocal = product_add_files_inner_convertToJSON(filesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(files, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_add_batch_payload_inner_t *product_add_batch_payload_inner_parseFromJSON(cJSON *product_add_batch_payload_innerJSON){

    product_add_batch_payload_inner_t *product_add_batch_payload_inner_local_var = NULL;

    // define the local list for product_add_batch_payload_inner->advanced_prices
    list_t *advanced_pricesList = NULL;

    // define the local list for product_add_batch_payload_inner->categories_ids
    list_t *categories_idsList = NULL;

    // define the local list for product_add_batch_payload_inner->related_products_ids
    list_t *related_products_idsList = NULL;

    // define the local list for product_add_batch_payload_inner->up_sell_products_ids
    list_t *up_sell_products_idsList = NULL;

    // define the local list for product_add_batch_payload_inner->cross_sell_products_ids
    list_t *cross_sell_products_idsList = NULL;

    // define the local list for product_add_batch_payload_inner->stores_ids
    list_t *stores_idsList = NULL;

    // define the local list for product_add_batch_payload_inner->meta_keywords
    list_t *meta_keywordsList = NULL;

    // define the local list for product_add_batch_payload_inner->search_keywords
    list_t *search_keywordsList = NULL;

    // define the local list for product_add_batch_payload_inner->images
    list_t *imagesList = NULL;

    // define the local list for product_add_batch_payload_inner->tags
    list_t *tagsList = NULL;

    // define the local list for product_add_batch_payload_inner->files
    list_t *filesList = NULL;

    // product_add_batch_payload_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->asin
    cJSON *asin = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "asin");
    if (cJSON_IsNull(asin)) {
        asin = NULL;
    }
    if (asin) { 
    if(!cJSON_IsString(asin) && !cJSON_IsNull(asin))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->advanced_prices
    cJSON *advanced_prices = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "advanced_prices");
    if (cJSON_IsNull(advanced_prices)) {
        advanced_prices = NULL;
    }
    if (advanced_prices) { 
    cJSON *advanced_prices_local_nonprimitive = NULL;
    if(!cJSON_IsArray(advanced_prices)){
        goto end; //nonprimitive container
    }

    advanced_pricesList = list_createList();

    cJSON_ArrayForEach(advanced_prices_local_nonprimitive,advanced_prices )
    {
        if(!cJSON_IsObject(advanced_prices_local_nonprimitive)){
            goto end;
        }
        product_add_batch_payload_inner_advanced_prices_inner_t *advanced_pricesItem = product_add_batch_payload_inner_advanced_prices_inner_parseFromJSON(advanced_prices_local_nonprimitive);

        list_addElement(advanced_pricesList, advanced_pricesItem);
    }
    }

    // product_add_batch_payload_inner->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->product_type
    cJSON *product_type = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "product_type");
    if (cJSON_IsNull(product_type)) {
        product_type = NULL;
    }
    if (product_type) { 
    if(!cJSON_IsString(product_type) && !cJSON_IsNull(product_type))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->marketplace_item_properties
    cJSON *marketplace_item_properties = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "marketplace_item_properties");
    if (cJSON_IsNull(marketplace_item_properties)) {
        marketplace_item_properties = NULL;
    }
    object_t *marketplace_item_properties_local_object = NULL;
    if (marketplace_item_properties) { 
    marketplace_item_properties_local_object = object_parseFromJSON(marketplace_item_properties); //object
    }

    // product_add_batch_payload_inner->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "condition");
    if (cJSON_IsNull(condition)) {
        condition = NULL;
    }
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->available_for_view
    cJSON *available_for_view = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "available_for_view");
    if (cJSON_IsNull(available_for_view)) {
        available_for_view = NULL;
    }
    if (available_for_view) { 
    if(!cJSON_IsBool(available_for_view))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->available_for_sale
    cJSON *available_for_sale = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "available_for_sale");
    if (cJSON_IsNull(available_for_sale)) {
        available_for_sale = NULL;
    }
    if (available_for_sale) { 
    if(!cJSON_IsBool(available_for_sale))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->downloadable
    cJSON *downloadable = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "downloadable");
    if (cJSON_IsNull(downloadable)) {
        downloadable = NULL;
    }
    if (downloadable) { 
    if(!cJSON_IsBool(downloadable))
    {
    goto end; //Bool
    }
    }

    // product_add_batch_payload_inner->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_add_batch_payload_inner->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "category_id");
    if (cJSON_IsNull(category_id)) {
        category_id = NULL;
    }
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->categories_ids
    cJSON *categories_ids = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "categories_ids");
    if (cJSON_IsNull(categories_ids)) {
        categories_ids = NULL;
    }
    if (categories_ids) { 
    cJSON *categories_ids_local = NULL;
    if(!cJSON_IsArray(categories_ids)) {
        goto end;//primitive container
    }
    categories_idsList = list_createList();

    cJSON_ArrayForEach(categories_ids_local, categories_ids)
    {
        if(!cJSON_IsString(categories_ids_local))
        {
            goto end;
        }
        list_addElement(categories_idsList , strdup(categories_ids_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->related_products_ids
    cJSON *related_products_ids = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "related_products_ids");
    if (cJSON_IsNull(related_products_ids)) {
        related_products_ids = NULL;
    }
    if (related_products_ids) { 
    cJSON *related_products_ids_local = NULL;
    if(!cJSON_IsArray(related_products_ids)) {
        goto end;//primitive container
    }
    related_products_idsList = list_createList();

    cJSON_ArrayForEach(related_products_ids_local, related_products_ids)
    {
        if(!cJSON_IsString(related_products_ids_local))
        {
            goto end;
        }
        list_addElement(related_products_idsList , strdup(related_products_ids_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->up_sell_products_ids
    cJSON *up_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "up_sell_products_ids");
    if (cJSON_IsNull(up_sell_products_ids)) {
        up_sell_products_ids = NULL;
    }
    if (up_sell_products_ids) { 
    cJSON *up_sell_products_ids_local = NULL;
    if(!cJSON_IsArray(up_sell_products_ids)) {
        goto end;//primitive container
    }
    up_sell_products_idsList = list_createList();

    cJSON_ArrayForEach(up_sell_products_ids_local, up_sell_products_ids)
    {
        if(!cJSON_IsString(up_sell_products_ids_local))
        {
            goto end;
        }
        list_addElement(up_sell_products_idsList , strdup(up_sell_products_ids_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->cross_sell_products_ids
    cJSON *cross_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "cross_sell_products_ids");
    if (cJSON_IsNull(cross_sell_products_ids)) {
        cross_sell_products_ids = NULL;
    }
    if (cross_sell_products_ids) { 
    cJSON *cross_sell_products_ids_local = NULL;
    if(!cJSON_IsArray(cross_sell_products_ids)) {
        goto end;//primitive container
    }
    cross_sell_products_idsList = list_createList();

    cJSON_ArrayForEach(cross_sell_products_ids_local, cross_sell_products_ids)
    {
        if(!cJSON_IsString(cross_sell_products_ids_local))
        {
            goto end;
        }
        list_addElement(cross_sell_products_idsList , strdup(cross_sell_products_ids_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    cJSON *stores_ids_local = NULL;
    if(!cJSON_IsArray(stores_ids)) {
        goto end;//primitive container
    }
    stores_idsList = list_createList();

    cJSON_ArrayForEach(stores_ids_local, stores_ids)
    {
        if(!cJSON_IsString(stores_ids_local))
        {
            goto end;
        }
        list_addElement(stores_idsList , strdup(stores_ids_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    cJSON *meta_keywords_local = NULL;
    if(!cJSON_IsArray(meta_keywords)) {
        goto end;//primitive container
    }
    meta_keywordsList = list_createList();

    cJSON_ArrayForEach(meta_keywords_local, meta_keywords)
    {
        if(!cJSON_IsString(meta_keywords_local))
        {
            goto end;
        }
        list_addElement(meta_keywordsList , strdup(meta_keywords_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->search_keywords
    cJSON *search_keywords = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "search_keywords");
    if (cJSON_IsNull(search_keywords)) {
        search_keywords = NULL;
    }
    if (search_keywords) { 
    cJSON *search_keywords_local = NULL;
    if(!cJSON_IsArray(search_keywords)) {
        goto end;//primitive container
    }
    search_keywordsList = list_createList();

    cJSON_ArrayForEach(search_keywords_local, search_keywords)
    {
        if(!cJSON_IsString(search_keywords_local))
        {
            goto end;
        }
        list_addElement(search_keywordsList , strdup(search_keywords_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->manufacturer_id
    cJSON *manufacturer_id = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "manufacturer_id");
    if (cJSON_IsNull(manufacturer_id)) {
        manufacturer_id = NULL;
    }
    if (manufacturer_id) { 
    if(!cJSON_IsString(manufacturer_id) && !cJSON_IsNull(manufacturer_id))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_add_batch_payload_inner->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "images");
    if (cJSON_IsNull(images)) {
        images = NULL;
    }
    if (images) { 
    cJSON *images_local_nonprimitive = NULL;
    if(!cJSON_IsArray(images)){
        goto end; //nonprimitive container
    }

    imagesList = list_createList();

    cJSON_ArrayForEach(images_local_nonprimitive,images )
    {
        if(!cJSON_IsObject(images_local_nonprimitive)){
            goto end;
        }
        product_add_batch_payload_inner_images_inner_t *imagesItem = product_add_batch_payload_inner_images_inner_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // product_add_batch_payload_inner->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    cJSON *tags_local = NULL;
    if(!cJSON_IsArray(tags)) {
        goto end;//primitive container
    }
    tagsList = list_createList();

    cJSON_ArrayForEach(tags_local, tags)
    {
        if(!cJSON_IsString(tags_local))
        {
            goto end;
        }
        list_addElement(tagsList , strdup(tags_local->valuestring));
    }
    }

    // product_add_batch_payload_inner->files
    cJSON *files = cJSON_GetObjectItemCaseSensitive(product_add_batch_payload_innerJSON, "files");
    if (cJSON_IsNull(files)) {
        files = NULL;
    }
    if (files) { 
    cJSON *files_local_nonprimitive = NULL;
    if(!cJSON_IsArray(files)){
        goto end; //nonprimitive container
    }

    filesList = list_createList();

    cJSON_ArrayForEach(files_local_nonprimitive,files )
    {
        if(!cJSON_IsObject(files_local_nonprimitive)){
            goto end;
        }
        product_add_files_inner_t *filesItem = product_add_files_inner_parseFromJSON(files_local_nonprimitive);

        list_addElement(filesList, filesItem);
    }
    }


    product_add_batch_payload_inner_local_var = product_add_batch_payload_inner_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        asin && !cJSON_IsNull(asin) ? strdup(asin->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        price ? price->valuedouble : 0,
        old_price ? old_price->valuedouble : 0,
        cost_price ? cost_price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        advanced_prices ? advanced_pricesList : NULL,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        manage_stock ? manage_stock->valueint : 0,
        product_type && !cJSON_IsNull(product_type) ? strdup(product_type->valuestring) : NULL,
        marketplace_item_properties ? marketplace_item_properties_local_object : NULL,
        is_free_shipping ? is_free_shipping->valueint : 0,
        taxable ? taxable->valueint : 0,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        available_for_view ? available_for_view->valueint : 0,
        available_for_sale ? available_for_sale->valueint : 0,
        is_virtual ? is_virtual->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        downloadable ? downloadable->valueint : 0,
        weight ? weight->valuedouble : 0,
        length ? length->valuedouble : 0,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        categories_ids ? categories_idsList : NULL,
        related_products_ids ? related_products_idsList : NULL,
        up_sell_products_ids ? up_sell_products_idsList : NULL,
        cross_sell_products_ids ? cross_sell_products_idsList : NULL,
        stores_ids ? stores_idsList : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_keywords ? meta_keywordsList : NULL,
        search_keywords ? search_keywordsList : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        manufacturer_id && !cJSON_IsNull(manufacturer_id) ? strdup(manufacturer_id->valuestring) : NULL,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        images ? imagesList : NULL,
        tags ? tagsList : NULL,
        files ? filesList : NULL
        );

    return product_add_batch_payload_inner_local_var;
end:
    if (advanced_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, advanced_pricesList) {
            product_add_batch_payload_inner_advanced_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(advanced_pricesList);
        advanced_pricesList = NULL;
    }
    if (categories_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, categories_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(categories_idsList);
        categories_idsList = NULL;
    }
    if (related_products_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, related_products_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(related_products_idsList);
        related_products_idsList = NULL;
    }
    if (up_sell_products_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, up_sell_products_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(up_sell_products_idsList);
        up_sell_products_idsList = NULL;
    }
    if (cross_sell_products_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cross_sell_products_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cross_sell_products_idsList);
        cross_sell_products_idsList = NULL;
    }
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    if (meta_keywordsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, meta_keywordsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(meta_keywordsList);
        meta_keywordsList = NULL;
    }
    if (search_keywordsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, search_keywordsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(search_keywordsList);
        search_keywordsList = NULL;
    }
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            product_add_batch_payload_inner_images_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    if (tagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tagsList);
        tagsList = NULL;
    }
    if (filesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, filesList) {
            product_add_files_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(filesList);
        filesList = NULL;
    }
    return NULL;

}
