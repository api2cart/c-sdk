/*
 * account_failed_webhooks_200_response_result_webhook_inner.h
 *
 * 
 */

#ifndef _account_failed_webhooks_200_response_result_webhook_inner_H_
#define _account_failed_webhooks_200_response_result_webhook_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_failed_webhooks_200_response_result_webhook_inner_t account_failed_webhooks_200_response_result_webhook_inner_t;

#include "a2_c_date_time.h"



typedef struct account_failed_webhooks_200_response_result_webhook_inner_t {
    int webhook_id; //numeric
    char *entity_id; // string
    struct a2_c_date_time_t *time; //model

    int _library_owned; // Is the library responsible for freeing this object?
} account_failed_webhooks_200_response_result_webhook_inner_t;

__attribute__((deprecated)) account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_create(
    int webhook_id,
    char *entity_id,
    a2_c_date_time_t *time
);

void account_failed_webhooks_200_response_result_webhook_inner_free(account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner);

account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner_parseFromJSON(cJSON *account_failed_webhooks_200_response_result_webhook_innerJSON);

cJSON *account_failed_webhooks_200_response_result_webhook_inner_convertToJSON(account_failed_webhooks_200_response_result_webhook_inner_t *account_failed_webhooks_200_response_result_webhook_inner);

#endif /* _account_failed_webhooks_200_response_result_webhook_inner_H_ */

