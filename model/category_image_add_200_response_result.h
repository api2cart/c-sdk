/*
 * category_image_add_200_response_result.h
 *
 * 
 */

#ifndef _category_image_add_200_response_result_H_
#define _category_image_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_image_add_200_response_result_t category_image_add_200_response_result_t;




typedef struct category_image_add_200_response_result_t {
    char *image_path; // string

    int _library_owned; // Is the library responsible for freeing this object?
} category_image_add_200_response_result_t;

__attribute__((deprecated)) category_image_add_200_response_result_t *category_image_add_200_response_result_create(
    char *image_path
);

void category_image_add_200_response_result_free(category_image_add_200_response_result_t *category_image_add_200_response_result);

category_image_add_200_response_result_t *category_image_add_200_response_result_parseFromJSON(cJSON *category_image_add_200_response_resultJSON);

cJSON *category_image_add_200_response_result_convertToJSON(category_image_add_200_response_result_t *category_image_add_200_response_result);

#endif /* _category_image_add_200_response_result_H_ */

