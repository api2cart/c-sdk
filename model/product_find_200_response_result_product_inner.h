/*
 * product_find_200_response_result_product_inner.h
 *
 * 
 */

#ifndef _product_find_200_response_result_product_inner_H_
#define _product_find_200_response_result_product_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_find_200_response_result_product_inner_t product_find_200_response_result_product_inner_t;




typedef struct product_find_200_response_result_product_inner_t {
    char *id; // string
    char *name; // string
    char *description; // string
    double price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} product_find_200_response_result_product_inner_t;

__attribute__((deprecated)) product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_create(
    char *id,
    char *name,
    char *description,
    double price
);

void product_find_200_response_result_product_inner_free(product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner);

product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner_parseFromJSON(cJSON *product_find_200_response_result_product_innerJSON);

cJSON *product_find_200_response_result_product_inner_convertToJSON(product_find_200_response_result_product_inner_t *product_find_200_response_result_product_inner);

#endif /* _product_find_200_response_result_product_inner_H_ */

