#ifndef webhook_list_200_response_result_TEST
#define webhook_list_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_list_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook_list_200_response_result.h"
webhook_list_200_response_result_t* instantiate_webhook_list_200_response_result(int include_optional);



webhook_list_200_response_result_t* instantiate_webhook_list_200_response_result(int include_optional) {
  webhook_list_200_response_result_t* webhook_list_200_response_result = NULL;
  if (include_optional) {
    webhook_list_200_response_result = webhook_list_200_response_result_create(
      list_createList()
    );
  } else {
    webhook_list_200_response_result = webhook_list_200_response_result_create(
      list_createList()
    );
  }

  return webhook_list_200_response_result;
}


#ifdef webhook_list_200_response_result_MAIN

void test_webhook_list_200_response_result(int include_optional) {
    webhook_list_200_response_result_t* webhook_list_200_response_result_1 = instantiate_webhook_list_200_response_result(include_optional);

	cJSON* jsonwebhook_list_200_response_result_1 = webhook_list_200_response_result_convertToJSON(webhook_list_200_response_result_1);
	printf("webhook_list_200_response_result :\n%s\n", cJSON_Print(jsonwebhook_list_200_response_result_1));
	webhook_list_200_response_result_t* webhook_list_200_response_result_2 = webhook_list_200_response_result_parseFromJSON(jsonwebhook_list_200_response_result_1);
	cJSON* jsonwebhook_list_200_response_result_2 = webhook_list_200_response_result_convertToJSON(webhook_list_200_response_result_2);
	printf("repeating webhook_list_200_response_result:\n%s\n", cJSON_Print(jsonwebhook_list_200_response_result_2));
}

int main() {
  test_webhook_list_200_response_result(1);
  test_webhook_list_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_list_200_response_result_MAIN
#endif // webhook_list_200_response_result_TEST
