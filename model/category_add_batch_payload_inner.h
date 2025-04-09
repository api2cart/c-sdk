/*
 * category_add_batch_payload_inner.h
 *
 * 
 */

#ifndef _category_add_batch_payload_inner_H_
#define _category_add_batch_payload_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_add_batch_payload_inner_t category_add_batch_payload_inner_t;

#include "category_add_batch_payload_inner_images_inner.h"



typedef struct category_add_batch_payload_inner_t {
    char *name; // string
    int avail; //boolean
    char *description; // string
    char *meta_title; // string
    char *meta_description; // string
    list_t *meta_keywords; //primitive container
    char *parent_id; // string
    int sort_order; //numeric
    char *seo_url; // string
    char *store_id; // string
    list_t *images; //nonprimitive container
    list_t *stores_ids; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} category_add_batch_payload_inner_t;

__attribute__((deprecated)) category_add_batch_payload_inner_t *category_add_batch_payload_inner_create(
    char *name,
    int avail,
    char *description,
    char *meta_title,
    char *meta_description,
    list_t *meta_keywords,
    char *parent_id,
    int sort_order,
    char *seo_url,
    char *store_id,
    list_t *images,
    list_t *stores_ids
);

void category_add_batch_payload_inner_free(category_add_batch_payload_inner_t *category_add_batch_payload_inner);

category_add_batch_payload_inner_t *category_add_batch_payload_inner_parseFromJSON(cJSON *category_add_batch_payload_innerJSON);

cJSON *category_add_batch_payload_inner_convertToJSON(category_add_batch_payload_inner_t *category_add_batch_payload_inner);

#endif /* _category_add_batch_payload_inner_H_ */

