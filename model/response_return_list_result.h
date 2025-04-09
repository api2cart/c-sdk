/*
 * response_return_list_result.h
 *
 * 
 */

#ifndef _response_return_list_result_H_
#define _response_return_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_return_list_result_t response_return_list_result_t;

#include "ModelReturn.h"
#include "object.h"



typedef struct response_return_list_result_t {
    int total_count; //numeric
    list_t *returns; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_return_list_result_t;

__attribute__((deprecated)) response_return_list_result_t *response_return_list_result_create(
    int total_count,
    list_t *returns,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_return_list_result_free(response_return_list_result_t *response_return_list_result);

response_return_list_result_t *response_return_list_result_parseFromJSON(cJSON *response_return_list_resultJSON);

cJSON *response_return_list_result_convertToJSON(response_return_list_result_t *response_return_list_result);

#endif /* _response_return_list_result_H_ */

