/*
 * category_find_200_response_result_category_inner.h
 *
 * 
 */

#ifndef _category_find_200_response_result_category_inner_H_
#define _category_find_200_response_result_category_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_find_200_response_result_category_inner_t category_find_200_response_result_category_inner_t;




typedef struct category_find_200_response_result_category_inner_t {
    char *id; // string
    char *name; // string
    char *description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} category_find_200_response_result_category_inner_t;

__attribute__((deprecated)) category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_create(
    char *id,
    char *name,
    char *description
);

void category_find_200_response_result_category_inner_free(category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner);

category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner_parseFromJSON(cJSON *category_find_200_response_result_category_innerJSON);

cJSON *category_find_200_response_result_category_inner_convertToJSON(category_find_200_response_result_category_inner_t *category_find_200_response_result_category_inner);

#endif /* _category_find_200_response_result_category_inner_H_ */

