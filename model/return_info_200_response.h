/*
 * return_info_200_response.h
 *
 * 
 */

#ifndef _return_info_200_response_H_
#define _return_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct return_info_200_response_t return_info_200_response_t;

#include "ModelReturn.h"



typedef struct return_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct ModelReturn_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} return_info_200_response_t;

__attribute__((deprecated)) return_info_200_response_t *return_info_200_response_create(
    int return_code,
    char *return_message,
    ModelReturn_t *result
);

void return_info_200_response_free(return_info_200_response_t *return_info_200_response);

return_info_200_response_t *return_info_200_response_parseFromJSON(cJSON *return_info_200_responseJSON);

cJSON *return_info_200_response_convertToJSON(return_info_200_response_t *return_info_200_response);

#endif /* _return_info_200_response_H_ */

