/*
 * image.h
 *
 * 
 */

#ifndef _image_H_
#define _image_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct image_t image_t;

#include "a2_c_date_time.h"
#include "object.h"



typedef struct image_t {
    char *id; // string
    char *http_path; // string
    char *file_name; // string
    char *mime_type; // string
    int size; //numeric
    struct a2_c_date_time_t *create_at; //model
    struct a2_c_date_time_t *modified_at; //model
    char *alt; // string
    int avail; //boolean
    int sort_order; //numeric
    char *type; // string
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} image_t;

__attribute__((deprecated)) image_t *image_create(
    char *id,
    char *http_path,
    char *file_name,
    char *mime_type,
    int size,
    a2_c_date_time_t *create_at,
    a2_c_date_time_t *modified_at,
    char *alt,
    int avail,
    int sort_order,
    char *type,
    object_t *additional_fields,
    object_t *custom_fields
);

void image_free(image_t *image);

image_t *image_parseFromJSON(cJSON *imageJSON);

cJSON *image_convertToJSON(image_t *image);

#endif /* _image_H_ */

