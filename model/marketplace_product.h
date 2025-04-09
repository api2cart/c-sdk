/*
 * marketplace_product.h
 *
 * 
 */

#ifndef _marketplace_product_H_
#define _marketplace_product_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketplace_product_t marketplace_product_t;

#include "image.h"
#include "object.h"
#include "product_option.h"



typedef struct marketplace_product_t {
    char *id; // string
    char *type; // string
    char *u_asin; // string
    char *u_ean; // string
    char *u_gtin; // string
    char *u_isbn; // string
    char *u_mpn; // string
    char *u_upc; // string
    char *name; // string
    char *description; // string
    char *url; // string
    double price; //numeric
    list_t *images; //nonprimitive container
    list_t *product_options; //nonprimitive container
    char *manufacturer; // string
    char *brand; // string
    double weight; //numeric
    char *weight_unit; // string
    char *dimensions_unit; // string
    double width; //numeric
    double height; //numeric
    double length; //numeric
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} marketplace_product_t;

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
);

void marketplace_product_free(marketplace_product_t *marketplace_product);

marketplace_product_t *marketplace_product_parseFromJSON(cJSON *marketplace_productJSON);

cJSON *marketplace_product_convertToJSON(marketplace_product_t *marketplace_product);

#endif /* _marketplace_product_H_ */

