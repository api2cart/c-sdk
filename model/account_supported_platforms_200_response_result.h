/*
 * account_supported_platforms_200_response_result.h
 *
 * 
 */

#ifndef _account_supported_platforms_200_response_result_H_
#define _account_supported_platforms_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_supported_platforms_200_response_result_t account_supported_platforms_200_response_result_t;

#include "account_supported_platforms_200_response_result_supported_platforms_inner.h"



typedef struct account_supported_platforms_200_response_result_t {
    list_t *supported_platforms; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} account_supported_platforms_200_response_result_t;

__attribute__((deprecated)) account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_create(
    list_t *supported_platforms
);

void account_supported_platforms_200_response_result_free(account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result);

account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result_parseFromJSON(cJSON *account_supported_platforms_200_response_resultJSON);

cJSON *account_supported_platforms_200_response_result_convertToJSON(account_supported_platforms_200_response_result_t *account_supported_platforms_200_response_result);

#endif /* _account_supported_platforms_200_response_result_H_ */

