#ifndef customer_add_200_response_result_TEST
#define customer_add_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_add_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_add_200_response_result.h"
customer_add_200_response_result_t* instantiate_customer_add_200_response_result(int include_optional);



customer_add_200_response_result_t* instantiate_customer_add_200_response_result(int include_optional) {
  customer_add_200_response_result_t* customer_add_200_response_result = NULL;
  if (include_optional) {
    customer_add_200_response_result = customer_add_200_response_result_create(
      "0"
    );
  } else {
    customer_add_200_response_result = customer_add_200_response_result_create(
      "0"
    );
  }

  return customer_add_200_response_result;
}


#ifdef customer_add_200_response_result_MAIN

void test_customer_add_200_response_result(int include_optional) {
    customer_add_200_response_result_t* customer_add_200_response_result_1 = instantiate_customer_add_200_response_result(include_optional);

	cJSON* jsoncustomer_add_200_response_result_1 = customer_add_200_response_result_convertToJSON(customer_add_200_response_result_1);
	printf("customer_add_200_response_result :\n%s\n", cJSON_Print(jsoncustomer_add_200_response_result_1));
	customer_add_200_response_result_t* customer_add_200_response_result_2 = customer_add_200_response_result_parseFromJSON(jsoncustomer_add_200_response_result_1);
	cJSON* jsoncustomer_add_200_response_result_2 = customer_add_200_response_result_convertToJSON(customer_add_200_response_result_2);
	printf("repeating customer_add_200_response_result:\n%s\n", cJSON_Print(jsoncustomer_add_200_response_result_2));
}

int main() {
  test_customer_add_200_response_result(1);
  test_customer_add_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_add_200_response_result_MAIN
#endif // customer_add_200_response_result_TEST
