/*
 * category_delete_200_response.h
 *
 * 
 */

#ifndef _category_delete_200_response_H_
#define _category_delete_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_delete_200_response_t category_delete_200_response_t;

#include "category_delete_200_response_result.h"



typedef struct category_delete_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct category_delete_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} category_delete_200_response_t;

__attribute__((deprecated)) category_delete_200_response_t *category_delete_200_response_create(
    int return_code,
    char *return_message,
    category_delete_200_response_result_t *result
);

void category_delete_200_response_free(category_delete_200_response_t *category_delete_200_response);

category_delete_200_response_t *category_delete_200_response_parseFromJSON(cJSON *category_delete_200_responseJSON);

cJSON *category_delete_200_response_convertToJSON(category_delete_200_response_t *category_delete_200_response);

#endif /* _category_delete_200_response_H_ */

