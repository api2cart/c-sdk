/*
 * category_assign_200_response.h
 *
 * 
 */

#ifndef _category_assign_200_response_H_
#define _category_assign_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct category_assign_200_response_t category_assign_200_response_t;

#include "object.h"



typedef struct category_assign_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    object_t *result; //object

    int _library_owned; // Is the library responsible for freeing this object?
} category_assign_200_response_t;

__attribute__((deprecated)) category_assign_200_response_t *category_assign_200_response_create(
    int return_code,
    char *return_message,
    object_t *result
);

void category_assign_200_response_free(category_assign_200_response_t *category_assign_200_response);

category_assign_200_response_t *category_assign_200_response_parseFromJSON(cJSON *category_assign_200_responseJSON);

cJSON *category_assign_200_response_convertToJSON(category_assign_200_response_t *category_assign_200_response);

#endif /* _category_assign_200_response_H_ */

