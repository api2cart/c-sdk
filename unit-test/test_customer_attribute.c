#ifndef customer_attribute_TEST
#define customer_attribute_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_attribute_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_attribute.h"
customer_attribute_t* instantiate_customer_attribute(int include_optional);



customer_attribute_t* instantiate_customer_attribute(int include_optional) {
  customer_attribute_t* customer_attribute = NULL;
  if (include_optional) {
    customer_attribute = customer_attribute_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    customer_attribute = customer_attribute_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return customer_attribute;
}


#ifdef customer_attribute_MAIN

void test_customer_attribute(int include_optional) {
    customer_attribute_t* customer_attribute_1 = instantiate_customer_attribute(include_optional);

	cJSON* jsoncustomer_attribute_1 = customer_attribute_convertToJSON(customer_attribute_1);
	printf("customer_attribute :\n%s\n", cJSON_Print(jsoncustomer_attribute_1));
	customer_attribute_t* customer_attribute_2 = customer_attribute_parseFromJSON(jsoncustomer_attribute_1);
	cJSON* jsoncustomer_attribute_2 = customer_attribute_convertToJSON(customer_attribute_2);
	printf("repeating customer_attribute:\n%s\n", cJSON_Print(jsoncustomer_attribute_2));
}

int main() {
  test_customer_attribute(1);
  test_customer_attribute(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_attribute_MAIN
#endif // customer_attribute_TEST
