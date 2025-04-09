/*
 * cart_list_200_response_result_supported_carts_inner.h
 *
 * 
 */

#ifndef _cart_list_200_response_result_supported_carts_inner_H_
#define _cart_list_200_response_result_supported_carts_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_list_200_response_result_supported_carts_inner_t cart_list_200_response_result_supported_carts_inner_t;




typedef struct cart_list_200_response_result_supported_carts_inner_t {
    char *cart_id; // string
    char *cart_name; // string
    char *cart_versions; // string
    list_t *params; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} cart_list_200_response_result_supported_carts_inner_t;

__attribute__((deprecated)) cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_create(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    list_t *params
);

void cart_list_200_response_result_supported_carts_inner_free(cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner);

cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner_parseFromJSON(cJSON *cart_list_200_response_result_supported_carts_innerJSON);

cJSON *cart_list_200_response_result_supported_carts_inner_convertToJSON(cart_list_200_response_result_supported_carts_inner_t *cart_list_200_response_result_supported_carts_inner);

#endif /* _cart_list_200_response_result_supported_carts_inner_H_ */

