#ifndef customer_update_address_inner_TEST
#define customer_update_address_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_update_address_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_update_address_inner.h"
customer_update_address_inner_t* instantiate_customer_update_address_inner(int include_optional);



customer_update_address_inner_t* instantiate_customer_update_address_inner(int include_optional) {
  customer_update_address_inner_t* customer_update_address_inner = NULL;
  if (include_optional) {
    customer_update_address_inner = customer_update_address_inner_create(
      "7805807034473",
      "John",
      "Smith",
      "Samsung",
      "5758787",
      "5758787",
      "5758787",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "US",
      "IL",
      "12345",
      "`12345678`",
      "`123-456-7890`",
      "male",
      "Address alias",
      "billing",
      true
    );
  } else {
    customer_update_address_inner = customer_update_address_inner_create(
      "7805807034473",
      "John",
      "Smith",
      "Samsung",
      "5758787",
      "5758787",
      "5758787",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "US",
      "IL",
      "12345",
      "`12345678`",
      "`123-456-7890`",
      "male",
      "Address alias",
      "billing",
      true
    );
  }

  return customer_update_address_inner;
}


#ifdef customer_update_address_inner_MAIN

void test_customer_update_address_inner(int include_optional) {
    customer_update_address_inner_t* customer_update_address_inner_1 = instantiate_customer_update_address_inner(include_optional);

	cJSON* jsoncustomer_update_address_inner_1 = customer_update_address_inner_convertToJSON(customer_update_address_inner_1);
	printf("customer_update_address_inner :\n%s\n", cJSON_Print(jsoncustomer_update_address_inner_1));
	customer_update_address_inner_t* customer_update_address_inner_2 = customer_update_address_inner_parseFromJSON(jsoncustomer_update_address_inner_1);
	cJSON* jsoncustomer_update_address_inner_2 = customer_update_address_inner_convertToJSON(customer_update_address_inner_2);
	printf("repeating customer_update_address_inner:\n%s\n", cJSON_Print(jsoncustomer_update_address_inner_2));
}

int main() {
  test_customer_update_address_inner(1);
  test_customer_update_address_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_update_address_inner_MAIN
#endif // customer_update_address_inner_TEST
