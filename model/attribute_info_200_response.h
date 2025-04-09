/*
 * attribute_info_200_response.h
 *
 * 
 */

#ifndef _attribute_info_200_response_H_
#define _attribute_info_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attribute_info_200_response_t attribute_info_200_response_t;

#include "store_attribute.h"



typedef struct attribute_info_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct store_attribute_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} attribute_info_200_response_t;

__attribute__((deprecated)) attribute_info_200_response_t *attribute_info_200_response_create(
    int return_code,
    char *return_message,
    store_attribute_t *result
);

void attribute_info_200_response_free(attribute_info_200_response_t *attribute_info_200_response);

attribute_info_200_response_t *attribute_info_200_response_parseFromJSON(cJSON *attribute_info_200_responseJSON);

cJSON *attribute_info_200_response_convertToJSON(attribute_info_200_response_t *attribute_info_200_response);

#endif /* _attribute_info_200_response_H_ */

