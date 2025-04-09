/*
 * category_info_200_response.h
 *
 * 
 */

#ifndef _category_info_200_response_H_
#define _category_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_info_200_response_t category_info_200_response_t;

#include "category.h"



typedef struct category_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct category_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} category_info_200_response_t;

__attribute__((deprecated)) category_info_200_response_t *category_info_200_response_create(
    int return_code,
    char *return_message,
    category_t *result
);

void category_info_200_response_free(category_info_200_response_t *category_info_200_response);

category_info_200_response_t *category_info_200_response_parseFromJSON(cJSON *category_info_200_responseJSON);

cJSON *category_info_200_response_convertToJSON(category_info_200_response_t *category_info_200_response);

#endif /* _category_info_200_response_H_ */

