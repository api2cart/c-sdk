#ifndef customer_add_consents_inner_TEST
#define customer_add_consents_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_add_consents_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_add_consents_inner.h"
customer_add_consents_inner_t* instantiate_customer_add_consents_inner(int include_optional);



customer_add_consents_inner_t* instantiate_customer_add_consents_inner(int include_optional) {
  customer_add_consents_inner_t* customer_add_consents_inner = NULL;
  if (include_optional) {
    customer_add_consents_inner = customer_add_consents_inner_create(
      api2cart_openapi_customer_add_consents_inner_TYPE_email,
      "0",
      "0"
    );
  } else {
    customer_add_consents_inner = customer_add_consents_inner_create(
      api2cart_openapi_customer_add_consents_inner_TYPE_email,
      "0",
      "0"
    );
  }

  return customer_add_consents_inner;
}


#ifdef customer_add_consents_inner_MAIN

void test_customer_add_consents_inner(int include_optional) {
    customer_add_consents_inner_t* customer_add_consents_inner_1 = instantiate_customer_add_consents_inner(include_optional);

	cJSON* jsoncustomer_add_consents_inner_1 = customer_add_consents_inner_convertToJSON(customer_add_consents_inner_1);
	printf("customer_add_consents_inner :\n%s\n", cJSON_Print(jsoncustomer_add_consents_inner_1));
	customer_add_consents_inner_t* customer_add_consents_inner_2 = customer_add_consents_inner_parseFromJSON(jsoncustomer_add_consents_inner_1);
	cJSON* jsoncustomer_add_consents_inner_2 = customer_add_consents_inner_convertToJSON(customer_add_consents_inner_2);
	printf("repeating customer_add_consents_inner:\n%s\n", cJSON_Print(jsoncustomer_add_consents_inner_2));
}

int main() {
  test_customer_add_consents_inner(1);
  test_customer_add_consents_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_add_consents_inner_MAIN
#endif // customer_add_consents_inner_TEST
