/*
 * product_update_batch_payload_inner_images_inner.h
 *
 * 
 */

#ifndef _product_update_batch_payload_inner_images_inner_H_
#define _product_update_batch_payload_inner_images_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_update_batch_payload_inner_images_inner_t product_update_batch_payload_inner_images_inner_t;




typedef struct product_update_batch_payload_inner_images_inner_t {
    char *id; // string
    char *name; // string
    char *url; // string
    char *label; // string
    int position; //numeric
    char *type; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_update_batch_payload_inner_images_inner_t;

__attribute__((deprecated)) product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_create(
    char *id,
    char *name,
    char *url,
    char *label,
    int position,
    char *type
);

void product_update_batch_payload_inner_images_inner_free(product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner);

product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner_parseFromJSON(cJSON *product_update_batch_payload_inner_images_innerJSON);

cJSON *product_update_batch_payload_inner_images_inner_convertToJSON(product_update_batch_payload_inner_images_inner_t *product_update_batch_payload_inner_images_inner);

#endif /* _product_update_batch_payload_inner_images_inner_H_ */

