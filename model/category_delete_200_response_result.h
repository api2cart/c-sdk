/*
 * category_delete_200_response_result.h
 *
 * 
 */

#ifndef _category_delete_200_response_result_H_
#define _category_delete_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_delete_200_response_result_t category_delete_200_response_result_t;




typedef struct category_delete_200_response_result_t {
    int delete_items; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} category_delete_200_response_result_t;

__attribute__((deprecated)) category_delete_200_response_result_t *category_delete_200_response_result_create(
    int delete_items
);

void category_delete_200_response_result_free(category_delete_200_response_result_t *category_delete_200_response_result);

category_delete_200_response_result_t *category_delete_200_response_result_parseFromJSON(cJSON *category_delete_200_response_resultJSON);

cJSON *category_delete_200_response_result_convertToJSON(category_delete_200_response_result_t *category_delete_200_response_result);

#endif /* _category_delete_200_response_result_H_ */

