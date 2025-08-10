#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product.h"



static product_t *product_create_internal(
    char *id,
    char *type,
    char *u_model,
    char *u_sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    list_t *advanced_price,
    double cost_price,
    double quantity,
    list_t *inventory,
    list_t *group_items,
    char *u_brand_id,
    char *u_brand,
    list_t *categories_ids,
    list_t *stores_ids,
    char *url,
    char *seo_url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    int avail_sale,
    int avail_view,
    int is_virtual,
    int is_downloadable,
    double weight,
    char *weight_unit,
    int sort_order,
    int in_stock,
    char *backorders,
    char *manage_stock,
    int is_stock_managed,
    int on_sale,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *tax_class_id,
    special_price_t *special_price,
    list_t *tier_price,
    list_t *group_price,
    list_t *images,
    list_t *product_options,
    char *u_upc,
    char *u_mpn,
    char *u_gtin,
    char *u_isbn,
    char *u_ean,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    list_t *discounts,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    product_t *product_local_var = malloc(sizeof(product_t));
    if (!product_local_var) {
        return NULL;
    }
    product_local_var->id = id;
    product_local_var->type = type;
    product_local_var->u_model = u_model;
    product_local_var->u_sku = u_sku;
    product_local_var->name = name;
    product_local_var->description = description;
    product_local_var->short_description = short_description;
    product_local_var->price = price;
    product_local_var->advanced_price = advanced_price;
    product_local_var->cost_price = cost_price;
    product_local_var->quantity = quantity;
    product_local_var->inventory = inventory;
    product_local_var->group_items = group_items;
    product_local_var->u_brand_id = u_brand_id;
    product_local_var->u_brand = u_brand;
    product_local_var->categories_ids = categories_ids;
    product_local_var->stores_ids = stores_ids;
    product_local_var->url = url;
    product_local_var->seo_url = seo_url;
    product_local_var->meta_title = meta_title;
    product_local_var->meta_keywords = meta_keywords;
    product_local_var->meta_description = meta_description;
    product_local_var->avail_sale = avail_sale;
    product_local_var->avail_view = avail_view;
    product_local_var->is_virtual = is_virtual;
    product_local_var->is_downloadable = is_downloadable;
    product_local_var->weight = weight;
    product_local_var->weight_unit = weight_unit;
    product_local_var->sort_order = sort_order;
    product_local_var->in_stock = in_stock;
    product_local_var->backorders = backorders;
    product_local_var->manage_stock = manage_stock;
    product_local_var->is_stock_managed = is_stock_managed;
    product_local_var->on_sale = on_sale;
    product_local_var->create_at = create_at;
    product_local_var->modified_at = modified_at;
    product_local_var->tax_class_id = tax_class_id;
    product_local_var->special_price = special_price;
    product_local_var->tier_price = tier_price;
    product_local_var->group_price = group_price;
    product_local_var->images = images;
    product_local_var->product_options = product_options;
    product_local_var->u_upc = u_upc;
    product_local_var->u_mpn = u_mpn;
    product_local_var->u_gtin = u_gtin;
    product_local_var->u_isbn = u_isbn;
    product_local_var->u_ean = u_ean;
    product_local_var->related_products_ids = related_products_ids;
    product_local_var->up_sell_products_ids = up_sell_products_ids;
    product_local_var->cross_sell_products_ids = cross_sell_products_ids;
    product_local_var->dimensions_unit = dimensions_unit;
    product_local_var->width = width;
    product_local_var->height = height;
    product_local_var->length = length;
    product_local_var->discounts = discounts;
    product_local_var->additional_fields = additional_fields;
    product_local_var->custom_fields = custom_fields;

    product_local_var->_library_owned = 1;
    return product_local_var;
}

__attribute__((deprecated)) product_t *product_create(
    char *id,
    char *type,
    char *u_model,
    char *u_sku,
    char *name,
    char *description,
    char *short_description,
    double price,
    list_t *advanced_price,
    double cost_price,
    double quantity,
    list_t *inventory,
    list_t *group_items,
    char *u_brand_id,
    char *u_brand,
    list_t *categories_ids,
    list_t *stores_ids,
    char *url,
    char *seo_url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    int avail_sale,
    int avail_view,
    int is_virtual,
    int is_downloadable,
    double weight,
    char *weight_unit,
    int sort_order,
    int in_stock,
    char *backorders,
    char *manage_stock,
    int is_stock_managed,
    int on_sale,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *tax_class_id,
    special_price_t *special_price,
    list_t *tier_price,
    list_t *group_price,
    list_t *images,
    list_t *product_options,
    char *u_upc,
    char *u_mpn,
    char *u_gtin,
    char *u_isbn,
    char *u_ean,
    list_t *related_products_ids,
    list_t *up_sell_products_ids,
    list_t *cross_sell_products_ids,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    list_t *discounts,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return product_create_internal (
        id,
        type,
        u_model,
        u_sku,
        name,
        description,
        short_description,
        price,
        advanced_price,
        cost_price,
        quantity,
        inventory,
        group_items,
        u_brand_id,
        u_brand,
        categories_ids,
        stores_ids,
        url,
        seo_url,
        meta_title,
        meta_keywords,
        meta_description,
        avail_sale,
        avail_view,
        is_virtual,
        is_downloadable,
        weight,
        weight_unit,
        sort_order,
        in_stock,
        backorders,
        manage_stock,
        is_stock_managed,
        on_sale,
        create_at,
        modified_at,
        tax_class_id,
        special_price,
        tier_price,
        group_price,
        images,
        product_options,
        u_upc,
        u_mpn,
        u_gtin,
        u_isbn,
        u_ean,
        related_products_ids,
        up_sell_products_ids,
        cross_sell_products_ids,
        dimensions_unit,
        width,
        height,
        length,
        discounts,
        additional_fields,
        custom_fields
        );
}

void product_free(product_t *product) {
    if(NULL == product){
        return ;
    }
    if(product->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product->id) {
        free(product->id);
        product->id = NULL;
    }
    if (product->type) {
        free(product->type);
        product->type = NULL;
    }
    if (product->u_model) {
        free(product->u_model);
        product->u_model = NULL;
    }
    if (product->u_sku) {
        free(product->u_sku);
        product->u_sku = NULL;
    }
    if (product->name) {
        free(product->name);
        product->name = NULL;
    }
    if (product->description) {
        free(product->description);
        product->description = NULL;
    }
    if (product->short_description) {
        free(product->short_description);
        product->short_description = NULL;
    }
    if (product->advanced_price) {
        list_ForEach(listEntry, product->advanced_price) {
            product_advanced_price_free(listEntry->data);
        }
        list_freeList(product->advanced_price);
        product->advanced_price = NULL;
    }
    if (product->inventory) {
        list_ForEach(listEntry, product->inventory) {
            product_inventory_free(listEntry->data);
        }
        list_freeList(product->inventory);
        product->inventory = NULL;
    }
    if (product->group_items) {
        list_ForEach(listEntry, product->group_items) {
            product_group_item_free(listEntry->data);
        }
        list_freeList(product->group_items);
        product->group_items = NULL;
    }
    if (product->u_brand_id) {
        free(product->u_brand_id);
        product->u_brand_id = NULL;
    }
    if (product->u_brand) {
        free(product->u_brand);
        product->u_brand = NULL;
    }
    if (product->categories_ids) {
        list_ForEach(listEntry, product->categories_ids) {
            free(listEntry->data);
        }
        list_freeList(product->categories_ids);
        product->categories_ids = NULL;
    }
    if (product->stores_ids) {
        list_ForEach(listEntry, product->stores_ids) {
            free(listEntry->data);
        }
        list_freeList(product->stores_ids);
        product->stores_ids = NULL;
    }
    if (product->url) {
        free(product->url);
        product->url = NULL;
    }
    if (product->seo_url) {
        free(product->seo_url);
        product->seo_url = NULL;
    }
    if (product->meta_title) {
        free(product->meta_title);
        product->meta_title = NULL;
    }
    if (product->meta_keywords) {
        free(product->meta_keywords);
        product->meta_keywords = NULL;
    }
    if (product->meta_description) {
        free(product->meta_description);
        product->meta_description = NULL;
    }
    if (product->weight_unit) {
        free(product->weight_unit);
        product->weight_unit = NULL;
    }
    if (product->backorders) {
        free(product->backorders);
        product->backorders = NULL;
    }
    if (product->manage_stock) {
        free(product->manage_stock);
        product->manage_stock = NULL;
    }
    if (product->create_at) {
        a2_c_date_time_free(product->create_at);
        product->create_at = NULL;
    }
    if (product->modified_at) {
        a2_c_date_time_free(product->modified_at);
        product->modified_at = NULL;
    }
    if (product->tax_class_id) {
        free(product->tax_class_id);
        product->tax_class_id = NULL;
    }
    if (product->special_price) {
        special_price_free(product->special_price);
        product->special_price = NULL;
    }
    if (product->tier_price) {
        list_ForEach(listEntry, product->tier_price) {
            product_tier_price_free(listEntry->data);
        }
        list_freeList(product->tier_price);
        product->tier_price = NULL;
    }
    if (product->group_price) {
        list_ForEach(listEntry, product->group_price) {
            product_group_price_free(listEntry->data);
        }
        list_freeList(product->group_price);
        product->group_price = NULL;
    }
    if (product->images) {
        list_ForEach(listEntry, product->images) {
            image_free(listEntry->data);
        }
        list_freeList(product->images);
        product->images = NULL;
    }
    if (product->product_options) {
        list_ForEach(listEntry, product->product_options) {
            product_option_free(listEntry->data);
        }
        list_freeList(product->product_options);
        product->product_options = NULL;
    }
    if (product->u_upc) {
        free(product->u_upc);
        product->u_upc = NULL;
    }
    if (product->u_mpn) {
        free(product->u_mpn);
        product->u_mpn = NULL;
    }
    if (product->u_gtin) {
        free(product->u_gtin);
        product->u_gtin = NULL;
    }
    if (product->u_isbn) {
        free(product->u_isbn);
        product->u_isbn = NULL;
    }
    if (product->u_ean) {
        free(product->u_ean);
        product->u_ean = NULL;
    }
    if (product->related_products_ids) {
        list_ForEach(listEntry, product->related_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product->related_products_ids);
        product->related_products_ids = NULL;
    }
    if (product->up_sell_products_ids) {
        list_ForEach(listEntry, product->up_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product->up_sell_products_ids);
        product->up_sell_products_ids = NULL;
    }
    if (product->cross_sell_products_ids) {
        list_ForEach(listEntry, product->cross_sell_products_ids) {
            free(listEntry->data);
        }
        list_freeList(product->cross_sell_products_ids);
        product->cross_sell_products_ids = NULL;
    }
    if (product->dimensions_unit) {
        free(product->dimensions_unit);
        product->dimensions_unit = NULL;
    }
    if (product->discounts) {
        list_ForEach(listEntry, product->discounts) {
            discount_free(listEntry->data);
        }
        list_freeList(product->discounts);
        product->discounts = NULL;
    }
    if (product->additional_fields) {
        object_free(product->additional_fields);
        product->additional_fields = NULL;
    }
    if (product->custom_fields) {
        object_free(product->custom_fields);
        product->custom_fields = NULL;
    }
    free(product);
}

cJSON *product_convertToJSON(product_t *product) {
    cJSON *item = cJSON_CreateObject();

    // product->id
    if(product->id) {
    if(cJSON_AddStringToObject(item, "id", product->id) == NULL) {
    goto fail; //String
    }
    }


    // product->type
    if(product->type) {
    if(cJSON_AddStringToObject(item, "type", product->type) == NULL) {
    goto fail; //String
    }
    }


    // product->u_model
    if(product->u_model) {
    if(cJSON_AddStringToObject(item, "u_model", product->u_model) == NULL) {
    goto fail; //String
    }
    }


    // product->u_sku
    if(product->u_sku) {
    if(cJSON_AddStringToObject(item, "u_sku", product->u_sku) == NULL) {
    goto fail; //String
    }
    }


    // product->name
    if(product->name) {
    if(cJSON_AddStringToObject(item, "name", product->name) == NULL) {
    goto fail; //String
    }
    }


    // product->description
    if(product->description) {
    if(cJSON_AddStringToObject(item, "description", product->description) == NULL) {
    goto fail; //String
    }
    }


    // product->short_description
    if(product->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product->price
    if(product->price) {
    if(cJSON_AddNumberToObject(item, "price", product->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->advanced_price
    if(product->advanced_price) {
    cJSON *advanced_price = cJSON_AddArrayToObject(item, "advanced_price");
    if(advanced_price == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *advanced_priceListEntry;
    if (product->advanced_price) {
    list_ForEach(advanced_priceListEntry, product->advanced_price) {
    cJSON *itemLocal = product_advanced_price_convertToJSON(advanced_priceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(advanced_price, itemLocal);
    }
    }
    }


    // product->cost_price
    if(product->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->quantity
    if(product->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->inventory
    if(product->inventory) {
    cJSON *inventory = cJSON_AddArrayToObject(item, "inventory");
    if(inventory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *inventoryListEntry;
    if (product->inventory) {
    list_ForEach(inventoryListEntry, product->inventory) {
    cJSON *itemLocal = product_inventory_convertToJSON(inventoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(inventory, itemLocal);
    }
    }
    }


    // product->group_items
    if(product->group_items) {
    cJSON *group_items = cJSON_AddArrayToObject(item, "group_items");
    if(group_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_itemsListEntry;
    if (product->group_items) {
    list_ForEach(group_itemsListEntry, product->group_items) {
    cJSON *itemLocal = product_group_item_convertToJSON(group_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_items, itemLocal);
    }
    }
    }


    // product->u_brand_id
    if(product->u_brand_id) {
    if(cJSON_AddStringToObject(item, "u_brand_id", product->u_brand_id) == NULL) {
    goto fail; //String
    }
    }


    // product->u_brand
    if(product->u_brand) {
    if(cJSON_AddStringToObject(item, "u_brand", product->u_brand) == NULL) {
    goto fail; //String
    }
    }


    // product->categories_ids
    if(product->categories_ids) {
    cJSON *categories_ids = cJSON_AddArrayToObject(item, "categories_ids");
    if(categories_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *categories_idsListEntry;
    list_ForEach(categories_idsListEntry, product->categories_ids) {
    if(cJSON_AddStringToObject(categories_ids, "", categories_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product->stores_ids
    if(product->stores_ids) {
    cJSON *stores_ids = cJSON_AddArrayToObject(item, "stores_ids");
    if(stores_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stores_idsListEntry;
    list_ForEach(stores_idsListEntry, product->stores_ids) {
    if(cJSON_AddStringToObject(stores_ids, "", stores_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product->url
    if(product->url) {
    if(cJSON_AddStringToObject(item, "url", product->url) == NULL) {
    goto fail; //String
    }
    }


    // product->seo_url
    if(product->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", product->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // product->meta_title
    if(product->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product->meta_keywords
    if(product->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", product->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product->meta_description
    if(product->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product->avail_sale
    if(product->avail_sale) {
    if(cJSON_AddBoolToObject(item, "avail_sale", product->avail_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product->avail_view
    if(product->avail_view) {
    if(cJSON_AddBoolToObject(item, "avail_view", product->avail_view) == NULL) {
    goto fail; //Bool
    }
    }


    // product->is_virtual
    if(product->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product->is_downloadable
    if(product->is_downloadable) {
    if(cJSON_AddBoolToObject(item, "is_downloadable", product->is_downloadable) == NULL) {
    goto fail; //Bool
    }
    }


    // product->weight
    if(product->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->weight_unit
    if(product->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product->sort_order
    if(product->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", product->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->in_stock
    if(product->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product->backorders
    if(product->backorders) {
    if(cJSON_AddStringToObject(item, "backorders", product->backorders) == NULL) {
    goto fail; //String
    }
    }


    // product->manage_stock
    if(product->manage_stock) {
    if(cJSON_AddStringToObject(item, "manage_stock", product->manage_stock) == NULL) {
    goto fail; //String
    }
    }


    // product->is_stock_managed
    if(product->is_stock_managed) {
    if(cJSON_AddBoolToObject(item, "is_stock_managed", product->is_stock_managed) == NULL) {
    goto fail; //Bool
    }
    }


    // product->on_sale
    if(product->on_sale) {
    if(cJSON_AddBoolToObject(item, "on_sale", product->on_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product->create_at
    if(product->create_at) {
    cJSON *create_at_local_JSON = a2_c_date_time_convertToJSON(product->create_at);
    if(create_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "create_at", create_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product->modified_at
    if(product->modified_at) {
    cJSON *modified_at_local_JSON = a2_c_date_time_convertToJSON(product->modified_at);
    if(modified_at_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_at", modified_at_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product->tax_class_id
    if(product->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product->special_price
    if(product->special_price) {
    cJSON *special_price_local_JSON = special_price_convertToJSON(product->special_price);
    if(special_price_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "special_price", special_price_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product->tier_price
    if(product->tier_price) {
    cJSON *tier_price = cJSON_AddArrayToObject(item, "tier_price");
    if(tier_price == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tier_priceListEntry;
    if (product->tier_price) {
    list_ForEach(tier_priceListEntry, product->tier_price) {
    cJSON *itemLocal = product_tier_price_convertToJSON(tier_priceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tier_price, itemLocal);
    }
    }
    }


    // product->group_price
    if(product->group_price) {
    cJSON *group_price = cJSON_AddArrayToObject(item, "group_price");
    if(group_price == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *group_priceListEntry;
    if (product->group_price) {
    list_ForEach(group_priceListEntry, product->group_price) {
    cJSON *itemLocal = product_group_price_convertToJSON(group_priceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(group_price, itemLocal);
    }
    }
    }


    // product->images
    if(product->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (product->images) {
    list_ForEach(imagesListEntry, product->images) {
    cJSON *itemLocal = image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // product->product_options
    if(product->product_options) {
    cJSON *product_options = cJSON_AddArrayToObject(item, "product_options");
    if(product_options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *product_optionsListEntry;
    if (product->product_options) {
    list_ForEach(product_optionsListEntry, product->product_options) {
    cJSON *itemLocal = product_option_convertToJSON(product_optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(product_options, itemLocal);
    }
    }
    }


    // product->u_upc
    if(product->u_upc) {
    if(cJSON_AddStringToObject(item, "u_upc", product->u_upc) == NULL) {
    goto fail; //String
    }
    }


    // product->u_mpn
    if(product->u_mpn) {
    if(cJSON_AddStringToObject(item, "u_mpn", product->u_mpn) == NULL) {
    goto fail; //String
    }
    }


    // product->u_gtin
    if(product->u_gtin) {
    if(cJSON_AddStringToObject(item, "u_gtin", product->u_gtin) == NULL) {
    goto fail; //String
    }
    }


    // product->u_isbn
    if(product->u_isbn) {
    if(cJSON_AddStringToObject(item, "u_isbn", product->u_isbn) == NULL) {
    goto fail; //String
    }
    }


    // product->u_ean
    if(product->u_ean) {
    if(cJSON_AddStringToObject(item, "u_ean", product->u_ean) == NULL) {
    goto fail; //String
    }
    }


    // product->related_products_ids
    if(product->related_products_ids) {
    cJSON *related_products_ids = cJSON_AddArrayToObject(item, "related_products_ids");
    if(related_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *related_products_idsListEntry;
    list_ForEach(related_products_idsListEntry, product->related_products_ids) {
    if(cJSON_AddStringToObject(related_products_ids, "", related_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product->up_sell_products_ids
    if(product->up_sell_products_ids) {
    cJSON *up_sell_products_ids = cJSON_AddArrayToObject(item, "up_sell_products_ids");
    if(up_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *up_sell_products_idsListEntry;
    list_ForEach(up_sell_products_idsListEntry, product->up_sell_products_ids) {
    if(cJSON_AddStringToObject(up_sell_products_ids, "", up_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product->cross_sell_products_ids
    if(product->cross_sell_products_ids) {
    cJSON *cross_sell_products_ids = cJSON_AddArrayToObject(item, "cross_sell_products_ids");
    if(cross_sell_products_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cross_sell_products_idsListEntry;
    list_ForEach(cross_sell_products_idsListEntry, product->cross_sell_products_ids) {
    if(cJSON_AddStringToObject(cross_sell_products_ids, "", cross_sell_products_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // product->dimensions_unit
    if(product->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", product->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // product->width
    if(product->width) {
    if(cJSON_AddNumberToObject(item, "width", product->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->height
    if(product->height) {
    if(cJSON_AddNumberToObject(item, "height", product->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->length
    if(product->length) {
    if(cJSON_AddNumberToObject(item, "length", product->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product->discounts
    if(product->discounts) {
    cJSON *discounts = cJSON_AddArrayToObject(item, "discounts");
    if(discounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *discountsListEntry;
    if (product->discounts) {
    list_ForEach(discountsListEntry, product->discounts) {
    cJSON *itemLocal = discount_convertToJSON(discountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(discounts, itemLocal);
    }
    }
    }


    // product->additional_fields
    if(product->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(product->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // product->custom_fields
    if(product->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(product->custom_fields);
    if(custom_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "custom_fields", custom_fields_object);
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

product_t *product_parseFromJSON(cJSON *productJSON){

    product_t *product_local_var = NULL;

    // define the local list for product->advanced_price
    list_t *advanced_priceList = NULL;

    // define the local list for product->inventory
    list_t *inventoryList = NULL;

    // define the local list for product->group_items
    list_t *group_itemsList = NULL;

    // define the local list for product->categories_ids
    list_t *categories_idsList = NULL;

    // define the local list for product->stores_ids
    list_t *stores_idsList = NULL;

    // define the local variable for product->create_at
    a2_c_date_time_t *create_at_local_nonprim = NULL;

    // define the local variable for product->modified_at
    a2_c_date_time_t *modified_at_local_nonprim = NULL;

    // define the local variable for product->special_price
    special_price_t *special_price_local_nonprim = NULL;

    // define the local list for product->tier_price
    list_t *tier_priceList = NULL;

    // define the local list for product->group_price
    list_t *group_priceList = NULL;

    // define the local list for product->images
    list_t *imagesList = NULL;

    // define the local list for product->product_options
    list_t *product_optionsList = NULL;

    // define the local list for product->related_products_ids
    list_t *related_products_idsList = NULL;

    // define the local list for product->up_sell_products_ids
    list_t *up_sell_products_idsList = NULL;

    // define the local list for product->cross_sell_products_ids
    list_t *cross_sell_products_idsList = NULL;

    // define the local list for product->discounts
    list_t *discountsList = NULL;

    // product->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(productJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(productJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // product->u_model
    cJSON *u_model = cJSON_GetObjectItemCaseSensitive(productJSON, "u_model");
    if (cJSON_IsNull(u_model)) {
        u_model = NULL;
    }
    if (u_model) { 
    if(!cJSON_IsString(u_model) && !cJSON_IsNull(u_model))
    {
    goto end; //String
    }
    }

    // product->u_sku
    cJSON *u_sku = cJSON_GetObjectItemCaseSensitive(productJSON, "u_sku");
    if (cJSON_IsNull(u_sku)) {
        u_sku = NULL;
    }
    if (u_sku) { 
    if(!cJSON_IsString(u_sku) && !cJSON_IsNull(u_sku))
    {
    goto end; //String
    }
    }

    // product->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(productJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(productJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(productJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(productJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product->advanced_price
    cJSON *advanced_price = cJSON_GetObjectItemCaseSensitive(productJSON, "advanced_price");
    if (cJSON_IsNull(advanced_price)) {
        advanced_price = NULL;
    }
    if (advanced_price) { 
    cJSON *advanced_price_local_nonprimitive = NULL;
    if(!cJSON_IsArray(advanced_price)){
        goto end; //nonprimitive container
    }

    advanced_priceList = list_createList();

    cJSON_ArrayForEach(advanced_price_local_nonprimitive,advanced_price )
    {
        if(!cJSON_IsObject(advanced_price_local_nonprimitive)){
            goto end;
        }
        product_advanced_price_t *advanced_priceItem = product_advanced_price_parseFromJSON(advanced_price_local_nonprimitive);

        list_addElement(advanced_priceList, advanced_priceItem);
    }
    }

    // product->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(productJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(productJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product->inventory
    cJSON *inventory = cJSON_GetObjectItemCaseSensitive(productJSON, "inventory");
    if (cJSON_IsNull(inventory)) {
        inventory = NULL;
    }
    if (inventory) { 
    cJSON *inventory_local_nonprimitive = NULL;
    if(!cJSON_IsArray(inventory)){
        goto end; //nonprimitive container
    }

    inventoryList = list_createList();

    cJSON_ArrayForEach(inventory_local_nonprimitive,inventory )
    {
        if(!cJSON_IsObject(inventory_local_nonprimitive)){
            goto end;
        }
        product_inventory_t *inventoryItem = product_inventory_parseFromJSON(inventory_local_nonprimitive);

        list_addElement(inventoryList, inventoryItem);
    }
    }

    // product->group_items
    cJSON *group_items = cJSON_GetObjectItemCaseSensitive(productJSON, "group_items");
    if (cJSON_IsNull(group_items)) {
        group_items = NULL;
    }
    if (group_items) { 
    cJSON *group_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group_items)){
        goto end; //nonprimitive container
    }

    group_itemsList = list_createList();

    cJSON_ArrayForEach(group_items_local_nonprimitive,group_items )
    {
        if(!cJSON_IsObject(group_items_local_nonprimitive)){
            goto end;
        }
        product_group_item_t *group_itemsItem = product_group_item_parseFromJSON(group_items_local_nonprimitive);

        list_addElement(group_itemsList, group_itemsItem);
    }
    }

    // product->u_brand_id
    cJSON *u_brand_id = cJSON_GetObjectItemCaseSensitive(productJSON, "u_brand_id");
    if (cJSON_IsNull(u_brand_id)) {
        u_brand_id = NULL;
    }
    if (u_brand_id) { 
    if(!cJSON_IsString(u_brand_id) && !cJSON_IsNull(u_brand_id))
    {
    goto end; //String
    }
    }

    // product->u_brand
    cJSON *u_brand = cJSON_GetObjectItemCaseSensitive(productJSON, "u_brand");
    if (cJSON_IsNull(u_brand)) {
        u_brand = NULL;
    }
    if (u_brand) { 
    if(!cJSON_IsString(u_brand) && !cJSON_IsNull(u_brand))
    {
    goto end; //String
    }
    }

    // product->categories_ids
    cJSON *categories_ids = cJSON_GetObjectItemCaseSensitive(productJSON, "categories_ids");
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

    // product->stores_ids
    cJSON *stores_ids = cJSON_GetObjectItemCaseSensitive(productJSON, "stores_ids");
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

    // product->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(productJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // product->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(productJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // product->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(productJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(productJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // product->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(productJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product->avail_sale
    cJSON *avail_sale = cJSON_GetObjectItemCaseSensitive(productJSON, "avail_sale");
    if (cJSON_IsNull(avail_sale)) {
        avail_sale = NULL;
    }
    if (avail_sale) { 
    if(!cJSON_IsBool(avail_sale))
    {
    goto end; //Bool
    }
    }

    // product->avail_view
    cJSON *avail_view = cJSON_GetObjectItemCaseSensitive(productJSON, "avail_view");
    if (cJSON_IsNull(avail_view)) {
        avail_view = NULL;
    }
    if (avail_view) { 
    if(!cJSON_IsBool(avail_view))
    {
    goto end; //Bool
    }
    }

    // product->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(productJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product->is_downloadable
    cJSON *is_downloadable = cJSON_GetObjectItemCaseSensitive(productJSON, "is_downloadable");
    if (cJSON_IsNull(is_downloadable)) {
        is_downloadable = NULL;
    }
    if (is_downloadable) { 
    if(!cJSON_IsBool(is_downloadable))
    {
    goto end; //Bool
    }
    }

    // product->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(productJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(productJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(productJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // product->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(productJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product->backorders
    cJSON *backorders = cJSON_GetObjectItemCaseSensitive(productJSON, "backorders");
    if (cJSON_IsNull(backorders)) {
        backorders = NULL;
    }
    if (backorders) { 
    if(!cJSON_IsString(backorders) && !cJSON_IsNull(backorders))
    {
    goto end; //String
    }
    }

    // product->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(productJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsString(manage_stock) && !cJSON_IsNull(manage_stock))
    {
    goto end; //String
    }
    }

    // product->is_stock_managed
    cJSON *is_stock_managed = cJSON_GetObjectItemCaseSensitive(productJSON, "is_stock_managed");
    if (cJSON_IsNull(is_stock_managed)) {
        is_stock_managed = NULL;
    }
    if (is_stock_managed) { 
    if(!cJSON_IsBool(is_stock_managed))
    {
    goto end; //Bool
    }
    }

    // product->on_sale
    cJSON *on_sale = cJSON_GetObjectItemCaseSensitive(productJSON, "on_sale");
    if (cJSON_IsNull(on_sale)) {
        on_sale = NULL;
    }
    if (on_sale) { 
    if(!cJSON_IsBool(on_sale))
    {
    goto end; //Bool
    }
    }

    // product->create_at
    cJSON *create_at = cJSON_GetObjectItemCaseSensitive(productJSON, "create_at");
    if (cJSON_IsNull(create_at)) {
        create_at = NULL;
    }
    if (create_at) { 
    create_at_local_nonprim = a2_c_date_time_parseFromJSON(create_at); //nonprimitive
    }

    // product->modified_at
    cJSON *modified_at = cJSON_GetObjectItemCaseSensitive(productJSON, "modified_at");
    if (cJSON_IsNull(modified_at)) {
        modified_at = NULL;
    }
    if (modified_at) { 
    modified_at_local_nonprim = a2_c_date_time_parseFromJSON(modified_at); //nonprimitive
    }

    // product->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(productJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(productJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    special_price_local_nonprim = special_price_parseFromJSON(special_price); //nonprimitive
    }

    // product->tier_price
    cJSON *tier_price = cJSON_GetObjectItemCaseSensitive(productJSON, "tier_price");
    if (cJSON_IsNull(tier_price)) {
        tier_price = NULL;
    }
    if (tier_price) { 
    cJSON *tier_price_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tier_price)){
        goto end; //nonprimitive container
    }

    tier_priceList = list_createList();

    cJSON_ArrayForEach(tier_price_local_nonprimitive,tier_price )
    {
        if(!cJSON_IsObject(tier_price_local_nonprimitive)){
            goto end;
        }
        product_tier_price_t *tier_priceItem = product_tier_price_parseFromJSON(tier_price_local_nonprimitive);

        list_addElement(tier_priceList, tier_priceItem);
    }
    }

    // product->group_price
    cJSON *group_price = cJSON_GetObjectItemCaseSensitive(productJSON, "group_price");
    if (cJSON_IsNull(group_price)) {
        group_price = NULL;
    }
    if (group_price) { 
    cJSON *group_price_local_nonprimitive = NULL;
    if(!cJSON_IsArray(group_price)){
        goto end; //nonprimitive container
    }

    group_priceList = list_createList();

    cJSON_ArrayForEach(group_price_local_nonprimitive,group_price )
    {
        if(!cJSON_IsObject(group_price_local_nonprimitive)){
            goto end;
        }
        product_group_price_t *group_priceItem = product_group_price_parseFromJSON(group_price_local_nonprimitive);

        list_addElement(group_priceList, group_priceItem);
    }
    }

    // product->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(productJSON, "images");
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
        image_t *imagesItem = image_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // product->product_options
    cJSON *product_options = cJSON_GetObjectItemCaseSensitive(productJSON, "product_options");
    if (cJSON_IsNull(product_options)) {
        product_options = NULL;
    }
    if (product_options) { 
    cJSON *product_options_local_nonprimitive = NULL;
    if(!cJSON_IsArray(product_options)){
        goto end; //nonprimitive container
    }

    product_optionsList = list_createList();

    cJSON_ArrayForEach(product_options_local_nonprimitive,product_options )
    {
        if(!cJSON_IsObject(product_options_local_nonprimitive)){
            goto end;
        }
        product_option_t *product_optionsItem = product_option_parseFromJSON(product_options_local_nonprimitive);

        list_addElement(product_optionsList, product_optionsItem);
    }
    }

    // product->u_upc
    cJSON *u_upc = cJSON_GetObjectItemCaseSensitive(productJSON, "u_upc");
    if (cJSON_IsNull(u_upc)) {
        u_upc = NULL;
    }
    if (u_upc) { 
    if(!cJSON_IsString(u_upc) && !cJSON_IsNull(u_upc))
    {
    goto end; //String
    }
    }

    // product->u_mpn
    cJSON *u_mpn = cJSON_GetObjectItemCaseSensitive(productJSON, "u_mpn");
    if (cJSON_IsNull(u_mpn)) {
        u_mpn = NULL;
    }
    if (u_mpn) { 
    if(!cJSON_IsString(u_mpn) && !cJSON_IsNull(u_mpn))
    {
    goto end; //String
    }
    }

    // product->u_gtin
    cJSON *u_gtin = cJSON_GetObjectItemCaseSensitive(productJSON, "u_gtin");
    if (cJSON_IsNull(u_gtin)) {
        u_gtin = NULL;
    }
    if (u_gtin) { 
    if(!cJSON_IsString(u_gtin) && !cJSON_IsNull(u_gtin))
    {
    goto end; //String
    }
    }

    // product->u_isbn
    cJSON *u_isbn = cJSON_GetObjectItemCaseSensitive(productJSON, "u_isbn");
    if (cJSON_IsNull(u_isbn)) {
        u_isbn = NULL;
    }
    if (u_isbn) { 
    if(!cJSON_IsString(u_isbn) && !cJSON_IsNull(u_isbn))
    {
    goto end; //String
    }
    }

    // product->u_ean
    cJSON *u_ean = cJSON_GetObjectItemCaseSensitive(productJSON, "u_ean");
    if (cJSON_IsNull(u_ean)) {
        u_ean = NULL;
    }
    if (u_ean) { 
    if(!cJSON_IsString(u_ean) && !cJSON_IsNull(u_ean))
    {
    goto end; //String
    }
    }

    // product->related_products_ids
    cJSON *related_products_ids = cJSON_GetObjectItemCaseSensitive(productJSON, "related_products_ids");
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

    // product->up_sell_products_ids
    cJSON *up_sell_products_ids = cJSON_GetObjectItemCaseSensitive(productJSON, "up_sell_products_ids");
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

    // product->cross_sell_products_ids
    cJSON *cross_sell_products_ids = cJSON_GetObjectItemCaseSensitive(productJSON, "cross_sell_products_ids");
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

    // product->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(productJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // product->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(productJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(productJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(productJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product->discounts
    cJSON *discounts = cJSON_GetObjectItemCaseSensitive(productJSON, "discounts");
    if (cJSON_IsNull(discounts)) {
        discounts = NULL;
    }
    if (discounts) { 
    cJSON *discounts_local_nonprimitive = NULL;
    if(!cJSON_IsArray(discounts)){
        goto end; //nonprimitive container
    }

    discountsList = list_createList();

    cJSON_ArrayForEach(discounts_local_nonprimitive,discounts )
    {
        if(!cJSON_IsObject(discounts_local_nonprimitive)){
            goto end;
        }
        discount_t *discountsItem = discount_parseFromJSON(discounts_local_nonprimitive);

        list_addElement(discountsList, discountsItem);
    }
    }

    // product->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(productJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // product->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(productJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    product_local_var = product_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        u_model && !cJSON_IsNull(u_model) ? strdup(u_model->valuestring) : NULL,
        u_sku && !cJSON_IsNull(u_sku) ? strdup(u_sku->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        price ? price->valuedouble : 0,
        advanced_price ? advanced_priceList : NULL,
        cost_price ? cost_price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        inventory ? inventoryList : NULL,
        group_items ? group_itemsList : NULL,
        u_brand_id && !cJSON_IsNull(u_brand_id) ? strdup(u_brand_id->valuestring) : NULL,
        u_brand && !cJSON_IsNull(u_brand) ? strdup(u_brand->valuestring) : NULL,
        categories_ids ? categories_idsList : NULL,
        stores_ids ? stores_idsList : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        avail_sale ? avail_sale->valueint : 0,
        avail_view ? avail_view->valueint : 0,
        is_virtual ? is_virtual->valueint : 0,
        is_downloadable ? is_downloadable->valueint : 0,
        weight ? weight->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        in_stock ? in_stock->valueint : 0,
        backorders && !cJSON_IsNull(backorders) ? strdup(backorders->valuestring) : NULL,
        manage_stock && !cJSON_IsNull(manage_stock) ? strdup(manage_stock->valuestring) : NULL,
        is_stock_managed ? is_stock_managed->valueint : 0,
        on_sale ? on_sale->valueint : 0,
        create_at ? create_at_local_nonprim : NULL,
        modified_at ? modified_at_local_nonprim : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        special_price ? special_price_local_nonprim : NULL,
        tier_price ? tier_priceList : NULL,
        group_price ? group_priceList : NULL,
        images ? imagesList : NULL,
        product_options ? product_optionsList : NULL,
        u_upc && !cJSON_IsNull(u_upc) ? strdup(u_upc->valuestring) : NULL,
        u_mpn && !cJSON_IsNull(u_mpn) ? strdup(u_mpn->valuestring) : NULL,
        u_gtin && !cJSON_IsNull(u_gtin) ? strdup(u_gtin->valuestring) : NULL,
        u_isbn && !cJSON_IsNull(u_isbn) ? strdup(u_isbn->valuestring) : NULL,
        u_ean && !cJSON_IsNull(u_ean) ? strdup(u_ean->valuestring) : NULL,
        related_products_ids ? related_products_idsList : NULL,
        up_sell_products_ids ? up_sell_products_idsList : NULL,
        cross_sell_products_ids ? cross_sell_products_idsList : NULL,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        discounts ? discountsList : NULL,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return product_local_var;
end:
    if (advanced_priceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, advanced_priceList) {
            product_advanced_price_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(advanced_priceList);
        advanced_priceList = NULL;
    }
    if (inventoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, inventoryList) {
            product_inventory_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(inventoryList);
        inventoryList = NULL;
    }
    if (group_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_itemsList) {
            product_group_item_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_itemsList);
        group_itemsList = NULL;
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
    if (stores_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stores_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stores_idsList);
        stores_idsList = NULL;
    }
    if (create_at_local_nonprim) {
        a2_c_date_time_free(create_at_local_nonprim);
        create_at_local_nonprim = NULL;
    }
    if (modified_at_local_nonprim) {
        a2_c_date_time_free(modified_at_local_nonprim);
        modified_at_local_nonprim = NULL;
    }
    if (special_price_local_nonprim) {
        special_price_free(special_price_local_nonprim);
        special_price_local_nonprim = NULL;
    }
    if (tier_priceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tier_priceList) {
            product_tier_price_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tier_priceList);
        tier_priceList = NULL;
    }
    if (group_priceList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, group_priceList) {
            product_group_price_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(group_priceList);
        group_priceList = NULL;
    }
    if (imagesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, imagesList) {
            image_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(imagesList);
        imagesList = NULL;
    }
    if (product_optionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, product_optionsList) {
            product_option_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(product_optionsList);
        product_optionsList = NULL;
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
    if (discountsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, discountsList) {
            discount_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(discountsList);
        discountsList = NULL;
    }
    return NULL;

}
