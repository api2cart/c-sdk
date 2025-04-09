/*
 * attribute_assign_group_200_response_result.h
 *
 * 
 */

#ifndef _attribute_assign_group_200_response_result_H_
#define _attribute_assign_group_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_assign_group_200_response_result_t attribute_assign_group_200_response_result_t;




typedef struct attribute_assign_group_200_response_result_t {
    char *assigned; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_assign_group_200_response_result_t;

__attribute__((deprecated)) attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_create(
    char *assigned
);

void attribute_assign_group_200_response_result_free(attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result);

attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result_parseFromJSON(cJSON *attribute_assign_group_200_response_resultJSON);

cJSON *attribute_assign_group_200_response_result_convertToJSON(attribute_assign_group_200_response_result_t *attribute_assign_group_200_response_result);

#endif /* _attribute_assign_group_200_response_result_H_ */

