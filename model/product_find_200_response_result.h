/*
 * product_find_200_response_result.h
 *
 * 
 */

#ifndef _product_find_200_response_result_H_
#define _product_find_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_find_200_response_result_t product_find_200_response_result_t;

#include "product_find_200_response_result_product_inner.h"



typedef struct product_find_200_response_result_t {
    list_t *product; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} product_find_200_response_result_t;

__attribute__((deprecated)) product_find_200_response_result_t *product_find_200_response_result_create(
    list_t *product
);

void product_find_200_response_result_free(product_find_200_response_result_t *product_find_200_response_result);

product_find_200_response_result_t *product_find_200_response_result_parseFromJSON(cJSON *product_find_200_response_resultJSON);

cJSON *product_find_200_response_result_convertToJSON(product_find_200_response_result_t *product_find_200_response_result);

#endif /* _product_find_200_response_result_H_ */

