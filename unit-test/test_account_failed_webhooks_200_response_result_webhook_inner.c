#ifndef account_failed_webhooks_200_response_result_webhook_inner_TEST
#define account_failed_webhooks_200_response_result_webhook_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_failed_webhooks_200_response_result_webhook_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_failed_webhooks_200_response_result_webhook_inner.h"
account_failed_webhooks_200_response_result_webhook_inner_t* instantiate_account_failed_webhooks_200_response_result_webhook_inner(int include_optional);

#include "test_a2_c_date_time.c"


account_failed_webhooks_200_response_result_webhook_inner_t* instantiate_account_failed_webhooks_200_response_result_webhook_inner(int include_optional) {
  account_failed_webhooks_200_response_result_webhook_inner_t* account_failed_webhooks_200_response_result_webhook_inner = NULL;
  if (include_optional) {
    account_failed_webhooks_200_response_result_webhook_inner = account_failed_webhooks_200_response_result_webhook_inner_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0)
    );
  } else {
    account_failed_webhooks_200_response_result_webhook_inner = account_failed_webhooks_200_response_result_webhook_inner_create(
      56,
      "0",
      NULL
    );
  }

  return account_failed_webhooks_200_response_result_webhook_inner;
}


#ifdef account_failed_webhooks_200_response_result_webhook_inner_MAIN

void test_account_failed_webhooks_200_response_result_webhook_inner(int include_optional) {
    account_failed_webhooks_200_response_result_webhook_inner_t* account_failed_webhooks_200_response_result_webhook_inner_1 = instantiate_account_failed_webhooks_200_response_result_webhook_inner(include_optional);

	cJSON* jsonaccount_failed_webhooks_200_response_result_webhook_inner_1 = account_failed_webhooks_200_response_result_webhook_inner_convertToJSON(account_failed_webhooks_200_response_result_webhook_inner_1);
	printf("account_failed_webhooks_200_response_result_webhook_inner :\n%s\n", cJSON_Print(jsonaccount_failed_webhooks_200_response_result_webhook_inner_1));
	account_failed_webhooks_200_response_result_webhook_inner_t* account_failed_webhooks_200_response_result_webhook_inner_2 = account_failed_webhooks_200_response_result_webhook_inner_parseFromJSON(jsonaccount_failed_webhooks_200_response_result_webhook_inner_1);
	cJSON* jsonaccount_failed_webhooks_200_response_result_webhook_inner_2 = account_failed_webhooks_200_response_result_webhook_inner_convertToJSON(account_failed_webhooks_200_response_result_webhook_inner_2);
	printf("repeating account_failed_webhooks_200_response_result_webhook_inner:\n%s\n", cJSON_Print(jsonaccount_failed_webhooks_200_response_result_webhook_inner_2));
}

int main() {
  test_account_failed_webhooks_200_response_result_webhook_inner(1);
  test_account_failed_webhooks_200_response_result_webhook_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_failed_webhooks_200_response_result_webhook_inner_MAIN
#endif // account_failed_webhooks_200_response_result_webhook_inner_TEST
