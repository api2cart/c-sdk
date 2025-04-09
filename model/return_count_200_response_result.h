/*
 * return_count_200_response_result.h
 *
 * 
 */

#ifndef _return_count_200_response_result_H_
#define _return_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_count_200_response_result_t return_count_200_response_result_t;




typedef struct return_count_200_response_result_t {
    int returns_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} return_count_200_response_result_t;

__attribute__((deprecated)) return_count_200_response_result_t *return_count_200_response_result_create(
    int returns_count
);

void return_count_200_response_result_free(return_count_200_response_result_t *return_count_200_response_result);

return_count_200_response_result_t *return_count_200_response_result_parseFromJSON(cJSON *return_count_200_response_resultJSON);

cJSON *return_count_200_response_result_convertToJSON(return_count_200_response_result_t *return_count_200_response_result);

#endif /* _return_count_200_response_result_H_ */

