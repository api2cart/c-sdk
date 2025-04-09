/*
 * account_supported_platforms_200_response_result_supported_platforms_inner.h
 *
 * 
 */

#ifndef _account_supported_platforms_200_response_result_supported_platforms_inner_H_
#define _account_supported_platforms_200_response_result_supported_platforms_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_supported_platforms_200_response_result_supported_platforms_inner_t account_supported_platforms_200_response_result_supported_platforms_inner_t;

#include "account_supported_platforms_200_response_result_supported_platforms_inner_params.h"



typedef struct account_supported_platforms_200_response_result_supported_platforms_inner_t {
    char *cart_id; // string
    char *cart_name; // string
    char *cart_versions; // string
    char *cart_method; // string
    struct account_supported_platforms_200_response_result_supported_platforms_inner_params_t *params; //model

    int _library_owned; // Is the library responsible for freeing this object?
} account_supported_platforms_200_response_result_supported_platforms_inner_t;

__attribute__((deprecated)) account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_create(
    char *cart_id,
    char *cart_name,
    char *cart_versions,
    char *cart_method,
    account_supported_platforms_200_response_result_supported_platforms_inner_params_t *params
);

void account_supported_platforms_200_response_result_supported_platforms_inner_free(account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner);

account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner_parseFromJSON(cJSON *account_supported_platforms_200_response_result_supported_platforms_innerJSON);

cJSON *account_supported_platforms_200_response_result_supported_platforms_inner_convertToJSON(account_supported_platforms_200_response_result_supported_platforms_inner_t *account_supported_platforms_200_response_result_supported_platforms_inner);

#endif /* _account_supported_platforms_200_response_result_supported_platforms_inner_H_ */

