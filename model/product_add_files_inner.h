/*
 * product_add_files_inner.h
 *
 * 
 */

#ifndef _product_add_files_inner_H_
#define _product_add_files_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_add_files_inner_t product_add_files_inner_t;




typedef struct product_add_files_inner_t {
    char *name; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_add_files_inner_t;

__attribute__((deprecated)) product_add_files_inner_t *product_add_files_inner_create(
    char *name,
    char *url
);

void product_add_files_inner_free(product_add_files_inner_t *product_add_files_inner);

product_add_files_inner_t *product_add_files_inner_parseFromJSON(cJSON *product_add_files_innerJSON);

cJSON *product_add_files_inner_convertToJSON(product_add_files_inner_t *product_add_files_inner);

#endif /* _product_add_files_inner_H_ */

