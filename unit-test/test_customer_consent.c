#ifndef customer_consent_TEST
#define customer_consent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_consent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_consent.h"
customer_consent_t* instantiate_customer_consent(int include_optional);



customer_consent_t* instantiate_customer_consent(int include_optional) {
  customer_consent_t* customer_consent = NULL;
  if (include_optional) {
    customer_consent = customer_consent_create(
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
    customer_consent = customer_consent_create(
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

  return customer_consent;
}


#ifdef customer_consent_MAIN

void test_customer_consent(int include_optional) {
    customer_consent_t* customer_consent_1 = instantiate_customer_consent(include_optional);

	cJSON* jsoncustomer_consent_1 = customer_consent_convertToJSON(customer_consent_1);
	printf("customer_consent :\n%s\n", cJSON_Print(jsoncustomer_consent_1));
	customer_consent_t* customer_consent_2 = customer_consent_parseFromJSON(jsoncustomer_consent_1);
	cJSON* jsoncustomer_consent_2 = customer_consent_convertToJSON(customer_consent_2);
	printf("repeating customer_consent:\n%s\n", cJSON_Print(jsoncustomer_consent_2));
}

int main() {
  test_customer_consent(1);
  test_customer_consent(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_consent_MAIN
#endif // customer_consent_TEST
