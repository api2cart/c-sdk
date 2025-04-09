/*
 * category_count_200_response_result.h
 *
 * 
 */

#ifndef _category_count_200_response_result_H_
#define _category_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_count_200_response_result_t category_count_200_response_result_t;




typedef struct category_count_200_response_result_t {
    int categories_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} category_count_200_response_result_t;

__attribute__((deprecated)) category_count_200_response_result_t *category_count_200_response_result_create(
    int categories_count
);

void category_count_200_response_result_free(category_count_200_response_result_t *category_count_200_response_result);

category_count_200_response_result_t *category_count_200_response_result_parseFromJSON(cJSON *category_count_200_response_resultJSON);

cJSON *category_count_200_response_result_convertToJSON(category_count_200_response_result_t *category_count_200_response_result);

#endif /* _category_count_200_response_result_H_ */

