/*
 * product_image_update_200_response_result.h
 *
 * 
 */

#ifndef _product_image_update_200_response_result_H_
#define _product_image_update_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct product_image_update_200_response_result_t product_image_update_200_response_result_t;




typedef struct product_image_update_200_response_result_t {
    char *updated; // string

    int _library_owned; // Is the library responsible for freeing this object?
} product_image_update_200_response_result_t;

__attribute__((deprecated)) product_image_update_200_response_result_t *product_image_update_200_response_result_create(
    char *updated
);

void product_image_update_200_response_result_free(product_image_update_200_response_result_t *product_image_update_200_response_result);

product_image_update_200_response_result_t *product_image_update_200_response_result_parseFromJSON(cJSON *product_image_update_200_response_resultJSON);

cJSON *product_image_update_200_response_result_convertToJSON(product_image_update_200_response_result_t *product_image_update_200_response_result);

#endif /* _product_image_update_200_response_result_H_ */

