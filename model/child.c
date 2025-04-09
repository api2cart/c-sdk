#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "child.h"



static child_t *child_create_internal(
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
    int manage_stock,
    double inventory_level,
    list_t *inventory,
    double min_quantity,
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
    ) {
    child_t *child_local_var = malloc(sizeof(child_t));
    if (!child_local_var) {
        return NULL;
    }
    child_local_var->id = id;
    child_local_var->parent_id = parent_id;
    child_local_var->sku = sku;
    child_local_var->upc = upc;
    child_local_var->ean = ean;
    child_local_var->mpn = mpn;
    child_local_var->gtin = gtin;
    child_local_var->isbn = isbn;
    child_local_var->url = url;
    child_local_var->seo_url = seo_url;
    child_local_var->sort_order = sort_order;
    child_local_var->created_time = created_time;
    child_local_var->modified_time = modified_time;
    child_local_var->name = name;
    child_local_var->short_description = short_description;
    child_local_var->full_description = full_description;
    child_local_var->images = images;
    child_local_var->combination = combination;
    child_local_var->default_price = default_price;
    child_local_var->cost_price = cost_price;
    child_local_var->list_price = list_price;
    child_local_var->wholesale_price = wholesale_price;
    child_local_var->advanced_price = advanced_price;
    child_local_var->tax_class_id = tax_class_id;
    child_local_var->avail_for_sale = avail_for_sale;
    child_local_var->allow_backorders = allow_backorders;
    child_local_var->in_stock = in_stock;
    child_local_var->manage_stock = manage_stock;
    child_local_var->inventory_level = inventory_level;
    child_local_var->inventory = inventory;
    child_local_var->min_quantity = min_quantity;
    child_local_var->default_qty_in_pack = default_qty_in_pack;
    child_local_var->is_qty_in_pack_fixed = is_qty_in_pack_fixed;
    child_local_var->weight_unit = weight_unit;
    child_local_var->weight = weight;
    child_local_var->dimensions_unit = dimensions_unit;
    child_local_var->width = width;
    child_local_var->height = height;
    child_local_var->length = length;
    child_local_var->meta_title = meta_title;
    child_local_var->meta_description = meta_description;
    child_local_var->meta_keywords = meta_keywords;
    child_local_var->discounts = discounts;
    child_local_var->is_virtual = is_virtual;
    child_local_var->additional_fields = additional_fields;
    child_local_var->custom_fields = custom_fields;

    child_local_var->_library_owned = 1;
    return child_local_var;
}

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
    int manage_stock,
    double inventory_level,
    list_t *inventory,
    double min_quantity,
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
    ) {
    return child_create_internal (
        id,
        parent_id,
        sku,
        upc,
        ean,
        mpn,
        gtin,
        isbn,
        url,
        seo_url,
        sort_order,
        created_time,
        modified_time,
        name,
        short_description,
        full_description,
        images,
        combination,
        default_price,
        cost_price,
        list_price,
        wholesale_price,
        advanced_price,
        tax_class_id,
        avail_for_sale,
        allow_backorders,
        in_stock,
        manage_stock,
        inventory_level,
        inventory,
        min_quantity,
        default_qty_in_pack,
        is_qty_in_pack_fixed,
        weight_unit,
        weight,
        dimensions_unit,
        width,
        height,
        length,
        meta_title,
        meta_description,
        meta_keywords,
        discounts,
        is_virtual,
        additional_fields,
        custom_fields
        );
}

void child_free(child_t *child) {
    if(NULL == child){
        return ;
    }
    if(child->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "child_free");
        return ;
    }
    listEntry_t *listEntry;
    if (child->id) {
        free(child->id);
        child->id = NULL;
    }
    if (child->parent_id) {
        free(child->parent_id);
        child->parent_id = NULL;
    }
    if (child->sku) {
        free(child->sku);
        child->sku = NULL;
    }
    if (child->upc) {
        free(child->upc);
        child->upc = NULL;
    }
    if (child->ean) {
        free(child->ean);
        child->ean = NULL;
    }
    if (child->mpn) {
        free(child->mpn);
        child->mpn = NULL;
    }
    if (child->gtin) {
        free(child->gtin);
        child->gtin = NULL;
    }
    if (child->isbn) {
        free(child->isbn);
        child->isbn = NULL;
    }
    if (child->url) {
        free(child->url);
        child->url = NULL;
    }
    if (child->seo_url) {
        free(child->seo_url);
        child->seo_url = NULL;
    }
    if (child->created_time) {
        a2_c_date_time_free(child->created_time);
        child->created_time = NULL;
    }
    if (child->modified_time) {
        a2_c_date_time_free(child->modified_time);
        child->modified_time = NULL;
    }
    if (child->name) {
        free(child->name);
        child->name = NULL;
    }
    if (child->short_description) {
        free(child->short_description);
        child->short_description = NULL;
    }
    if (child->full_description) {
        free(child->full_description);
        child->full_description = NULL;
    }
    if (child->images) {
        list_ForEach(listEntry, child->images) {
            image_free(listEntry->data);
        }
        list_freeList(child->images);
        child->images = NULL;
    }
    if (child->combination) {
        list_ForEach(listEntry, child->combination) {
            product_child_item_combination_free(listEntry->data);
        }
        list_freeList(child->combination);
        child->combination = NULL;
    }
    if (child->advanced_price) {
        list_ForEach(listEntry, child->advanced_price) {
            product_advanced_price_free(listEntry->data);
        }
        list_freeList(child->advanced_price);
        child->advanced_price = NULL;
    }
    if (child->tax_class_id) {
        free(child->tax_class_id);
        child->tax_class_id = NULL;
    }
    if (child->inventory) {
        list_ForEach(listEntry, child->inventory) {
            product_inventory_free(listEntry->data);
        }
        list_freeList(child->inventory);
        child->inventory = NULL;
    }
    if (child->weight_unit) {
        free(child->weight_unit);
        child->weight_unit = NULL;
    }
    if (child->dimensions_unit) {
        free(child->dimensions_unit);
        child->dimensions_unit = NULL;
    }
    if (child->meta_title) {
        free(child->meta_title);
        child->meta_title = NULL;
    }
    if (child->meta_description) {
        free(child->meta_description);
        child->meta_description = NULL;
    }
    if (child->meta_keywords) {
        free(child->meta_keywords);
        child->meta_keywords = NULL;
    }
    if (child->discounts) {
        list_ForEach(listEntry, child->discounts) {
            discount_free(listEntry->data);
        }
        list_freeList(child->discounts);
        child->discounts = NULL;
    }
    if (child->additional_fields) {
        object_free(child->additional_fields);
        child->additional_fields = NULL;
    }
    if (child->custom_fields) {
        object_free(child->custom_fields);
        child->custom_fields = NULL;
    }
    free(child);
}

cJSON *child_convertToJSON(child_t *child) {
    cJSON *item = cJSON_CreateObject();

    // child->id
    if(child->id) {
    if(cJSON_AddStringToObject(item, "id", child->id) == NULL) {
    goto fail; //String
    }
    }


    // child->parent_id
    if(child->parent_id) {
    if(cJSON_AddStringToObject(item, "parent_id", child->parent_id) == NULL) {
    goto fail; //String
    }
    }


    // child->sku
    if(child->sku) {
    if(cJSON_AddStringToObject(item, "sku", child->sku) == NULL) {
    goto fail; //String
    }
    }


    // child->upc
    if(child->upc) {
    if(cJSON_AddStringToObject(item, "upc", child->upc) == NULL) {
    goto fail; //String
    }
    }


    // child->ean
    if(child->ean) {
    if(cJSON_AddStringToObject(item, "ean", child->ean) == NULL) {
    goto fail; //String
    }
    }


    // child->mpn
    if(child->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", child->mpn) == NULL) {
    goto fail; //String
    }
    }


    // child->gtin
    if(child->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", child->gtin) == NULL) {
    goto fail; //String
    }
    }


    // child->isbn
    if(child->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", child->isbn) == NULL) {
    goto fail; //String
    }
    }


    // child->url
    if(child->url) {
    if(cJSON_AddStringToObject(item, "url", child->url) == NULL) {
    goto fail; //String
    }
    }


    // child->seo_url
    if(child->seo_url) {
    if(cJSON_AddStringToObject(item, "seo_url", child->seo_url) == NULL) {
    goto fail; //String
    }
    }


    // child->sort_order
    if(child->sort_order) {
    if(cJSON_AddNumberToObject(item, "sort_order", child->sort_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->created_time
    if(child->created_time) {
    cJSON *created_time_local_JSON = a2_c_date_time_convertToJSON(child->created_time);
    if(created_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "created_time", created_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // child->modified_time
    if(child->modified_time) {
    cJSON *modified_time_local_JSON = a2_c_date_time_convertToJSON(child->modified_time);
    if(modified_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modified_time", modified_time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // child->name
    if(child->name) {
    if(cJSON_AddStringToObject(item, "name", child->name) == NULL) {
    goto fail; //String
    }
    }


    // child->short_description
    if(child->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", child->short_description) == NULL) {
    goto fail; //String
    }
    }


    // child->full_description
    if(child->full_description) {
    if(cJSON_AddStringToObject(item, "full_description", child->full_description) == NULL) {
    goto fail; //String
    }
    }


    // child->images
    if(child->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (child->images) {
    list_ForEach(imagesListEntry, child->images) {
    cJSON *itemLocal = image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // child->combination
    if(child->combination) {
    cJSON *combination = cJSON_AddArrayToObject(item, "combination");
    if(combination == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *combinationListEntry;
    if (child->combination) {
    list_ForEach(combinationListEntry, child->combination) {
    cJSON *itemLocal = product_child_item_combination_convertToJSON(combinationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(combination, itemLocal);
    }
    }
    }


    // child->default_price
    if(child->default_price) {
    if(cJSON_AddNumberToObject(item, "default_price", child->default_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->cost_price
    if(child->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", child->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->list_price
    if(child->list_price) {
    if(cJSON_AddNumberToObject(item, "list_price", child->list_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->wholesale_price
    if(child->wholesale_price) {
    if(cJSON_AddNumberToObject(item, "wholesale_price", child->wholesale_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->advanced_price
    if(child->advanced_price) {
    cJSON *advanced_price = cJSON_AddArrayToObject(item, "advanced_price");
    if(advanced_price == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *advanced_priceListEntry;
    if (child->advanced_price) {
    list_ForEach(advanced_priceListEntry, child->advanced_price) {
    cJSON *itemLocal = product_advanced_price_convertToJSON(advanced_priceListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(advanced_price, itemLocal);
    }
    }
    }


    // child->tax_class_id
    if(child->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", child->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // child->avail_for_sale
    if(child->avail_for_sale) {
    if(cJSON_AddBoolToObject(item, "avail_for_sale", child->avail_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // child->allow_backorders
    if(child->allow_backorders) {
    if(cJSON_AddBoolToObject(item, "allow_backorders", child->allow_backorders) == NULL) {
    goto fail; //Bool
    }
    }


    // child->in_stock
    if(child->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", child->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // child->manage_stock
    if(child->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", child->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // child->inventory_level
    if(child->inventory_level) {
    if(cJSON_AddNumberToObject(item, "inventory_level", child->inventory_level) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->inventory
    if(child->inventory) {
    cJSON *inventory = cJSON_AddArrayToObject(item, "inventory");
    if(inventory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *inventoryListEntry;
    if (child->inventory) {
    list_ForEach(inventoryListEntry, child->inventory) {
    cJSON *itemLocal = product_inventory_convertToJSON(inventoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(inventory, itemLocal);
    }
    }
    }


    // child->min_quantity
    if(child->min_quantity) {
    if(cJSON_AddNumberToObject(item, "min_quantity", child->min_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->default_qty_in_pack
    if(child->default_qty_in_pack) {
    if(cJSON_AddNumberToObject(item, "default_qty_in_pack", child->default_qty_in_pack) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->is_qty_in_pack_fixed
    if(child->is_qty_in_pack_fixed) {
    if(cJSON_AddBoolToObject(item, "is_qty_in_pack_fixed", child->is_qty_in_pack_fixed) == NULL) {
    goto fail; //Bool
    }
    }


    // child->weight_unit
    if(child->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", child->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // child->weight
    if(child->weight) {
    if(cJSON_AddNumberToObject(item, "weight", child->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->dimensions_unit
    if(child->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", child->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // child->width
    if(child->width) {
    if(cJSON_AddNumberToObject(item, "width", child->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->height
    if(child->height) {
    if(cJSON_AddNumberToObject(item, "height", child->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->length
    if(child->length) {
    if(cJSON_AddNumberToObject(item, "length", child->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // child->meta_title
    if(child->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", child->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // child->meta_description
    if(child->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", child->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // child->meta_keywords
    if(child->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", child->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // child->discounts
    if(child->discounts) {
    cJSON *discounts = cJSON_AddArrayToObject(item, "discounts");
    if(discounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *discountsListEntry;
    if (child->discounts) {
    list_ForEach(discountsListEntry, child->discounts) {
    cJSON *itemLocal = discount_convertToJSON(discountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(discounts, itemLocal);
    }
    }
    }


    // child->is_virtual
    if(child->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", child->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // child->additional_fields
    if(child->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(child->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // child->custom_fields
    if(child->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(child->custom_fields);
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

child_t *child_parseFromJSON(cJSON *childJSON){

    child_t *child_local_var = NULL;

    // define the local variable for child->created_time
    a2_c_date_time_t *created_time_local_nonprim = NULL;

    // define the local variable for child->modified_time
    a2_c_date_time_t *modified_time_local_nonprim = NULL;

    // define the local list for child->images
    list_t *imagesList = NULL;

    // define the local list for child->combination
    list_t *combinationList = NULL;

    // define the local list for child->advanced_price
    list_t *advanced_priceList = NULL;

    // define the local list for child->inventory
    list_t *inventoryList = NULL;

    // define the local list for child->discounts
    list_t *discountsList = NULL;

    // child->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(childJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // child->parent_id
    cJSON *parent_id = cJSON_GetObjectItemCaseSensitive(childJSON, "parent_id");
    if (cJSON_IsNull(parent_id)) {
        parent_id = NULL;
    }
    if (parent_id) { 
    if(!cJSON_IsString(parent_id) && !cJSON_IsNull(parent_id))
    {
    goto end; //String
    }
    }

    // child->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(childJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // child->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(childJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // child->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(childJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // child->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(childJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // child->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(childJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // child->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(childJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // child->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(childJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // child->seo_url
    cJSON *seo_url = cJSON_GetObjectItemCaseSensitive(childJSON, "seo_url");
    if (cJSON_IsNull(seo_url)) {
        seo_url = NULL;
    }
    if (seo_url) { 
    if(!cJSON_IsString(seo_url) && !cJSON_IsNull(seo_url))
    {
    goto end; //String
    }
    }

    // child->sort_order
    cJSON *sort_order = cJSON_GetObjectItemCaseSensitive(childJSON, "sort_order");
    if (cJSON_IsNull(sort_order)) {
        sort_order = NULL;
    }
    if (sort_order) { 
    if(!cJSON_IsNumber(sort_order))
    {
    goto end; //Numeric
    }
    }

    // child->created_time
    cJSON *created_time = cJSON_GetObjectItemCaseSensitive(childJSON, "created_time");
    if (cJSON_IsNull(created_time)) {
        created_time = NULL;
    }
    if (created_time) { 
    created_time_local_nonprim = a2_c_date_time_parseFromJSON(created_time); //nonprimitive
    }

    // child->modified_time
    cJSON *modified_time = cJSON_GetObjectItemCaseSensitive(childJSON, "modified_time");
    if (cJSON_IsNull(modified_time)) {
        modified_time = NULL;
    }
    if (modified_time) { 
    modified_time_local_nonprim = a2_c_date_time_parseFromJSON(modified_time); //nonprimitive
    }

    // child->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(childJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // child->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(childJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // child->full_description
    cJSON *full_description = cJSON_GetObjectItemCaseSensitive(childJSON, "full_description");
    if (cJSON_IsNull(full_description)) {
        full_description = NULL;
    }
    if (full_description) { 
    if(!cJSON_IsString(full_description) && !cJSON_IsNull(full_description))
    {
    goto end; //String
    }
    }

    // child->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(childJSON, "images");
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

    // child->combination
    cJSON *combination = cJSON_GetObjectItemCaseSensitive(childJSON, "combination");
    if (cJSON_IsNull(combination)) {
        combination = NULL;
    }
    if (combination) { 
    cJSON *combination_local_nonprimitive = NULL;
    if(!cJSON_IsArray(combination)){
        goto end; //nonprimitive container
    }

    combinationList = list_createList();

    cJSON_ArrayForEach(combination_local_nonprimitive,combination )
    {
        if(!cJSON_IsObject(combination_local_nonprimitive)){
            goto end;
        }
        product_child_item_combination_t *combinationItem = product_child_item_combination_parseFromJSON(combination_local_nonprimitive);

        list_addElement(combinationList, combinationItem);
    }
    }

    // child->default_price
    cJSON *default_price = cJSON_GetObjectItemCaseSensitive(childJSON, "default_price");
    if (cJSON_IsNull(default_price)) {
        default_price = NULL;
    }
    if (default_price) { 
    if(!cJSON_IsNumber(default_price))
    {
    goto end; //Numeric
    }
    }

    // child->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(childJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // child->list_price
    cJSON *list_price = cJSON_GetObjectItemCaseSensitive(childJSON, "list_price");
    if (cJSON_IsNull(list_price)) {
        list_price = NULL;
    }
    if (list_price) { 
    if(!cJSON_IsNumber(list_price))
    {
    goto end; //Numeric
    }
    }

    // child->wholesale_price
    cJSON *wholesale_price = cJSON_GetObjectItemCaseSensitive(childJSON, "wholesale_price");
    if (cJSON_IsNull(wholesale_price)) {
        wholesale_price = NULL;
    }
    if (wholesale_price) { 
    if(!cJSON_IsNumber(wholesale_price))
    {
    goto end; //Numeric
    }
    }

    // child->advanced_price
    cJSON *advanced_price = cJSON_GetObjectItemCaseSensitive(childJSON, "advanced_price");
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

    // child->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(childJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // child->avail_for_sale
    cJSON *avail_for_sale = cJSON_GetObjectItemCaseSensitive(childJSON, "avail_for_sale");
    if (cJSON_IsNull(avail_for_sale)) {
        avail_for_sale = NULL;
    }
    if (avail_for_sale) { 
    if(!cJSON_IsBool(avail_for_sale))
    {
    goto end; //Bool
    }
    }

    // child->allow_backorders
    cJSON *allow_backorders = cJSON_GetObjectItemCaseSensitive(childJSON, "allow_backorders");
    if (cJSON_IsNull(allow_backorders)) {
        allow_backorders = NULL;
    }
    if (allow_backorders) { 
    if(!cJSON_IsBool(allow_backorders))
    {
    goto end; //Bool
    }
    }

    // child->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(childJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // child->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(childJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // child->inventory_level
    cJSON *inventory_level = cJSON_GetObjectItemCaseSensitive(childJSON, "inventory_level");
    if (cJSON_IsNull(inventory_level)) {
        inventory_level = NULL;
    }
    if (inventory_level) { 
    if(!cJSON_IsNumber(inventory_level))
    {
    goto end; //Numeric
    }
    }

    // child->inventory
    cJSON *inventory = cJSON_GetObjectItemCaseSensitive(childJSON, "inventory");
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

    // child->min_quantity
    cJSON *min_quantity = cJSON_GetObjectItemCaseSensitive(childJSON, "min_quantity");
    if (cJSON_IsNull(min_quantity)) {
        min_quantity = NULL;
    }
    if (min_quantity) { 
    if(!cJSON_IsNumber(min_quantity))
    {
    goto end; //Numeric
    }
    }

    // child->default_qty_in_pack
    cJSON *default_qty_in_pack = cJSON_GetObjectItemCaseSensitive(childJSON, "default_qty_in_pack");
    if (cJSON_IsNull(default_qty_in_pack)) {
        default_qty_in_pack = NULL;
    }
    if (default_qty_in_pack) { 
    if(!cJSON_IsNumber(default_qty_in_pack))
    {
    goto end; //Numeric
    }
    }

    // child->is_qty_in_pack_fixed
    cJSON *is_qty_in_pack_fixed = cJSON_GetObjectItemCaseSensitive(childJSON, "is_qty_in_pack_fixed");
    if (cJSON_IsNull(is_qty_in_pack_fixed)) {
        is_qty_in_pack_fixed = NULL;
    }
    if (is_qty_in_pack_fixed) { 
    if(!cJSON_IsBool(is_qty_in_pack_fixed))
    {
    goto end; //Bool
    }
    }

    // child->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(childJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // child->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(childJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // child->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(childJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // child->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(childJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // child->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(childJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // child->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(childJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // child->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(childJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // child->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(childJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // child->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(childJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // child->discounts
    cJSON *discounts = cJSON_GetObjectItemCaseSensitive(childJSON, "discounts");
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

    // child->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(childJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // child->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(childJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // child->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(childJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    child_local_var = child_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        parent_id && !cJSON_IsNull(parent_id) ? strdup(parent_id->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        seo_url && !cJSON_IsNull(seo_url) ? strdup(seo_url->valuestring) : NULL,
        sort_order ? sort_order->valuedouble : 0,
        created_time ? created_time_local_nonprim : NULL,
        modified_time ? modified_time_local_nonprim : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        full_description && !cJSON_IsNull(full_description) ? strdup(full_description->valuestring) : NULL,
        images ? imagesList : NULL,
        combination ? combinationList : NULL,
        default_price ? default_price->valuedouble : 0,
        cost_price ? cost_price->valuedouble : 0,
        list_price ? list_price->valuedouble : 0,
        wholesale_price ? wholesale_price->valuedouble : 0,
        advanced_price ? advanced_priceList : NULL,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        avail_for_sale ? avail_for_sale->valueint : 0,
        allow_backorders ? allow_backorders->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        manage_stock ? manage_stock->valueint : 0,
        inventory_level ? inventory_level->valuedouble : 0,
        inventory ? inventoryList : NULL,
        min_quantity ? min_quantity->valuedouble : 0,
        default_qty_in_pack ? default_qty_in_pack->valuedouble : 0,
        is_qty_in_pack_fixed ? is_qty_in_pack_fixed->valueint : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        discounts ? discountsList : NULL,
        is_virtual ? is_virtual->valueint : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return child_local_var;
end:
    if (created_time_local_nonprim) {
        a2_c_date_time_free(created_time_local_nonprim);
        created_time_local_nonprim = NULL;
    }
    if (modified_time_local_nonprim) {
        a2_c_date_time_free(modified_time_local_nonprim);
        modified_time_local_nonprim = NULL;
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
    if (combinationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, combinationList) {
            product_child_item_combination_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(combinationList);
        combinationList = NULL;
    }
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
