/*
 * account_cart_list_200_response_result_carts_inner.h
 *
 * 
 */

#ifndef _account_cart_list_200_response_result_carts_inner_H_
#define _account_cart_list_200_response_result_carts_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_cart_list_200_response_result_carts_inner_t account_cart_list_200_response_result_carts_inner_t;




typedef struct account_cart_list_200_response_result_carts_inner_t {
    char *id; // string
    char *url; // string
    char *store_key; // string
    char *cart_id; // string
    char *total_calls; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_cart_list_200_response_result_carts_inner_t;

__attribute__((deprecated)) account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_create(
    char *id,
    char *url,
    char *store_key,
    char *cart_id,
    char *total_calls
);

void account_cart_list_200_response_result_carts_inner_free(account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner);

account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner_parseFromJSON(cJSON *account_cart_list_200_response_result_carts_innerJSON);

cJSON *account_cart_list_200_response_result_carts_inner_convertToJSON(account_cart_list_200_response_result_carts_inner_t *account_cart_list_200_response_result_carts_inner);

#endif /* _account_cart_list_200_response_result_carts_inner_H_ */

