#ifndef customer_address_add_TEST
#define customer_address_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_address_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_address_add.h"
customer_address_add_t* instantiate_customer_address_add(int include_optional);



customer_address_add_t* instantiate_customer_address_add(int include_optional) {
  customer_address_add_t* customer_address_add = NULL;
  if (include_optional) {
    customer_address_add = customer_address_add_create(
      "5",
      "1",
      "John",
      "Smith",
      "Apple",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "US",
      "IL",
      "12345",
      "`123-456-7890`",
      types[0]=billing&types[1]=shipping,
      true,
      "56686868654",
      "56686868654",
      "54545787",
      "http://api2cart.com",
      "male",
      "`12345678`",
      "Address alias"
    );
  } else {
    customer_address_add = customer_address_add_create(
      "5",
      "1",
      "John",
      "Smith",
      "Apple",
      "Green str. 35",
      "Green str. 35",
      "Chicago",
      "US",
      "IL",
      "12345",
      "`123-456-7890`",
      types[0]=billing&types[1]=shipping,
      true,
      "56686868654",
      "56686868654",
      "54545787",
      "http://api2cart.com",
      "male",
      "`12345678`",
      "Address alias"
    );
  }

  return customer_address_add;
}


#ifdef customer_address_add_MAIN

void test_customer_address_add(int include_optional) {
    customer_address_add_t* customer_address_add_1 = instantiate_customer_address_add(include_optional);

	cJSON* jsoncustomer_address_add_1 = customer_address_add_convertToJSON(customer_address_add_1);
	printf("customer_address_add :\n%s\n", cJSON_Print(jsoncustomer_address_add_1));
	customer_address_add_t* customer_address_add_2 = customer_address_add_parseFromJSON(jsoncustomer_address_add_1);
	cJSON* jsoncustomer_address_add_2 = customer_address_add_convertToJSON(customer_address_add_2);
	printf("repeating customer_address_add:\n%s\n", cJSON_Print(jsoncustomer_address_add_2));
}

int main() {
  test_customer_address_add(1);
  test_customer_address_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_address_add_MAIN
#endif // customer_address_add_TEST
