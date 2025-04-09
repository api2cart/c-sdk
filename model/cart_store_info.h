/*
 * cart_store_info.h
 *
 * 
 */

#ifndef _cart_store_info_H_
#define _cart_store_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_store_info_t cart_store_info_t;

#include "carrier.h"
#include "cart_channel.h"
#include "currency.h"
#include "info.h"
#include "language.h"
#include "object.h"



typedef struct cart_store_info_t {
    char *store_id; // string
    char *name; // string
    char *language; // string
    list_t *store_languages; //nonprimitive container
    struct currency_t *currency; //model
    list_t *store_currencies; //nonprimitive container
    char *timezone; // string
    char *country; // string
    char *root_category_id; // string
    char *multi_store_url; // string
    int active; //boolean
    char *weight_unit; // string
    char *dimension_unit; // string
    int prices_include_tax; //boolean
    list_t *carrier_info; //nonprimitive container
    struct info_t *store_owner_info; //model
    char *default_warehouse_id; // string
    list_t *channels; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} cart_store_info_t;

__attribute__((deprecated)) cart_store_info_t *cart_store_info_create(
    char *store_id,
    char *name,
    char *language,
    list_t *store_languages,
    currency_t *currency,
    list_t *store_currencies,
    char *timezone,
    char *country,
    char *root_category_id,
    char *multi_store_url,
    int active,
    char *weight_unit,
    char *dimension_unit,
    int prices_include_tax,
    list_t *carrier_info,
    info_t *store_owner_info,
    char *default_warehouse_id,
    list_t *channels,
    object_t *additional_fields,
    object_t *custom_fields
);

void cart_store_info_free(cart_store_info_t *cart_store_info);

cart_store_info_t *cart_store_info_parseFromJSON(cJSON *cart_store_infoJSON);

cJSON *cart_store_info_convertToJSON(cart_store_info_t *cart_store_info);

#endif /* _cart_store_info_H_ */

