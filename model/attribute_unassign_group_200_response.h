/*
 * attribute_unassign_group_200_response.h
 *
 * 
 */

#ifndef _attribute_unassign_group_200_response_H_
#define _attribute_unassign_group_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_unassign_group_200_response_t attribute_unassign_group_200_response_t;

#include "attribute_unassign_group_200_response_result.h"



typedef struct attribute_unassign_group_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct attribute_unassign_group_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_unassign_group_200_response_t;

__attribute__((deprecated)) attribute_unassign_group_200_response_t *attribute_unassign_group_200_response_create(
    int return_code,
    char *return_message,
    attribute_unassign_group_200_response_result_t *result
);

void attribute_unassign_group_200_response_free(attribute_unassign_group_200_response_t *attribute_unassign_group_200_response);

attribute_unassign_group_200_response_t *attribute_unassign_group_200_response_parseFromJSON(cJSON *attribute_unassign_group_200_responseJSON);

cJSON *attribute_unassign_group_200_response_convertToJSON(attribute_unassign_group_200_response_t *attribute_unassign_group_200_response);

#endif /* _attribute_unassign_group_200_response_H_ */

