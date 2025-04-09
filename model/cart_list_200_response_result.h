/*
 * cart_list_200_response_result.h
 *
 * 
 */

#ifndef _cart_list_200_response_result_H_
#define _cart_list_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_list_200_response_result_t cart_list_200_response_result_t;

#include "cart_list_200_response_result_supported_carts_inner.h"



typedef struct cart_list_200_response_result_t {
    list_t *supported_carts; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} cart_list_200_response_result_t;

__attribute__((deprecated)) cart_list_200_response_result_t *cart_list_200_response_result_create(
    list_t *supported_carts
);

void cart_list_200_response_result_free(cart_list_200_response_result_t *cart_list_200_response_result);

cart_list_200_response_result_t *cart_list_200_response_result_parseFromJSON(cJSON *cart_list_200_response_resultJSON);

cJSON *cart_list_200_response_result_convertToJSON(cart_list_200_response_result_t *cart_list_200_response_result);

#endif /* _cart_list_200_response_result_H_ */

