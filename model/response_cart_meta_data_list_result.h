/*
 * response_cart_meta_data_list_result.h
 *
 * 
 */

#ifndef _response_cart_meta_data_list_result_H_
#define _response_cart_meta_data_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_cart_meta_data_list_result_t response_cart_meta_data_list_result_t;

#include "cart_meta_data.h"
#include "object.h"



typedef struct response_cart_meta_data_list_result_t {
    int total_count; //numeric
    list_t *items; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_cart_meta_data_list_result_t;

__attribute__((deprecated)) response_cart_meta_data_list_result_t *response_cart_meta_data_list_result_create(
    int total_count,
    list_t *items,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_cart_meta_data_list_result_free(response_cart_meta_data_list_result_t *response_cart_meta_data_list_result);

response_cart_meta_data_list_result_t *response_cart_meta_data_list_result_parseFromJSON(cJSON *response_cart_meta_data_list_resultJSON);

cJSON *response_cart_meta_data_list_result_convertToJSON(response_cart_meta_data_list_result_t *response_cart_meta_data_list_result);

#endif /* _response_cart_meta_data_list_result_H_ */

