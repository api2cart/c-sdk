/*
 * account_cart_add_200_response_result.h
 *
 * 
 */

#ifndef _account_cart_add_200_response_result_H_
#define _account_cart_add_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_cart_add_200_response_result_t account_cart_add_200_response_result_t;




typedef struct account_cart_add_200_response_result_t {
    char *store_key; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_cart_add_200_response_result_t;

__attribute__((deprecated)) account_cart_add_200_response_result_t *account_cart_add_200_response_result_create(
    char *store_key
);

void account_cart_add_200_response_result_free(account_cart_add_200_response_result_t *account_cart_add_200_response_result);

account_cart_add_200_response_result_t *account_cart_add_200_response_result_parseFromJSON(cJSON *account_cart_add_200_response_resultJSON);

cJSON *account_cart_add_200_response_result_convertToJSON(account_cart_add_200_response_result_t *account_cart_add_200_response_result);

#endif /* _account_cart_add_200_response_result_H_ */

