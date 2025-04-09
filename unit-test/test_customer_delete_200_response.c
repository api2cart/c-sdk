#ifndef customer_delete_200_response_TEST
#define customer_delete_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_delete_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_delete_200_response.h"
customer_delete_200_response_t* instantiate_customer_delete_200_response(int include_optional);

#include "test_customer_delete_200_response_result.c"


customer_delete_200_response_t* instantiate_customer_delete_200_response(int include_optional) {
  customer_delete_200_response_t* customer_delete_200_response = NULL;
  if (include_optional) {
    customer_delete_200_response = customer_delete_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_customer_delete_200_response_result(0)
    );
  } else {
    customer_delete_200_response = customer_delete_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return customer_delete_200_response;
}


#ifdef customer_delete_200_response_MAIN

void test_customer_delete_200_response(int include_optional) {
    customer_delete_200_response_t* customer_delete_200_response_1 = instantiate_customer_delete_200_response(include_optional);

	cJSON* jsoncustomer_delete_200_response_1 = customer_delete_200_response_convertToJSON(customer_delete_200_response_1);
	printf("customer_delete_200_response :\n%s\n", cJSON_Print(jsoncustomer_delete_200_response_1));
	customer_delete_200_response_t* customer_delete_200_response_2 = customer_delete_200_response_parseFromJSON(jsoncustomer_delete_200_response_1);
	cJSON* jsoncustomer_delete_200_response_2 = customer_delete_200_response_convertToJSON(customer_delete_200_response_2);
	printf("repeating customer_delete_200_response:\n%s\n", cJSON_Print(jsoncustomer_delete_200_response_2));
}

int main() {
  test_customer_delete_200_response(1);
  test_customer_delete_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_delete_200_response_MAIN
#endif // customer_delete_200_response_TEST
