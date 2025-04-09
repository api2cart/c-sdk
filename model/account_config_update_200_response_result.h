/*
 * account_config_update_200_response_result.h
 *
 * 
 */

#ifndef _account_config_update_200_response_result_H_
#define _account_config_update_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_config_update_200_response_result_t account_config_update_200_response_result_t;




typedef struct account_config_update_200_response_result_t {
    int updated_items; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} account_config_update_200_response_result_t;

__attribute__((deprecated)) account_config_update_200_response_result_t *account_config_update_200_response_result_create(
    int updated_items
);

void account_config_update_200_response_result_free(account_config_update_200_response_result_t *account_config_update_200_response_result);

account_config_update_200_response_result_t *account_config_update_200_response_result_parseFromJSON(cJSON *account_config_update_200_response_resultJSON);

cJSON *account_config_update_200_response_result_convertToJSON(account_config_update_200_response_result_t *account_config_update_200_response_result);

#endif /* _account_config_update_200_response_result_H_ */

