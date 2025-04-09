/*
 * response_order_list_result.h
 *
 * 
 */

#ifndef _response_order_list_result_H_
#define _response_order_list_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_order_list_result_t response_order_list_result_t;

#include "object.h"
#include "order.h"



typedef struct response_order_list_result_t {
    int orders_count; //numeric
    list_t *order; //nonprimitive container
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} response_order_list_result_t;

__attribute__((deprecated)) response_order_list_result_t *response_order_list_result_create(
    int orders_count,
    list_t *order,
    object_t *additional_fields,
    object_t *custom_fields
);

void response_order_list_result_free(response_order_list_result_t *response_order_list_result);

response_order_list_result_t *response_order_list_result_parseFromJSON(cJSON *response_order_list_resultJSON);

cJSON *response_order_list_result_convertToJSON(response_order_list_result_t *response_order_list_result);

#endif /* _response_order_list_result_H_ */

