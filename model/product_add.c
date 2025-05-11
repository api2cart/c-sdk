#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_add.h"



static product_add_t *product_add_create_internal(
    char *name,
    char *model,
    char *description,
    double price,
    char *sku,
    char *short_description,
    char *type,
    char *status,
    char *visible,
    char *category_id,
    char *categories_ids,
    char *product_class,
    char *product_type,
    int is_virtual,
    int downloadable,
    int is_supply,
    int available_for_view,
    int available_for_sale,
    char *store_id,
    char *stores_ids,
    char *lang_id,
    double old_price,
    double special_price,
    double wholesale_price,
    double cost_price,
    double fixed_cost_shipping_price,
    list_t *tier_prices,
    list_t *group_prices,
    double buyitnow_price,
    double reserve_price,
    double quantity,
    int in_stock,
    int manage_stock,
    char *warehouse_id,
    char *backorder_status,
    double min_order_quantity,
    double max_order_quantity,
    double weight,
    char *weight_unit,
    double width,
    double height,
    double length,
    char *dimensions_unit,
    char *barcode,
    char *upc,
    char *ean,
    char *isbn,
    char *gtin,
    char *mpn,
    char *asin,
    char *product_reference,
    char *harmonized_system_code,
    char *country_of_origin,
    char *manufacturer,
    char *manufacturer_id,
    product_add_manufacturer_info_t *manufacturer_info,
    char *brand_name,
    char *image_url,
    char *image_name,
    list_t *additional_image_urls,
    list_t *files,
    product_add_size_chart_t *size_chart,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *attribute_set_name,
    char *attribute_name,
    char *search_keywords,
    char *tags,
    list_t *materials,
    list_t *certifications,
    list_t *specifics,
    char *avail_from,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    char *created_at,
    int auto_renew,
    char *when_made,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *seo_url,
    char *tax_class_id,
    int taxable,
    product_add_sales_tax_t *sales_tax,
    char *condition,
    char *condition_description,
    int allow_display_condition,
    list_t *payment_methods,
    char *paypal_email,
    int shipping_template_id,
    list_t *shipping_details,
    int is_free_shipping,
    char *delivery_code,
    char *delivery_type,
    int delivery_time,
    char *delivery_option_ids,
    product_add_package_details_t *package_details,
    list_t *logistic_info,
    char *listing_duration,
    char *listing_type,
    int return_accepted,
    product_add_seller_profiles_t *seller_profiles,
    char *auction_confidentiality_level,
    product_add_best_offer_t *best_offer,
    char *production_partner_ids,
    char *marketplace_item_properties,
    int clear_cache,
    int viewed_count,
    int ordered_count,
    int shop_section_id,
    int return_policy_id,
    product_add_personalization_details_t *personalization_details
    ) {
    product_add_t *product_add_local_var = malloc(sizeof(product_add_t));
    if (!product_add_local_var) {
        return NULL;
    }
    product_add_local_var->name = name;
    product_add_local_var->model = model;
    product_add_local_var->description = description;
    product_add_local_var->price = price;
    product_add_local_var->sku = sku;
    product_add_local_var->short_description = short_description;
    product_add_local_var->type = type;
    product_add_local_var->status = status;
    product_add_local_var->visible = visible;
    product_add_local_var->category_id = category_id;
    product_add_local_var->categories_ids = categories_ids;
    product_add_local_var->product_class = product_class;
    product_add_local_var->product_type = product_type;
    product_add_local_var->is_virtual = is_virtual;
    product_add_local_var->downloadable = downloadable;
    product_add_local_var->is_supply = is_supply;
    product_add_local_var->available_for_view = available_for_view;
    product_add_local_var->available_for_sale = available_for_sale;
    product_add_local_var->store_id = store_id;
    product_add_local_var->stores_ids = stores_ids;
    product_add_local_var->lang_id = lang_id;
    product_add_local_var->old_price = old_price;
    product_add_local_var->special_price = special_price;
    product_add_local_var->wholesale_price = wholesale_price;
    product_add_local_var->cost_price = cost_price;
    product_add_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_add_local_var->tier_prices = tier_prices;
    product_add_local_var->group_prices = group_prices;
    product_add_local_var->buyitnow_price = buyitnow_price;
    product_add_local_var->reserve_price = reserve_price;
    product_add_local_var->quantity = quantity;
    product_add_local_var->in_stock = in_stock;
    product_add_local_var->manage_stock = manage_stock;
    product_add_local_var->warehouse_id = warehouse_id;
    product_add_local_var->backorder_status = backorder_status;
    product_add_local_var->min_order_quantity = min_order_quantity;
    product_add_local_var->max_order_quantity = max_order_quantity;
    product_add_local_var->weight = weight;
    product_add_local_var->weight_unit = weight_unit;
    product_add_local_var->width = width;
    product_add_local_var->height = height;
    product_add_local_var->length = length;
    product_add_local_var->dimensions_unit = dimensions_unit;
    product_add_local_var->barcode = barcode;
    product_add_local_var->upc = upc;
    product_add_local_var->ean = ean;
    product_add_local_var->isbn = isbn;
    product_add_local_var->gtin = gtin;
    product_add_local_var->mpn = mpn;
    product_add_local_var->asin = asin;
    product_add_local_var->product_reference = product_reference;
    product_add_local_var->harmonized_system_code = harmonized_system_code;
    product_add_local_var->country_of_origin = country_of_origin;
    product_add_local_var->manufacturer = manufacturer;
    product_add_local_var->manufacturer_id = manufacturer_id;
    product_add_local_var->manufacturer_info = manufacturer_info;
    product_add_local_var->brand_name = brand_name;
    product_add_local_var->image_url = image_url;
    product_add_local_var->image_name = image_name;
    product_add_local_var->additional_image_urls = additional_image_urls;
    product_add_local_var->files = files;
    product_add_local_var->size_chart = size_chart;
    product_add_local_var->related_products_ids = related_products_ids;
    product_add_local_var->up_sell_products_ids = up_sell_products_ids;
    product_add_local_var->cross_sell_products_ids = cross_sell_products_ids;
    product_add_local_var->attribute_set_name = attribute_set_name;
    product_add_local_var->attribute_name = attribute_name;
    product_add_local_var->search_keywords = search_keywords;
    product_add_local_var->tags = tags;
    product_add_local_var->materials = materials;
    product_add_local_var->certifications = certifications;
    product_add_local_var->specifics = specifics;
    product_add_local_var->avail_from = avail_from;
    product_add_local_var->sprice_create = sprice_create;
    product_add_local_var->sprice_modified = sprice_modified;
    product_add_local_var->sprice_expire = sprice_expire;
    product_add_local_var->created_at = created_at;
    product_add_local_var->auto_renew = auto_renew;
    product_add_local_var->when_made = when_made;
    product_add_local_var->meta_title = meta_title;
    product_add_local_var->meta_keywords = meta_keywords;
    product_add_local_var->meta_description = meta_description;
    product_add_local_var->url = url;
    product_add_local_var->seo_url = seo_url;
    product_add_local_var->tax_class_id = tax_class_id;
    product_add_local_var->taxable = taxable;
    product_add_local_var->sales_tax = sales_tax;
    product_add_local_var->condition = condition;
    product_add_local_var->condition_description = condition_description;
    product_add_local_var->allow_display_condition = allow_display_condition;
    product_add_local_var->payment_methods = payment_methods;
    product_add_local_var->paypal_email = paypal_email;
    product_add_local_var->shipping_template_id = shipping_template_id;
    product_add_local_var->shipping_details = shipping_details;
    product_add_local_var->is_free_shipping = is_free_shipping;
    product_add_local_var->delivery_code = delivery_code;
    product_add_local_var->delivery_type = delivery_type;
    product_add_local_var->delivery_time = delivery_time;
    product_add_local_var->delivery_option_ids = delivery_option_ids;
    product_add_local_var->package_details = package_details;
    product_add_local_var->logistic_info = logistic_info;
    product_add_local_var->listing_duration = listing_duration;
    product_add_local_var->listing_type = listing_type;
    product_add_local_var->return_accepted = return_accepted;
    product_add_local_var->seller_profiles = seller_profiles;
    product_add_local_var->auction_confidentiality_level = auction_confidentiality_level;
    product_add_local_var->best_offer = best_offer;
    product_add_local_var->production_partner_ids = production_partner_ids;
    product_add_local_var->marketplace_item_properties = marketplace_item_properties;
    product_add_local_var->clear_cache = clear_cache;
    product_add_local_var->viewed_count = viewed_count;
    product_add_local_var->ordered_count = ordered_count;
    product_add_local_var->shop_section_id = shop_section_id;
    product_add_local_var->return_policy_id = return_policy_id;
    product_add_local_var->personalization_details = personalization_details;

    product_add_local_var->_library_owned = 1;
    return product_add_local_var;
}

__attribute__((deprecated)) product_add_t *product_add_create(
    char *name,
    char *model,
    char *description,
    double price,
    char *sku,
    char *short_description,
    char *type,
    char *status,
    char *visible,
    char *category_id,
    char *categories_ids,
    char *product_class,
    char *product_type,
    int is_virtual,
    int downloadable,
    int is_supply,
    int available_for_view,
    int available_for_sale,
    char *store_id,
    char *stores_ids,
    char *lang_id,
    double old_price,
    double special_price,
    double wholesale_price,
    double cost_price,
    double fixed_cost_shipping_price,
    list_t *tier_prices,
    list_t *group_prices,
    double buyitnow_price,
    double reserve_price,
    double quantity,
    int in_stock,
    int manage_stock,
    char *warehouse_id,
    char *backorder_status,
    double min_order_quantity,
    double max_order_quantity,
    double weight,
    char *weight_unit,
    double width,
    double height,
    double length,
    char *dimensions_unit,
    char *barcode,
    char *upc,
    char *ean,
    char *isbn,
    char *gtin,
    char *mpn,
    char *asin,
    char *product_reference,
    char *harmonized_system_code,
    char *country_of_origin,
    char *manufacturer,
    char *manufacturer_id,
    product_add_manufacturer_info_t *manufacturer_info,
    char *brand_name,
    char *image_url,
    char *image_name,
    list_t *additional_image_urls,
    list_t *files,
    product_add_size_chart_t *size_chart,
    char *related_products_ids,
    char *up_sell_products_ids,
    char *cross_sell_products_ids,
    char *attribute_set_name,
    char *attribute_name,
    char *search_keywords,
    char *tags,
    list_t *materials,
    list_t *certifications,
    list_t *specifics,
    char *avail_from,
    char *sprice_create,
    char *sprice_modified,
    char *sprice_expire,
    char *created_at,
    int auto_renew,
    char *when_made,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    char *url,
    char *seo_url,
    char *tax_class_id,
    int taxable,
    product_add_sales_tax_t *sales_tax,
    char *condition,
    char *condition_description,
    int allow_display_condition,
    list_t *payment_methods,
    char *paypal_email,
    int shipping_template_id,
    list_t *shipping_details,
    int is_free_shipping,
    char *delivery_code,
    char *delivery_type,
    int delivery_time,
    char *delivery_option_ids,
    product_add_package_details_t *package_details,
    list_t *logistic_info,
    char *listing_duration,
    char *listing_type,
    int return_accepted,
    product_add_seller_profiles_t *seller_profiles,
    char *auction_confidentiality_level,
    product_add_best_offer_t *best_offer,
    char *production_partner_ids,
    char *marketplace_item_properties,
    int clear_cache,
    int viewed_count,
    int ordered_count,
    int shop_section_id,
    int return_policy_id,
    product_add_personalization_details_t *personalization_details
    ) {
    return product_add_create_internal (
        name,
        model,
        description,
        price,
        sku,
        short_description,
        type,
        status,
        visible,
        category_id,
        categories_ids,
        product_class,
        product_type,
        is_virtual,
        downloadable,
        is_supply,
        available_for_view,
        available_for_sale,
        store_id,
        stores_ids,
        lang_id,
        old_price,
        special_price,
        wholesale_price,
        cost_price,
        fixed_cost_shipping_price,
        tier_prices,
        group_prices,
        buyitnow_price,
        reserve_price,
        quantity,
        in_stock,
        manage_stock,
        warehouse_id,
        backorder_status,
        min_order_quantity,
        max_order_quantity,
        weight,
        weight_unit,
        width,
        height,
        length,
        dimensions_unit,
        barcode,
        upc,
        ean,
        isbn,
        gtin,
        mpn,
        asin,
        product_reference,
        harmonized_system_code,
        country_of_origin,
        manufacturer,
        manufacturer_id,
        manufacturer_info,
        brand_name,
        image_url,
        image_name,
        additional_image_urls,
        files,
        size_chart,
        related_products_ids,
        up_sell_products_ids,
        cross_sell_products_ids,
        attribute_set_name,
        attribute_name,
        search_keywords,
        tags,
        materials,
        certifications,
        specifics,
        avail_from,
        sprice_create,
        sprice_modified,
        sprice_expire,
        created_at,
        auto_renew,
        when_made,
        meta_title,
        meta_keywords,
        meta_description,
        url,
        seo_url,
        tax_class_id,
        taxable,
        sales_tax,
        condition,
        condition_description,
        allow_display_condition,
        payment_methods,
        paypal_email,
        shipping_template_id,
        shipping_details,
        is_free_shipping,
        delivery_code,
        delivery_type,
        delivery_time,
        delivery_option_ids,
        package_details,
        logistic_info,
        listing_duration,
        listing_type,
        return_accepted,
        seller_profiles,
        auction_confidentiality_level,
        best_offer,
        production_partner_ids,
        marketplace_item_properties,
        clear_cache,
        viewed_count,
        ordered_count,
        shop_section_id,
        return_policy_id,
        personalization_details
        );
}

void product_add_free(product_add_t *product_add) {
    if(NULL == product_add){
        return ;
    }
    if(product_add->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_add_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_add->name) {
        free(product_add->name);
        product_add->name = NULL;
    }
    if (product_add->model) {
        free(product_add->model);
        product_add->model = NULL;
    }
    if (product_add->description) {
        free(product_add->description);
        product_add->description = NULL;
    }
    if (product_add->sku) {
        free(product_add->sku);
        product_add->sku = NULL;
    }
    if (product_add->short_description) {
        free(product_add->short_description);
        product_add->short_description = NULL;
    }
    if (product_add->type) {
        free(product_add->type);
        product_add->type = NULL;
    }
    if (product_add->status) {
        free(product_add->status);
        product_add->status = NULL;
    }
    if (product_add->visible) {
        free(product_add->visible);
        product_add->visible = NULL;
    }
    if (product_add->category_id) {
        free(product_add->category_id);
        product_add->category_id = NULL;
    }
    if (product_add->categories_ids) {
        free(product_add->categories_ids);
        product_add->categories_ids = NULL;
    }
    if (product_add->product_class) {
        free(product_add->product_class);
        product_add->product_class = NULL;
    }
    if (product_add->product_type) {
        free(product_add->product_type);
        product_add->product_type = NULL;
    }
    if (product_add->store_id) {
        free(product_add->store_id);
        product_add->store_id = NULL;
    }
    if (product_add->stores_ids) {
        free(product_add->stores_ids);
        product_add->stores_ids = NULL;
    }
    if (product_add->lang_id) {
        free(product_add->lang_id);
        product_add->lang_id = NULL;
    }
    if (product_add->tier_prices) {
        list_ForEach(listEntry, product_add->tier_prices) {
            product_add_tier_prices_inner_free(listEntry->data);
        }
        list_freeList(product_add->tier_prices);
        product_add->tier_prices = NULL;
    }
    if (product_add->group_prices) {
        list_ForEach(listEntry, product_add->group_prices) {
            product_add_group_prices_inner_free(listEntry->data);
        }
        list_freeList(product_add->group_prices);
        product_add->group_prices = NULL;
    }
    if (product_add->warehouse_id) {
        free(product_add->warehouse_id);
        product_add->warehouse_id = NULL;
    }
    if (product_add->backorder_status) {
        free(product_add->backorder_status);
        product_add->backorder_status = NULL;
    }
    if (product_add->weight_unit) {
        free(product_add->weight_unit);
        product_add->weight_unit = NULL;
    }
    if (product_add->dimensions_unit) {
        free(product_add->dimensions_unit);
        product_add->dimensions_unit = NULL;
    }
    if (product_add->barcode) {
        free(product_add->barcode);
        product_add->barcode = NULL;
    }
    if (product_add->upc) {
        free(product_add->upc);
        product_add->upc = NULL;
    }
    if (product_add->ean) {
        free(product_add->ean);
        product_add->ean = NULL;
    }
    if (product_add->isbn) {
        free(product_add->isbn);
        product_add->isbn = NULL;
    }
    if (product_add->gtin) {
        free(product_add->gtin);
        product_add->gtin = NULL;
    }
    if (product_add->mpn) {
        free(product_add->mpn);
        product_add->mpn = NULL;
    }
    if (product_add->asin) {
        free(product_add->asin);
        product_add->asin = NULL;
    }
    if (product_add->product_reference) {
        free(product_add->product_reference);
        product_add->product_reference = NULL;
    }
    if (product_add->harmonized_system_code) {
        free(product_add->harmonized_system_code);
        product_add->harmonized_system_code = NULL;
    }
    if (product_add->country_of_origin) {
        free(product_add->country_of_origin);
        product_add->country_of_origin = NULL;
    }
    if (product_add->manufacturer) {
        free(product_add->manufacturer);
        product_add->manufacturer = NULL;
    }
    if (product_add->manufacturer_id) {
        free(product_add->manufacturer_id);
        product_add->manufacturer_id = NULL;
    }
    if (product_add->manufacturer_info) {
        product_add_manufacturer_info_free(product_add->manufacturer_info);
        product_add->manufacturer_info = NULL;
    }
    if (product_add->brand_name) {
        free(product_add->brand_name);
        product_add->brand_name = NULL;
    }
    if (product_add->image_url) {
        free(product_add->image_url);
        product_add->image_url = NULL;
    }
    if (product_add->image_name) {
        free(product_add->image_name);
        product_add->image_name = NULL;
    }
    if (product_add->additional_image_urls) {
        list_ForEach(listEntry, product_add->additional_image_urls) {
            free(listEntry->data);
        }
        list_freeList(product_add->additional_image_urls);
        product_add->additional_image_urls = NULL;
    }
    if (product_add->files) {
        list_ForEach(listEntry, product_add->files) {
            product_add_files_inner_free(listEntry->data);
        }
        list_freeList(product_add->files);
        product_add->files = NULL;
    }
    if (product_add->size_chart) {
        product_add_size_chart_free(product_add->size_chart);
        product_add->size_chart = NULL;
    }
    if (product_add->related_products_ids) {
        free(product_add->related_products_ids);
        product_add->related_products_ids = NULL;
    }
    if (product_add->up_sell_products_ids) {
        free(product_add->up_sell_products_ids);
        product_add->up_sell_products_ids = NULL;
    }
    if (product_add->cross_sell_products_ids) {
        free(product_add->cross_sell_products_ids);
        product_add->cross_sell_products_ids = NULL;
    }
    if (product_add->attribute_set_name) {
        free(product_add->attribute_set_name);
        product_add->attribute_set_name = NULL;
    }
    if (product_add->attribute_name) {
        free(product_add->attribute_name);
        product_add->attribute_name = NULL;
    }
    if (product_add->search_keywords) {
        free(product_add->search_keywords);
        product_add->search_keywords = NULL;
    }
    if (product_add->tags) {
        free(product_add->tags);
        product_add->tags = NULL;
    }
    if (product_add->materials) {
        list_ForEach(listEntry, product_add->materials) {
            free(listEntry->data);
        }
        list_freeList(product_add->materials);
        product_add->materials = NULL;
    }
    if (product_add->certifications) {
        list_ForEach(listEntry, product_add->certifications) {
            product_add_certifications_inner_free(listEntry->data);
        }
        list_freeList(product_add->certifications);
        product_add->certifications = NULL;
    }
    if (product_add->specifics) {
        list_ForEach(listEntry, product_add->specifics) {
            product_add_specifics_inner_free(listEntry->data);
        }
        list_freeList(product_add->specifics);
        product_add->specifics = NULL;
    }
    if (product_add->avail_from) {
        free(product_add->avail_from);
        product_add->avail_from = NULL;
    }
    if (product_add->sprice_create) {
        free(product_add->sprice_create);
        product_add->sprice_create = NULL;
    }
    if (product_add->sprice_modified) {
        free(product_add->sprice_modified);
        product_add->sprice_modified = NULL;
    }
    if (product_add->sprice_expire) {
        free(product_add->sprice_expire);
        product_add->sprice_expire = NULL;
    }
    if (product_add->created_at) {
        free(product_add->created_at);
        product_add->created_at = NULL;
    }
    if (product_add->when_made) {
        free(product_add->when_made);
        product_add->when_made = NULL;
    }
    if (product_add->meta_title) {
        free(product_add->meta_title);
        product_add->meta_title = NULL;
    }
    if (product_add->meta_keywords) {
        free(product_add->meta_keywords);
        product_add->meta_keywords = NULL;
    }
    if (product_add->meta_description) {
        free(product_add->meta_description);
        product_add->meta_description = NULL;
    }
    if (product_add->url) {
        free(product_add->url);
        product_add->url = NULL;
    }
    if (product_add->seo_url) {
        free(product_add->seo_url);
        product_add->seo_url = NULL;
    }
    if (product_add->tax_class_id) {
        free(product_add->tax_class_id);
        product_add->tax_class_id = NULL;
    }
    if (product_add->sales_tax) {
        product_add_sales_tax_free(product_add->sales_tax);
        product_add->sales_tax = NULL;
    }
    if (product_add->condition) {
        free(product_add->condition);
        product_add->condition = NULL;
    }
    if (product_add->condition_description) {
        free(product_add->condition_description);
        product_add->condition_description = NULL;
    }
    if (product_add->payment_methods) {
        list_ForEach(listEntry, product_add->payment_methods) {
            free(listEntry->data);
        }
        list_freeList(product_add->payment_methods);
        product_add->payment_methods = NULL;
    }
    if (product_add->paypal_email) {
        free(product_add->paypal_email);
        product_add->paypal_email = NULL;
    }
    if (product_add->shipping_details) {
        list_ForEach(listEntry, product_add->shipping_details) {
            product_add_shipping_details_inner_free(listEntry->data);
        }
        list_freeList(product_add->shipping_details);
        product_add->shipping_details = NULL;
    }
    if (product_add->delivery_code) {
        free(product_add->delivery_code);
        product_add->delivery_code = NULL;
    }
    if (product_add->delivery_type) {
        free(product_add->delivery_type);
        product_add->delivery_type = NULL;
    }
    if (product_add->delivery_option_ids) {
        free(product_add->delivery_option_ids);
        product_add->delivery_option_ids = NULL;
    }
    if (product_add->package_details) {
        product_add_package_details_free(product_add->package_details);
        product_add->package_details = NULL;
    }
    if (product_add->logistic_info) {
        list_ForEach(listEntry, product_add->logistic_info) {
            product_add_logistic_info_inner_free(listEntry->data);
        }
        list_freeList(product_add->logistic_info);
        product_add->logistic_info = NULL;
    }
    if (product_add->listing_duration) {
        free(product_add->listing_duration);
        product_add->listing_duration = NULL;
    }
    if (product_add->listing_type) {
        free(product_add->listing_type);
        product_add->listing_type = NULL;
    }
    if (product_add->seller_profiles) {
        product_add_seller_profiles_free(product_add->seller_profiles);
        product_add->seller_profiles = NULL;
    }
    if (product_add->auction_confidentiality_level) {
        free(product_add->auction_confidentiality_level);
        product_add->auction_confidentiality_level = NULL;
    }
    if (product_add->best_offer) {
        product_add_best_offer_free(product_add->best_offer);
        product_add->best_offer = NULL;
    }
    if (product_add->production_partner_ids) {
        free(product_add->production_partner_ids);
        product_add->production_partner_ids = NULL;
    }
    if (product_add->marketplace_item_properties) {
        free(product_add->marketplace_item_properties);
        product_add->marketplace_item_properties = NULL;
    }
    if (product_add->personalization_details) {
        product_add_personalization_details_free(product_add->personalization_details);
        product_add->personalization_details = NULL;
    }
    free(product_add);
}

cJSON *product_add_convertToJSON(product_add_t *product_add) {
    cJSON *item = cJSON_CreateObject();

    // product_add->name
    if (!product_add->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", product_add->name) == NULL) {
    goto fail; //String
    }


    // product_add->model
    if (!product_add->model) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "model", product_add->model) == NULL) {
    goto fail; //String
    }


    // product_add->description
    if (!product_add->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", product_add->description) == NULL) {
    goto fail; //String
    }


    // product_add->price
    if (!product_add->price) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "price", product_add->price) == NULL) {
    goto fail; //Numeric
    }


    // product_add->sku
    if(product_add->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_add->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_add->short_description
    if(product_add->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_add->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_add->type
    if(product_add->type) {
    if(cJSON_AddStringToObject(item, "type", product_add->type) == NULL) {
    goto fail; //String
    }
    }


    // product_add->status
    if(product_add->status) {
    if(cJSON_AddStringToObject(item, "status", product_add->status) == NULL) {
    goto fail; //String
    }
    }


    // product_add->visible
    if(product_add->visible) {
    if(cJSON_AddStringToObject(item, "visible", product_add->visible) == NULL) {
    goto fail; //String
    }
    }


    // product_add->category_id
    if(product_add->category_id) {
    if(cJSON_AddStringToObject(item, "category_id", product_add->category_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->categories_ids
    if(product_add->categories_ids) {
    if(cJSON_AddStringToObject(item, "categories_ids", product_add->categories_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->product_class
    if(product_add->product_class) {
    if(cJSON_AddStringToObject(item, "product_class", product_add->product_class) == NULL) {
    goto fail; //String
    }
    }


    // product_add->product_type
    if(product_add->product_type) {
    if(cJSON_AddStringToObject(item, "product_type", product_add->product_type) == NULL) {
    goto fail; //String
    }
    }


    // product_add->is_virtual
    if(product_add->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_add->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->downloadable
    if(product_add->downloadable) {
    if(cJSON_AddBoolToObject(item, "downloadable", product_add->downloadable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->is_supply
    if(product_add->is_supply) {
    if(cJSON_AddBoolToObject(item, "is_supply", product_add->is_supply) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->available_for_view
    if(product_add->available_for_view) {
    if(cJSON_AddBoolToObject(item, "available_for_view", product_add->available_for_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->available_for_sale
    if(product_add->available_for_sale) {
    if(cJSON_AddBoolToObject(item, "available_for_sale", product_add->available_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->store_id
    if(product_add->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_add->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->stores_ids
    if(product_add->stores_ids) {
    if(cJSON_AddStringToObject(item, "stores_ids", product_add->stores_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->lang_id
    if(product_add->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_add->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->old_price
    if(product_add->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_add->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->special_price
    if(product_add->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_add->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->wholesale_price
    if(product_add->wholesale_price) {
    if(cJSON_AddNumberToObject(item, "wholesale_price", product_add->wholesale_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->cost_price
    if(product_add->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_add->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->fixed_cost_shipping_price
    if(product_add->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_add->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->tier_prices
    if(product_add->tier_prices) {
    cJSON *tier_prices = cJSON_AddArrayToObject(item, "tier_prices");
    if(tier_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tier_pricesListEntry;
    if (product_add->tier_prices) {
    list_ForEach(tier_pricesListEntry, product_add->tier_prices) {
    cJSON *itemLocal = product_add_tier_prices_inner_convertToJSON(tier_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tier_prices, itemLocal);
    }
    }
    }


    // product_add->group_prices
    if(product_add->group_prices) {
    cJSON *group_prices = cJSON_AddArrayToObject(item, "group_prices");
    if(group_prices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_pricesListEntry;
    if (product_add->group_prices) {
    list_ForEach(group_pricesListEntry, product_add->group_prices) {
    cJSON *itemLocal = product_add_group_prices_inner_convertToJSON(group_pricesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_prices, itemLocal);
    }
    }
    }


    // product_add->buyitnow_price
    if(product_add->buyitnow_price) {
    if(cJSON_AddNumberToObject(item, "buyitnow_price", product_add->buyitnow_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->reserve_price
    if(product_add->reserve_price) {
    if(cJSON_AddNumberToObject(item, "reserve_price", product_add->reserve_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->quantity
    if(product_add->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_add->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->in_stock
    if(product_add->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_add->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->manage_stock
    if(product_add->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_add->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->warehouse_id
    if(product_add->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_add->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->backorder_status
    if(product_add->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_add->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_add->min_order_quantity
    if(product_add->min_order_quantity) {
    if(cJSON_AddNumberToObject(item, "min_order_quantity", product_add->min_order_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->max_order_quantity
    if(product_add->max_order_quantity) {
    if(cJSON_AddNumberToObject(item, "max_order_quantity", product_add->max_order_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->weight
    if(product_add->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_add->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->weight_unit
    if(product_add->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_add->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add->width
    if(product_add->width) {
    if(cJSON_AddNumberToObject(item, "width", product_add->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->height
    if(product_add->height) {
    if(cJSON_AddNumberToObject(item, "height", product_add->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->length
    if(product_add->length) {
    if(cJSON_AddNumberToObject(item, "length", product_add->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->dimensions_unit
    if(product_add->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", product_add->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_add->barcode
    if(product_add->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_add->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_add->upc
    if(product_add->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_add->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_add->ean
    if(product_add->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_add->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_add->isbn
    if(product_add->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", product_add->isbn) == NULL) {
    goto fail; //String
    }
    }


    // product_add->gtin
    if(product_add->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_add->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_add->mpn
    if(product_add->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_add->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_add->asin
    if(product_add->asin) {
    if(cJSON_AddStringToObject(item, "asin", product_add->asin) == NULL) {
    goto fail; //String
    }
    }


    // product_add->product_reference
    if(product_add->product_reference) {
    if(cJSON_AddStringToObject(item, "product_reference", product_add->product_reference) == NULL) {
    goto fail; //String
    }
    }


    // product_add->harmonized_system_code
    if(product_add->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_add->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }


    // product_add->country_of_origin
    if(product_add->country_of_origin) {
    if(cJSON_AddStringToObject(item, "country_of_origin", product_add->country_of_origin) == NULL) {
    goto fail; //String
    }
    }


    // product_add->manufacturer
    if(product_add->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", product_add->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // product_add->manufacturer_id
    if(product_add->manufacturer_id) {
    if(cJSON_AddStringToObject(item, "manufacturer_id", product_add->manufacturer_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->manufacturer_info
    if(product_add->manufacturer_info) {
    cJSON *manufacturer_info_local_JSON = product_add_manufacturer_info_convertToJSON(product_add->manufacturer_info);
    if(manufacturer_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "manufacturer_info", manufacturer_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->brand_name
    if(product_add->brand_name) {
    if(cJSON_AddStringToObject(item, "brand_name", product_add->brand_name) == NULL) {
    goto fail; //String
    }
    }


    // product_add->image_url
    if(product_add->image_url) {
    if(cJSON_AddStringToObject(item, "image_url", product_add->image_url) == NULL) {
    goto fail; //String
    }
    }


    // product_add->image_name
    if(product_add->image_name) {
    if(cJSON_AddStringToObject(item, "image_name", product_add->image_name) == NULL) {
    goto fail; //String
    }
    }


    // product_add->additional_image_urls
    if(product_add->additional_image_urls) {
    cJSON *additional_image_urls = cJSON_AddArrayToObject(item, "additional_image_urls");
    if(additional_image_urls == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *additional_image_urlsListEntry;
    list_ForEach(additional_image_urlsListEntry, product_add->additional_image_urls) {
    if(cJSON_AddStringToObject(additional_image_urls, "", additional_image_urlsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add->files
    if(product_add->files) {
    cJSON *files = cJSON_AddArrayToObject(item, "files");
    if(files == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *filesListEntry;
    if (product_add->files) {
    list_ForEach(filesListEntry, product_add->files) {
    cJSON *itemLocal = product_add_files_inner_convertToJSON(filesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(files, itemLocal);
    }
    }
    }


    // product_add->size_chart
    if(product_add->size_chart) {
    cJSON *size_chart_local_JSON = product_add_size_chart_convertToJSON(product_add->size_chart);
    if(size_chart_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "size_chart", size_chart_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->related_products_ids
    if(product_add->related_products_ids) {
    if(cJSON_AddStringToObject(item, "related_products_ids", product_add->related_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->up_sell_products_ids
    if(product_add->up_sell_products_ids) {
    if(cJSON_AddStringToObject(item, "up_sell_products_ids", product_add->up_sell_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->cross_sell_products_ids
    if(product_add->cross_sell_products_ids) {
    if(cJSON_AddStringToObject(item, "cross_sell_products_ids", product_add->cross_sell_products_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->attribute_set_name
    if(product_add->attribute_set_name) {
    if(cJSON_AddStringToObject(item, "attribute_set_name", product_add->attribute_set_name) == NULL) {
    goto fail; //String
    }
    }


    // product_add->attribute_name
    if(product_add->attribute_name) {
    if(cJSON_AddStringToObject(item, "attribute_name", product_add->attribute_name) == NULL) {
    goto fail; //String
    }
    }


    // product_add->search_keywords
    if(product_add->search_keywords) {
    if(cJSON_AddStringToObject(item, "search_keywords", product_add->search_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_add->tags
    if(product_add->tags) {
    if(cJSON_AddStringToObject(item, "tags", product_add->tags) == NULL) {
    goto fail; //String
    }
    }


    // product_add->materials
    if(product_add->materials) {
    cJSON *materials = cJSON_AddArrayToObject(item, "materials");
    if(materials == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *materialsListEntry;
    list_ForEach(materialsListEntry, product_add->materials) {
    if(cJSON_AddStringToObject(materials, "", materialsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add->certifications
    if(product_add->certifications) {
    cJSON *certifications = cJSON_AddArrayToObject(item, "certifications");
    if(certifications == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *certificationsListEntry;
    if (product_add->certifications) {
    list_ForEach(certificationsListEntry, product_add->certifications) {
    cJSON *itemLocal = product_add_certifications_inner_convertToJSON(certificationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(certifications, itemLocal);
    }
    }
    }


    // product_add->specifics
    if(product_add->specifics) {
    cJSON *specifics = cJSON_AddArrayToObject(item, "specifics");
    if(specifics == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *specificsListEntry;
    if (product_add->specifics) {
    list_ForEach(specificsListEntry, product_add->specifics) {
    cJSON *itemLocal = product_add_specifics_inner_convertToJSON(specificsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(specifics, itemLocal);
    }
    }
    }


    // product_add->avail_from
    if(product_add->avail_from) {
    if(cJSON_AddStringToObject(item, "avail_from", product_add->avail_from) == NULL) {
    goto fail; //String
    }
    }


    // product_add->sprice_create
    if(product_add->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_add->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_add->sprice_modified
    if(product_add->sprice_modified) {
    if(cJSON_AddStringToObject(item, "sprice_modified", product_add->sprice_modified) == NULL) {
    goto fail; //String
    }
    }


    // product_add->sprice_expire
    if(product_add->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_add->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_add->created_at
    if(product_add->created_at) {
    if(cJSON_AddStringToObject(item, "created_at", product_add->created_at) == NULL) {
    goto fail; //String
    }
    }


    // product_add->auto_renew
    if(product_add->auto_renew) {
    if(cJSON_AddBoolToObject(item, "auto_renew", product_add->auto_renew) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->when_made
    if(product_add->when_made) {
    if(cJSON_AddStringToObject(item, "when_made", product_add->when_made) == NULL) {
    goto fail; //String
    }
    }


    // product_add->meta_title
    if(product_add->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_add->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_add->meta_keywords
    if(product_add->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", product_add->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_add->meta_description
    if(product_add->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_add->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_add->url
    if(product_add->url) {
    if(cJSON_AddStringToObject(item, "url", product_add->url) == NULL) {
    goto fail; //String
    }
    }


    // product_add->seo_url
    if(product_add->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", product_add->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // product_add->tax_class_id
    if(product_add->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_add->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_add->taxable
    if(product_add->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_add->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->sales_tax
    if(product_add->sales_tax) {
    cJSON *sales_tax_local_JSON = product_add_sales_tax_convertToJSON(product_add->sales_tax);
    if(sales_tax_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sales_tax", sales_tax_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->condition
    if(product_add->condition) {
    if(cJSON_AddStringToObject(item, "condition", product_add->condition) == NULL) {
    goto fail; //String
    }
    }


    // product_add->condition_description
    if(product_add->condition_description) {
    if(cJSON_AddStringToObject(item, "condition_description", product_add->condition_description) == NULL) {
    goto fail; //String
    }
    }


    // product_add->allow_display_condition
    if(product_add->allow_display_condition) {
    if(cJSON_AddBoolToObject(item, "allow_display_condition", product_add->allow_display_condition) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->payment_methods
    if(product_add->payment_methods) {
    cJSON *payment_methods = cJSON_AddArrayToObject(item, "payment_methods");
    if(payment_methods == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *payment_methodsListEntry;
    list_ForEach(payment_methodsListEntry, product_add->payment_methods) {
    if(cJSON_AddStringToObject(payment_methods, "", payment_methodsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product_add->paypal_email
    if(product_add->paypal_email) {
    if(cJSON_AddStringToObject(item, "paypal_email", product_add->paypal_email) == NULL) {
    goto fail; //String
    }
    }


    // product_add->shipping_template_id
    if(product_add->shipping_template_id) {
    if(cJSON_AddNumberToObject(item, "shipping_template_id", product_add->shipping_template_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->shipping_details
    if(product_add->shipping_details) {
    cJSON *shipping_details = cJSON_AddArrayToObject(item, "shipping_details");
    if(shipping_details == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *shipping_detailsListEntry;
    if (product_add->shipping_details) {
    list_ForEach(shipping_detailsListEntry, product_add->shipping_details) {
    cJSON *itemLocal = product_add_shipping_details_inner_convertToJSON(shipping_detailsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(shipping_details, itemLocal);
    }
    }
    }


    // product_add->is_free_shipping
    if(product_add->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_add->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->delivery_code
    if(product_add->delivery_code) {
    if(cJSON_AddStringToObject(item, "delivery_code", product_add->delivery_code) == NULL) {
    goto fail; //String
    }
    }


    // product_add->delivery_type
    if(product_add->delivery_type) {
    if(cJSON_AddStringToObject(item, "delivery_type", product_add->delivery_type) == NULL) {
    goto fail; //String
    }
    }


    // product_add->delivery_time
    if(product_add->delivery_time) {
    if(cJSON_AddNumberToObject(item, "delivery_time", product_add->delivery_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->delivery_option_ids
    if(product_add->delivery_option_ids) {
    if(cJSON_AddStringToObject(item, "delivery_option_ids", product_add->delivery_option_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->package_details
    if(product_add->package_details) {
    cJSON *package_details_local_JSON = product_add_package_details_convertToJSON(product_add->package_details);
    if(package_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "package_details", package_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->logistic_info
    if(product_add->logistic_info) {
    cJSON *logistic_info = cJSON_AddArrayToObject(item, "logistic_info");
    if(logistic_info == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *logistic_infoListEntry;
    if (product_add->logistic_info) {
    list_ForEach(logistic_infoListEntry, product_add->logistic_info) {
    cJSON *itemLocal = product_add_logistic_info_inner_convertToJSON(logistic_infoListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(logistic_info, itemLocal);
    }
    }
    }


    // product_add->listing_duration
    if(product_add->listing_duration) {
    if(cJSON_AddStringToObject(item, "listing_duration", product_add->listing_duration) == NULL) {
    goto fail; //String
    }
    }


    // product_add->listing_type
    if(product_add->listing_type) {
    if(cJSON_AddStringToObject(item, "listing_type", product_add->listing_type) == NULL) {
    goto fail; //String
    }
    }


    // product_add->return_accepted
    if(product_add->return_accepted) {
    if(cJSON_AddBoolToObject(item, "return_accepted", product_add->return_accepted) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->seller_profiles
    if(product_add->seller_profiles) {
    cJSON *seller_profiles_local_JSON = product_add_seller_profiles_convertToJSON(product_add->seller_profiles);
    if(seller_profiles_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seller_profiles", seller_profiles_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->auction_confidentiality_level
    if(product_add->auction_confidentiality_level) {
    if(cJSON_AddStringToObject(item, "auction_confidentiality_level", product_add->auction_confidentiality_level) == NULL) {
    goto fail; //String
    }
    }


    // product_add->best_offer
    if(product_add->best_offer) {
    cJSON *best_offer_local_JSON = product_add_best_offer_convertToJSON(product_add->best_offer);
    if(best_offer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "best_offer", best_offer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product_add->production_partner_ids
    if(product_add->production_partner_ids) {
    if(cJSON_AddStringToObject(item, "production_partner_ids", product_add->production_partner_ids) == NULL) {
    goto fail; //String
    }
    }


    // product_add->marketplace_item_properties
    if(product_add->marketplace_item_properties) {
    if(cJSON_AddStringToObject(item, "marketplace_item_properties", product_add->marketplace_item_properties) == NULL) {
    goto fail; //String
    }
    }


    // product_add->clear_cache
    if(product_add->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_add->clear_cache) == NULL) {
    goto fail; //Bool
    }
    }


    // product_add->viewed_count
    if(product_add->viewed_count) {
    if(cJSON_AddNumberToObject(item, "viewed_count", product_add->viewed_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->ordered_count
    if(product_add->ordered_count) {
    if(cJSON_AddNumberToObject(item, "ordered_count", product_add->ordered_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->shop_section_id
    if(product_add->shop_section_id) {
    if(cJSON_AddNumberToObject(item, "shop_section_id", product_add->shop_section_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->return_policy_id
    if(product_add->return_policy_id) {
    if(cJSON_AddNumberToObject(item, "return_policy_id", product_add->return_policy_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_add->personalization_details
    if(product_add->personalization_details) {
    cJSON *personalization_details_local_JSON = product_add_personalization_details_convertToJSON(product_add->personalization_details);
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

product_add_t *product_add_parseFromJSON(cJSON *product_addJSON){

    product_add_t *product_add_local_var = NULL;

    // define the local list for product_add->tier_prices
    list_t *tier_pricesList = NULL;

    // define the local list for product_add->group_prices
    list_t *group_pricesList = NULL;

    // define the local variable for product_add->manufacturer_info
    product_add_manufacturer_info_t *manufacturer_info_local_nonprim = NULL;

    // define the local list for product_add->additional_image_urls
    list_t *additional_image_urlsList = NULL;

    // define the local list for product_add->files
    list_t *filesList = NULL;

    // define the local variable for product_add->size_chart
    product_add_size_chart_t *size_chart_local_nonprim = NULL;

    // define the local list for product_add->materials
    list_t *materialsList = NULL;

    // define the local list for product_add->certifications
    list_t *certificationsList = NULL;

    // define the local list for product_add->specifics
    list_t *specificsList = NULL;

    // define the local variable for product_add->sales_tax
    product_add_sales_tax_t *sales_tax_local_nonprim = NULL;

    // define the local list for product_add->payment_methods
    list_t *payment_methodsList = NULL;

    // define the local list for product_add->shipping_details
    list_t *shipping_detailsList = NULL;

    // define the local variable for product_add->package_details
    product_add_package_details_t *package_details_local_nonprim = NULL;

    // define the local list for product_add->logistic_info
    list_t *logistic_infoList = NULL;

    // define the local variable for product_add->seller_profiles
    product_add_seller_profiles_t *seller_profiles_local_nonprim = NULL;

    // define the local variable for product_add->best_offer
    product_add_best_offer_t *best_offer_local_nonprim = NULL;

    // define the local variable for product_add->personalization_details
    product_add_personalization_details_t *personalization_details_local_nonprim = NULL;

    // product_add->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_addJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // product_add->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_addJSON, "model");
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

    // product_add->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_addJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // product_add->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (!price) {
        goto end;
    }

    
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }

    // product_add->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_addJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_add->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_addJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_add->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(product_addJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product_add->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_addJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_add->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_addJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // product_add->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "category_id");
    if (cJSON_IsNull(category_id)) {
        category_id = NULL;
    }
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // product_add->categories_ids
    cJSON *categories_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "categories_ids");
    if (cJSON_IsNull(categories_ids)) {
        categories_ids = NULL;
    }
    if (categories_ids) { 
    if(!cJSON_IsString(categories_ids) && !cJSON_IsNull(categories_ids))
    {
    goto end; //String
    }
    }

    // product_add->product_class
    cJSON *product_class = cJSON_GetObjectItemCaseSensitive(product_addJSON, "product_class");
    if (cJSON_IsNull(product_class)) {
        product_class = NULL;
    }
    if (product_class) { 
    if(!cJSON_IsString(product_class) && !cJSON_IsNull(product_class))
    {
    goto end; //String
    }
    }

    // product_add->product_type
    cJSON *product_type = cJSON_GetObjectItemCaseSensitive(product_addJSON, "product_type");
    if (cJSON_IsNull(product_type)) {
        product_type = NULL;
    }
    if (product_type) { 
    if(!cJSON_IsString(product_type) && !cJSON_IsNull(product_type))
    {
    goto end; //String
    }
    }

    // product_add->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_addJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_add->downloadable
    cJSON *downloadable = cJSON_GetObjectItemCaseSensitive(product_addJSON, "downloadable");
    if (cJSON_IsNull(downloadable)) {
        downloadable = NULL;
    }
    if (downloadable) { 
    if(!cJSON_IsBool(downloadable))
    {
    goto end; //Bool
    }
    }

    // product_add->is_supply
    cJSON *is_supply = cJSON_GetObjectItemCaseSensitive(product_addJSON, "is_supply");
    if (cJSON_IsNull(is_supply)) {
        is_supply = NULL;
    }
    if (is_supply) { 
    if(!cJSON_IsBool(is_supply))
    {
    goto end; //Bool
    }
    }

    // product_add->available_for_view
    cJSON *available_for_view = cJSON_GetObjectItemCaseSensitive(product_addJSON, "available_for_view");
    if (cJSON_IsNull(available_for_view)) {
        available_for_view = NULL;
    }
    if (available_for_view) { 
    if(!cJSON_IsBool(available_for_view))
    {
    goto end; //Bool
    }
    }

    // product_add->available_for_sale
    cJSON *available_for_sale = cJSON_GetObjectItemCaseSensitive(product_addJSON, "available_for_sale");
    if (cJSON_IsNull(available_for_sale)) {
        available_for_sale = NULL;
    }
    if (available_for_sale) { 
    if(!cJSON_IsBool(available_for_sale))
    {
    goto end; //Bool
    }
    }

    // product_add->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_add->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "stores_ids");
    if (cJSON_IsNull(stores_ids)) {
        stores_ids = NULL;
    }
    if (stores_ids) { 
    if(!cJSON_IsString(stores_ids) && !cJSON_IsNull(stores_ids))
    {
    goto end; //String
    }
    }

    // product_add->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_add->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->wholesale_price
    cJSON *wholesale_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "wholesale_price");
    if (cJSON_IsNull(wholesale_price)) {
        wholesale_price = NULL;
    }
    if (wholesale_price) { 
    if(!cJSON_IsNumber(wholesale_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->tier_prices
    cJSON *tier_prices = cJSON_GetObjectItemCaseSensitive(product_addJSON, "tier_prices");
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

    // product_add->group_prices
    cJSON *group_prices = cJSON_GetObjectItemCaseSensitive(product_addJSON, "group_prices");
    if (cJSON_IsNull(group_prices)) {
        group_prices = NULL;
    }
    if (group_prices) { 
    cJSON *group_prices_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group_prices)){
        goto end; //nonprimitive container
    }

    group_pricesList = list_createList();

    cJSON_ArrayForEach(group_prices_local_nonprimitive,group_prices )
    {
        if(!cJSON_IsObject(group_prices_local_nonprimitive)){
            goto end;
        }
        product_add_group_prices_inner_t *group_pricesItem = product_add_group_prices_inner_parseFromJSON(group_prices_local_nonprimitive);

        list_addElement(group_pricesList, group_pricesItem);
    }
    }

    // product_add->buyitnow_price
    cJSON *buyitnow_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "buyitnow_price");
    if (cJSON_IsNull(buyitnow_price)) {
        buyitnow_price = NULL;
    }
    if (buyitnow_price) { 
    if(!cJSON_IsNumber(buyitnow_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->reserve_price
    cJSON *reserve_price = cJSON_GetObjectItemCaseSensitive(product_addJSON, "reserve_price");
    if (cJSON_IsNull(reserve_price)) {
        reserve_price = NULL;
    }
    if (reserve_price) { 
    if(!cJSON_IsNumber(reserve_price))
    {
    goto end; //Numeric
    }
    }

    // product_add->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_addJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_add->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_addJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_add->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_addJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_add->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_add->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_addJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_add->min_order_quantity
    cJSON *min_order_quantity = cJSON_GetObjectItemCaseSensitive(product_addJSON, "min_order_quantity");
    if (cJSON_IsNull(min_order_quantity)) {
        min_order_quantity = NULL;
    }
    if (min_order_quantity) { 
    if(!cJSON_IsNumber(min_order_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_add->max_order_quantity
    cJSON *max_order_quantity = cJSON_GetObjectItemCaseSensitive(product_addJSON, "max_order_quantity");
    if (cJSON_IsNull(max_order_quantity)) {
        max_order_quantity = NULL;
    }
    if (max_order_quantity) { 
    if(!cJSON_IsNumber(max_order_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_add->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_addJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_add->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_addJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_add->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_addJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_add->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_addJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_add->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_addJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_add->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(product_addJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // product_add->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_addJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_add->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_addJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_add->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_addJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_add->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(product_addJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // product_add->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_addJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_add->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_addJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_add->asin
    cJSON *asin = cJSON_GetObjectItemCaseSensitive(product_addJSON, "asin");
    if (cJSON_IsNull(asin)) {
        asin = NULL;
    }
    if (asin) { 
    if(!cJSON_IsString(asin) && !cJSON_IsNull(asin))
    {
    goto end; //String
    }
    }

    // product_add->product_reference
    cJSON *product_reference = cJSON_GetObjectItemCaseSensitive(product_addJSON, "product_reference");
    if (cJSON_IsNull(product_reference)) {
        product_reference = NULL;
    }
    if (product_reference) { 
    if(!cJSON_IsString(product_reference) && !cJSON_IsNull(product_reference))
    {
    goto end; //String
    }
    }

    // product_add->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_addJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }

    // product_add->country_of_origin
    cJSON *country_of_origin = cJSON_GetObjectItemCaseSensitive(product_addJSON, "country_of_origin");
    if (cJSON_IsNull(country_of_origin)) {
        country_of_origin = NULL;
    }
    if (country_of_origin) { 
    if(!cJSON_IsString(country_of_origin) && !cJSON_IsNull(country_of_origin))
    {
    goto end; //String
    }
    }

    // product_add->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(product_addJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // product_add->manufacturer_id
    cJSON *manufacturer_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "manufacturer_id");
    if (cJSON_IsNull(manufacturer_id)) {
        manufacturer_id = NULL;
    }
    if (manufacturer_id) { 
    if(!cJSON_IsString(manufacturer_id) && !cJSON_IsNull(manufacturer_id))
    {
    goto end; //String
    }
    }

    // product_add->manufacturer_info
    cJSON *manufacturer_info = cJSON_GetObjectItemCaseSensitive(product_addJSON, "manufacturer_info");
    if (cJSON_IsNull(manufacturer_info)) {
        manufacturer_info = NULL;
    }
    if (manufacturer_info) { 
    manufacturer_info_local_nonprim = product_add_manufacturer_info_parseFromJSON(manufacturer_info); //nonprimitive
    }

    // product_add->brand_name
    cJSON *brand_name = cJSON_GetObjectItemCaseSensitive(product_addJSON, "brand_name");
    if (cJSON_IsNull(brand_name)) {
        brand_name = NULL;
    }
    if (brand_name) { 
    if(!cJSON_IsString(brand_name) && !cJSON_IsNull(brand_name))
    {
    goto end; //String
    }
    }

    // product_add->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(product_addJSON, "image_url");
    if (cJSON_IsNull(image_url)) {
        image_url = NULL;
    }
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // product_add->image_name
    cJSON *image_name = cJSON_GetObjectItemCaseSensitive(product_addJSON, "image_name");
    if (cJSON_IsNull(image_name)) {
        image_name = NULL;
    }
    if (image_name) { 
    if(!cJSON_IsString(image_name) && !cJSON_IsNull(image_name))
    {
    goto end; //String
    }
    }

    // product_add->additional_image_urls
    cJSON *additional_image_urls = cJSON_GetObjectItemCaseSensitive(product_addJSON, "additional_image_urls");
    if (cJSON_IsNull(additional_image_urls)) {
        additional_image_urls = NULL;
    }
    if (additional_image_urls) { 
    cJSON *additional_image_urls_local = NULL;
    if(!cJSON_IsArray(additional_image_urls)) {
        goto end;//primitive container
    }
    additional_image_urlsList = list_createList();

    cJSON_ArrayForEach(additional_image_urls_local, additional_image_urls)
    {
        if(!cJSON_IsString(additional_image_urls_local))
        {
            goto end;
        }
        list_addElement(additional_image_urlsList , strdup(additional_image_urls_local->valuestring));
    }
    }

    // product_add->files
    cJSON *files = cJSON_GetObjectItemCaseSensitive(product_addJSON, "files");
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

    // product_add->size_chart
    cJSON *size_chart = cJSON_GetObjectItemCaseSensitive(product_addJSON, "size_chart");
    if (cJSON_IsNull(size_chart)) {
        size_chart = NULL;
    }
    if (size_chart) { 
    size_chart_local_nonprim = product_add_size_chart_parseFromJSON(size_chart); //nonprimitive
    }

    // product_add->related_products_ids
    cJSON *related_products_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "related_products_ids");
    if (cJSON_IsNull(related_products_ids)) {
        related_products_ids = NULL;
    }
    if (related_products_ids) { 
    if(!cJSON_IsString(related_products_ids) && !cJSON_IsNull(related_products_ids))
    {
    goto end; //String
    }
    }

    // product_add->up_sell_products_ids
    cJSON *up_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "up_sell_products_ids");
    if (cJSON_IsNull(up_sell_products_ids)) {
        up_sell_products_ids = NULL;
    }
    if (up_sell_products_ids) { 
    if(!cJSON_IsString(up_sell_products_ids) && !cJSON_IsNull(up_sell_products_ids))
    {
    goto end; //String
    }
    }

    // product_add->cross_sell_products_ids
    cJSON *cross_sell_products_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "cross_sell_products_ids");
    if (cJSON_IsNull(cross_sell_products_ids)) {
        cross_sell_products_ids = NULL;
    }
    if (cross_sell_products_ids) { 
    if(!cJSON_IsString(cross_sell_products_ids) && !cJSON_IsNull(cross_sell_products_ids))
    {
    goto end; //String
    }
    }

    // product_add->attribute_set_name
    cJSON *attribute_set_name = cJSON_GetObjectItemCaseSensitive(product_addJSON, "attribute_set_name");
    if (cJSON_IsNull(attribute_set_name)) {
        attribute_set_name = NULL;
    }
    if (attribute_set_name) { 
    if(!cJSON_IsString(attribute_set_name) && !cJSON_IsNull(attribute_set_name))
    {
    goto end; //String
    }
    }

    // product_add->attribute_name
    cJSON *attribute_name = cJSON_GetObjectItemCaseSensitive(product_addJSON, "attribute_name");
    if (cJSON_IsNull(attribute_name)) {
        attribute_name = NULL;
    }
    if (attribute_name) { 
    if(!cJSON_IsString(attribute_name) && !cJSON_IsNull(attribute_name))
    {
    goto end; //String
    }
    }

    // product_add->search_keywords
    cJSON *search_keywords = cJSON_GetObjectItemCaseSensitive(product_addJSON, "search_keywords");
    if (cJSON_IsNull(search_keywords)) {
        search_keywords = NULL;
    }
    if (search_keywords) { 
    if(!cJSON_IsString(search_keywords) && !cJSON_IsNull(search_keywords))
    {
    goto end; //String
    }
    }

    // product_add->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(product_addJSON, "tags");
    if (cJSON_IsNull(tags)) {
        tags = NULL;
    }
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }

    // product_add->materials
    cJSON *materials = cJSON_GetObjectItemCaseSensitive(product_addJSON, "materials");
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

    // product_add->certifications
    cJSON *certifications = cJSON_GetObjectItemCaseSensitive(product_addJSON, "certifications");
    if (cJSON_IsNull(certifications)) {
        certifications = NULL;
    }
    if (certifications) { 
    cJSON *certifications_local_nonprimitive = NULL;
    if(!cJSON_IsArray(certifications)){
        goto end; //nonprimitive container
    }

    certificationsList = list_createList();

    cJSON_ArrayForEach(certifications_local_nonprimitive,certifications )
    {
        if(!cJSON_IsObject(certifications_local_nonprimitive)){
            goto end;
        }
        product_add_certifications_inner_t *certificationsItem = product_add_certifications_inner_parseFromJSON(certifications_local_nonprimitive);

        list_addElement(certificationsList, certificationsItem);
    }
    }

    // product_add->specifics
    cJSON *specifics = cJSON_GetObjectItemCaseSensitive(product_addJSON, "specifics");
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

    // product_add->avail_from
    cJSON *avail_from = cJSON_GetObjectItemCaseSensitive(product_addJSON, "avail_from");
    if (cJSON_IsNull(avail_from)) {
        avail_from = NULL;
    }
    if (avail_from) { 
    if(!cJSON_IsString(avail_from) && !cJSON_IsNull(avail_from))
    {
    goto end; //String
    }
    }

    // product_add->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_addJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_add->sprice_modified
    cJSON *sprice_modified = cJSON_GetObjectItemCaseSensitive(product_addJSON, "sprice_modified");
    if (cJSON_IsNull(sprice_modified)) {
        sprice_modified = NULL;
    }
    if (sprice_modified) { 
    if(!cJSON_IsString(sprice_modified) && !cJSON_IsNull(sprice_modified))
    {
    goto end; //String
    }
    }

    // product_add->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_addJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_add->created_at
    cJSON *created_at = cJSON_GetObjectItemCaseSensitive(product_addJSON, "created_at");
    if (cJSON_IsNull(created_at)) {
        created_at = NULL;
    }
    if (created_at) { 
    if(!cJSON_IsString(created_at) && !cJSON_IsNull(created_at))
    {
    goto end; //String
    }
    }

    // product_add->auto_renew
    cJSON *auto_renew = cJSON_GetObjectItemCaseSensitive(product_addJSON, "auto_renew");
    if (cJSON_IsNull(auto_renew)) {
        auto_renew = NULL;
    }
    if (auto_renew) { 
    if(!cJSON_IsBool(auto_renew))
    {
    goto end; //Bool
    }
    }

    // product_add->when_made
    cJSON *when_made = cJSON_GetObjectItemCaseSensitive(product_addJSON, "when_made");
    if (cJSON_IsNull(when_made)) {
        when_made = NULL;
    }
    if (when_made) { 
    if(!cJSON_IsString(when_made) && !cJSON_IsNull(when_made))
    {
    goto end; //String
    }
    }

    // product_add->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_addJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_add->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_addJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // product_add->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_addJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_add->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(product_addJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product_add->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(product_addJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // product_add->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_add->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_addJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_add->sales_tax
    cJSON *sales_tax = cJSON_GetObjectItemCaseSensitive(product_addJSON, "sales_tax");
    if (cJSON_IsNull(sales_tax)) {
        sales_tax = NULL;
    }
    if (sales_tax) { 
    sales_tax_local_nonprim = product_add_sales_tax_parseFromJSON(sales_tax); //nonprimitive
    }

    // product_add->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(product_addJSON, "condition");
    if (cJSON_IsNull(condition)) {
        condition = NULL;
    }
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // product_add->condition_description
    cJSON *condition_description = cJSON_GetObjectItemCaseSensitive(product_addJSON, "condition_description");
    if (cJSON_IsNull(condition_description)) {
        condition_description = NULL;
    }
    if (condition_description) { 
    if(!cJSON_IsString(condition_description) && !cJSON_IsNull(condition_description))
    {
    goto end; //String
    }
    }

    // product_add->allow_display_condition
    cJSON *allow_display_condition = cJSON_GetObjectItemCaseSensitive(product_addJSON, "allow_display_condition");
    if (cJSON_IsNull(allow_display_condition)) {
        allow_display_condition = NULL;
    }
    if (allow_display_condition) { 
    if(!cJSON_IsBool(allow_display_condition))
    {
    goto end; //Bool
    }
    }

    // product_add->payment_methods
    cJSON *payment_methods = cJSON_GetObjectItemCaseSensitive(product_addJSON, "payment_methods");
    if (cJSON_IsNull(payment_methods)) {
        payment_methods = NULL;
    }
    if (payment_methods) { 
    cJSON *payment_methods_local = NULL;
    if(!cJSON_IsArray(payment_methods)) {
        goto end;//primitive container
    }
    payment_methodsList = list_createList();

    cJSON_ArrayForEach(payment_methods_local, payment_methods)
    {
        if(!cJSON_IsString(payment_methods_local))
        {
            goto end;
        }
        list_addElement(payment_methodsList , strdup(payment_methods_local->valuestring));
    }
    }

    // product_add->paypal_email
    cJSON *paypal_email = cJSON_GetObjectItemCaseSensitive(product_addJSON, "paypal_email");
    if (cJSON_IsNull(paypal_email)) {
        paypal_email = NULL;
    }
    if (paypal_email) { 
    if(!cJSON_IsString(paypal_email) && !cJSON_IsNull(paypal_email))
    {
    goto end; //String
    }
    }

    // product_add->shipping_template_id
    cJSON *shipping_template_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "shipping_template_id");
    if (cJSON_IsNull(shipping_template_id)) {
        shipping_template_id = NULL;
    }
    if (shipping_template_id) { 
    if(!cJSON_IsNumber(shipping_template_id))
    {
    goto end; //Numeric
    }
    }

    // product_add->shipping_details
    cJSON *shipping_details = cJSON_GetObjectItemCaseSensitive(product_addJSON, "shipping_details");
    if (cJSON_IsNull(shipping_details)) {
        shipping_details = NULL;
    }
    if (shipping_details) { 
    cJSON *shipping_details_local_nonprimitive = NULL;
    if(!cJSON_IsArray(shipping_details)){
        goto end; //nonprimitive container
    }

    shipping_detailsList = list_createList();

    cJSON_ArrayForEach(shipping_details_local_nonprimitive,shipping_details )
    {
        if(!cJSON_IsObject(shipping_details_local_nonprimitive)){
            goto end;
        }
        product_add_shipping_details_inner_t *shipping_detailsItem = product_add_shipping_details_inner_parseFromJSON(shipping_details_local_nonprimitive);

        list_addElement(shipping_detailsList, shipping_detailsItem);
    }
    }

    // product_add->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_addJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_add->delivery_code
    cJSON *delivery_code = cJSON_GetObjectItemCaseSensitive(product_addJSON, "delivery_code");
    if (cJSON_IsNull(delivery_code)) {
        delivery_code = NULL;
    }
    if (delivery_code) { 
    if(!cJSON_IsString(delivery_code) && !cJSON_IsNull(delivery_code))
    {
    goto end; //String
    }
    }

    // product_add->delivery_type
    cJSON *delivery_type = cJSON_GetObjectItemCaseSensitive(product_addJSON, "delivery_type");
    if (cJSON_IsNull(delivery_type)) {
        delivery_type = NULL;
    }
    if (delivery_type) { 
    if(!cJSON_IsString(delivery_type) && !cJSON_IsNull(delivery_type))
    {
    goto end; //String
    }
    }

    // product_add->delivery_time
    cJSON *delivery_time = cJSON_GetObjectItemCaseSensitive(product_addJSON, "delivery_time");
    if (cJSON_IsNull(delivery_time)) {
        delivery_time = NULL;
    }
    if (delivery_time) { 
    if(!cJSON_IsNumber(delivery_time))
    {
    goto end; //Numeric
    }
    }

    // product_add->delivery_option_ids
    cJSON *delivery_option_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "delivery_option_ids");
    if (cJSON_IsNull(delivery_option_ids)) {
        delivery_option_ids = NULL;
    }
    if (delivery_option_ids) { 
    if(!cJSON_IsString(delivery_option_ids) && !cJSON_IsNull(delivery_option_ids))
    {
    goto end; //String
    }
    }

    // product_add->package_details
    cJSON *package_details = cJSON_GetObjectItemCaseSensitive(product_addJSON, "package_details");
    if (cJSON_IsNull(package_details)) {
        package_details = NULL;
    }
    if (package_details) { 
    package_details_local_nonprim = product_add_package_details_parseFromJSON(package_details); //nonprimitive
    }

    // product_add->logistic_info
    cJSON *logistic_info = cJSON_GetObjectItemCaseSensitive(product_addJSON, "logistic_info");
    if (cJSON_IsNull(logistic_info)) {
        logistic_info = NULL;
    }
    if (logistic_info) { 
    cJSON *logistic_info_local_nonprimitive = NULL;
    if(!cJSON_IsArray(logistic_info)){
        goto end; //nonprimitive container
    }

    logistic_infoList = list_createList();

    cJSON_ArrayForEach(logistic_info_local_nonprimitive,logistic_info )
    {
        if(!cJSON_IsObject(logistic_info_local_nonprimitive)){
            goto end;
        }
        product_add_logistic_info_inner_t *logistic_infoItem = product_add_logistic_info_inner_parseFromJSON(logistic_info_local_nonprimitive);

        list_addElement(logistic_infoList, logistic_infoItem);
    }
    }

    // product_add->listing_duration
    cJSON *listing_duration = cJSON_GetObjectItemCaseSensitive(product_addJSON, "listing_duration");
    if (cJSON_IsNull(listing_duration)) {
        listing_duration = NULL;
    }
    if (listing_duration) { 
    if(!cJSON_IsString(listing_duration) && !cJSON_IsNull(listing_duration))
    {
    goto end; //String
    }
    }

    // product_add->listing_type
    cJSON *listing_type = cJSON_GetObjectItemCaseSensitive(product_addJSON, "listing_type");
    if (cJSON_IsNull(listing_type)) {
        listing_type = NULL;
    }
    if (listing_type) { 
    if(!cJSON_IsString(listing_type) && !cJSON_IsNull(listing_type))
    {
    goto end; //String
    }
    }

    // product_add->return_accepted
    cJSON *return_accepted = cJSON_GetObjectItemCaseSensitive(product_addJSON, "return_accepted");
    if (cJSON_IsNull(return_accepted)) {
        return_accepted = NULL;
    }
    if (return_accepted) { 
    if(!cJSON_IsBool(return_accepted))
    {
    goto end; //Bool
    }
    }

    // product_add->seller_profiles
    cJSON *seller_profiles = cJSON_GetObjectItemCaseSensitive(product_addJSON, "seller_profiles");
    if (cJSON_IsNull(seller_profiles)) {
        seller_profiles = NULL;
    }
    if (seller_profiles) { 
    seller_profiles_local_nonprim = product_add_seller_profiles_parseFromJSON(seller_profiles); //nonprimitive
    }

    // product_add->auction_confidentiality_level
    cJSON *auction_confidentiality_level = cJSON_GetObjectItemCaseSensitive(product_addJSON, "auction_confidentiality_level");
    if (cJSON_IsNull(auction_confidentiality_level)) {
        auction_confidentiality_level = NULL;
    }
    if (auction_confidentiality_level) { 
    if(!cJSON_IsString(auction_confidentiality_level) && !cJSON_IsNull(auction_confidentiality_level))
    {
    goto end; //String
    }
    }

    // product_add->best_offer
    cJSON *best_offer = cJSON_GetObjectItemCaseSensitive(product_addJSON, "best_offer");
    if (cJSON_IsNull(best_offer)) {
        best_offer = NULL;
    }
    if (best_offer) { 
    best_offer_local_nonprim = product_add_best_offer_parseFromJSON(best_offer); //nonprimitive
    }

    // product_add->production_partner_ids
    cJSON *production_partner_ids = cJSON_GetObjectItemCaseSensitive(product_addJSON, "production_partner_ids");
    if (cJSON_IsNull(production_partner_ids)) {
        production_partner_ids = NULL;
    }
    if (production_partner_ids) { 
    if(!cJSON_IsString(production_partner_ids) && !cJSON_IsNull(production_partner_ids))
    {
    goto end; //String
    }
    }

    // product_add->marketplace_item_properties
    cJSON *marketplace_item_properties = cJSON_GetObjectItemCaseSensitive(product_addJSON, "marketplace_item_properties");
    if (cJSON_IsNull(marketplace_item_properties)) {
        marketplace_item_properties = NULL;
    }
    if (marketplace_item_properties) { 
    if(!cJSON_IsString(marketplace_item_properties) && !cJSON_IsNull(marketplace_item_properties))
    {
    goto end; //String
    }
    }

    // product_add->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_addJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }

    // product_add->viewed_count
    cJSON *viewed_count = cJSON_GetObjectItemCaseSensitive(product_addJSON, "viewed_count");
    if (cJSON_IsNull(viewed_count)) {
        viewed_count = NULL;
    }
    if (viewed_count) { 
    if(!cJSON_IsNumber(viewed_count))
    {
    goto end; //Numeric
    }
    }

    // product_add->ordered_count
    cJSON *ordered_count = cJSON_GetObjectItemCaseSensitive(product_addJSON, "ordered_count");
    if (cJSON_IsNull(ordered_count)) {
        ordered_count = NULL;
    }
    if (ordered_count) { 
    if(!cJSON_IsNumber(ordered_count))
    {
    goto end; //Numeric
    }
    }

    // product_add->shop_section_id
    cJSON *shop_section_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "shop_section_id");
    if (cJSON_IsNull(shop_section_id)) {
        shop_section_id = NULL;
    }
    if (shop_section_id) { 
    if(!cJSON_IsNumber(shop_section_id))
    {
    goto end; //Numeric
    }
    }

    // product_add->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(product_addJSON, "return_policy_id");
    if (cJSON_IsNull(return_policy_id)) {
        return_policy_id = NULL;
    }
    if (return_policy_id) { 
    if(!cJSON_IsNumber(return_policy_id))
    {
    goto end; //Numeric
    }
    }

    // product_add->personalization_details
    cJSON *personalization_details = cJSON_GetObjectItemCaseSensitive(product_addJSON, "personalization_details");
    if (cJSON_IsNull(personalization_details)) {
        personalization_details = NULL;
    }
    if (personalization_details) { 
    personalization_details_local_nonprim = product_add_personalization_details_parseFromJSON(personalization_details); //nonprimitive
    }


    product_add_local_var = product_add_create_internal (
        strdup(name->valuestring),
        strdup(model->valuestring),
        strdup(description->valuestring),
        price->valuedouble,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        categories_ids && !cJSON_IsNull(categories_ids) ? strdup(categories_ids->valuestring) : NULL,
        product_class && !cJSON_IsNull(product_class) ? strdup(product_class->valuestring) : NULL,
        product_type && !cJSON_IsNull(product_type) ? strdup(product_type->valuestring) : NULL,
        is_virtual ? is_virtual->valueint : 0,
        downloadable ? downloadable->valueint : 0,
        is_supply ? is_supply->valueint : 0,
        available_for_view ? available_for_view->valueint : 0,
        available_for_sale ? available_for_sale->valueint : 0,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        stores_ids && !cJSON_IsNull(stores_ids) ? strdup(stores_ids->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        old_price ? old_price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        wholesale_price ? wholesale_price->valuedouble : 0,
        cost_price ? cost_price->valuedouble : 0,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        tier_prices ? tier_pricesList : NULL,
        group_prices ? group_pricesList : NULL,
        buyitnow_price ? buyitnow_price->valuedouble : 0,
        reserve_price ? reserve_price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        in_stock ? in_stock->valueint : 0,
        manage_stock ? manage_stock->valueint : 0,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        min_order_quantity ? min_order_quantity->valuedouble : 0,
        max_order_quantity ? max_order_quantity->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        asin && !cJSON_IsNull(asin) ? strdup(asin->valuestring) : NULL,
        product_reference && !cJSON_IsNull(product_reference) ? strdup(product_reference->valuestring) : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL,
        country_of_origin && !cJSON_IsNull(country_of_origin) ? strdup(country_of_origin->valuestring) : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        manufacturer_id && !cJSON_IsNull(manufacturer_id) ? strdup(manufacturer_id->valuestring) : NULL,
        manufacturer_info ? manufacturer_info_local_nonprim : NULL,
        brand_name && !cJSON_IsNull(brand_name) ? strdup(brand_name->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        image_name && !cJSON_IsNull(image_name) ? strdup(image_name->valuestring) : NULL,
        additional_image_urls ? additional_image_urlsList : NULL,
        files ? filesList : NULL,
        size_chart ? size_chart_local_nonprim : NULL,
        related_products_ids && !cJSON_IsNull(related_products_ids) ? strdup(related_products_ids->valuestring) : NULL,
        up_sell_products_ids && !cJSON_IsNull(up_sell_products_ids) ? strdup(up_sell_products_ids->valuestring) : NULL,
        cross_sell_products_ids && !cJSON_IsNull(cross_sell_products_ids) ? strdup(cross_sell_products_ids->valuestring) : NULL,
        attribute_set_name && !cJSON_IsNull(attribute_set_name) ? strdup(attribute_set_name->valuestring) : NULL,
        attribute_name && !cJSON_IsNull(attribute_name) ? strdup(attribute_name->valuestring) : NULL,
        search_keywords && !cJSON_IsNull(search_keywords) ? strdup(search_keywords->valuestring) : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL,
        materials ? materialsList : NULL,
        certifications ? certificationsList : NULL,
        specifics ? specificsList : NULL,
        avail_from && !cJSON_IsNull(avail_from) ? strdup(avail_from->valuestring) : NULL,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_modified && !cJSON_IsNull(sprice_modified) ? strdup(sprice_modified->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        created_at && !cJSON_IsNull(created_at) ? strdup(created_at->valuestring) : NULL,
        auto_renew ? auto_renew->valueint : 0,
        when_made && !cJSON_IsNull(when_made) ? strdup(when_made->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        taxable ? taxable->valueint : 0,
        sales_tax ? sales_tax_local_nonprim : NULL,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        condition_description && !cJSON_IsNull(condition_description) ? strdup(condition_description->valuestring) : NULL,
        allow_display_condition ? allow_display_condition->valueint : 0,
        payment_methods ? payment_methodsList : NULL,
        paypal_email && !cJSON_IsNull(paypal_email) ? strdup(paypal_email->valuestring) : NULL,
        shipping_template_id ? shipping_template_id->valuedouble : 0,
        shipping_details ? shipping_detailsList : NULL,
        is_free_shipping ? is_free_shipping->valueint : 0,
        delivery_code && !cJSON_IsNull(delivery_code) ? strdup(delivery_code->valuestring) : NULL,
        delivery_type && !cJSON_IsNull(delivery_type) ? strdup(delivery_type->valuestring) : NULL,
        delivery_time ? delivery_time->valuedouble : 0,
        delivery_option_ids && !cJSON_IsNull(delivery_option_ids) ? strdup(delivery_option_ids->valuestring) : NULL,
        package_details ? package_details_local_nonprim : NULL,
        logistic_info ? logistic_infoList : NULL,
        listing_duration && !cJSON_IsNull(listing_duration) ? strdup(listing_duration->valuestring) : NULL,
        listing_type && !cJSON_IsNull(listing_type) ? strdup(listing_type->valuestring) : NULL,
        return_accepted ? return_accepted->valueint : 0,
        seller_profiles ? seller_profiles_local_nonprim : NULL,
        auction_confidentiality_level && !cJSON_IsNull(auction_confidentiality_level) ? strdup(auction_confidentiality_level->valuestring) : NULL,
        best_offer ? best_offer_local_nonprim : NULL,
        production_partner_ids && !cJSON_IsNull(production_partner_ids) ? strdup(production_partner_ids->valuestring) : NULL,
        marketplace_item_properties && !cJSON_IsNull(marketplace_item_properties) ? strdup(marketplace_item_properties->valuestring) : NULL,
        clear_cache ? clear_cache->valueint : 0,
        viewed_count ? viewed_count->valuedouble : 0,
        ordered_count ? ordered_count->valuedouble : 0,
        shop_section_id ? shop_section_id->valuedouble : 0,
        return_policy_id ? return_policy_id->valuedouble : 0,
        personalization_details ? personalization_details_local_nonprim : NULL
        );

    return product_add_local_var;
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
    if (group_pricesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_pricesList) {
            product_add_group_prices_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_pricesList);
        group_pricesList = NULL;
    }
    if (manufacturer_info_local_nonprim) {
        product_add_manufacturer_info_free(manufacturer_info_local_nonprim);
        manufacturer_info_local_nonprim = NULL;
    }
    if (additional_image_urlsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, additional_image_urlsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(additional_image_urlsList);
        additional_image_urlsList = NULL;
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
    if (size_chart_local_nonprim) {
        product_add_size_chart_free(size_chart_local_nonprim);
        size_chart_local_nonprim = NULL;
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
    if (certificationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, certificationsList) {
            product_add_certifications_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(certificationsList);
        certificationsList = NULL;
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
    if (sales_tax_local_nonprim) {
        product_add_sales_tax_free(sales_tax_local_nonprim);
        sales_tax_local_nonprim = NULL;
    }
    if (payment_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, payment_methodsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(payment_methodsList);
        payment_methodsList = NULL;
    }
    if (shipping_detailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, shipping_detailsList) {
            product_add_shipping_details_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(shipping_detailsList);
        shipping_detailsList = NULL;
    }
    if (package_details_local_nonprim) {
        product_add_package_details_free(package_details_local_nonprim);
        package_details_local_nonprim = NULL;
    }
    if (logistic_infoList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, logistic_infoList) {
            product_add_logistic_info_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(logistic_infoList);
        logistic_infoList = NULL;
    }
    if (seller_profiles_local_nonprim) {
        product_add_seller_profiles_free(seller_profiles_local_nonprim);
        seller_profiles_local_nonprim = NULL;
    }
    if (best_offer_local_nonprim) {
        product_add_best_offer_free(best_offer_local_nonprim);
        best_offer_local_nonprim = NULL;
    }
    if (personalization_details_local_nonprim) {
        product_add_personalization_details_free(personalization_details_local_nonprim);
        personalization_details_local_nonprim = NULL;
    }
    return NULL;

}
