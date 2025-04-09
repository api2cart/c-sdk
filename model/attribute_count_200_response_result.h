/*
 * attribute_count_200_response_result.h
 *
 * 
 */

#ifndef _attribute_count_200_response_result_H_
#define _attribute_count_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_count_200_response_result_t attribute_count_200_response_result_t;




typedef struct attribute_count_200_response_result_t {
    int attributes_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_count_200_response_result_t;

__attribute__((deprecated)) attribute_count_200_response_result_t *attribute_count_200_response_result_create(
    int attributes_count
);

void attribute_count_200_response_result_free(attribute_count_200_response_result_t *attribute_count_200_response_result);

attribute_count_200_response_result_t *attribute_count_200_response_result_parseFromJSON(cJSON *attribute_count_200_response_resultJSON);

cJSON *attribute_count_200_response_result_convertToJSON(attribute_count_200_response_result_t *attribute_count_200_response_result);

#endif /* _attribute_count_200_response_result_H_ */

