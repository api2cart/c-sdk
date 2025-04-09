#ifndef customer_group_TEST
#define customer_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_group.h"
customer_group_t* instantiate_customer_group(int include_optional);



customer_group_t* instantiate_customer_group(int include_optional) {
  customer_group_t* customer_group = NULL;
  if (include_optional) {
    customer_group = customer_group_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    customer_group = customer_group_create(
      "0",
      "0",
      0,
      0
    );
  }

  return customer_group;
}


#ifdef customer_group_MAIN

void test_customer_group(int include_optional) {
    customer_group_t* customer_group_1 = instantiate_customer_group(include_optional);

	cJSON* jsoncustomer_group_1 = customer_group_convertToJSON(customer_group_1);
	printf("customer_group :\n%s\n", cJSON_Print(jsoncustomer_group_1));
	customer_group_t* customer_group_2 = customer_group_parseFromJSON(jsoncustomer_group_1);
	cJSON* jsoncustomer_group_2 = customer_group_convertToJSON(customer_group_2);
	printf("repeating customer_group:\n%s\n", cJSON_Print(jsoncustomer_group_2));
}

int main() {
  test_customer_group(1);
  test_customer_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_group_MAIN
#endif // customer_group_TEST
