#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_update.h"



static product_update_t *product_update_create_internal(
    char *id,
    char *model,
    char *sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    double old_price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    double cost_price,
    double fixed_cost_shipping_price,
    double retail_price,
    list_t *tier_prices,
    double reserve_price,
    double buyitnow_price,
    int taxable,
    char *tax_class_id,
    char *type,
    char *status,
    char *condition,
    char *visible,
    int in_stock,
    int avail,
    char *avail_from,
    char *product_class,
    int available_for_view,
    char *stores_ids,
    char *store_id,
    char *lang_id,
    double quantity,
    double reserve_quantity,
    int manage_stock,
    char *backorder_status,
    double increase_quantity,
    double reduce_quantity,
    char *warehouse_id,
    double weight,
    char *weight_unit,
    double height,
    double length,
    double width,
    char *dimensions_unit,
    int is_virtual,
    int is_free_shipping,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *barcode,
    char *manufacturer,
    char *manufacturer_id,
    char *categories_ids,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *seo_url,
    char *search_keywords,
    char *tags,
    char *delivery_code,
    product_add_package_details_t *package_details,
    char *country_of_origin,
    char *harmonized_system_code,
    int shipping_template_id,
    char *when_made,
    int is_supply,
    int downloadable,
    list_t *materials,
    int auto_renew,
    int on_sale,
    char *production_partner_ids,
    product_add_manufacturer_info_t *manufacturer_info,
    char *report_request_id,
    int disable_report_cache,
    int reindex,
    int clear_cache,
    int check_process_status,
    list_t *specifics,
    int shop_section_id,
    product_add_personalization_details_t *personalization_details
    ) {
    product_update_t *product_update_local_var = malloc(sizeof(product_update_t));
    if (!product_update_local_var) {
        return NULL;
    }
    product_update_local_var->id = id;
    product_update_local_var->model = model;
    product_update_local_var->sku = sku;
    product_update_local_var->name = name;
    product_update_local_var->description = description;
    product_update_local_var->short_description = short_description;
    product_update_local_var->price = price;
    product_update_local_var->old_price = old_price;
    product_update_local_var->special_price = special_price;
    product_update_local_var->sprice_create = sprice_create;
    product_update_local_var->sprice_expire = sprice_expire;
    product_update_local_var->cost_price = cost_price;
    product_update_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_update_local_var->retail_price = retail_price;
    product_update_local_var->tier_prices = tier_prices;
    product_update_local_var->reserve_price = reserve_price;
    product_update_local_var->buyitnow_price = buyitnow_price;
    product_update_local_var->taxable = taxable;
    product_update_local_var->tax_class_id = tax_class_id;
    product_update_local_var->type = type;
    product_update_local_var->status = status;
    product_update_local_var->condition = condition;
    product_update_local_var->visible = visible;
    product_update_local_var->in_stock = in_stock;
    product_update_local_var->avail = avail;
    product_update_local_var->avail_from = avail_from;
    product_update_local_var->product_class = product_class;
    product_update_local_var->available_for_view = available_for_view;
    product_update_local_var->stores_ids = stores_ids;
    product_update_local_var->store_id = store_id;
    product_update_local_var->lang_id = lang_id;
    product_update_local_var->quantity = quantity;
    product_update_local_var->reserve_quantity = reserve_quantity;
    product_update_local_var->manage_stock = manage_stock;
    product_update_local_var->backorder_status = backorder_status;
    product_update_local_var->increase_quantity = increase_quantity;
    product_update_local_var->reduce_quantity = reduce_quantity;
    product_update_local_var->warehouse_id = warehouse_id;
    product_update_local_var->weight = weight;
    product_update_local_var->weight_unit = weight_unit;
    product_update_local_var->height = height;
    product_update_local_var->length = length;
    product_update_local_var->width = width;
    product_update_local_var->dimensions_unit = dimensions_unit;
    product_update_local_var->is_virtual = is_virtual;
    product_update_local_var->is_free_shipping = is_free_shipping;
    product_update_local_var->gtin = gtin;
    product_update_local_var->upc = upc;
    product_update_local_var->mpn = mpn;
    product_update_local_var->ean = ean;
    product_update_local_var->isbn = isbn;
    product_update_local_var->barcode = barcode;
    product_update_local_var->manufacturer = manufacturer;
    product_update_local_var->manufacturer_id = manufacturer_id;
    product_update_local_var->categories_ids = categories_ids;
    product_update_local_var->related_products_ids = related_products_ids;
    product_update_local_var->up_sell_products_ids = up_sell_products_ids;
    product_update_local_var->cross_sell_products_ids = cross_sell_products_ids;
    product_update_local_var->meta_title = meta_title;
    product_update_local_var->meta_keywords = meta_keywords;
    product_update_local_var->meta_description = meta_description;
    product_update_local_var->seo_url = seo_url;
    product_update_local_var->search_keywords = search_keywords;
    product_update_local_var->tags = tags;
    product_update_local_var->delivery_code = delivery_code;
    product_update_local_var->package_details = package_details;
    product_update_local_var->country_of_origin = country_of_origin;
    product_update_local_var->harmonized_system_code = harmonized_system_code;
    product_update_local_var->shipping_template_id = shipping_template_id;
    product_update_local_var->when_made = when_made;
    product_update_local_var->is_supply = is_supply;
    product_update_local_var->downloadable = downloadable;
    product_update_local_var->materials = materials;
    product_update_local_var->auto_renew = auto_renew;
    product_update_local_var->on_sale = on_sale;
    product_update_local_var->production_partner_ids = production_partner_ids;
    product_update_local_var->manufacturer_info = manufacturer_info;
    product_update_local_var->report_request_id = report_request_id;
    product_update_local_var->disable_report_cache = disable_report_cache;
    product_update_local_var->reindex = reindex;
    product_update_local_var->clear_cache = clear_cache;
    product_update_local_var->check_process_status = check_process_status;
    product_update_local_var->specifics = specifics;
    product_update_local_var->shop_section_id = shop_section_id;
    product_update_local_var->personalization_details = personalization_details;

    product_update_local_var->_library_owned = 1;
    return product_update_local_var;
}

__attribute__((deprecated)) product_update_t *product_update_create(
    char *id,
    char *model,
    char *sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    double old_price,
    double special_price,
    char *sprice_create,
    char *sprice_expire,
    double cost_price,
    double fixed_cost_shipping_price,
    double retail_price,
    list_t *tier_prices,
    double reserve_price,
    double buyitnow_price,
    int taxable,
    char *tax_class_id,
    char *type,
    char *status,
    char *condition,
    char *visible,
    int in_stock,
    int avail,
    char *avail_from,
    char *product_class,
    int available_for_view,
    char *stores_ids,
    char *store_id,
    char *lang_id,
    double quantity,
    double reserve_quantity,
    int manage_stock,
    char *backorder_status,
    double increase_quantity,
    double reduce_quantity,
    char *warehouse_id,
    double weight,
    char *weight_unit,
    double height,
    double length,
    double width,
    char *dimensions_unit,
    int is_virtual,
    int is_free_shipping,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *barcode,
    char *manufacturer,
    char *manufacturer_id,
    char *categories_ids,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *seo_url,
    char *search_keywords,
    char *tags,
    char *delivery_code,
    product_add_package_details_t *package_details,
    char *country_of_origin,
    char *harmonized_system_code,
    int shipping_template_id,
    char *when_made,
    int is_supply,
    int downloadable,
    list_t *materials,
    int auto_renew,
    int on_sale,
    char *production_partner_ids,
    product_add_manufacturer_info_t *manufacturer_info,
    char *report_request_id,
    int disable_report_cache,
    int reindex,
    int clear_cache,
    int check_process_status,
    list_t *specifics,
    int shop_section_id,
    product_add_personalization_details_t *personalization_details
    ) {
    return product_update_create_internal (
        id,
        model,
        sku,
        name,
        description,
        short_description,
        price,
        old_price,
        special_price,
        sprice_create,
        sprice_expire,
        cost_price,
        fixed_cost_shipping_price,
        retail_price,
        tier_prices,
        reserve_price,
        buyitnow_price,
        taxable,
        tax_class_id,
        type,
        status,
        condition,
        visible,
        in_stock,
        avail,
        avail_from,
        product_class,
        available_for_view,
        stores_ids,
        store_id,
        lang_id,
        quantity,
        reserve_quantity,
        manage_stock,
        backorder_status,
        increase_quantity,
        reduce_quantity,
        warehouse_id,
        weight,
        weight_unit,
        height,
        length,
        width,
        dimensions_unit,
        is_virtual,
        is_free_shipping,
        gtin,
        upc,
        mpn,
        ean,
        isbn,
        barcode,
        manufacturer,
        manufacturer_id,
        categories_ids,
        related_products_ids,
        up_sell_products_ids,
        cross_sell_products_ids,
        meta_title,
        meta_keywords,
        meta_description,
        seo_url,
        search_keywords,
        tags,
        delivery_code,
        package_details,
        country_of_origin,
        harmonized_system_code,
        shipping_template_id,
        when_made,
        is_supply,
        downloadable,
        materials,
        auto_renew,
        on_sale,
        production_partner_ids,
        manufacturer_info,
        report_request_id,
        disable_report_cache,
        reindex,
        clear_cache,
        check_process_status,
        specifics,
        shop_section_id,
        personalization_details
        );
}

void product_update_free(product_update_t *product_update) {
    if(NULL == product_update){
        return ;
    }
    if(product_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_update->id) {
        free(product_update->id);
        product_update->id = NULL;
    }
    if (product_update->model) {
        free(product_update->model);
        product_update->model = NULL;
    }
    if (product_update->sku) {
        free(product_update->sku);
        product_update->sku = NULL;
    }
    if (product_update->name) {
        free(product_update->name);
        product_update->name = NULL;
    }
    if (product_update->description) {
        free(product_update->description);
        product_update->description = NULL;
    }
    if (product_update->short_description) {
        free(product_update->short_description);
        product_update->short_description = NULL;
    }
    if (product_update->sprice_create) {
        free(product_update->sprice_create);
        product_update->sprice_create = NULL;
    }
    if (product_update->sprice_expire) {
        free(product_update->sprice_expire);
        product_update->sprice_expire = NULL;
    }
    if (product_update->tier_prices) {
        list_ForEach(listEntry, product_update->tier_prices) {
            product_add_tier_prices_inner_free(listEntry->data);
        }
        list_freeList(product_update->tier_prices);
        product_update->tier_prices = NULL;
    }
    if (product_update->tax_class_id) {
        free(product_update->tax_class_id);
        product_update->tax_class_id = NULL;
    }
    if (product_update->type) {
        free(product_update->type);
        product_update->type = NULL;
    }
    if (product_update->status) {
        free(product_update->status);
        product_update->status = NULL;
    }
    if (product_update->condition) {
        free(product_update->condition);
        product_update->condition = NULL;
    }
    if (product_update->visible) {
        free(product_update->visible);
        product_update->visible = NULL;
    }
    if (product_update->avail_from) {
        free(product_update->avail_from);
        product_update->avail_from = NULL;
    }
    if (product_update->product_class) {
        free(product_update->product_class);
        product_update->product_class = NULL;
    }
    if (product_update->stores_ids) {
        free(product_update->stores_ids);
        product_update->stores_ids = NULL;
    }
    if (product_update->store_id) {
        free(product_update->store_id);
        product_update->store_id = NULL;
    }
    if (product_update->lang_id) {
        free(product_update->lang_id);
        product_update->lang_id = NULL;
    }
    if (product_update->backorder_status) {
        free(product_update->backorder_status);
        product_update->backorder_status = NULL;
    }
    if (product_update->warehouse_id) {
        free(product_update->warehouse_id);
        product_update->warehouse_id = NULL;
    }
    if (product_update->weight_unit) {
        free(product_update->weight_unit);
        product_update->weight_unit = NULL;
    }
    if (product_update->dimensions_unit) {
        free(product_update->dimensions_unit);
        product_update->dimensions_unit = NULL;
    }
    if (product_update->gtin) {
        free(product_update->gtin);
        product_update->gtin = NULL;
    }
    if (product_update->upc) {
        free(product_update->upc);
        product_update->upc = NULL;
    }
    if (product_update->mpn) {
        free(product_update->mpn);
        product_update->mpn = NULL;
    }
    if (product_update->ean) {
        free(product_update->ean);
        product_update->ean = NULL;
    }
    if (product_update->isbn) {
        free(product_update->isbn);
        product_update->isbn = NULL;
    }
    if (product_update->barcode) {
        free(product_update->barcode);
        product_update->barcode = NULL;
    }
    if (product_update->manufacturer) {
        free(product_update->manufacturer);
        product_update->manufacturer = NULL;
    }
    if (product_update->manufacturer_id) {
        free(product_update->manufacturer_id);
        product_update->manufacturer_id = NULL;
    }
    if (product_update->categories_ids) {
        free(product_update->categories_ids);
        product_update->categories_ids = NULL;
    }
    if (product_update->related_products_ids) {
        free(product_update->related_products_ids);
        product_update->related_products_ids = NULL;
    }
    if (product_update->up_sell_products_ids) {
        free(product_update->up_sell_products_ids);
        product_update->up_sell_products_ids = NULL;
    }
    if (product_update->cross_sell_products_ids) {
        free(product_update->cross_sell_products_ids);
        product_update->cross_sell_products_ids = NULL;
    }
    if (product_update->meta_title) {
        free(product_update->meta_title);
        product_update->meta_title = NULL;
    }
    if (product_update->meta_keywords) {
        free(product_update->meta_keywords);
        product_update->meta_keywords = NULL;
    }
    if (product_update->meta_description) {
        free(product_update->meta_description);
        product_update->meta_description = NULL;
    }
    if (product_update->seo_url) {
        free(product_update->seo_url);
        product_update->seo_url = NULL;
    }
    if (product_update->search_keywords) {
        free(product_update->search_keywords);
        product_update->search_keywords = NULL;
    }
    if (product_update->tags) {
        free(product_update->tags);
        product_update->tags = NULL;
    }
    if (product_update->delivery_code) {
        free(product_update->delivery_code);
        product_update->delivery_code = NULL;
    }
    if (product_update->package_details) {
        product_add_package_details_free(product_update->package_details);
        product_update->package_details = NULL;
    }
    if (product_update->country_of_origin) {
        free(product_update->country_of_origin);
        product_update->country_of_origin = NULL;
    }
    if (product_update->harmonized_system_code) {
        free(product_update->harmonized_system_code);
        product_update->harmonized_system_code = NULL;
    }
    if (product_update->when_made) {
        free(product_update->when_made);
        product_update->when_made = NULL;
    }
    if (product_update->materials) {
        list_ForEach(listEntry, product_update->materials) {
            free(listEntry->data);
        }
        list_freeList(product_update->materials);
        product_update->materials = NULL;
    }
    if (product_update->production_partner_ids) {
        free(product_update->production_partner_ids);
        product_update->production_partner_ids = NULL;
    }
    if (product_update->manufacturer_info) {
        product_add_manufacturer_info_free(product_update->manufacturer_info);
        product_update->manufacturer_info = NULL;
    }
    if (product_update->report_request_id) {
        free(product_update->report_request_id);
        product_update->report_request_id = NULL;
    }
    if (product_update->specifics) {
        list_ForEach(listEntry, product_update->specifics) {
            product_add_specifics_inner_free(listEntry->data);
        }
        list_freeList(product_update->specifics);
        product_update->specifics = NULL;
    }
    if (product_update->personalization_details) {
        product_add_personalization_details_free(product_update->personalization_details);
        product_update->personalization_details = NULL;
    }
    free(product_update);
}

cJSON *product_update_convertToJSON(product_update_t *product_update) {
    cJSON *item = cJSON_CreateObject();

    // product_update->id
    if(product_update->id) {
    if(cJSON_AddStringToObject(item, "id", product_update->id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->model
    if(product_update->model) {
    if(cJSON_AddStringToObject(item, "model", product_update->model) == NULL) {
    goto fail; //String
    }
    }


    // product_update->sku
    if(product_update->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_update->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_update->name
    if(product_update->name) {
    if(cJSON_AddStringToObject(item, "name", product_update->name) == NULL) {
    goto fail; //String
    }
    }


    // product_update->description
    if(product_update->description) {
    if(cJSON_AddStringToObject(item, "description", product_update->description) == NULL) {
    goto fail; //String
    }
    }


    // product_update->short_description
    if(product_update->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_update->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_update->price
    if(product_update->price) {
    if(cJSON_AddNumberToObject(item, "price", product_update->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->old_price
    if(product_update->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_update->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->special_price
    if(product_update->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_update->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->sprice_create
    if(product_update->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_update->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_update->sprice_expire
    if(product_update->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_update->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_update->cost_price
    if(product_update->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_update->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->fixed_cost_shipping_price
    if(product_update->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_update->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->retail_price
    if(product_update->retail_price) {
    if(cJSON_AddNumberToObject(item, "retail_price", product_update->retail_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->tier_prices
    if(product_update->tier_prices) {
    cJSON *tier_prices = cJSON_AddArrayToObject(item, "tier_prices");
    if(tier_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tier_pricesListEntry;
    if (product_update->tier_prices) {
    list_ForEach(tier_pricesListEntry, product_update->tier_prices) {
    cJSON *itemLocal = product_add_tier_prices_inner_convertToJSON(tier_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tier_prices, itemLocal);
    }
    }
    }


    // product_update->reserve_price
    if(product_update->reserve_price) {
    if(cJSON_AddNumberToObject(item, "reserve_price", product_update->reserve_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->buyitnow_price
    if(product_update->buyitnow_price) {
    if(cJSON_AddNumberToObject(item, "buyitnow_price", product_update->buyitnow_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->taxable
    if(product_update->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_update->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->tax_class_id
    if(product_update->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_update->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->type
    if(product_update->type) {
    if(cJSON_AddStringToObject(item, "type", product_update->type) == NULL) {
    goto fail; //String
    }
    }


    // product_update->status
    if(product_update->status) {
    if(cJSON_AddStringToObject(item, "status", product_update->status) == NULL) {
    goto fail; //String
    }
    }


    // product_update->condition
    if(product_update->condition) {
    if(cJSON_AddStringToObject(item, "condition", product_update->condition) == NULL) {
    goto fail; //String
    }
    }


    // product_update->visible
    if(product_update->visible) {
    if(cJSON_AddStringToObject(item, "visible", product_update->visible) == NULL) {
    goto fail; //String
    }
    }


    // product_update->in_stock
    if(product_update->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_update->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->avail
    if(product_update->avail) {
    if(cJSON_AddBoolToObject(item, "avail", product_update->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->avail_from
    if(product_update->avail_from) {
    if(cJSON_AddStringToObject(item, "avail_from", product_update->avail_from) == NULL) {
    goto fail; //String
    }
    }


    // product_update->product_class
    if(product_update->product_class) {
    if(cJSON_AddStringToObject(item, "product_class", product_update->product_class) == NULL) {
    goto fail; //String
    }
    }


    // product_update->available_for_view
    if(product_update->available_for_view) {
    if(cJSON_AddBoolToObject(item, "available_for_view", product_update->available_for_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->stores_ids
    if(product_update->stores_ids) {
    if(cJSON_AddStringToObject(item, "stores_ids", product_update->stores_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->store_id
    if(product_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->lang_id
    if(product_update->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_update->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->quantity
    if(product_update->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_update->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->reserve_quantity
    if(product_update->reserve_quantity) {
    if(cJSON_AddNumberToObject(item, "reserve_quantity", product_update->reserve_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->manage_stock
    if(product_update->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_update->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->backorder_status
    if(product_update->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_update->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_update->increase_quantity
    if(product_update->increase_quantity) {
    if(cJSON_AddNumberToObject(item, "increase_quantity", product_update->increase_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->reduce_quantity
    if(product_update->reduce_quantity) {
    if(cJSON_AddNumberToObject(item, "reduce_quantity", product_update->reduce_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->warehouse_id
    if(product_update->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_update->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->weight
    if(product_update->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_update->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->weight_unit
    if(product_update->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_update->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_update->height
    if(product_update->height) {
    if(cJSON_AddNumberToObject(item, "height", product_update->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->length
    if(product_update->length) {
    if(cJSON_AddNumberToObject(item, "length", product_update->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->width
    if(product_update->width) {
    if(cJSON_AddNumberToObject(item, "width", product_update->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->dimensions_unit
    if(product_update->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", product_update->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_update->is_virtual
    if(product_update->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_update->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->is_free_shipping
    if(product_update->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_update->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->gtin
    if(product_update->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_update->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_update->upc
    if(product_update->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_update->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_update->mpn
    if(product_update->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_update->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_update->ean
    if(product_update->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_update->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_update->isbn
    if(product_update->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", product_update->isbn) == NULL) {
    goto fail; //String
    }
    }


    // product_update->barcode
    if(product_update->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_update->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_update->manufacturer
    if(product_update->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", product_update->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // product_update->manufacturer_id
    if(product_update->manufacturer_id) {
    if(cJSON_AddStringToObject(item, "manufacturer_id", product_update->manufacturer_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->categories_ids
    if(product_update->categories_ids) {
    if(cJSON_AddStringToObject(item, "categories_ids", product_update->categories_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->related_products_ids
    if(product_update->related_products_ids) {
    if(cJSON_AddStringToObject(item, "related_products_ids", product_update->related_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->up_sell_products_ids
    if(product_update->up_sell_products_ids) {
    if(cJSON_AddStringToObject(item, "up_sell_products_ids", product_update->up_sell_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->cross_sell_products_ids
    if(product_update->cross_sell_products_ids) {
    if(cJSON_AddStringToObject(item, "cross_sell_products_ids", product_update->cross_sell_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->meta_title
    if(product_update->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_update->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_update->meta_keywords
    if(product_update->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", product_update->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_update->meta_description
    if(product_update->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_update->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_update->seo_url
    if(product_update->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", product_update->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // product_update->search_keywords
    if(product_update->search_keywords) {
    if(cJSON_AddStringToObject(item, "search_keywords", product_update->search_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_update->tags
    if(product_update->tags) {
    if(cJSON_AddStringToObject(item, "tags", product_update->tags) == NULL) {
    goto fail; //String
    }
    }


    // product_update->delivery_code
    if(product_update->delivery_code) {
    if(cJSON_AddStringToObject(item, "delivery_code", product_update->delivery_code) == NULL) {
    goto fail; //String
    }
    }


    // product_update->package_details
    if(product_update->package_details) {
    cJSON *package_details_local_JSON = product_add_package_details_convertToJSON(product_update->package_details);
    if(package_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "package_details", package_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_update->country_of_origin
    if(product_update->country_of_origin) {
    if(cJSON_AddStringToObject(item, "country_of_origin", product_update->country_of_origin) == NULL) {
    goto fail; //String
    }
    }


    // product_update->harmonized_system_code
    if(product_update->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_update->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }


    // product_update->shipping_template_id
    if(product_update->shipping_template_id) {
    if(cJSON_AddNumberToObject(item, "shipping_template_id", product_update->shipping_template_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->when_made
    if(product_update->when_made) {
    if(cJSON_AddStringToObject(item, "when_made", product_update->when_made) == NULL) {
    goto fail; //String
    }
    }


    // product_update->is_supply
    if(product_update->is_supply) {
    if(cJSON_AddBoolToObject(item, "is_supply", product_update->is_supply) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->downloadable
    if(product_update->downloadable) {
    if(cJSON_AddBoolToObject(item, "downloadable", product_update->downloadable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->materials
    if(product_update->materials) {
    cJSON *materials = cJSON_AddArrayToObject(item, "materials");
    if(materials == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *materialsListEntry;
    list_ForEach(materialsListEntry, product_update->materials) {
    if(cJSON_AddStringToObject(materials, "", materialsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_update->auto_renew
    if(product_update->auto_renew) {
    if(cJSON_AddBoolToObject(item, "auto_renew", product_update->auto_renew) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->on_sale
    if(product_update->on_sale) {
    if(cJSON_AddBoolToObject(item, "on_sale", product_update->on_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->production_partner_ids
    if(product_update->production_partner_ids) {
    if(cJSON_AddStringToObject(item, "production_partner_ids", product_update->production_partner_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_update->manufacturer_info
    if(product_update->manufacturer_info) {
    cJSON *manufacturer_info_local_JSON = product_add_manufacturer_info_convertToJSON(product_update->manufacturer_info);
    if(manufacturer_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "manufacturer_info", manufacturer_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_update->report_request_id
    if(product_update->report_request_id) {
    if(cJSON_AddStringToObject(item, "report_request_id", product_update->report_request_id) == NULL) {
    goto fail; //String
    }
    }


    // product_update->disable_report_cache
    if(product_update->disable_report_cache) {
    if(cJSON_AddBoolToObject(item, "disable_report_cache", product_update->disable_report_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->reindex
    if(product_update->reindex) {
    if(cJSON_AddBoolToObject(item, "reindex", product_update->reindex) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->clear_cache
    if(product_update->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_update->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->check_process_status
    if(product_update->check_process_status) {
    if(cJSON_AddBoolToObject(item, "check_process_status", product_update->check_process_status) == NULL) {
    goto fail; //Bool
    }
    }


    // product_update->specifics
    if(product_update->specifics) {
    cJSON *specifics = cJSON_AddArrayToObject(item, "specifics");
    if(specifics == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *specificsListEntry;
    if (product_update->specifics) {
    list_ForEach(specificsListEntry, product_update->specifics) {
    cJSON *itemLocal = product_add_specifics_inner_convertToJSON(specificsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(specifics, itemLocal);
    }
    }
    }


    // product_update->shop_section_id
    if(product_update->shop_section_id) {
    if(cJSON_AddNumberToObject(item, "shop_section_id", product_update->shop_section_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_update->personalization_details
    if(product_update->personalization_details) {
    cJSON *personalization_details_local_JSON = product_add_personalization_details_convertToJSON(product_update->personalization_details);
    if(personalization_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "personalization_details", personalization_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

product_update_t *product_update_parseFromJSON(cJSON *product_updateJSON){

    product_update_t *product_update_local_var = NULL;

    // define the local list for product_update->tier_prices
    list_t *tier_pricesList = NULL;

    // define the local variable for product_update->package_details
    product_add_package_details_t *package_details_local_nonprim = NULL;

    // define the local list for product_update->materials
    list_t *materialsList = NULL;

    // define the local variable for product_update->manufacturer_info
    product_add_manufacturer_info_t *manufacturer_info_local_nonprim = NULL;

    // define the local list for product_update->specifics
    list_t *specificsList = NULL;

    // define the local variable for product_update->personalization_details
    product_add_personalization_details_t *personalization_details_local_nonprim = NULL;

    // product_update->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_update->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // product_update->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_update->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_update->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_update->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_update->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_update->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_update->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_update->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->retail_price
    cJSON *retail_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "retail_price");
    if (cJSON_IsNull(retail_price)) {
        retail_price = NULL;
    }
    if (retail_price) { 
    if(!cJSON_IsNumber(retail_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->tier_prices
    cJSON *tier_prices = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "tier_prices");
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

    // product_update->reserve_price
    cJSON *reserve_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "reserve_price");
    if (cJSON_IsNull(reserve_price)) {
        reserve_price = NULL;
    }
    if (reserve_price) { 
    if(!cJSON_IsNumber(reserve_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->buyitnow_price
    cJSON *buyitnow_price = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "buyitnow_price");
    if (cJSON_IsNull(buyitnow_price)) {
        buyitnow_price = NULL;
    }
    if (buyitnow_price) { 
    if(!cJSON_IsNumber(buyitnow_price))
    {
    goto end; //Numeric
    }
    }

    // product_update->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_update->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_update->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_update->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_update->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "condition");
    if (cJSON_IsNull(condition)) {
        condition = NULL;
    }
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // product_update->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // product_update->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_update->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // product_update->avail_from
    cJSON *avail_from = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "avail_from");
    if (cJSON_IsNull(avail_from)) {
        avail_from = NULL;
    }
    if (avail_from) { 
    if(!cJSON_IsString(avail_from) && !cJSON_IsNull(avail_from))
    {
    goto end; //String
    }
    }

    // product_update->product_class
    cJSON *product_class = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "product_class");
    if (cJSON_IsNull(product_class)) {
        product_class = NULL;
    }
    if (product_class) { 
    if(!cJSON_IsString(product_class) && !cJSON_IsNull(product_class))
    {
    goto end; //String
    }
    }

    // product_update->available_for_view
    cJSON *available_for_view = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "available_for_view");
    if (cJSON_IsNull(available_for_view)) {
        available_for_view = NULL;
    }
    if (available_for_view) { 
    if(!cJSON_IsBool(available_for_view))
    {
    goto end; //Bool
    }
    }

    // product_update->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    if(!cJSON_IsString(stores_ids) && !cJSON_IsNull(stores_ids))
    {
    goto end; //String
    }
    }

    // product_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_update->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_update->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update->reserve_quantity
    cJSON *reserve_quantity = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "reserve_quantity");
    if (cJSON_IsNull(reserve_quantity)) {
        reserve_quantity = NULL;
    }
    if (reserve_quantity) { 
    if(!cJSON_IsNumber(reserve_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_update->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_update->increase_quantity
    cJSON *increase_quantity = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "increase_quantity");
    if (cJSON_IsNull(increase_quantity)) {
        increase_quantity = NULL;
    }
    if (increase_quantity) { 
    if(!cJSON_IsNumber(increase_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update->reduce_quantity
    cJSON *reduce_quantity = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "reduce_quantity");
    if (cJSON_IsNull(reduce_quantity)) {
        reduce_quantity = NULL;
    }
    if (reduce_quantity) { 
    if(!cJSON_IsNumber(reduce_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_update->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_update->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_update->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_update->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_update->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_update->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_update->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // product_update->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_update->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_update->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_update->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_update->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_update->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_update->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // product_update->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_update->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // product_update->manufacturer_id
    cJSON *manufacturer_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "manufacturer_id");
    if (cJSON_IsNull(manufacturer_id)) {
        manufacturer_id = NULL;
    }
    if (manufacturer_id) { 
    if(!cJSON_IsString(manufacturer_id) && !cJSON_IsNull(manufacturer_id))
    {
    goto end; //String
    }
    }

    // product_update->categories_ids
    cJSON *categories_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "categories_ids");
    if (cJSON_IsNull(categories_ids)) {
        categories_ids = NULL;
    }
    if (categories_ids) { 
    if(!cJSON_IsString(categories_ids) && !cJSON_IsNull(categories_ids))
    {
    goto end; //String
    }
    }

    // product_update->related_products_ids
    cJSON *related_products_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "related_products_ids");
    if (cJSON_IsNull(related_products_ids)) {
        related_products_ids = NULL;
    }
    if (related_products_ids) { 
    if(!cJSON_IsString(related_products_ids) && !cJSON_IsNull(related_products_ids))
    {
    goto end; //String
    }
    }

    // product_update->up_sell_products_ids
    cJSON *up_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "up_sell_products_ids");
    if (cJSON_IsNull(up_sell_products_ids)) {
        up_sell_products_ids = NULL;
    }
    if (up_sell_products_ids) { 
    if(!cJSON_IsString(up_sell_products_ids) && !cJSON_IsNull(up_sell_products_ids))
    {
    goto end; //String
    }
    }

    // product_update->cross_sell_products_ids
    cJSON *cross_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "cross_sell_products_ids");
    if (cJSON_IsNull(cross_sell_products_ids)) {
        cross_sell_products_ids = NULL;
    }
    if (cross_sell_products_ids) { 
    if(!cJSON_IsString(cross_sell_products_ids) && !cJSON_IsNull(cross_sell_products_ids))
    {
    goto end; //String
    }
    }

    // product_update->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_update->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // product_update->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_update->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // product_update->search_keywords
    cJSON *search_keywords = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "search_keywords");
    if (cJSON_IsNull(search_keywords)) {
        search_keywords = NULL;
    }
    if (search_keywords) { 
    if(!cJSON_IsString(search_keywords) && !cJSON_IsNull(search_keywords))
    {
    goto end; //String
    }
    }

    // product_update->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }

    // product_update->delivery_code
    cJSON *delivery_code = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "delivery_code");
    if (cJSON_IsNull(delivery_code)) {
        delivery_code = NULL;
    }
    if (delivery_code) { 
    if(!cJSON_IsString(delivery_code) && !cJSON_IsNull(delivery_code))
    {
    goto end; //String
    }
    }

    // product_update->package_details
    cJSON *package_details = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "package_details");
    if (cJSON_IsNull(package_details)) {
        package_details = NULL;
    }
    if (package_details) { 
    package_details_local_nonprim = product_add_package_details_parseFromJSON(package_details); //nonprimitive
    }

    // product_update->country_of_origin
    cJSON *country_of_origin = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "country_of_origin");
    if (cJSON_IsNull(country_of_origin)) {
        country_of_origin = NULL;
    }
    if (country_of_origin) { 
    if(!cJSON_IsString(country_of_origin) && !cJSON_IsNull(country_of_origin))
    {
    goto end; //String
    }
    }

    // product_update->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }

    // product_update->shipping_template_id
    cJSON *shipping_template_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "shipping_template_id");
    if (cJSON_IsNull(shipping_template_id)) {
        shipping_template_id = NULL;
    }
    if (shipping_template_id) { 
    if(!cJSON_IsNumber(shipping_template_id))
    {
    goto end; //Numeric
    }
    }

    // product_update->when_made
    cJSON *when_made = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "when_made");
    if (cJSON_IsNull(when_made)) {
        when_made = NULL;
    }
    if (when_made) { 
    if(!cJSON_IsString(when_made) && !cJSON_IsNull(when_made))
    {
    goto end; //String
    }
    }

    // product_update->is_supply
    cJSON *is_supply = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "is_supply");
    if (cJSON_IsNull(is_supply)) {
        is_supply = NULL;
    }
    if (is_supply) { 
    if(!cJSON_IsBool(is_supply))
    {
    goto end; //Bool
    }
    }

    // product_update->downloadable
    cJSON *downloadable = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "downloadable");
    if (cJSON_IsNull(downloadable)) {
        downloadable = NULL;
    }
    if (downloadable) { 
    if(!cJSON_IsBool(downloadable))
    {
    goto end; //Bool
    }
    }

    // product_update->materials
    cJSON *materials = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "materials");
    if (cJSON_IsNull(materials)) {
        materials = NULL;
    }
    if (materials) { 
    cJSON *materials_local = NULL;
    if(!cJSON_IsArray(materials)) {
        goto end;//primitive container
    }
    materialsList = list_createList();

    cJSON_ArrayForEach(materials_local, materials)
    {
        if(!cJSON_IsString(materials_local))
        {
            goto end;
        }
        list_addElement(materialsList , strdup(materials_local->valuestring));
    }
    }

    // product_update->auto_renew
    cJSON *auto_renew = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "auto_renew");
    if (cJSON_IsNull(auto_renew)) {
        auto_renew = NULL;
    }
    if (auto_renew) { 
    if(!cJSON_IsBool(auto_renew))
    {
    goto end; //Bool
    }
    }

    // product_update->on_sale
    cJSON *on_sale = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "on_sale");
    if (cJSON_IsNull(on_sale)) {
        on_sale = NULL;
    }
    if (on_sale) { 
    if(!cJSON_IsBool(on_sale))
    {
    goto end; //Bool
    }
    }

    // product_update->production_partner_ids
    cJSON *production_partner_ids = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "production_partner_ids");
    if (cJSON_IsNull(production_partner_ids)) {
        production_partner_ids = NULL;
    }
    if (production_partner_ids) { 
    if(!cJSON_IsString(production_partner_ids) && !cJSON_IsNull(production_partner_ids))
    {
    goto end; //String
    }
    }

    // product_update->manufacturer_info
    cJSON *manufacturer_info = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "manufacturer_info");
    if (cJSON_IsNull(manufacturer_info)) {
        manufacturer_info = NULL;
    }
    if (manufacturer_info) { 
    manufacturer_info_local_nonprim = product_add_manufacturer_info_parseFromJSON(manufacturer_info); //nonprimitive
    }

    // product_update->report_request_id
    cJSON *report_request_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "report_request_id");
    if (cJSON_IsNull(report_request_id)) {
        report_request_id = NULL;
    }
    if (report_request_id) { 
    if(!cJSON_IsString(report_request_id) && !cJSON_IsNull(report_request_id))
    {
    goto end; //String
    }
    }

    // product_update->disable_report_cache
    cJSON *disable_report_cache = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "disable_report_cache");
    if (cJSON_IsNull(disable_report_cache)) {
        disable_report_cache = NULL;
    }
    if (disable_report_cache) { 
    if(!cJSON_IsBool(disable_report_cache))
    {
    goto end; //Bool
    }
    }

    // product_update->reindex
    cJSON *reindex = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "reindex");
    if (cJSON_IsNull(reindex)) {
        reindex = NULL;
    }
    if (reindex) { 
    if(!cJSON_IsBool(reindex))
    {
    goto end; //Bool
    }
    }

    // product_update->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }

    // product_update->check_process_status
    cJSON *check_process_status = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "check_process_status");
    if (cJSON_IsNull(check_process_status)) {
        check_process_status = NULL;
    }
    if (check_process_status) { 
    if(!cJSON_IsBool(check_process_status))
    {
    goto end; //Bool
    }
    }

    // product_update->specifics
    cJSON *specifics = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "specifics");
    if (cJSON_IsNull(specifics)) {
        specifics = NULL;
    }
    if (specifics) { 
    cJSON *specifics_local_nonprimitive = NULL;
    if(!cJSON_IsArray(specifics)){
        goto end; //nonprimitive container
    }

    specificsList = list_createList();

    cJSON_ArrayForEach(specifics_local_nonprimitive,specifics )
    {
        if(!cJSON_IsObject(specifics_local_nonprimitive)){
            goto end;
        }
        product_add_specifics_inner_t *specificsItem = product_add_specifics_inner_parseFromJSON(specifics_local_nonprimitive);

        list_addElement(specificsList, specificsItem);
    }
    }

    // product_update->shop_section_id
    cJSON *shop_section_id = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "shop_section_id");
    if (cJSON_IsNull(shop_section_id)) {
        shop_section_id = NULL;
    }
    if (shop_section_id) { 
    if(!cJSON_IsNumber(shop_section_id))
    {
    goto end; //Numeric
    }
    }

    // product_update->personalization_details
    cJSON *personalization_details = cJSON_GetObjectItemCaseSensitive(product_updateJSON, "personalization_details");
    if (cJSON_IsNull(personalization_details)) {
        personalization_details = NULL;
    }
    if (personalization_details) { 
    personalization_details_local_nonprim = product_add_personalization_details_parseFromJSON(personalization_details); //nonprimitive
    }


    product_update_local_var = product_update_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        price ? price->valuedouble : 0,
        old_price ? old_price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        cost_price ? cost_price->valuedouble : 0,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        retail_price ? retail_price->valuedouble : 0,
        tier_prices ? tier_pricesList : NULL,
        reserve_price ? reserve_price->valuedouble : 0,
        buyitnow_price ? buyitnow_price->valuedouble : 0,
        taxable ? taxable->valueint : 0,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        in_stock ? in_stock->valueint : 0,
        avail ? avail->valueint : 0,
        avail_from && !cJSON_IsNull(avail_from) ? strdup(avail_from->valuestring) : NULL,
        product_class && !cJSON_IsNull(product_class) ? strdup(product_class->valuestring) : NULL,
        available_for_view ? available_for_view->valueint : 0,
        stores_ids && !cJSON_IsNull(stores_ids) ? strdup(stores_ids->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        reserve_quantity ? reserve_quantity->valuedouble : 0,
        manage_stock ? manage_stock->valueint : 0,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        increase_quantity ? increase_quantity->valuedouble : 0,
        reduce_quantity ? reduce_quantity->valuedouble : 0,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        width ? width->valuedouble : 0,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        is_virtual ? is_virtual->valueint : 0,
        is_free_shipping ? is_free_shipping->valueint : 0,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        manufacturer_id && !cJSON_IsNull(manufacturer_id) ? strdup(manufacturer_id->valuestring) : NULL,
        categories_ids && !cJSON_IsNull(categories_ids) ? strdup(categories_ids->valuestring) : NULL,
        related_products_ids && !cJSON_IsNull(related_products_ids) ? strdup(related_products_ids->valuestring) : NULL,
        up_sell_products_ids && !cJSON_IsNull(up_sell_products_ids) ? strdup(up_sell_products_ids->valuestring) : NULL,
        cross_sell_products_ids && !cJSON_IsNull(cross_sell_products_ids) ? strdup(cross_sell_products_ids->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        search_keywords && !cJSON_IsNull(search_keywords) ? strdup(search_keywords->valuestring) : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL,
        delivery_code && !cJSON_IsNull(delivery_code) ? strdup(delivery_code->valuestring) : NULL,
        package_details ? package_details_local_nonprim : NULL,
        country_of_origin && !cJSON_IsNull(country_of_origin) ? strdup(country_of_origin->valuestring) : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL,
        shipping_template_id ? shipping_template_id->valuedouble : 0,
        when_made && !cJSON_IsNull(when_made) ? strdup(when_made->valuestring) : NULL,
        is_supply ? is_supply->valueint : 0,
        downloadable ? downloadable->valueint : 0,
        materials ? materialsList : NULL,
        auto_renew ? auto_renew->valueint : 0,
        on_sale ? on_sale->valueint : 0,
        production_partner_ids && !cJSON_IsNull(production_partner_ids) ? strdup(production_partner_ids->valuestring) : NULL,
        manufacturer_info ? manufacturer_info_local_nonprim : NULL,
        report_request_id && !cJSON_IsNull(report_request_id) ? strdup(report_request_id->valuestring) : NULL,
        disable_report_cache ? disable_report_cache->valueint : 0,
        reindex ? reindex->valueint : 0,
        clear_cache ? clear_cache->valueint : 0,
        check_process_status ? check_process_status->valueint : 0,
        specifics ? specificsList : NULL,
        shop_section_id ? shop_section_id->valuedouble : 0,
        personalization_details ? personalization_details_local_nonprim : NULL
        );

    return product_update_local_var;
end:
    if (tier_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tier_pricesList) {
            product_add_tier_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tier_pricesList);
        tier_pricesList = NULL;
    }
    if (package_details_local_nonprim) {
        product_add_package_details_free(package_details_local_nonprim);
        package_details_local_nonprim = NULL;
    }
    if (materialsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, materialsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(materialsList);
        materialsList = NULL;
    }
    if (manufacturer_info_local_nonprim) {
        product_add_manufacturer_info_free(manufacturer_info_local_nonprim);
        manufacturer_info_local_nonprim = NULL;
    }
    if (specificsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, specificsList) {
            product_add_specifics_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(specificsList);
        specificsList = NULL;
    }
    if (personalization_details_local_nonprim) {
        product_add_personalization_details_free(personalization_details_local_nonprim);
        personalization_details_local_nonprim = NULL;
    }
    return NULL;

}
