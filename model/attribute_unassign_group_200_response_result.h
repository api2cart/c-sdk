/*
 * attribute_unassign_group_200_response_result.h
 *
 * 
 */

#ifndef _attribute_unassign_group_200_response_result_H_
#define _attribute_unassign_group_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_unassign_group_200_response_result_t attribute_unassign_group_200_response_result_t;




typedef struct attribute_unassign_group_200_response_result_t {
    char *unassigned; // string

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_unassign_group_200_response_result_t;

__attribute__((deprecated)) attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_create(
    char *unassigned
);

void attribute_unassign_group_200_response_result_free(attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result);

attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result_parseFromJSON(cJSON *attribute_unassign_group_200_response_resultJSON);

cJSON *attribute_unassign_group_200_response_result_convertToJSON(attribute_unassign_group_200_response_result_t *attribute_unassign_group_200_response_result);

#endif /* _attribute_unassign_group_200_response_result_H_ */

