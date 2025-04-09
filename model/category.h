/*
 * category.h
 *
 * 
 */

#ifndef _category_H_
#define _category_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_t category_t;

#include "a2_c_date_time.h"
#include "image.h"
#include "object.h"



typedef struct category_t {
    char *id; // string
    char *parent_id; // string
    struct a2_c_date_time_t *created_at; //model
    struct a2_c_date_time_t *modified_at; //model
    char *name; // string
    char *short_description; // string
    char *description; // string
    list_t *stores_ids; //primitive container
    char *keywords; // string
    char *meta_description; // string
    char *meta_title; // string
    int avail; //boolean
    char *path; // string
    char *seo_url; // string
    int sort_order; //numeric
    list_t *images; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} category_t;

__attribute__((deprecated)) category_t *category_create(
    char *id,
    char *parent_id,
    a2_c_date_time_t *created_at,
    a2_c_date_time_t *modified_at,
    char *name,
    char *short_description,
    char *description,
    list_t *stores_ids,
    char *keywords,
    char *meta_description,
    char *meta_title,
    int avail,
    char *path,
    char *seo_url,
    int sort_order,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
);

void category_free(category_t *category);

category_t *category_parseFromJSON(cJSON *categoryJSON);

cJSON *category_convertToJSON(category_t *category);

#endif /* _category_H_ */

