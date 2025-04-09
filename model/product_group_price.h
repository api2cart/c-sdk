/*
 * product_group_price.h
 *
 * 
 */

#ifndef _product_group_price_H_
#define _product_group_price_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_group_price_t product_group_price_t;

#include "object.h"



typedef struct product_group_price_t {
    char *id; // string
    char *group_id; // string
    double price; //numeric
    char *store_id; // string
    double quantity; //numeric
    char *start_time; // string
    char *expire_time; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} product_group_price_t;

__attribute__((deprecated)) product_group_price_t *product_group_price_create(
    char *id,
    char *group_id,
    double price,
    char *store_id,
    double quantity,
    char *start_time,
    char *expire_time,
    object_t *additional_fields,
    object_t *custom_fields
);

void product_group_price_free(product_group_price_t *product_group_price);

product_group_price_t *product_group_price_parseFromJSON(cJSON *product_group_priceJSON);

cJSON *product_group_price_convertToJSON(product_group_price_t *product_group_price);

#endif /* _product_group_price_H_ */

