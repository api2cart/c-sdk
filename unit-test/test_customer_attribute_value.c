#ifndef customer_attribute_value_TEST
#define customer_attribute_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_attribute_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_attribute_value.h"
customer_attribute_value_t* instantiate_customer_attribute_value(int include_optional);



customer_attribute_value_t* instantiate_customer_attribute_value(int include_optional) {
  customer_attribute_value_t* customer_attribute_value = NULL;
  if (include_optional) {
    customer_attribute_value = customer_attribute_value_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    customer_attribute_value = customer_attribute_value_create(
      "0",
      "0",
      0,
      0
    );
  }

  return customer_attribute_value;
}


#ifdef customer_attribute_value_MAIN

void test_customer_attribute_value(int include_optional) {
    customer_attribute_value_t* customer_attribute_value_1 = instantiate_customer_attribute_value(include_optional);

	cJSON* jsoncustomer_attribute_value_1 = customer_attribute_value_convertToJSON(customer_attribute_value_1);
	printf("customer_attribute_value :\n%s\n", cJSON_Print(jsoncustomer_attribute_value_1));
	customer_attribute_value_t* customer_attribute_value_2 = customer_attribute_value_parseFromJSON(jsoncustomer_attribute_value_1);
	cJSON* jsoncustomer_attribute_value_2 = customer_attribute_value_convertToJSON(customer_attribute_value_2);
	printf("repeating customer_attribute_value:\n%s\n", cJSON_Print(jsoncustomer_attribute_value_2));
}

int main() {
  test_customer_attribute_value(1);
  test_customer_attribute_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_attribute_value_MAIN
#endif // customer_attribute_value_TEST
