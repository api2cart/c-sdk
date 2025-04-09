#ifndef webhook_list_200_response_TEST
#define webhook_list_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_list_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_list_200_response.h"
webhook_list_200_response_t* instantiate_webhook_list_200_response(int include_optional);

#include "test_webhook_list_200_response_result.c"


webhook_list_200_response_t* instantiate_webhook_list_200_response(int include_optional) {
  webhook_list_200_response_t* webhook_list_200_response = NULL;
  if (include_optional) {
    webhook_list_200_response = webhook_list_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_webhook_list_200_response_result(0)
    );
  } else {
    webhook_list_200_response = webhook_list_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return webhook_list_200_response;
}


#ifdef webhook_list_200_response_MAIN

void test_webhook_list_200_response(int include_optional) {
    webhook_list_200_response_t* webhook_list_200_response_1 = instantiate_webhook_list_200_response(include_optional);

	cJSON* jsonwebhook_list_200_response_1 = webhook_list_200_response_convertToJSON(webhook_list_200_response_1);
	printf("webhook_list_200_response :\n%s\n", cJSON_Print(jsonwebhook_list_200_response_1));
	webhook_list_200_response_t* webhook_list_200_response_2 = webhook_list_200_response_parseFromJSON(jsonwebhook_list_200_response_1);
	cJSON* jsonwebhook_list_200_response_2 = webhook_list_200_response_convertToJSON(webhook_list_200_response_2);
	printf("repeating webhook_list_200_response:\n%s\n", cJSON_Print(jsonwebhook_list_200_response_2));
}

int main() {
  test_webhook_list_200_response(1);
  test_webhook_list_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_list_200_response_MAIN
#endif // webhook_list_200_response_TEST
