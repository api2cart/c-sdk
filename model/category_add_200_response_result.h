/*
 * category_add_200_response_result.h
 *
 * 
 */

#ifndef _category_add_200_response_result_H_
#define _category_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_add_200_response_result_t category_add_200_response_result_t;




typedef struct category_add_200_response_result_t {
    char *category_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} category_add_200_response_result_t;

__attribute__((deprecated)) category_add_200_response_result_t *category_add_200_response_result_create(
    char *category_id
);

void category_add_200_response_result_free(category_add_200_response_result_t *category_add_200_response_result);

category_add_200_response_result_t *category_add_200_response_result_parseFromJSON(cJSON *category_add_200_response_resultJSON);

cJSON *category_add_200_response_result_convertToJSON(category_add_200_response_result_t *category_add_200_response_result);

#endif /* _category_add_200_response_result_H_ */

