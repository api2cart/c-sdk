#ifndef webhook_TEST
#define webhook_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define webhook_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/webhook.h"
webhook_t* instantiate_webhook(int include_optional);



webhook_t* instantiate_webhook(int include_optional) {
  webhook_t* webhook = NULL;
  if (include_optional) {
    webhook = webhook_create(
      56,
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    webhook = webhook_create(
      56,
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return webhook;
}


#ifdef webhook_MAIN

void test_webhook(int include_optional) {
    webhook_t* webhook_1 = instantiate_webhook(include_optional);

	cJSON* jsonwebhook_1 = webhook_convertToJSON(webhook_1);
	printf("webhook :\n%s\n", cJSON_Print(jsonwebhook_1));
	webhook_t* webhook_2 = webhook_parseFromJSON(jsonwebhook_1);
	cJSON* jsonwebhook_2 = webhook_convertToJSON(webhook_2);
	printf("repeating webhook:\n%s\n", cJSON_Print(jsonwebhook_2));
}

int main() {
  test_webhook(1);
  test_webhook(0);

  printf("Hello world \n");
  return 0;
}

#endif // webhook_MAIN
#endif // webhook_TEST
