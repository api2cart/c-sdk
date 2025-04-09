#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_update_batch_payload_inner.h"



static product_update_batch_payload_inner_t *product_update_batch_payload_inner_create_internal(
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
    ) {
    product_update_batch_payload_inner_t *product_update_batch_payload_inner_local_var = malloc(sizeof(product_update_batch_payload_inner_t));
    if (!product_update_batch_payload_inner_local_var) {
        return NULL;
    }
    product_update_batch_payload_inner_local_var->id = id;
    product_update_batch_payload_inner_local_var->name = name;
    product_update_batch_payload_inner_local_var->description = description;
    product_update_batch_payload_inner_local_var->short_description = short_description;
    product_update_batch_payload_inner_local_var->sku = sku;
    product_update_batch_payload_inner_local_var->model = model;
    product_update_batch_payload_inner_local_var->price = price;
    product_update_batch_payload_inner_local_var->special_price = special_price;
    product_update_batch_payload_inner_local_var->sprice_create = sprice_create;
    product_update_batch_payload_inner_local_var->sprice_expire = sprice_expire;
    product_update_batch_payload_inner_local_var->cost_price = cost_price;
    product_update_batch_payload_inner_local_var->old_price = old_price;
    product_update_batch_payload_inner_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_update_batch_payload_inner_local_var->advanced_prices = advanced_prices;
    product_update_batch_payload_inner_local_var->quantity = quantity;
    product_update_batch_payload_inner_local_var->increase_quantity = increase_quantity;
    product_update_batch_payload_inner_local_var->reduce_quantity = reduce_quantity;
    product_update_batch_payload_inner_local_var->reserve_quantity = reserve_quantity;
    product_update_batch_payload_inner_local_var->store_id = store_id;
    product_update_batch_payload_inner_local_var->lang_id = lang_id;
    product_update_batch_payload_inner_local_var->status = status;
    product_update_batch_payload_inner_local_var->type = type;
    product_update_batch_payload_inner_local_var->condition = condition;
    product_update_batch_payload_inner_local_var->visible = visible;
    product_update_batch_payload_inner_local_var->available_for_view = available_for_view;
    product_update_batch_payload_inner_local_var->available_for_sale = available_for_sale;
    product_update_batch_payload_inner_local_var->avail_from = avail_from;
    product_update_batch_payload_inner_local_var->weight = weight;
    product_update_batch_payload_inner_local_var->length = length;
    product_update_batch_payload_inner_local_var->width = width;
    product_update_batch_payload_inner_local_var->height = height;
    product_update_batch_payload_inner_local_var->dimensions_unit = dimensions_unit;
    product_update_batch_payload_inner_local_var->weight_unit = weight_unit;
    product_update_batch_payload_inner_local_var->manage_stock = manage_stock;
    product_update_batch_payload_inner_local_var->in_stock = in_stock;
    product_update_batch_payload_inner_local_var->backorder_status = backorder_status;
    product_update_batch_payload_inner_local_var->is_free_shipping = is_free_shipping;
    product_update_batch_payload_inner_local_var->is_virtual = is_virtual;
    product_update_batch_payload_inner_local_var->taxable = taxable;
    product_update_batch_payload_inner_local_var->downloadable = downloadable;
    product_update_batch_payload_inner_local_var->warehouse_id = warehouse_id;
    product_update_batch_payload_inner_local_var->tax_class_id = tax_class_id;
    product_update_batch_payload_inner_local_var->categories_ids = categories_ids;
    product_update_batch_payload_inner_local_var->meta_title = meta_title;
    product_update_batch_payload_inner_local_var->meta_description = meta_description;
    product_update_batch_payload_inner_local_var->meta_keywords = meta_keywords;
    product_update_batch_payload_inner_local_var->url = url;
    product_update_batch_payload_inner_local_var->seo_url = seo_url;
    product_update_batch_payload_inner_local_var->manufacturer = manufacturer;
    product_update_batch_payload_inner_local_var->manufacturer_id = manufacturer_id;
    product_update_batch_payload_inner_local_var->mpn = mpn;
    product_update_batch_payload_inner_local_var->gtin = gtin;
    product_update_batch_payload_inner_local_var->upc = upc;
    product_update_batch_payload_inner_local_var->isbn = isbn;
    product_update_batch_payload_inner_local_var->ean = ean;
    product_update_batch_payload_inner_local_var->barcode = barcode;
    product_update_batch_payload_inner_local_var->images = images;
    product_update_batch_payload_inner_local_var->related_products_ids = related_products_ids;
    product_update_batch_payload_inner_local_var->up_sell_products_ids = up_sell_products_ids;
    product_update_batch_payload_inner_local_var->cross_sell_products_ids = cross_sell_products_ids;
    product_update_batch_payload_inner_local_var->tags = tags;
    product_update_batch_payload_inner_local_var->search_keywords = search_keywords;
    product_update_batch_payload_inner_local_var->harmonized_system_code = harmonized_system_code;

    product_update_batch_payload_inner_local_var->_library_owned = 1;
    return product_update_batch_payload_inner_local_var;
}

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
    ) {
    return product_update_batch_payload_inner_create_internal (
        id,
        name,
        description,
        short_description,
        sku,
        model,
        price,
        special_price,
        sprice_create,
        sprice_expire,
        cost_price,
        old_price,
        fixed_cost_shipping_price,
        advanced_prices,
        quantity,
        increase_quantity,
        reduce_quantity,
        reserve_quantity,
        store_id,
        lang_id,
        status,
        type,
        condition,
        visible,
        available_for_view,
        available_for_sale,
        avail_from,
        weight,
        length,
        width,
        height,
        dimensions_unit,
        weight_unit,
        manage_stock,
        in_stock,
        backorder_status,
        is_free_shipping,
        is_virtual,
        taxable,
        downloadable,
        warehouse_id,
        tax_class_id,
        categories_ids,
        meta_title,
        meta_description,
        meta_keywords,
        url,
        seo_url,
        manufacturer,
        manufacturer_id,
        mpn,
        gtin,
        upc,
        isbn,
        ean,
        barcode,
        images,
        related_products_ids,
        up_sell_products_ids,
        cross_sell_products_ids,
        tags,
        search_keywords,
        harmonized_system_code
        );
}

void product_update_batch_payload_inner_free(product_update_batch_payload_inner_t *product_update_batch_payload_inner) {
    if(NULL == product_update_batch_payload_inner){
        return ;
    }
    if(product_update_batch_payload_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_update_batch_payload_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_update_batch_payload_inner->id) {
        free(product_update_batch_payload_inner->id);
        product_update_batch_payload_inner->id = NULL;
    }
    if (product_update_batch_payload_inner->name) {
        free(product_update_batch_payload_inner->name);
        product_update_batch_payload_inner->name = NULL;
    }
    if (product_update_batch_payload_inner->description) {
        free(product_update_batch_payload_inner->description);
        product_update_batch_payload_inner->description = NULL;
    }
    if (product_update_batch_payload_inner->short_description) {
        free(product_update_batch_payload_inner->short_description);
        product_update_batch_payload_inner->short_description = NULL;
    }
    if (product_update_batch_payload_inner->sku) {
        free(product_update_batch_payload_inner->sku);
        product_update_batch_payload_inner->sku = NULL;
    }
    if (product_update_batch_payload_inner->model) {
        free(product_update_batch_payload_inner->model);
        product_update_batch_payload_inner->model = NULL;
    }
    if (product_update_batch_payload_inner->sprice_create) {
        free(product_update_batch_payload_inner->sprice_create);
        product_update_batch_payload_inner->sprice_create = NULL;
    }
    if (product_update_batch_payload_inner->sprice_expire) {
        free(product_update_batch_payload_inner->sprice_expire);
        product_update_batch_payload_inner->sprice_expire = NULL;
    }
    if (product_update_batch_payload_inner->advanced_prices) {
        list_ForEach(listEntry, product_update_batch_payload_inner->advanced_prices) {
            product_update_batch_payload_inner_advanced_prices_inner_free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->advanced_prices);
        product_update_batch_payload_inner->advanced_prices = NULL;
    }
    if (product_update_batch_payload_inner->store_id) {
        free(product_update_batch_payload_inner->store_id);
        product_update_batch_payload_inner->store_id = NULL;
    }
    if (product_update_batch_payload_inner->lang_id) {
        free(product_update_batch_payload_inner->lang_id);
        product_update_batch_payload_inner->lang_id = NULL;
    }
    if (product_update_batch_payload_inner->status) {
        free(product_update_batch_payload_inner->status);
        product_update_batch_payload_inner->status = NULL;
    }
    if (product_update_batch_payload_inner->type) {
        free(product_update_batch_payload_inner->type);
        product_update_batch_payload_inner->type = NULL;
    }
    if (product_update_batch_payload_inner->condition) {
        free(product_update_batch_payload_inner->condition);
        product_update_batch_payload_inner->condition = NULL;
    }
    if (product_update_batch_payload_inner->visible) {
        free(product_update_batch_payload_inner->visible);
        product_update_batch_payload_inner->visible = NULL;
    }
    if (product_update_batch_payload_inner->avail_from) {
        free(product_update_batch_payload_inner->avail_from);
        product_update_batch_payload_inner->avail_from = NULL;
    }
    if (product_update_batch_payload_inner->dimensions_unit) {
        free(product_update_batch_payload_inner->dimensions_unit);
        product_update_batch_payload_inner->dimensions_unit = NULL;
    }
    if (product_update_batch_payload_inner->weight_unit) {
        free(product_update_batch_payload_inner->weight_unit);
        product_update_batch_payload_inner->weight_unit = NULL;
    }
    if (product_update_batch_payload_inner->backorder_status) {
        free(product_update_batch_payload_inner->backorder_status);
        product_update_batch_payload_inner->backorder_status = NULL;
    }
    if (product_update_batch_payload_inner->warehouse_id) {
        free(product_update_batch_payload_inner->warehouse_id);
        product_update_batch_payload_inner->warehouse_id = NULL;
    }
    if (product_update_batch_payload_inner->tax_class_id) {
        free(product_update_batch_payload_inner->tax_class_id);
        product_update_batch_payload_inner->tax_class_id = NULL;
    }
    if (product_update_batch_payload_inner->categories_ids) {
        list_ForEach(listEntry, product_update_batch_payload_inner->categories_ids) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->categories_ids);
        product_update_batch_payload_inner->categories_ids = NULL;
    }
    if (product_update_batch_payload_inner->meta_title) {
        free(product_update_batch_payload_inner->meta_title);
        product_update_batch_payload_inner->meta_title = NULL;
    }
    if (product_update_batch_payload_inner->meta_description) {
        free(product_update_batch_payload_inner->meta_description);
        product_update_batch_payload_inner->meta_description = NULL;
    }
    if (product_update_batch_payload_inner->meta_keywords) {
        list_ForEach(listEntry, product_update_batch_payload_inner->meta_keywords) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->meta_keywords);
        product_update_batch_payload_inner->meta_keywords = NULL;
    }
    if (product_update_batch_payload_inner->url) {
        free(product_update_batch_payload_inner->url);
        product_update_batch_payload_inner->url = NULL;
    }
    if (product_update_batch_payload_inner->seo_url) {
        free(product_update_batch_payload_inner->seo_url);
        product_update_batch_payload_inner->seo_url = NULL;
    }
    if (product_update_batch_payload_inner->manufacturer) {
        free(product_update_batch_payload_inner->manufacturer);
        product_update_batch_payload_inner->manufacturer = NULL;
    }
    if (product_update_batch_payload_inner->manufacturer_id) {
        free(product_update_batch_payload_inner->manufacturer_id);
        product_update_batch_payload_inner->manufacturer_id = NULL;
    }
    if (product_update_batch_payload_inner->mpn) {
        free(product_update_batch_payload_inner->mpn);
        product_update_batch_payload_inner->mpn = NULL;
    }
    if (product_update_batch_payload_inner->gtin) {
        free(product_update_batch_payload_inner->gtin);
        product_update_batch_payload_inner->gtin = NULL;
    }
    if (product_update_batch_payload_inner->upc) {
        free(product_update_batch_payload_inner->upc);
        product_update_batch_payload_inner->upc = NULL;
    }
    if (product_update_batch_payload_inner->isbn) {
        free(product_update_batch_payload_inner->isbn);
        product_update_batch_payload_inner->isbn = NULL;
    }
    if (product_update_batch_payload_inner->ean) {
        free(product_update_batch_payload_inner->ean);
        product_update_batch_payload_inner->ean = NULL;
    }
    if (product_update_batch_payload_inner->barcode) {
        free(product_update_batch_payload_inner->barcode);
        product_update_batch_payload_inner->barcode = NULL;
    }
    if (product_update_batch_payload_inner->images) {
        list_ForEach(listEntry, product_update_batch_payload_inner->images) {
            product_update_batch_payload_inner_images_inner_free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->images);
        product_update_batch_payload_inner->images = NULL;
    }
    if (product_update_batch_payload_inner->related_products_ids) {
        list_ForEach(listEntry, product_update_batch_payload_inner->related_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->related_products_ids);
        product_update_batch_payload_inner->related_products_ids = NULL;
    }
    if (product_update_batch_payload_inner->up_sell_products_ids) {
        list_ForEach(listEntry, product_update_batch_payload_inner->up_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->up_sell_products_ids);
        product_update_batch_payload_inner->up_sell_products_ids = NULL;
    }
    if (product_update_batch_payload_inner->cross_sell_products_ids) {
        list_ForEach(listEntry, product_update_batch_payload_inner->cross_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->cross_sell_products_ids);
        product_update_batch_payload_inner->cross_sell_products_ids = NULL;
    }
    if (product_update_batch_payload_inner->tags) {
        list_ForEach(listEntry, product_update_batch_payload_inner->tags) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->tags);
        product_update_batch_payload_inner->tags = NULL;
    }
    if (product_update_batch_payload_inner->search_keywords) {
        list_ForEach(listEntry, product_update_batch_payload_inner->search_keywords) {
            free(listEntry->data);
        }
        list_freeList(product_update_batch_payload_inner->search_keywords);
        product_update_batch_payload_inner->search_keywords = NULL;
    }
    if (product_update_batch_payload_inner->harmonized_system_code) {
        free(product_update_batch_payload_inner->harmonized_system_code);
        product_update_batch_payload_inner->harmonized_system_code = NULL;
    }
    free(product_update_batch_payload_inner);
}

cJSON *product_update_batch_payload_inner_convertToJSON(product_update_batch_payload_inner_t *product_update_batch_payload_inner) {
    cJSON *item = cJSON_CreateObject();

    // product_update_batch_payload_inner->id
    if (!product_update_batch_payload_inner->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", product_update_batch_payload_inner->id) == NULL) {
    goto fail; //String
    }


    // product_update_batch_payload_inner->name
    if(product_update_batch_payload_inner->name) {
    if(cJSON_AddStringToObject(item, "name", product_update_batch_payload_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->description
    if(product_update_batch_payload_inner->description) {
    if(cJSON_AddStringToObject(item, "description", product_update_batch_payload_inner->description) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->short_description
    if(product_update_batch_payload_inner->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_update_batch_payload_inner->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->sku
    if(product_update_batch_payload_inner->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_update_batch_payload_inner->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->model
    if(product_update_batch_payload_inner->model) {
    if(cJSON_AddStringToObject(item, "model", product_update_batch_payload_inner->model) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->price
    if(product_update_batch_payload_inner->price) {
    if(cJSON_AddNumberToObject(item, "price", product_update_batch_payload_inner->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->special_price
    if(product_update_batch_payload_inner->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_update_batch_payload_inner->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->sprice_create
    if(product_update_batch_payload_inner->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_update_batch_payload_inner->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->sprice_expire
    if(product_update_batch_payload_inner->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_update_batch_payload_inner->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->cost_price
    if(product_update_batch_payload_inner->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_update_batch_payload_inner->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->old_price
    if(product_update_batch_payload_inner->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_update_batch_payload_inner->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->fixed_cost_shipping_price
    if(product_update_batch_payload_inner->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_update_batch_payload_inner->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->advanced_prices
    if(product_update_batch_payload_inner->advanced_prices) {
    cJSON *advanced_prices = cJSON_AddArrayToObject(item, "advanced_prices");
    if(advanced_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *advanced_pricesListEntry;
    if (product_update_batch_payload_inner->advanced_prices) {
    list_ForEach(advanced_pricesListEntry, product_update_batch_payload_inner->advanced_prices) {
    cJSON *itemLocal = product_update_batch_payload_inner_advanced_prices_inner_convertToJSON(advanced_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(advanced_prices, itemLocal);
    }
    }
    }


    // product_update_batch_payload_inner->quantity
    if(product_update_batch_payload_inner->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_update_batch_payload_inner->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->increase_quantity
    if(product_update_batch_payload_inner->increase_quantity) {
    if(cJSON_AddNumberToObject(item, "increase_quantity", product_update_batch_payload_inner->increase_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->reduce_quantity
    if(product_update_batch_payload_inner->reduce_quantity) {
    if(cJSON_AddNumberToObject(item, "reduce_quantity", product_update_batch_payload_inner->reduce_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->reserve_quantity
    if(product_update_batch_payload_inner->reserve_quantity) {
    if(cJSON_AddNumberToObject(item, "reserve_quantity", product_update_batch_payload_inner->reserve_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->store_id
    if(product_update_batch_payload_inner->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_update_batch_payload_inner->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->lang_id
    if(product_update_batch_payload_inner->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_update_batch_payload_inner->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->status
    if(product_update_batch_payload_inner->status) {
    if(cJSON_AddStringToObject(item, "status", product_update_batch_payload_inner->status) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->type
    if(product_update_batch_payload_inner->type) {
    if(cJSON_AddStringToObject(item, "type", product_update_batch_payload_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->condition
    if(product_update_batch_payload_inner->condition) {
    if(cJSON_AddStringToObject(item, "condition", product_update_batch_payload_inner->condition) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->visible
    if(product_update_batch_payload_inner->visible) {
    if(cJSON_AddStringToObject(item, "visible", product_update_batch_payload_inner->visible) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->available_for_view
    if(product_update_batch_payload_inner->available_for_view) {
    if(cJSON_AddBoolToObject(item, "available_for_view", product_update_batch_payload_inner->available_for_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->available_for_sale
    if(product_update_batch_payload_inner->available_for_sale) {
    if(cJSON_AddBoolToObject(item, "available_for_sale", product_update_batch_payload_inner->available_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->avail_from
    if(product_update_batch_payload_inner->avail_from) {
    if(cJSON_AddStringToObject(item, "avail_from", product_update_batch_payload_inner->avail_from) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->weight
    if(product_update_batch_payload_inner->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_update_batch_payload_inner->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->length
    if(product_update_batch_payload_inner->length) {
    if(cJSON_AddNumberToObject(item, "length", product_update_batch_payload_inner->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->width
    if(product_update_batch_payload_inner->width) {
    if(cJSON_AddNumberToObject(item, "width", product_update_batch_payload_inner->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->height
    if(product_update_batch_payload_inner->height) {
    if(cJSON_AddNumberToObject(item, "height", product_update_batch_payload_inner->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update_batch_payload_inner->dimensions_unit
    if(product_update_batch_payload_inner->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", product_update_batch_payload_inner->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->weight_unit
    if(product_update_batch_payload_inner->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_update_batch_payload_inner->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->manage_stock
    if(product_update_batch_payload_inner->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_update_batch_payload_inner->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->in_stock
    if(product_update_batch_payload_inner->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_update_batch_payload_inner->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->backorder_status
    if(product_update_batch_payload_inner->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_update_batch_payload_inner->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->is_free_shipping
    if(product_update_batch_payload_inner->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_update_batch_payload_inner->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->is_virtual
    if(product_update_batch_payload_inner->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_update_batch_payload_inner->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->taxable
    if(product_update_batch_payload_inner->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_update_batch_payload_inner->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->downloadable
    if(product_update_batch_payload_inner->downloadable) {
    if(cJSON_AddBoolToObject(item, "downloadable", product_update_batch_payload_inner->downloadable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update_batch_payload_inner->warehouse_id
    if(product_update_batch_payload_inner->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_update_batch_payload_inner->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->tax_class_id
    if(product_update_batch_payload_inner->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_update_batch_payload_inner->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->categories_ids
    if(product_update_batch_payload_inner->categories_ids) {
    cJSON *categories_ids = cJSON_AddArrayToObject(item, "categories_ids");
    if(categories_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *categories_idsListEntry;
    list_ForEach(categories_idsListEntry, product_update_batch_payload_inner->categories_ids) {
    if(cJSON_AddStringToObject(categories_ids, "", categories_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->meta_title
    if(product_update_batch_payload_inner->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_update_batch_payload_inner->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->meta_description
    if(product_update_batch_payload_inner->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_update_batch_payload_inner->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->meta_keywords
    if(product_update_batch_payload_inner->meta_keywords) {
    cJSON *meta_keywords = cJSON_AddArrayToObject(item, "meta_keywords");
    if(meta_keywords == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *meta_keywordsListEntry;
    list_ForEach(meta_keywordsListEntry, product_update_batch_payload_inner->meta_keywords) {
    if(cJSON_AddStringToObject(meta_keywords, "", meta_keywordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->url
    if(product_update_batch_payload_inner->url) {
    if(cJSON_AddStringToObject(item, "url", product_update_batch_payload_inner->url) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->seo_url
    if(product_update_batch_payload_inner->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", product_update_batch_payload_inner->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->manufacturer
    if(product_update_batch_payload_inner->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", product_update_batch_payload_inner->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->manufacturer_id
    if(product_update_batch_payload_inner->manufacturer_id) {
    if(cJSON_AddStringToObject(item, "manufacturer_id", product_update_batch_payload_inner->manufacturer_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->mpn
    if(product_update_batch_payload_inner->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_update_batch_payload_inner->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->gtin
    if(product_update_batch_payload_inner->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_update_batch_payload_inner->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->upc
    if(product_update_batch_payload_inner->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_update_batch_payload_inner->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->isbn
    if(product_update_batch_payload_inner->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", product_update_batch_payload_inner->isbn) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->ean
    if(product_update_batch_payload_inner->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_update_batch_payload_inner->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->barcode
    if(product_update_batch_payload_inner->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_update_batch_payload_inner->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_update_batch_payload_inner->images
    if(product_update_batch_payload_inner->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (product_update_batch_payload_inner->images) {
    list_ForEach(imagesListEntry, product_update_batch_payload_inner->images) {
    cJSON *itemLocal = product_update_batch_payload_inner_images_inner_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // product_update_batch_payload_inner->related_products_ids
    if(product_update_batch_payload_inner->related_products_ids) {
    cJSON *related_products_ids = cJSON_AddArrayToObject(item, "related_products_ids");
    if(related_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *related_products_idsListEntry;
    list_ForEach(related_products_idsListEntry, product_update_batch_payload_inner->related_products_ids) {
    if(cJSON_AddStringToObject(related_products_ids, "", related_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->up_sell_products_ids
    if(product_update_batch_payload_inner->up_sell_products_ids) {
    cJSON *up_sell_products_ids = cJSON_AddArrayToObject(item, "up_sell_products_ids");
    if(up_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *up_sell_products_idsListEntry;
    list_ForEach(up_sell_products_idsListEntry, product_update_batch_payload_inner->up_sell_products_ids) {
    if(cJSON_AddStringToObject(up_sell_products_ids, "", up_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->cross_sell_products_ids
    if(product_update_batch_payload_inner->cross_sell_products_ids) {
    cJSON *cross_sell_products_ids = cJSON_AddArrayToObject(item, "cross_sell_products_ids");
    if(cross_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cross_sell_products_idsListEntry;
    list_ForEach(cross_sell_products_idsListEntry, product_update_batch_payload_inner->cross_sell_products_ids) {
    if(cJSON_AddStringToObject(cross_sell_products_ids, "", cross_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->tags
    if(product_update_batch_payload_inner->tags) {
    cJSON *tags = cJSON_AddArrayToObject(item, "tags");
    if(tags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tagsListEntry;
    list_ForEach(tagsListEntry, product_update_batch_payload_inner->tags) {
    if(cJSON_AddStringToObject(tags, "", tagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->search_keywords
    if(product_update_batch_payload_inner->search_keywords) {
    cJSON *search_keywords = cJSON_AddArrayToObject(item, "search_keywords");
    if(search_keywords == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *search_keywordsListEntry;
    list_ForEach(search_keywordsListEntry, product_update_batch_payload_inner->search_keywords) {
    if(cJSON_AddStringToObject(search_keywords, "", search_keywordsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update_batch_payload_inner->harmonized_system_code
    if(product_update_batch_payload_inner->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_update_batch_payload_inner->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_update_batch_payload_inner_t *product_update_batch_payload_inner_parseFromJSON(cJSON *product_update_batch_payload_innerJSON){

    product_update_batch_payload_inner_t *product_update_batch_payload_inner_local_var = NULL;

    // define the local list for product_update_batch_payload_inner->advanced_prices
    list_t *advanced_pricesList = NULL;

    // define the local list for product_update_batch_payload_inner->categories_ids
    list_t *categories_idsList = NULL;

    // define the local list for product_update_batch_payload_inner->meta_keywords
    list_t *meta_keywordsList = NULL;

    // define the local list for product_update_batch_payload_inner->images
    list_t *imagesList = NULL;

    // define the local list for product_update_batch_payload_inner->related_products_ids
    list_t *related_products_idsList = NULL;

    // define the local list for product_update_batch_payload_inner->up_sell_products_ids
    list_t *up_sell_products_idsList = NULL;

    // define the local list for product_update_batch_payload_inner->cross_sell_products_ids
    list_t *cross_sell_products_idsList = NULL;

    // define the local list for product_update_batch_payload_inner->tags
    list_t *tagsList = NULL;

    // define the local list for product_update_batch_payload_inner->search_keywords
    list_t *search_keywordsList = NULL;

    // product_update_batch_payload_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // product_update_batch_payload_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->advanced_prices
    cJSON *advanced_prices = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "advanced_prices");
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
        product_update_batch_payload_inner_advanced_prices_inner_t *advanced_pricesItem = product_update_batch_payload_inner_advanced_prices_inner_parseFromJSON(advanced_prices_local_nonprimitive);

        list_addElement(advanced_pricesList, advanced_pricesItem);
    }
    }

    // product_update_batch_payload_inner->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->increase_quantity
    cJSON *increase_quantity = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "increase_quantity");
    if (cJSON_IsNull(increase_quantity)) {
        increase_quantity = NULL;
    }
    if (increase_quantity) { 
    if(!cJSON_IsNumber(increase_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->reduce_quantity
    cJSON *reduce_quantity = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "reduce_quantity");
    if (cJSON_IsNull(reduce_quantity)) {
        reduce_quantity = NULL;
    }
    if (reduce_quantity) { 
    if(!cJSON_IsNumber(reduce_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->reserve_quantity
    cJSON *reserve_quantity = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "reserve_quantity");
    if (cJSON_IsNull(reserve_quantity)) {
        reserve_quantity = NULL;
    }
    if (reserve_quantity) { 
    if(!cJSON_IsNumber(reserve_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "condition");
    if (cJSON_IsNull(condition)) {
        condition = NULL;
    }
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->available_for_view
    cJSON *available_for_view = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "available_for_view");
    if (cJSON_IsNull(available_for_view)) {
        available_for_view = NULL;
    }
    if (available_for_view) { 
    if(!cJSON_IsBool(available_for_view))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->available_for_sale
    cJSON *available_for_sale = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "available_for_sale");
    if (cJSON_IsNull(available_for_sale)) {
        available_for_sale = NULL;
    }
    if (available_for_sale) { 
    if(!cJSON_IsBool(available_for_sale))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->avail_from
    cJSON *avail_from = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "avail_from");
    if (cJSON_IsNull(avail_from)) {
        avail_from = NULL;
    }
    if (avail_from) { 
    if(!cJSON_IsString(avail_from) && !cJSON_IsNull(avail_from))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_update_batch_payload_inner->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->downloadable
    cJSON *downloadable = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "downloadable");
    if (cJSON_IsNull(downloadable)) {
        downloadable = NULL;
    }
    if (downloadable) { 
    if(!cJSON_IsBool(downloadable))
    {
    goto end; //Bool
    }
    }

    // product_update_batch_payload_inner->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->categories_ids
    cJSON *categories_ids = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "categories_ids");
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

    // product_update_batch_payload_inner->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "meta_keywords");
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

    // product_update_batch_payload_inner->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->manufacturer_id
    cJSON *manufacturer_id = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "manufacturer_id");
    if (cJSON_IsNull(manufacturer_id)) {
        manufacturer_id = NULL;
    }
    if (manufacturer_id) { 
    if(!cJSON_IsString(manufacturer_id) && !cJSON_IsNull(manufacturer_id))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_update_batch_payload_inner->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "images");
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
        product_update_batch_payload_inner_images_inner_t *imagesItem = product_update_batch_payload_inner_images_inner_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // product_update_batch_payload_inner->related_products_ids
    cJSON *related_products_ids = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "related_products_ids");
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

    // product_update_batch_payload_inner->up_sell_products_ids
    cJSON *up_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "up_sell_products_ids");
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

    // product_update_batch_payload_inner->cross_sell_products_ids
    cJSON *cross_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "cross_sell_products_ids");
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

    // product_update_batch_payload_inner->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "tags");
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

    // product_update_batch_payload_inner->search_keywords
    cJSON *search_keywords = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "search_keywords");
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

    // product_update_batch_payload_inner->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_update_batch_payload_innerJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }


    product_update_batch_payload_inner_local_var = product_update_batch_payload_inner_create_internal (
        strdup(id->valuestring),
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        price ? price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        cost_price ? cost_price->valuedouble : 0,
        old_price ? old_price->valuedouble : 0,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        advanced_prices ? advanced_pricesList : NULL,
        quantity ? quantity->valuedouble : 0,
        increase_quantity ? increase_quantity->valuedouble : 0,
        reduce_quantity ? reduce_quantity->valuedouble : 0,
        reserve_quantity ? reserve_quantity->valuedouble : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        available_for_view ? available_for_view->valueint : 0,
        available_for_sale ? available_for_sale->valueint : 0,
        avail_from && !cJSON_IsNull(avail_from) ? strdup(avail_from->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        length ? length->valuedouble : 0,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        manage_stock ? manage_stock->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        is_free_shipping ? is_free_shipping->valueint : 0,
        is_virtual ? is_virtual->valueint : 0,
        taxable ? taxable->valueint : 0,
        downloadable ? downloadable->valueint : 0,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        categories_ids ? categories_idsList : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_keywords ? meta_keywordsList : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        manufacturer_id && !cJSON_IsNull(manufacturer_id) ? strdup(manufacturer_id->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        images ? imagesList : NULL,
        related_products_ids ? related_products_idsList : NULL,
        up_sell_products_ids ? up_sell_products_idsList : NULL,
        cross_sell_products_ids ? cross_sell_products_idsList : NULL,
        tags ? tagsList : NULL,
        search_keywords ? search_keywordsList : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL
        );

    return product_update_batch_payload_inner_local_var;
end:
    if (advanced_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, advanced_pricesList) {
            product_update_batch_payload_inner_advanced_prices_inner_free(listEntry->data);
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
    if (meta_keywordsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, meta_keywordsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(meta_keywordsList);
        meta_keywordsList = NULL;
    }
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            product_update_batch_payload_inner_images_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
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
    if (tagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tagsList);
        tagsList = NULL;
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
    return NULL;

}
