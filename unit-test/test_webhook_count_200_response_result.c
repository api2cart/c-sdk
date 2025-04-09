#ifndef webhook_count_200_response_result_TEST
#define webhook_count_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_count_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_count_200_response_result.h"
webhook_count_200_response_result_t* instantiate_webhook_count_200_response_result(int include_optional);



webhook_count_200_response_result_t* instantiate_webhook_count_200_response_result(int include_optional) {
  webhook_count_200_response_result_t* webhook_count_200_response_result = NULL;
  if (include_optional) {
    webhook_count_200_response_result = webhook_count_200_response_result_create(
      56
    );
  } else {
    webhook_count_200_response_result = webhook_count_200_response_result_create(
      56
    );
  }

  return webhook_count_200_response_result;
}


#ifdef webhook_count_200_response_result_MAIN

void test_webhook_count_200_response_result(int include_optional) {
    webhook_count_200_response_result_t* webhook_count_200_response_result_1 = instantiate_webhook_count_200_response_result(include_optional);

	cJSON* jsonwebhook_count_200_response_result_1 = webhook_count_200_response_result_convertToJSON(webhook_count_200_response_result_1);
	printf("webhook_count_200_response_result :\n%s\n", cJSON_Print(jsonwebhook_count_200_response_result_1));
	webhook_count_200_response_result_t* webhook_count_200_response_result_2 = webhook_count_200_response_result_parseFromJSON(jsonwebhook_count_200_response_result_1);
	cJSON* jsonwebhook_count_200_response_result_2 = webhook_count_200_response_result_convertToJSON(webhook_count_200_response_result_2);
	printf("repeating webhook_count_200_response_result:\n%s\n", cJSON_Print(jsonwebhook_count_200_response_result_2));
}

int main() {
  test_webhook_count_200_response_result(1);
  test_webhook_count_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_count_200_response_result_MAIN
#endif // webhook_count_200_response_result_TEST
