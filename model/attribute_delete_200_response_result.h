/*
 * attribute_delete_200_response_result.h
 *
 * 
 */

#ifndef _attribute_delete_200_response_result_H_
#define _attribute_delete_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_delete_200_response_result_t attribute_delete_200_response_result_t;




typedef struct attribute_delete_200_response_result_t {
    char *deleted; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_delete_200_response_result_t;

__attribute__((deprecated)) attribute_delete_200_response_result_t *attribute_delete_200_response_result_create(
    char *deleted
);

void attribute_delete_200_response_result_free(attribute_delete_200_response_result_t *attribute_delete_200_response_result);

attribute_delete_200_response_result_t *attribute_delete_200_response_result_parseFromJSON(cJSON *attribute_delete_200_response_resultJSON);

cJSON *attribute_delete_200_response_result_convertToJSON(attribute_delete_200_response_result_t *attribute_delete_200_response_result);

#endif /* _attribute_delete_200_response_result_H_ */

