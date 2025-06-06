/*
 * account_supported_platforms_200_response.h
 *
 * 
 */

#ifndef _account_supported_platforms_200_response_H_
#define _account_supported_platforms_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_supported_platforms_200_response_t account_supported_platforms_200_response_t;

#include "account_supported_platforms_200_response_result.h"



typedef struct account_supported_platforms_200_response_t {
    int return_code; //numeric
    char *return_message; // string
    struct account_supported_platforms_200_response_result_t *result; //model

    int _library_owned; // Is the library responsible for freeing this object?
} account_supported_platforms_200_response_t;

__attribute__((deprecated)) account_supported_platforms_200_response_t *account_supported_platforms_200_response_create(
    int return_code,
    char *return_message,
    account_supported_platforms_200_response_result_t *result
);

void account_supported_platforms_200_response_free(account_supported_platforms_200_response_t *account_supported_platforms_200_response);

account_supported_platforms_200_response_t *account_supported_platforms_200_response_parseFromJSON(cJSON *account_supported_platforms_200_responseJSON);

cJSON *account_supported_platforms_200_response_convertToJSON(account_supported_platforms_200_response_t *account_supported_platforms_200_response);

#endif /* _account_supported_platforms_200_response_H_ */

