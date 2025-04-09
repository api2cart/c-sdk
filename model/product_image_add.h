/*
 * product_image_add.h
 *
 * 
 */

#ifndef _product_image_add_H_
#define _product_image_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_image_add_t product_image_add_t;


// Enum TYPE for product_image_add

typedef enum  { api2cart_openapi_product_image_add_TYPE_NULL = 0, api2cart_openapi_product_image_add_TYPE_small, api2cart_openapi_product_image_add_TYPE_base, api2cart_openapi_product_image_add_TYPE_additional, api2cart_openapi_product_image_add_TYPE_thumbnail } api2cart_openapi_product_image_add_TYPE_e;

char* product_image_add_type_ToString(api2cart_openapi_product_image_add_TYPE_e type);

api2cart_openapi_product_image_add_TYPE_e product_image_add_type_FromString(char* type);



typedef struct product_image_add_t {
    char *product_id; // string
    char *image_name; // string
    api2cart_openapi_product_image_add_TYPE_e type; //enum
    char *url; // string
    char *label; // string
    char *mime; // string
    int position; //numeric
    char *content; // string
    char *product_variant_id; // string
    char *variant_ids; // string
    char *option_value_ids; // string
    char *store_id; // string
    char *lang_id; // string
    int use_latest_api_version; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} product_image_add_t;

__attribute__((deprecated)) product_image_add_t *product_image_add_create(
    char *product_id,
    char *image_name,
    api2cart_openapi_product_image_add_TYPE_e type,
    char *url,
    char *label,
    char *mime,
    int position,
    char *content,
    char *product_variant_id,
    char *variant_ids,
    char *option_value_ids,
    char *store_id,
    char *lang_id,
    int use_latest_api_version
);

void product_image_add_free(product_image_add_t *product_image_add);

product_image_add_t *product_image_add_parseFromJSON(cJSON *product_image_addJSON);

cJSON *product_image_add_convertToJSON(product_image_add_t *product_image_add);

#endif /* _product_image_add_H_ */

