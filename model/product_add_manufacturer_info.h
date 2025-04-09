/*
 * product_add_manufacturer_info.h
 *
 * Manufacturer information.
 */

#ifndef _product_add_manufacturer_info_H_
#define _product_add_manufacturer_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_manufacturer_info_t product_add_manufacturer_info_t;




typedef struct product_add_manufacturer_info_t {
    char *name; // string
    char *address; // string
    char *phone; // string
    char *email; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_manufacturer_info_t;

__attribute__((deprecated)) product_add_manufacturer_info_t *product_add_manufacturer_info_create(
    char *name,
    char *address,
    char *phone,
    char *email
);

void product_add_manufacturer_info_free(product_add_manufacturer_info_t *product_add_manufacturer_info);

product_add_manufacturer_info_t *product_add_manufacturer_info_parseFromJSON(cJSON *product_add_manufacturer_infoJSON);

cJSON *product_add_manufacturer_info_convertToJSON(product_add_manufacturer_info_t *product_add_manufacturer_info);

#endif /* _product_add_manufacturer_info_H_ */

