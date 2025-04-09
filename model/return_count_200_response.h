/*
 * return_count_200_response.h
 *
 * 
 */

#ifndef _return_count_200_response_H_
#define _return_count_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_count_200_response_t return_count_200_response_t;

#include "return_count_200_response_result.h"



typedef struct return_count_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct return_count_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} return_count_200_response_t;

__attribute__((deprecated)) return_count_200_response_t *return_count_200_response_create(
    int return_code,
    char *return_message,
    return_count_200_response_result_t *result
);

void return_count_200_response_free(return_count_200_response_t *return_count_200_response);

return_count_200_response_t *return_count_200_response_parseFromJSON(cJSON *return_count_200_responseJSON);

cJSON *return_count_200_response_convertToJSON(return_count_200_response_t *return_count_200_response);

#endif /* _return_count_200_response_H_ */

