/*
 * category_find_200_response_result.h
 *
 * 
 */

#ifndef _category_find_200_response_result_H_
#define _category_find_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_find_200_response_result_t category_find_200_response_result_t;

#include "category_find_200_response_result_category_inner.h"



typedef struct category_find_200_response_result_t {
    list_t *category; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} category_find_200_response_result_t;

__attribute__((deprecated)) category_find_200_response_result_t *category_find_200_response_result_create(
    list_t *category
);

void category_find_200_response_result_free(category_find_200_response_result_t *category_find_200_response_result);

category_find_200_response_result_t *category_find_200_response_result_parseFromJSON(cJSON *category_find_200_response_resultJSON);

cJSON *category_find_200_response_result_convertToJSON(category_find_200_response_result_t *category_find_200_response_result);

#endif /* _category_find_200_response_result_H_ */

