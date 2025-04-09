/*
 * product_add_batch_payload_inner_images_inner.h
 *
 * 
 */

#ifndef _product_add_batch_payload_inner_images_inner_H_
#define _product_add_batch_payload_inner_images_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_batch_payload_inner_images_inner_t product_add_batch_payload_inner_images_inner_t;




typedef struct product_add_batch_payload_inner_images_inner_t {
    char *type; // string
    char *url; // string
    char *label; // string
    char *name; // string
    int position; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_batch_payload_inner_images_inner_t;

__attribute__((deprecated)) product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_create(
    char *type,
    char *url,
    char *label,
    char *name,
    int position
);

void product_add_batch_payload_inner_images_inner_free(product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner);

product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner_parseFromJSON(cJSON *product_add_batch_payload_inner_images_innerJSON);

cJSON *product_add_batch_payload_inner_images_inner_convertToJSON(product_add_batch_payload_inner_images_inner_t *product_add_batch_payload_inner_images_inner);

#endif /* _product_add_batch_payload_inner_images_inner_H_ */

