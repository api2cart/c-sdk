/*
 * model_response_marketplace_product_find.h
 *
 * 
 */

#ifndef _model_response_marketplace_product_find_H_
#define _model_response_marketplace_product_find_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct model_response_marketplace_product_find_t model_response_marketplace_product_find_t;

#include "object.h"
#include "pagination.h"
#include "response_marketplace_product_find_result.h"



typedef struct model_response_marketplace_product_find_t {
    int return_code; //numeric
    char *return_message; // string
    struct pagination_t *pagination; //model
    struct response_marketplace_product_find_result_t *result; //model
    object_t *additional_fields; //object
    object_t *custom_fields; //object

    int _library_owned; // Is the library responsible for freeing this object?
} model_response_marketplace_product_find_t;

__attribute__((deprecated)) model_response_marketplace_product_find_t *model_response_marketplace_product_find_create(
    int return_code,
    char *return_message,
    pagination_t *pagination,
    response_marketplace_product_find_result_t *result,
    object_t *additional_fields,
    object_t *custom_fields
);

void model_response_marketplace_product_find_free(model_response_marketplace_product_find_t *model_response_marketplace_product_find);

model_response_marketplace_product_find_t *model_response_marketplace_product_find_parseFromJSON(cJSON *model_response_marketplace_product_findJSON);

cJSON *model_response_marketplace_product_find_convertToJSON(model_response_marketplace_product_find_t *model_response_marketplace_product_find);

#endif /* _model_response_marketplace_product_find_H_ */

