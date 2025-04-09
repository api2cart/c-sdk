/*
 * attribute_add_200_response_result.h
 *
 * 
 */

#ifndef _attribute_add_200_response_result_H_
#define _attribute_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_add_200_response_result_t attribute_add_200_response_result_t;




typedef struct attribute_add_200_response_result_t {
    char *id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_add_200_response_result_t;

__attribute__((deprecated)) attribute_add_200_response_result_t *attribute_add_200_response_result_create(
    char *id
);

void attribute_add_200_response_result_free(attribute_add_200_response_result_t *attribute_add_200_response_result);

attribute_add_200_response_result_t *attribute_add_200_response_result_parseFromJSON(cJSON *attribute_add_200_response_resultJSON);

cJSON *attribute_add_200_response_result_convertToJSON(attribute_add_200_response_result_t *attribute_add_200_response_result);

#endif /* _attribute_add_200_response_result_H_ */

