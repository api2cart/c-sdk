/*
 * response_attribute_group_list_result.h
 *
 * 
 */

#ifndef _response_attribute_group_list_result_H_
#define _response_attribute_group_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_attribute_group_list_result_t response_attribute_group_list_result_t;

#include "object.h"
#include "store_attribute_group.h"



typedef struct response_attribute_group_list_result_t {
    list_t *group; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_attribute_group_list_result_t;

__attribute__((deprecated)) response_attribute_group_list_result_t *response_attribute_group_list_result_create(
    list_t *group,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_attribute_group_list_result_free(response_attribute_group_list_result_t *response_attribute_group_list_result);

response_attribute_group_list_result_t *response_attribute_group_list_result_parseFromJSON(cJSON *response_attribute_group_list_resultJSON);

cJSON *response_attribute_group_list_result_convertToJSON(response_attribute_group_list_result_t *response_attribute_group_list_result);

#endif /* _response_attribute_group_list_result_H_ */

