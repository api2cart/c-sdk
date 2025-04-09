#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketplace_product.h"



static marketplace_product_t *marketplace_product_create_internal(
    char *id,
    char *type,
    char *u_asin,
    char *u_ean,
    char *u_gtin,
    char *u_isbn,
    char *u_mpn,
    char *u_upc,
    char *name,
    char *description,
    char *url,
    double price,
    list_t *images,
    list_t *product_options,
    char *manufacturer,
    char *brand,
    double weight,
    char *weight_unit,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    marketplace_product_t *marketplace_product_local_var = malloc(sizeof(marketplace_product_t));
    if (!marketplace_product_local_var) {
        return NULL;
    }
    marketplace_product_local_var->id = id;
    marketplace_product_local_var->type = type;
    marketplace_product_local_var->u_asin = u_asin;
    marketplace_product_local_var->u_ean = u_ean;
    marketplace_product_local_var->u_gtin = u_gtin;
    marketplace_product_local_var->u_isbn = u_isbn;
    marketplace_product_local_var->u_mpn = u_mpn;
    marketplace_product_local_var->u_upc = u_upc;
    marketplace_product_local_var->name = name;
    marketplace_product_local_var->description = description;
    marketplace_product_local_var->url = url;
    marketplace_product_local_var->price = price;
    marketplace_product_local_var->images = images;
    marketplace_product_local_var->product_options = product_options;
    marketplace_product_local_var->manufacturer = manufacturer;
    marketplace_product_local_var->brand = brand;
    marketplace_product_local_var->weight = weight;
    marketplace_product_local_var->weight_unit = weight_unit;
    marketplace_product_local_var->dimensions_unit = dimensions_unit;
    marketplace_product_local_var->width = width;
    marketplace_product_local_var->height = height;
    marketplace_product_local_var->length = length;
    marketplace_product_local_var->additional_fields = additional_fields;
    marketplace_product_local_var->custom_fields = custom_fields;

    marketplace_product_local_var->_library_owned = 1;
    return marketplace_product_local_var;
}

__attribute__((deprecated)) marketplace_product_t *marketplace_product_create(
    char *id,
    char *type,
    char *u_asin,
    char *u_ean,
    char *u_gtin,
    char *u_isbn,
    char *u_mpn,
    char *u_upc,
    char *name,
    char *description,
    char *url,
    double price,
    list_t *images,
    list_t *product_options,
    char *manufacturer,
    char *brand,
    double weight,
    char *weight_unit,
    char *dimensions_unit,
    double width,
    double height,
    double length,
    object_t *additional_fields,
    object_t *custom_fields
    ) {
    return marketplace_product_create_internal (
        id,
        type,
        u_asin,
        u_ean,
        u_gtin,
        u_isbn,
        u_mpn,
        u_upc,
        name,
        description,
        url,
        price,
        images,
        product_options,
        manufacturer,
        brand,
        weight,
        weight_unit,
        dimensions_unit,
        width,
        height,
        length,
        additional_fields,
        custom_fields
        );
}

void marketplace_product_free(marketplace_product_t *marketplace_product) {
    if(NULL == marketplace_product){
        return ;
    }
    if(marketplace_product->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "marketplace_product_free");
        return ;
    }
    listEntry_t *listEntry;
    if (marketplace_product->id) {
        free(marketplace_product->id);
        marketplace_product->id = NULL;
    }
    if (marketplace_product->type) {
        free(marketplace_product->type);
        marketplace_product->type = NULL;
    }
    if (marketplace_product->u_asin) {
        free(marketplace_product->u_asin);
        marketplace_product->u_asin = NULL;
    }
    if (marketplace_product->u_ean) {
        free(marketplace_product->u_ean);
        marketplace_product->u_ean = NULL;
    }
    if (marketplace_product->u_gtin) {
        free(marketplace_product->u_gtin);
        marketplace_product->u_gtin = NULL;
    }
    if (marketplace_product->u_isbn) {
        free(marketplace_product->u_isbn);
        marketplace_product->u_isbn = NULL;
    }
    if (marketplace_product->u_mpn) {
        free(marketplace_product->u_mpn);
        marketplace_product->u_mpn = NULL;
    }
    if (marketplace_product->u_upc) {
        free(marketplace_product->u_upc);
        marketplace_product->u_upc = NULL;
    }
    if (marketplace_product->name) {
        free(marketplace_product->name);
        marketplace_product->name = NULL;
    }
    if (marketplace_product->description) {
        free(marketplace_product->description);
        marketplace_product->description = NULL;
    }
    if (marketplace_product->url) {
        free(marketplace_product->url);
        marketplace_product->url = NULL;
    }
    if (marketplace_product->images) {
        list_ForEach(listEntry, marketplace_product->images) {
            image_free(listEntry->data);
        }
        list_freeList(marketplace_product->images);
        marketplace_product->images = NULL;
    }
    if (marketplace_product->product_options) {
        list_ForEach(listEntry, marketplace_product->product_options) {
            product_option_free(listEntry->data);
        }
        list_freeList(marketplace_product->product_options);
        marketplace_product->product_options = NULL;
    }
    if (marketplace_product->manufacturer) {
        free(marketplace_product->manufacturer);
        marketplace_product->manufacturer = NULL;
    }
    if (marketplace_product->brand) {
        free(marketplace_product->brand);
        marketplace_product->brand = NULL;
    }
    if (marketplace_product->weight_unit) {
        free(marketplace_product->weight_unit);
        marketplace_product->weight_unit = NULL;
    }
    if (marketplace_product->dimensions_unit) {
        free(marketplace_product->dimensions_unit);
        marketplace_product->dimensions_unit = NULL;
    }
    if (marketplace_product->additional_fields) {
        object_free(marketplace_product->additional_fields);
        marketplace_product->additional_fields = NULL;
    }
    if (marketplace_product->custom_fields) {
        object_free(marketplace_product->custom_fields);
        marketplace_product->custom_fields = NULL;
    }
    free(marketplace_product);
}

cJSON *marketplace_product_convertToJSON(marketplace_product_t *marketplace_product) {
    cJSON *item = cJSON_CreateObject();

    // marketplace_product->id
    if(marketplace_product->id) {
    if(cJSON_AddStringToObject(item, "id", marketplace_product->id) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->type
    if(marketplace_product->type) {
    if(cJSON_AddStringToObject(item, "type", marketplace_product->type) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_asin
    if(marketplace_product->u_asin) {
    if(cJSON_AddStringToObject(item, "u_asin", marketplace_product->u_asin) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_ean
    if(marketplace_product->u_ean) {
    if(cJSON_AddStringToObject(item, "u_ean", marketplace_product->u_ean) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_gtin
    if(marketplace_product->u_gtin) {
    if(cJSON_AddStringToObject(item, "u_gtin", marketplace_product->u_gtin) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_isbn
    if(marketplace_product->u_isbn) {
    if(cJSON_AddStringToObject(item, "u_isbn", marketplace_product->u_isbn) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_mpn
    if(marketplace_product->u_mpn) {
    if(cJSON_AddStringToObject(item, "u_mpn", marketplace_product->u_mpn) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->u_upc
    if(marketplace_product->u_upc) {
    if(cJSON_AddStringToObject(item, "u_upc", marketplace_product->u_upc) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->name
    if(marketplace_product->name) {
    if(cJSON_AddStringToObject(item, "name", marketplace_product->name) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->description
    if(marketplace_product->description) {
    if(cJSON_AddStringToObject(item, "description", marketplace_product->description) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->url
    if(marketplace_product->url) {
    if(cJSON_AddStringToObject(item, "url", marketplace_product->url) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->price
    if(marketplace_product->price) {
    if(cJSON_AddNumberToObject(item, "price", marketplace_product->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketplace_product->images
    if(marketplace_product->images) {
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (marketplace_product->images) {
    list_ForEach(imagesListEntry, marketplace_product->images) {
    cJSON *itemLocal = image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
    }


    // marketplace_product->product_options
    if(marketplace_product->product_options) {
    cJSON *product_options = cJSON_AddArrayToObject(item, "product_options");
    if(product_options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *product_optionsListEntry;
    if (marketplace_product->product_options) {
    list_ForEach(product_optionsListEntry, marketplace_product->product_options) {
    cJSON *itemLocal = product_option_convertToJSON(product_optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(product_options, itemLocal);
    }
    }
    }


    // marketplace_product->manufacturer
    if(marketplace_product->manufacturer) {
    if(cJSON_AddStringToObject(item, "manufacturer", marketplace_product->manufacturer) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->brand
    if(marketplace_product->brand) {
    if(cJSON_AddStringToObject(item, "brand", marketplace_product->brand) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->weight
    if(marketplace_product->weight) {
    if(cJSON_AddNumberToObject(item, "weight", marketplace_product->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketplace_product->weight_unit
    if(marketplace_product->weight_unit) {
    if(cJSON_AddStringToObject(item, "weight_unit", marketplace_product->weight_unit) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->dimensions_unit
    if(marketplace_product->dimensions_unit) {
    if(cJSON_AddStringToObject(item, "dimensions_unit", marketplace_product->dimensions_unit) == NULL) {
    goto fail; //String
    }
    }


    // marketplace_product->width
    if(marketplace_product->width) {
    if(cJSON_AddNumberToObject(item, "width", marketplace_product->width) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketplace_product->height
    if(marketplace_product->height) {
    if(cJSON_AddNumberToObject(item, "height", marketplace_product->height) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketplace_product->length
    if(marketplace_product->length) {
    if(cJSON_AddNumberToObject(item, "length", marketplace_product->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketplace_product->additional_fields
    if(marketplace_product->additional_fields) {
    cJSON *additional_fields_object = object_convertToJSON(marketplace_product->additional_fields);
    if(additional_fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "additional_fields", additional_fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // marketplace_product->custom_fields
    if(marketplace_product->custom_fields) {
    cJSON *custom_fields_object = object_convertToJSON(marketplace_product->custom_fields);
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

marketplace_product_t *marketplace_product_parseFromJSON(cJSON *marketplace_productJSON){

    marketplace_product_t *marketplace_product_local_var = NULL;

    // define the local list for marketplace_product->images
    list_t *imagesList = NULL;

    // define the local list for marketplace_product->product_options
    list_t *product_optionsList = NULL;

    // marketplace_product->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // marketplace_product->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_asin
    cJSON *u_asin = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_asin");
    if (cJSON_IsNull(u_asin)) {
        u_asin = NULL;
    }
    if (u_asin) { 
    if(!cJSON_IsString(u_asin) && !cJSON_IsNull(u_asin))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_ean
    cJSON *u_ean = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_ean");
    if (cJSON_IsNull(u_ean)) {
        u_ean = NULL;
    }
    if (u_ean) { 
    if(!cJSON_IsString(u_ean) && !cJSON_IsNull(u_ean))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_gtin
    cJSON *u_gtin = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_gtin");
    if (cJSON_IsNull(u_gtin)) {
        u_gtin = NULL;
    }
    if (u_gtin) { 
    if(!cJSON_IsString(u_gtin) && !cJSON_IsNull(u_gtin))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_isbn
    cJSON *u_isbn = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_isbn");
    if (cJSON_IsNull(u_isbn)) {
        u_isbn = NULL;
    }
    if (u_isbn) { 
    if(!cJSON_IsString(u_isbn) && !cJSON_IsNull(u_isbn))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_mpn
    cJSON *u_mpn = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_mpn");
    if (cJSON_IsNull(u_mpn)) {
        u_mpn = NULL;
    }
    if (u_mpn) { 
    if(!cJSON_IsString(u_mpn) && !cJSON_IsNull(u_mpn))
    {
    goto end; //String
    }
    }

    // marketplace_product->u_upc
    cJSON *u_upc = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "u_upc");
    if (cJSON_IsNull(u_upc)) {
        u_upc = NULL;
    }
    if (u_upc) { 
    if(!cJSON_IsString(u_upc) && !cJSON_IsNull(u_upc))
    {
    goto end; //String
    }
    }

    // marketplace_product->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // marketplace_product->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // marketplace_product->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // marketplace_product->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // marketplace_product->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "images");
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

    // marketplace_product->product_options
    cJSON *product_options = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "product_options");
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

    // marketplace_product->manufacturer
    cJSON *manufacturer = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "manufacturer");
    if (cJSON_IsNull(manufacturer)) {
        manufacturer = NULL;
    }
    if (manufacturer) { 
    if(!cJSON_IsString(manufacturer) && !cJSON_IsNull(manufacturer))
    {
    goto end; //String
    }
    }

    // marketplace_product->brand
    cJSON *brand = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "brand");
    if (cJSON_IsNull(brand)) {
        brand = NULL;
    }
    if (brand) { 
    if(!cJSON_IsString(brand) && !cJSON_IsNull(brand))
    {
    goto end; //String
    }
    }

    // marketplace_product->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "weight");
    if (cJSON_IsNull(weight)) {
        weight = NULL;
    }
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // marketplace_product->weight_unit
    cJSON *weight_unit = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "weight_unit");
    if (cJSON_IsNull(weight_unit)) {
        weight_unit = NULL;
    }
    if (weight_unit) { 
    if(!cJSON_IsString(weight_unit) && !cJSON_IsNull(weight_unit))
    {
    goto end; //String
    }
    }

    // marketplace_product->dimensions_unit
    cJSON *dimensions_unit = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "dimensions_unit");
    if (cJSON_IsNull(dimensions_unit)) {
        dimensions_unit = NULL;
    }
    if (dimensions_unit) { 
    if(!cJSON_IsString(dimensions_unit) && !cJSON_IsNull(dimensions_unit))
    {
    goto end; //String
    }
    }

    // marketplace_product->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "width");
    if (cJSON_IsNull(width)) {
        width = NULL;
    }
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // marketplace_product->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "height");
    if (cJSON_IsNull(height)) {
        height = NULL;
    }
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }

    // marketplace_product->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "length");
    if (cJSON_IsNull(length)) {
        length = NULL;
    }
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // marketplace_product->additional_fields
    cJSON *additional_fields = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "additional_fields");
    if (cJSON_IsNull(additional_fields)) {
        additional_fields = NULL;
    }
    object_t *additional_fields_local_object = NULL;
    if (additional_fields) { 
    additional_fields_local_object = object_parseFromJSON(additional_fields); //object
    }

    // marketplace_product->custom_fields
    cJSON *custom_fields = cJSON_GetObjectItemCaseSensitive(marketplace_productJSON, "custom_fields");
    if (cJSON_IsNull(custom_fields)) {
        custom_fields = NULL;
    }
    object_t *custom_fields_local_object = NULL;
    if (custom_fields) { 
    custom_fields_local_object = object_parseFromJSON(custom_fields); //object
    }


    marketplace_product_local_var = marketplace_product_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        u_asin && !cJSON_IsNull(u_asin) ? strdup(u_asin->valuestring) : NULL,
        u_ean && !cJSON_IsNull(u_ean) ? strdup(u_ean->valuestring) : NULL,
        u_gtin && !cJSON_IsNull(u_gtin) ? strdup(u_gtin->valuestring) : NULL,
        u_isbn && !cJSON_IsNull(u_isbn) ? strdup(u_isbn->valuestring) : NULL,
        u_mpn && !cJSON_IsNull(u_mpn) ? strdup(u_mpn->valuestring) : NULL,
        u_upc && !cJSON_IsNull(u_upc) ? strdup(u_upc->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        price ? price->valuedouble : 0,
        images ? imagesList : NULL,
        product_options ? product_optionsList : NULL,
        manufacturer && !cJSON_IsNull(manufacturer) ? strdup(manufacturer->valuestring) : NULL,
        brand && !cJSON_IsNull(brand) ? strdup(brand->valuestring) : NULL,
        weight ? weight->valuedouble : 0,
        weight_unit && !cJSON_IsNull(weight_unit) ? strdup(weight_unit->valuestring) : NULL,
        dimensions_unit && !cJSON_IsNull(dimensions_unit) ? strdup(dimensions_unit->valuestring) : NULL,
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0,
        length ? length->valuedouble : 0,
        additional_fields ? additional_fields_local_object : NULL,
        custom_fields ? custom_fields_local_object : NULL
        );

    return marketplace_product_local_var;
end:
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
    return NULL;

}
