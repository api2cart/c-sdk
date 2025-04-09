#ifndef customer_group_add_200_response_result_TEST
#define customer_group_add_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_group_add_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_group_add_200_response_result.h"
customer_group_add_200_response_result_t* instantiate_customer_group_add_200_response_result(int include_optional);



customer_group_add_200_response_result_t* instantiate_customer_group_add_200_response_result(int include_optional) {
  customer_group_add_200_response_result_t* customer_group_add_200_response_result = NULL;
  if (include_optional) {
    customer_group_add_200_response_result = customer_group_add_200_response_result_create(
      "0"
    );
  } else {
    customer_group_add_200_response_result = customer_group_add_200_response_result_create(
      "0"
    );
  }

  return customer_group_add_200_response_result;
}


#ifdef customer_group_add_200_response_result_MAIN

void test_customer_group_add_200_response_result(int include_optional) {
    customer_group_add_200_response_result_t* customer_group_add_200_response_result_1 = instantiate_customer_group_add_200_response_result(include_optional);

	cJSON* jsoncustomer_group_add_200_response_result_1 = customer_group_add_200_response_result_convertToJSON(customer_group_add_200_response_result_1);
	printf("customer_group_add_200_response_result :\n%s\n", cJSON_Print(jsoncustomer_group_add_200_response_result_1));
	customer_group_add_200_response_result_t* customer_group_add_200_response_result_2 = customer_group_add_200_response_result_parseFromJSON(jsoncustomer_group_add_200_response_result_1);
	cJSON* jsoncustomer_group_add_200_response_result_2 = customer_group_add_200_response_result_convertToJSON(customer_group_add_200_response_result_2);
	printf("repeating customer_group_add_200_response_result:\n%s\n", cJSON_Print(jsoncustomer_group_add_200_response_result_2));
}

int main() {
  test_customer_group_add_200_response_result(1);
  test_customer_group_add_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_group_add_200_response_result_MAIN
#endif // customer_group_add_200_response_result_TEST
