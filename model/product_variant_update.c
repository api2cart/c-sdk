#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "product_variant_update.h"



static product_variant_update_t *product_variant_update_create_internal(
    char *id,
    char *product_id,
    char *store_id,
    char *lang_id,
    list_t *options,
    char *name,
    char *description,
    char *short_description,
    char *model,
    char *sku,
    char *visible,
    char *status,
    char *backorder_status,
    double low_stock_threshold,
    int available_for_sale,
    int avail,
    int is_default,
    int is_free_shipping,
    int taxable,
    char *tax_class_id,
    int is_virtual,
    int manage_stock,
    int in_stock,
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
    double weight,
    char *barcode,
    double width,
    char *weight_unit,
    double height,
    double length,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *harmonized_system_code,
    char *country_of_origin,
    char *meta_title,
    char *meta_description,
    char *meta_keywords,
    int reindex,
    int clear_cache
    ) {
    product_variant_update_t *product_variant_update_local_var = malloc(sizeof(product_variant_update_t));
    if (!product_variant_update_local_var) {
        return NULL;
    }
    product_variant_update_local_var->id = id;
    product_variant_update_local_var->product_id = product_id;
    product_variant_update_local_var->store_id = store_id;
    product_variant_update_local_var->lang_id = lang_id;
    product_variant_update_local_var->options = options;
    product_variant_update_local_var->name = name;
    product_variant_update_local_var->description = description;
    product_variant_update_local_var->short_description = short_description;
    product_variant_update_local_var->model = model;
    product_variant_update_local_var->sku = sku;
    product_variant_update_local_var->visible = visible;
    product_variant_update_local_var->status = status;
    product_variant_update_local_var->backorder_status = backorder_status;
    product_variant_update_local_var->low_stock_threshold = low_stock_threshold;
    product_variant_update_local_var->available_for_sale = available_for_sale;
    product_variant_update_local_var->avail = avail;
    product_variant_update_local_var->is_default = is_default;
    product_variant_update_local_var->is_free_shipping = is_free_shipping;
    product_variant_update_local_var->taxable = taxable;
    product_variant_update_local_var->tax_class_id = tax_class_id;
    product_variant_update_local_var->is_virtual = is_virtual;
    product_variant_update_local_var->manage_stock = manage_stock;
    product_variant_update_local_var->in_stock = in_stock;
    product_variant_update_local_var->warehouse_id = warehouse_id;
    product_variant_update_local_var->reserve_quantity = reserve_quantity;
    product_variant_update_local_var->quantity = quantity;
    product_variant_update_local_var->increase_quantity = increase_quantity;
    product_variant_update_local_var->reduce_quantity = reduce_quantity;
    product_variant_update_local_var->price = price;
    product_variant_update_local_var->special_price = special_price;
    product_variant_update_local_var->retail_price = retail_price;
    product_variant_update_local_var->old_price = old_price;
    product_variant_update_local_var->cost_price = cost_price;
    product_variant_update_local_var->fixed_cost_shipping_price = fixed_cost_shipping_price;
    product_variant_update_local_var->sprice_create = sprice_create;
    product_variant_update_local_var->sprice_expire = sprice_expire;
    product_variant_update_local_var->weight = weight;
    product_variant_update_local_var->barcode = barcode;
    product_variant_update_local_var->width = width;
    product_variant_update_local_var->weight_unit = weight_unit;
    product_variant_update_local_var->height = height;
    product_variant_update_local_var->length = length;
    product_variant_update_local_var->gtin = gtin;
    product_variant_update_local_var->upc = upc;
    product_variant_update_local_var->mpn = mpn;
    product_variant_update_local_var->ean = ean;
    product_variant_update_local_var->isbn = isbn;
    product_variant_update_local_var->harmonized_system_code = harmonized_system_code;
    product_variant_update_local_var->country_of_origin = country_of_origin;
    product_variant_update_local_var->meta_title = meta_title;
    product_variant_update_local_var->meta_description = meta_description;
    product_variant_update_local_var->meta_keywords = meta_keywords;
    product_variant_update_local_var->reindex = reindex;
    product_variant_update_local_var->clear_cache = clear_cache;

    product_variant_update_local_var->_library_owned = 1;
    return product_variant_update_local_var;
}

__attribute__((deprecated)) product_variant_update_t *product_variant_update_create(
    char *id,
    char *product_id,
    char *store_id,
    char *lang_id,
    list_t *options,
    char *name,
    char *description,
    char *short_description,
    char *model,
    char *sku,
    char *visible,
    char *status,
    char *backorder_status,
    double low_stock_threshold,
    int available_for_sale,
    int avail,
    int is_default,
    int is_free_shipping,
    int taxable,
    char *tax_class_id,
    int is_virtual,
    int manage_stock,
    int in_stock,
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
    double weight,
    char *barcode,
    double width,
    char *weight_unit,
    double height,
    double length,
    char *gtin,
    char *upc,
    char *mpn,
    char *ean,
    char *isbn,
    char *harmonized_system_code,
    char *country_of_origin,
    char *meta_title,
    char *meta_description,
    char *meta_keywords,
    int reindex,
    int clear_cache
    ) {
    return product_variant_update_create_internal (
        id,
        product_id,
        store_id,
        lang_id,
        options,
        name,
        description,
        short_description,
        model,
        sku,
        visible,
        status,
        backorder_status,
        low_stock_threshold,
        available_for_sale,
        avail,
        is_default,
        is_free_shipping,
        taxable,
        tax_class_id,
        is_virtual,
        manage_stock,
        in_stock,
        warehouse_id,
        reserve_quantity,
        quantity,
        increase_quantity,
        reduce_quantity,
        price,
        special_price,
        retail_price,
        old_price,
        cost_price,
        fixed_cost_shipping_price,
        sprice_create,
        sprice_expire,
        weight,
        barcode,
        width,
        weight_unit,
        height,
        length,
        gtin,
        upc,
        mpn,
        ean,
        isbn,
        harmonized_system_code,
        country_of_origin,
        meta_title,
        meta_description,
        meta_keywords,
        reindex,
        clear_cache
        );
}

void product_variant_update_free(product_variant_update_t *product_variant_update) {
    if(NULL == product_variant_update){
        return ;
    }
    if(product_variant_update->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "product_variant_update_free");
        return ;
    }
    listEntry_t *listEntry;
    if (product_variant_update->id) {
        free(product_variant_update->id);
        product_variant_update->id = NULL;
    }
    if (product_variant_update->product_id) {
        free(product_variant_update->product_id);
        product_variant_update->product_id = NULL;
    }
    if (product_variant_update->store_id) {
        free(product_variant_update->store_id);
        product_variant_update->store_id = NULL;
    }
    if (product_variant_update->lang_id) {
        free(product_variant_update->lang_id);
        product_variant_update->lang_id = NULL;
    }
    if (product_variant_update->options) {
        list_ForEach(listEntry, product_variant_update->options) {
            product_variant_update_options_inner_free(listEntry->data);
        }
        list_freeList(product_variant_update->options);
        product_variant_update->options = NULL;
    }
    if (product_variant_update->name) {
        free(product_variant_update->name);
        product_variant_update->name = NULL;
    }
    if (product_variant_update->description) {
        free(product_variant_update->description);
        product_variant_update->description = NULL;
    }
    if (product_variant_update->short_description) {
        free(product_variant_update->short_description);
        product_variant_update->short_description = NULL;
    }
    if (product_variant_update->model) {
        free(product_variant_update->model);
        product_variant_update->model = NULL;
    }
    if (product_variant_update->sku) {
        free(product_variant_update->sku);
        product_variant_update->sku = NULL;
    }
    if (product_variant_update->visible) {
        free(product_variant_update->visible);
        product_variant_update->visible = NULL;
    }
    if (product_variant_update->status) {
        free(product_variant_update->status);
        product_variant_update->status = NULL;
    }
    if (product_variant_update->backorder_status) {
        free(product_variant_update->backorder_status);
        product_variant_update->backorder_status = NULL;
    }
    if (product_variant_update->tax_class_id) {
        free(product_variant_update->tax_class_id);
        product_variant_update->tax_class_id = NULL;
    }
    if (product_variant_update->warehouse_id) {
        free(product_variant_update->warehouse_id);
        product_variant_update->warehouse_id = NULL;
    }
    if (product_variant_update->sprice_create) {
        free(product_variant_update->sprice_create);
        product_variant_update->sprice_create = NULL;
    }
    if (product_variant_update->sprice_expire) {
        free(product_variant_update->sprice_expire);
        product_variant_update->sprice_expire = NULL;
    }
    if (product_variant_update->barcode) {
        free(product_variant_update->barcode);
        product_variant_update->barcode = NULL;
    }
    if (product_variant_update->weight_unit) {
        free(product_variant_update->weight_unit);
        product_variant_update->weight_unit = NULL;
    }
    if (product_variant_update->gtin) {
        free(product_variant_update->gtin);
        product_variant_update->gtin = NULL;
    }
    if (product_variant_update->upc) {
        free(product_variant_update->upc);
        product_variant_update->upc = NULL;
    }
    if (product_variant_update->mpn) {
        free(product_variant_update->mpn);
        product_variant_update->mpn = NULL;
    }
    if (product_variant_update->ean) {
        free(product_variant_update->ean);
        product_variant_update->ean = NULL;
    }
    if (product_variant_update->isbn) {
        free(product_variant_update->isbn);
        product_variant_update->isbn = NULL;
    }
    if (product_variant_update->harmonized_system_code) {
        free(product_variant_update->harmonized_system_code);
        product_variant_update->harmonized_system_code = NULL;
    }
    if (product_variant_update->country_of_origin) {
        free(product_variant_update->country_of_origin);
        product_variant_update->country_of_origin = NULL;
    }
    if (product_variant_update->meta_title) {
        free(product_variant_update->meta_title);
        product_variant_update->meta_title = NULL;
    }
    if (product_variant_update->meta_description) {
        free(product_variant_update->meta_description);
        product_variant_update->meta_description = NULL;
    }
    if (product_variant_update->meta_keywords) {
        free(product_variant_update->meta_keywords);
        product_variant_update->meta_keywords = NULL;
    }
    free(product_variant_update);
}

cJSON *product_variant_update_convertToJSON(product_variant_update_t *product_variant_update) {
    cJSON *item = cJSON_CreateObject();

    // product_variant_update->id
    if(product_variant_update->id) {
    if(cJSON_AddStringToObject(item, "id", product_variant_update->id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->product_id
    if(product_variant_update->product_id) {
    if(cJSON_AddStringToObject(item, "product_id", product_variant_update->product_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->store_id
    if(product_variant_update->store_id) {
    if(cJSON_AddStringToObject(item, "store_id", product_variant_update->store_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->lang_id
    if(product_variant_update->lang_id) {
    if(cJSON_AddStringToObject(item, "lang_id", product_variant_update->lang_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->options
    if(product_variant_update->options) {
    cJSON *options = cJSON_AddArrayToObject(item, "options");
    if(options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionsListEntry;
    if (product_variant_update->options) {
    list_ForEach(optionsListEntry, product_variant_update->options) {
    cJSON *itemLocal = product_variant_update_options_inner_convertToJSON(optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(options, itemLocal);
    }
    }
    }


    // product_variant_update->name
    if(product_variant_update->name) {
    if(cJSON_AddStringToObject(item, "name", product_variant_update->name) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->description
    if(product_variant_update->description) {
    if(cJSON_AddStringToObject(item, "description", product_variant_update->description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->short_description
    if(product_variant_update->short_description) {
    if(cJSON_AddStringToObject(item, "short_description", product_variant_update->short_description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->model
    if(product_variant_update->model) {
    if(cJSON_AddStringToObject(item, "model", product_variant_update->model) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->sku
    if(product_variant_update->sku) {
    if(cJSON_AddStringToObject(item, "sku", product_variant_update->sku) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->visible
    if(product_variant_update->visible) {
    if(cJSON_AddStringToObject(item, "visible", product_variant_update->visible) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->status
    if(product_variant_update->status) {
    if(cJSON_AddStringToObject(item, "status", product_variant_update->status) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->backorder_status
    if(product_variant_update->backorder_status) {
    if(cJSON_AddStringToObject(item, "backorder_status", product_variant_update->backorder_status) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->low_stock_threshold
    if(product_variant_update->low_stock_threshold) {
    if(cJSON_AddNumberToObject(item, "low_stock_threshold", product_variant_update->low_stock_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->available_for_sale
    if(product_variant_update->available_for_sale) {
    if(cJSON_AddBoolToObject(item, "available_for_sale", product_variant_update->available_for_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->avail
    if(product_variant_update->avail) {
    if(cJSON_AddBoolToObject(item, "avail", product_variant_update->avail) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->is_default
    if(product_variant_update->is_default) {
    if(cJSON_AddBoolToObject(item, "is_default", product_variant_update->is_default) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->is_free_shipping
    if(product_variant_update->is_free_shipping) {
    if(cJSON_AddBoolToObject(item, "is_free_shipping", product_variant_update->is_free_shipping) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->taxable
    if(product_variant_update->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", product_variant_update->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->tax_class_id
    if(product_variant_update->tax_class_id) {
    if(cJSON_AddStringToObject(item, "tax_class_id", product_variant_update->tax_class_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->is_virtual
    if(product_variant_update->is_virtual) {
    if(cJSON_AddBoolToObject(item, "is_virtual", product_variant_update->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->manage_stock
    if(product_variant_update->manage_stock) {
    if(cJSON_AddBoolToObject(item, "manage_stock", product_variant_update->manage_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->in_stock
    if(product_variant_update->in_stock) {
    if(cJSON_AddBoolToObject(item, "in_stock", product_variant_update->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->warehouse_id
    if(product_variant_update->warehouse_id) {
    if(cJSON_AddStringToObject(item, "warehouse_id", product_variant_update->warehouse_id) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->reserve_quantity
    if(product_variant_update->reserve_quantity) {
    if(cJSON_AddNumberToObject(item, "reserve_quantity", product_variant_update->reserve_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->quantity
    if(product_variant_update->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", product_variant_update->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->increase_quantity
    if(product_variant_update->increase_quantity) {
    if(cJSON_AddNumberToObject(item, "increase_quantity", product_variant_update->increase_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->reduce_quantity
    if(product_variant_update->reduce_quantity) {
    if(cJSON_AddNumberToObject(item, "reduce_quantity", product_variant_update->reduce_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->price
    if(product_variant_update->price) {
    if(cJSON_AddNumberToObject(item, "price", product_variant_update->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->special_price
    if(product_variant_update->special_price) {
    if(cJSON_AddNumberToObject(item, "special_price", product_variant_update->special_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->retail_price
    if(product_variant_update->retail_price) {
    if(cJSON_AddNumberToObject(item, "retail_price", product_variant_update->retail_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->old_price
    if(product_variant_update->old_price) {
    if(cJSON_AddNumberToObject(item, "old_price", product_variant_update->old_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->cost_price
    if(product_variant_update->cost_price) {
    if(cJSON_AddNumberToObject(item, "cost_price", product_variant_update->cost_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->fixed_cost_shipping_price
    if(product_variant_update->fixed_cost_shipping_price) {
    if(cJSON_AddNumberToObject(item, "fixed_cost_shipping_price", product_variant_update->fixed_cost_shipping_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->sprice_create
    if(product_variant_update->sprice_create) {
    if(cJSON_AddStringToObject(item, "sprice_create", product_variant_update->sprice_create) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->sprice_expire
    if(product_variant_update->sprice_expire) {
    if(cJSON_AddStringToObject(item, "sprice_expire", product_variant_update->sprice_expire) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->weight
    if(product_variant_update->weight) {
    if(cJSON_AddNumberToObject(item, "weight", product_variant_update->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->barcode
    if(product_variant_update->barcode) {
    if(cJSON_AddStringToObject(item, "barcode", product_variant_update->barcode) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->width
    if(product_variant_update->width) {
    if(cJSON_AddNumberToObject(item, "width", product_variant_update->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->weight_unit
    if(product_variant_update->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", product_variant_update->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->height
    if(product_variant_update->height) {
    if(cJSON_AddNumberToObject(item, "height", product_variant_update->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->length
    if(product_variant_update->length) {
    if(cJSON_AddNumberToObject(item, "length", product_variant_update->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // product_variant_update->gtin
    if(product_variant_update->gtin) {
    if(cJSON_AddStringToObject(item, "gtin", product_variant_update->gtin) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->upc
    if(product_variant_update->upc) {
    if(cJSON_AddStringToObject(item, "upc", product_variant_update->upc) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->mpn
    if(product_variant_update->mpn) {
    if(cJSON_AddStringToObject(item, "mpn", product_variant_update->mpn) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->ean
    if(product_variant_update->ean) {
    if(cJSON_AddStringToObject(item, "ean", product_variant_update->ean) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->isbn
    if(product_variant_update->isbn) {
    if(cJSON_AddStringToObject(item, "isbn", product_variant_update->isbn) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->harmonized_system_code
    if(product_variant_update->harmonized_system_code) {
    if(cJSON_AddStringToObject(item, "harmonized_system_code", product_variant_update->harmonized_system_code) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->country_of_origin
    if(product_variant_update->country_of_origin) {
    if(cJSON_AddStringToObject(item, "country_of_origin", product_variant_update->country_of_origin) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->meta_title
    if(product_variant_update->meta_title) {
    if(cJSON_AddStringToObject(item, "meta_title", product_variant_update->meta_title) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->meta_description
    if(product_variant_update->meta_description) {
    if(cJSON_AddStringToObject(item, "meta_description", product_variant_update->meta_description) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->meta_keywords
    if(product_variant_update->meta_keywords) {
    if(cJSON_AddStringToObject(item, "meta_keywords", product_variant_update->meta_keywords) == NULL) {
    goto fail; //String
    }
    }


    // product_variant_update->reindex
    if(product_variant_update->reindex) {
    if(cJSON_AddBoolToObject(item, "reindex", product_variant_update->reindex) == NULL) {
    goto fail; //Bool
    }
    }


    // product_variant_update->clear_cache
    if(product_variant_update->clear_cache) {
    if(cJSON_AddBoolToObject(item, "clear_cache", product_variant_update->clear_cache) == NULL) {
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

product_variant_update_t *product_variant_update_parseFromJSON(cJSON *product_variant_updateJSON){

    product_variant_update_t *product_variant_update_local_var = NULL;

    // define the local list for product_variant_update->options
    list_t *optionsList = NULL;

    // product_variant_update->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // product_variant_update->product_id
    cJSON *product_id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "product_id");
    if (cJSON_IsNull(product_id)) {
        product_id = NULL;
    }
    if (product_id) { 
    if(!cJSON_IsString(product_id) && !cJSON_IsNull(product_id))
    {
    goto end; //String
    }
    }

    // product_variant_update->store_id
    cJSON *store_id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "store_id");
    if (cJSON_IsNull(store_id)) {
        store_id = NULL;
    }
    if (store_id) { 
    if(!cJSON_IsString(store_id) && !cJSON_IsNull(store_id))
    {
    goto end; //String
    }
    }

    // product_variant_update->lang_id
    cJSON *lang_id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "lang_id");
    if (cJSON_IsNull(lang_id)) {
        lang_id = NULL;
    }
    if (lang_id) { 
    if(!cJSON_IsString(lang_id) && !cJSON_IsNull(lang_id))
    {
    goto end; //String
    }
    }

    // product_variant_update->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "options");
    if (cJSON_IsNull(options)) {
        options = NULL;
    }
    if (options) { 
    cJSON *options_local_nonprimitive = NULL;
    if(!cJSON_IsArray(options)){
        goto end; //nonprimitive container
    }

    optionsList = list_createList();

    cJSON_ArrayForEach(options_local_nonprimitive,options )
    {
        if(!cJSON_IsObject(options_local_nonprimitive)){
            goto end;
        }
        product_variant_update_options_inner_t *optionsItem = product_variant_update_options_inner_parseFromJSON(options_local_nonprimitive);

        list_addElement(optionsList, optionsItem);
    }
    }

    // product_variant_update->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // product_variant_update->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // product_variant_update->short_description
    cJSON *short_description = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "short_description");
    if (cJSON_IsNull(short_description)) {
        short_description = NULL;
    }
    if (short_description) { 
    if(!cJSON_IsString(short_description) && !cJSON_IsNull(short_description))
    {
    goto end; //String
    }
    }

    // product_variant_update->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (model) { 
    if(!cJSON_IsString(model) && !cJSON_IsNull(model))
    {
    goto end; //String
    }
    }

    // product_variant_update->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "sku");
    if (cJSON_IsNull(sku)) {
        sku = NULL;
    }
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // product_variant_update->visible
    cJSON *visible = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "visible");
    if (cJSON_IsNull(visible)) {
        visible = NULL;
    }
    if (visible) { 
    if(!cJSON_IsString(visible) && !cJSON_IsNull(visible))
    {
    goto end; //String
    }
    }

    // product_variant_update->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // product_variant_update->backorder_status
    cJSON *backorder_status = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "backorder_status");
    if (cJSON_IsNull(backorder_status)) {
        backorder_status = NULL;
    }
    if (backorder_status) { 
    if(!cJSON_IsString(backorder_status) && !cJSON_IsNull(backorder_status))
    {
    goto end; //String
    }
    }

    // product_variant_update->low_stock_threshold
    cJSON *low_stock_threshold = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "low_stock_threshold");
    if (cJSON_IsNull(low_stock_threshold)) {
        low_stock_threshold = NULL;
    }
    if (low_stock_threshold) { 
    if(!cJSON_IsNumber(low_stock_threshold))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->available_for_sale
    cJSON *available_for_sale = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "available_for_sale");
    if (cJSON_IsNull(available_for_sale)) {
        available_for_sale = NULL;
    }
    if (available_for_sale) { 
    if(!cJSON_IsBool(available_for_sale))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->avail
    cJSON *avail = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "avail");
    if (cJSON_IsNull(avail)) {
        avail = NULL;
    }
    if (avail) { 
    if(!cJSON_IsBool(avail))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->is_default
    cJSON *is_default = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "is_default");
    if (cJSON_IsNull(is_default)) {
        is_default = NULL;
    }
    if (is_default) { 
    if(!cJSON_IsBool(is_default))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->is_free_shipping
    cJSON *is_free_shipping = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "is_free_shipping");
    if (cJSON_IsNull(is_free_shipping)) {
        is_free_shipping = NULL;
    }
    if (is_free_shipping) { 
    if(!cJSON_IsBool(is_free_shipping))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "taxable");
    if (cJSON_IsNull(taxable)) {
        taxable = NULL;
    }
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->tax_class_id
    cJSON *tax_class_id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "tax_class_id");
    if (cJSON_IsNull(tax_class_id)) {
        tax_class_id = NULL;
    }
    if (tax_class_id) { 
    if(!cJSON_IsString(tax_class_id) && !cJSON_IsNull(tax_class_id))
    {
    goto end; //String
    }
    }

    // product_variant_update->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "is_virtual");
    if (cJSON_IsNull(is_virtual)) {
        is_virtual = NULL;
    }
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->manage_stock
    cJSON *manage_stock = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "manage_stock");
    if (cJSON_IsNull(manage_stock)) {
        manage_stock = NULL;
    }
    if (manage_stock) { 
    if(!cJSON_IsBool(manage_stock))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "in_stock");
    if (cJSON_IsNull(in_stock)) {
        in_stock = NULL;
    }
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->warehouse_id
    cJSON *warehouse_id = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "warehouse_id");
    if (cJSON_IsNull(warehouse_id)) {
        warehouse_id = NULL;
    }
    if (warehouse_id) { 
    if(!cJSON_IsString(warehouse_id) && !cJSON_IsNull(warehouse_id))
    {
    goto end; //String
    }
    }

    // product_variant_update->reserve_quantity
    cJSON *reserve_quantity = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "reserve_quantity");
    if (cJSON_IsNull(reserve_quantity)) {
        reserve_quantity = NULL;
    }
    if (reserve_quantity) { 
    if(!cJSON_IsNumber(reserve_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "quantity");
    if (cJSON_IsNull(quantity)) {
        quantity = NULL;
    }
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->increase_quantity
    cJSON *increase_quantity = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "increase_quantity");
    if (cJSON_IsNull(increase_quantity)) {
        increase_quantity = NULL;
    }
    if (increase_quantity) { 
    if(!cJSON_IsNumber(increase_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->reduce_quantity
    cJSON *reduce_quantity = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "reduce_quantity");
    if (cJSON_IsNull(reduce_quantity)) {
        reduce_quantity = NULL;
    }
    if (reduce_quantity) { 
    if(!cJSON_IsNumber(reduce_quantity))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->special_price
    cJSON *special_price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "special_price");
    if (cJSON_IsNull(special_price)) {
        special_price = NULL;
    }
    if (special_price) { 
    if(!cJSON_IsNumber(special_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->retail_price
    cJSON *retail_price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "retail_price");
    if (cJSON_IsNull(retail_price)) {
        retail_price = NULL;
    }
    if (retail_price) { 
    if(!cJSON_IsNumber(retail_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->old_price
    cJSON *old_price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "old_price");
    if (cJSON_IsNull(old_price)) {
        old_price = NULL;
    }
    if (old_price) { 
    if(!cJSON_IsNumber(old_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->cost_price
    cJSON *cost_price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "cost_price");
    if (cJSON_IsNull(cost_price)) {
        cost_price = NULL;
    }
    if (cost_price) { 
    if(!cJSON_IsNumber(cost_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->fixed_cost_shipping_price
    cJSON *fixed_cost_shipping_price = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "fixed_cost_shipping_price");
    if (cJSON_IsNull(fixed_cost_shipping_price)) {
        fixed_cost_shipping_price = NULL;
    }
    if (fixed_cost_shipping_price) { 
    if(!cJSON_IsNumber(fixed_cost_shipping_price))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->sprice_create
    cJSON *sprice_create = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "sprice_create");
    if (cJSON_IsNull(sprice_create)) {
        sprice_create = NULL;
    }
    if (sprice_create) { 
    if(!cJSON_IsString(sprice_create) && !cJSON_IsNull(sprice_create))
    {
    goto end; //String
    }
    }

    // product_variant_update->sprice_expire
    cJSON *sprice_expire = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "sprice_expire");
    if (cJSON_IsNull(sprice_expire)) {
        sprice_expire = NULL;
    }
    if (sprice_expire) { 
    if(!cJSON_IsString(sprice_expire) && !cJSON_IsNull(sprice_expire))
    {
    goto end; //String
    }
    }

    // product_variant_update->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->barcode
    cJSON *barcode = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "barcode");
    if (cJSON_IsNull(barcode)) {
        barcode = NULL;
    }
    if (barcode) { 
    if(!cJSON_IsString(barcode) && !cJSON_IsNull(barcode))
    {
    goto end; //String
    }
    }

    // product_variant_update->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // product_variant_update->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // product_variant_update->gtin
    cJSON *gtin = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "gtin");
    if (cJSON_IsNull(gtin)) {
        gtin = NULL;
    }
    if (gtin) { 
    if(!cJSON_IsString(gtin) && !cJSON_IsNull(gtin))
    {
    goto end; //String
    }
    }

    // product_variant_update->upc
    cJSON *upc = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "upc");
    if (cJSON_IsNull(upc)) {
        upc = NULL;
    }
    if (upc) { 
    if(!cJSON_IsString(upc) && !cJSON_IsNull(upc))
    {
    goto end; //String
    }
    }

    // product_variant_update->mpn
    cJSON *mpn = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "mpn");
    if (cJSON_IsNull(mpn)) {
        mpn = NULL;
    }
    if (mpn) { 
    if(!cJSON_IsString(mpn) && !cJSON_IsNull(mpn))
    {
    goto end; //String
    }
    }

    // product_variant_update->ean
    cJSON *ean = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "ean");
    if (cJSON_IsNull(ean)) {
        ean = NULL;
    }
    if (ean) { 
    if(!cJSON_IsString(ean) && !cJSON_IsNull(ean))
    {
    goto end; //String
    }
    }

    // product_variant_update->isbn
    cJSON *isbn = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "isbn");
    if (cJSON_IsNull(isbn)) {
        isbn = NULL;
    }
    if (isbn) { 
    if(!cJSON_IsString(isbn) && !cJSON_IsNull(isbn))
    {
    goto end; //String
    }
    }

    // product_variant_update->harmonized_system_code
    cJSON *harmonized_system_code = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "harmonized_system_code");
    if (cJSON_IsNull(harmonized_system_code)) {
        harmonized_system_code = NULL;
    }
    if (harmonized_system_code) { 
    if(!cJSON_IsString(harmonized_system_code) && !cJSON_IsNull(harmonized_system_code))
    {
    goto end; //String
    }
    }

    // product_variant_update->country_of_origin
    cJSON *country_of_origin = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "country_of_origin");
    if (cJSON_IsNull(country_of_origin)) {
        country_of_origin = NULL;
    }
    if (country_of_origin) { 
    if(!cJSON_IsString(country_of_origin) && !cJSON_IsNull(country_of_origin))
    {
    goto end; //String
    }
    }

    // product_variant_update->meta_title
    cJSON *meta_title = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "meta_title");
    if (cJSON_IsNull(meta_title)) {
        meta_title = NULL;
    }
    if (meta_title) { 
    if(!cJSON_IsString(meta_title) && !cJSON_IsNull(meta_title))
    {
    goto end; //String
    }
    }

    // product_variant_update->meta_description
    cJSON *meta_description = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "meta_description");
    if (cJSON_IsNull(meta_description)) {
        meta_description = NULL;
    }
    if (meta_description) { 
    if(!cJSON_IsString(meta_description) && !cJSON_IsNull(meta_description))
    {
    goto end; //String
    }
    }

    // product_variant_update->meta_keywords
    cJSON *meta_keywords = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "meta_keywords");
    if (cJSON_IsNull(meta_keywords)) {
        meta_keywords = NULL;
    }
    if (meta_keywords) { 
    if(!cJSON_IsString(meta_keywords) && !cJSON_IsNull(meta_keywords))
    {
    goto end; //String
    }
    }

    // product_variant_update->reindex
    cJSON *reindex = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "reindex");
    if (cJSON_IsNull(reindex)) {
        reindex = NULL;
    }
    if (reindex) { 
    if(!cJSON_IsBool(reindex))
    {
    goto end; //Bool
    }
    }

    // product_variant_update->clear_cache
    cJSON *clear_cache = cJSON_GetObjectItemCaseSensitive(product_variant_updateJSON, "clear_cache");
    if (cJSON_IsNull(clear_cache)) {
        clear_cache = NULL;
    }
    if (clear_cache) { 
    if(!cJSON_IsBool(clear_cache))
    {
    goto end; //Bool
    }
    }


    product_variant_update_local_var = product_variant_update_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        product_id && !cJSON_IsNull(product_id) ? strdup(product_id->valuestring) : NULL,
        store_id && !cJSON_IsNull(store_id) ? strdup(store_id->valuestring) : NULL,
        lang_id && !cJSON_IsNull(lang_id) ? strdup(lang_id->valuestring) : NULL,
        options ? optionsList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        short_description && !cJSON_IsNull(short_description) ? strdup(short_description->valuestring) : NULL,
        model && !cJSON_IsNull(model) ? strdup(model->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        visible && !cJSON_IsNull(visible) ? strdup(visible->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        backorder_status && !cJSON_IsNull(backorder_status) ? strdup(backorder_status->valuestring) : NULL,
        low_stock_threshold ? low_stock_threshold->valuedouble : 0,
        available_for_sale ? available_for_sale->valueint : 0,
        avail ? avail->valueint : 0,
        is_default ? is_default->valueint : 0,
        is_free_shipping ? is_free_shipping->valueint : 0,
        taxable ? taxable->valueint : 0,
        tax_class_id && !cJSON_IsNull(tax_class_id) ? strdup(tax_class_id->valuestring) : NULL,
        is_virtual ? is_virtual->valueint : 0,
        manage_stock ? manage_stock->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        warehouse_id && !cJSON_IsNull(warehouse_id) ? strdup(warehouse_id->valuestring) : NULL,
        reserve_quantity ? reserve_quantity->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        increase_quantity ? increase_quantity->valuedouble : 0,
        reduce_quantity ? reduce_quantity->valuedouble : 0,
        price ? price->valuedouble : 0,
        special_price ? special_price->valuedouble : 0,
        retail_price ? retail_price->valuedouble : 0,
        old_price ? old_price->valuedouble : 0,
        cost_price ? cost_price->valuedouble : 0,
        fixed_cost_shipping_price ? fixed_cost_shipping_price->valuedouble : 0,
        sprice_create && !cJSON_IsNull(sprice_create) ? strdup(sprice_create->valuestring) : NULL,
        sprice_expire && !cJSON_IsNull(sprice_expire) ? strdup(sprice_expire->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        barcode && !cJSON_IsNull(barcode) ? strdup(barcode->valuestring) : NULL,
        width ? width->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        gtin && !cJSON_IsNull(gtin) ? strdup(gtin->valuestring) : NULL,
        upc && !cJSON_IsNull(upc) ? strdup(upc->valuestring) : NULL,
        mpn && !cJSON_IsNull(mpn) ? strdup(mpn->valuestring) : NULL,
        ean && !cJSON_IsNull(ean) ? strdup(ean->valuestring) : NULL,
        isbn && !cJSON_IsNull(isbn) ? strdup(isbn->valuestring) : NULL,
        harmonized_system_code && !cJSON_IsNull(harmonized_system_code) ? strdup(harmonized_system_code->valuestring) : NULL,
        country_of_origin && !cJSON_IsNull(country_of_origin) ? strdup(country_of_origin->valuestring) : NULL,
        meta_title && !cJSON_IsNull(meta_title) ? strdup(meta_title->valuestring) : NULL,
        meta_description && !cJSON_IsNull(meta_description) ? strdup(meta_description->valuestring) : NULL,
        meta_keywords && !cJSON_IsNull(meta_keywords) ? strdup(meta_keywords->valuestring) : NULL,
        reindex ? reindex->valueint : 0,
        clear_cache ? clear_cache->valueint : 0
        );

    return product_variant_update_local_var;
end:
    if (optionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, optionsList) {
            product_variant_update_options_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(optionsList);
        optionsList = NULL;
    }
    return NULL;

}
