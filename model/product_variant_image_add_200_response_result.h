/*
 * product_variant_image_add_200_response_result.h
 *
 * 
 */

#ifndef _product_variant_image_add_200_response_result_H_
#define _product_variant_image_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_variant_image_add_200_response_result_t product_variant_image_add_200_response_result_t;




typedef struct product_variant_image_add_200_response_result_t {
    char *id; // string
    char *image_path; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_variant_image_add_200_response_result_t;

__attribute__((deprecated)) product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_create(
    char *id,
    char *image_path
);

void product_variant_image_add_200_response_result_free(product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result);

product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result_parseFromJSON(cJSON *product_variant_image_add_200_response_resultJSON);

cJSON *product_variant_image_add_200_response_result_convertToJSON(product_variant_image_add_200_response_result_t *product_variant_image_add_200_response_result);

#endif /* _product_variant_image_add_200_response_result_H_ */

