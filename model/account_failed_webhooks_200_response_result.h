/*
 * account_failed_webhooks_200_response_result.h
 *
 * 
 */

#ifndef _account_failed_webhooks_200_response_result_H_
#define _account_failed_webhooks_200_response_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_failed_webhooks_200_response_result_t account_failed_webhooks_200_response_result_t;

#include "account_failed_webhooks_200_response_result_webhook_inner.h"



typedef struct account_failed_webhooks_200_response_result_t {
    char *all_failed_webhook; // string
    list_t *webhook; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} account_failed_webhooks_200_response_result_t;

__attribute__((deprecated)) account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_create(
    char *all_failed_webhook,
    list_t *webhook
);

void account_failed_webhooks_200_response_result_free(account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result);

account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result_parseFromJSON(cJSON *account_failed_webhooks_200_response_resultJSON);

cJSON *account_failed_webhooks_200_response_result_convertToJSON(account_failed_webhooks_200_response_result_t *account_failed_webhooks_200_response_result);

#endif /* _account_failed_webhooks_200_response_result_H_ */

