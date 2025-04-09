/*
 * category_add_batch_payload_inner_images_inner.h
 *
 * 
 */

#ifndef _category_add_batch_payload_inner_images_inner_H_
#define _category_add_batch_payload_inner_images_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_add_batch_payload_inner_images_inner_t category_add_batch_payload_inner_images_inner_t;




typedef struct category_add_batch_payload_inner_images_inner_t {
    char *url; // string
    char *image_name; // string
    char *type; // string
    char *label; // string

    int _library_owned; // Is the library responsible for freeing this object?
} category_add_batch_payload_inner_images_inner_t;

__attribute__((deprecated)) category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_create(
    char *url,
    char *image_name,
    char *type,
    char *label
);

void category_add_batch_payload_inner_images_inner_free(category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner);

category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner_parseFromJSON(cJSON *category_add_batch_payload_inner_images_innerJSON);

cJSON *category_add_batch_payload_inner_images_inner_convertToJSON(category_add_batch_payload_inner_images_inner_t *category_add_batch_payload_inner_images_inner);

#endif /* _category_add_batch_payload_inner_images_inner_H_ */

