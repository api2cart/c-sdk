/*
 * attribute_type_list_200_response_result.h
 *
 * 
 */

#ifndef _attribute_type_list_200_response_result_H_
#define _attribute_type_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_type_list_200_response_result_t attribute_type_list_200_response_result_t;




typedef struct attribute_type_list_200_response_result_t {
    list_t *attribute_type; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_type_list_200_response_result_t;

__attribute__((deprecated)) attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_create(
    list_t *attribute_type
);

void attribute_type_list_200_response_result_free(attribute_type_list_200_response_result_t *attribute_type_list_200_response_result);

attribute_type_list_200_response_result_t *attribute_type_list_200_response_result_parseFromJSON(cJSON *attribute_type_list_200_response_resultJSON);

cJSON *attribute_type_list_200_response_result_convertToJSON(attribute_type_list_200_response_result_t *attribute_type_list_200_response_result);

#endif /* _attribute_type_list_200_response_result_H_ */

