/*
 * brand.h
 *
 * 
 */

#ifndef _brand_H_
#define _brand_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct brand_t brand_t;

#include "image.h"
#include "object.h"



typedef struct brand_t {
    char *id; // string
    char *name; // string
    char *created_time; // string
    char *modified_time; // string
    char *full_description; // string
    char *short_description; // string
    list_t *stores_ids; //primitive container
    int active; //boolean
    char *url; // string
    char *meta_title; // string
    char *meta_keywords; // string
    char *meta_description; // string
    list_t *images; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} brand_t;

__attribute__((deprecated)) brand_t *brand_create(
    char *id,
    char *name,
    char *created_time,
    char *modified_time,
    char *full_description,
    char *short_description,
    list_t *stores_ids,
    int active,
    char *url,
    char *meta_title,
    char *meta_keywords,
    char *meta_description,
    list_t *images,
    object_t *additional_fields,
    object_t *custom_fields
);

void brand_free(brand_t *brand);

brand_t *brand_parseFromJSON(cJSON *brandJSON);

cJSON *brand_convertToJSON(brand_t *brand);

#endif /* _brand_H_ */

