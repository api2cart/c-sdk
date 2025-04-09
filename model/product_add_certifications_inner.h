/*
 * product_add_certifications_inner.h
 *
 * 
 */

#ifndef _product_add_certifications_inner_H_
#define _product_add_certifications_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_certifications_inner_t product_add_certifications_inner_t;

#include "product_add_certifications_inner_files_inner.h"
#include "product_add_certifications_inner_images_inner.h"



typedef struct product_add_certifications_inner_t {
    char *id; // string
    list_t *images; //nonprimitive container
    list_t *files; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_certifications_inner_t;

__attribute__((deprecated)) product_add_certifications_inner_t *product_add_certifications_inner_create(
    char *id,
    list_t *images,
    list_t *files
);

void product_add_certifications_inner_free(product_add_certifications_inner_t *product_add_certifications_inner);

product_add_certifications_inner_t *product_add_certifications_inner_parseFromJSON(cJSON *product_add_certifications_innerJSON);

cJSON *product_add_certifications_inner_convertToJSON(product_add_certifications_inner_t *product_add_certifications_inner);

#endif /* _product_add_certifications_inner_H_ */

