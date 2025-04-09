/*
 * model_response_cart_shipping_zones_list.h
 *
 * 
 */

#ifndef _model_response_cart_shipping_zones_list_H_
#define _model_response_cart_shipping_zones_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct model_response_cart_shipping_zones_list_t model_response_cart_shipping_zones_list_t;

#include "object.h"
#include "pagination.h"
#include "response_cart_shipping_zones_list_result.h"



typedef struct model_response_cart_shipping_zones_list_t {
    int return_code; //numeric
    char *return_message; // string
    struct pagination_t *pagination; //model
    struct response_cart_shipping_zones_list_result_t *result; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} model_response_cart_shipping_zones_list_t;

__attribute__((deprecated)) model_response_cart_shipping_zones_list_t *model_response_cart_shipping_zones_list_create(
    int return_code,
    char *return_message,
    pagination_t *pagination,
    response_cart_shipping_zones_list_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
);

void model_response_cart_shipping_zones_list_free(model_response_cart_shipping_zones_list_t *model_response_cart_shipping_zones_list);

model_response_cart_shipping_zones_list_t *model_response_cart_shipping_zones_list_parseFromJSON(cJSON *model_response_cart_shipping_zones_listJSON);

cJSON *model_response_cart_shipping_zones_list_convertToJSON(model_response_cart_shipping_zones_list_t *model_response_cart_shipping_zones_list);

#endif /* _model_response_cart_shipping_zones_list_H_ */

