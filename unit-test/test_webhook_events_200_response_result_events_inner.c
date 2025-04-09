#ifndef webhook_events_200_response_result_events_inner_TEST
#define webhook_events_200_response_result_events_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_events_200_response_result_events_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_events_200_response_result_events_inner.h"
webhook_events_200_response_result_events_inner_t* instantiate_webhook_events_200_response_result_events_inner(int include_optional);



webhook_events_200_response_result_events_inner_t* instantiate_webhook_events_200_response_result_events_inner(int include_optional) {
  webhook_events_200_response_result_events_inner_t* webhook_events_200_response_result_events_inner = NULL;
  if (include_optional) {
    webhook_events_200_response_result_events_inner = webhook_events_200_response_result_events_inner_create(
      "0",
      "0",
      "0"
    );
  } else {
    webhook_events_200_response_result_events_inner = webhook_events_200_response_result_events_inner_create(
      "0",
      "0",
      "0"
    );
  }

  return webhook_events_200_response_result_events_inner;
}


#ifdef webhook_events_200_response_result_events_inner_MAIN

void test_webhook_events_200_response_result_events_inner(int include_optional) {
    webhook_events_200_response_result_events_inner_t* webhook_events_200_response_result_events_inner_1 = instantiate_webhook_events_200_response_result_events_inner(include_optional);

	cJSON* jsonwebhook_events_200_response_result_events_inner_1 = webhook_events_200_response_result_events_inner_convertToJSON(webhook_events_200_response_result_events_inner_1);
	printf("webhook_events_200_response_result_events_inner :\n%s\n", cJSON_Print(jsonwebhook_events_200_response_result_events_inner_1));
	webhook_events_200_response_result_events_inner_t* webhook_events_200_response_result_events_inner_2 = webhook_events_200_response_result_events_inner_parseFromJSON(jsonwebhook_events_200_response_result_events_inner_1);
	cJSON* jsonwebhook_events_200_response_result_events_inner_2 = webhook_events_200_response_result_events_inner_convertToJSON(webhook_events_200_response_result_events_inner_2);
	printf("repeating webhook_events_200_response_result_events_inner:\n%s\n", cJSON_Print(jsonwebhook_events_200_response_result_events_inner_2));
}

int main() {
  test_webhook_events_200_response_result_events_inner(1);
  test_webhook_events_200_response_result_events_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_events_200_response_result_events_inner_MAIN
#endif // webhook_events_200_response_result_events_inner_TEST
