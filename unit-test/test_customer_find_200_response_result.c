#ifndef customer_find_200_response_result_TEST
#define customer_find_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_find_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_find_200_response_result.h"
customer_find_200_response_result_t* instantiate_customer_find_200_response_result(int include_optional);



customer_find_200_response_result_t* instantiate_customer_find_200_response_result(int include_optional) {
  customer_find_200_response_result_t* customer_find_200_response_result = NULL;
  if (include_optional) {
    customer_find_200_response_result = customer_find_200_response_result_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    customer_find_200_response_result = customer_find_200_response_result_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return customer_find_200_response_result;
}


#ifdef customer_find_200_response_result_MAIN

void test_customer_find_200_response_result(int include_optional) {
    customer_find_200_response_result_t* customer_find_200_response_result_1 = instantiate_customer_find_200_response_result(include_optional);

	cJSON* jsoncustomer_find_200_response_result_1 = customer_find_200_response_result_convertToJSON(customer_find_200_response_result_1);
	printf("customer_find_200_response_result :\n%s\n", cJSON_Print(jsoncustomer_find_200_response_result_1));
	customer_find_200_response_result_t* customer_find_200_response_result_2 = customer_find_200_response_result_parseFromJSON(jsoncustomer_find_200_response_result_1);
	cJSON* jsoncustomer_find_200_response_result_2 = customer_find_200_response_result_convertToJSON(customer_find_200_response_result_2);
	printf("repeating customer_find_200_response_result:\n%s\n", cJSON_Print(jsoncustomer_find_200_response_result_2));
}

int main() {
  test_customer_find_200_response_result(1);
  test_customer_find_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_find_200_response_result_MAIN
#endif // customer_find_200_response_result_TEST
