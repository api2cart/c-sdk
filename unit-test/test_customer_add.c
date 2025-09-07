#ifndef customer_add_TEST
#define customer_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_add.h"
customer_add_t* instantiate_customer_add(int include_optional);



customer_add_t* instantiate_customer_add(int include_optional) {
  customer_add_t* customer_add = NULL;
  if (include_optional) {
    customer_add = customer_add_create(
      "mail@example.com",
      "John",
      "Smith",
      "fd5gfd5g75fd",
      "Register",
      "3",
      "1,2,3",
      "enabled",
      "2014-01-30 15:58:41",
      "2014-07-30 15:58:41",
      "makaka",
      "2013-02-26 15:00:00",
      "2013-02-26 15:00:00",
      true,
      list_createList(),
      "male",
      "http://api2cart.com",
      "54545787",
      "Apple",
      "56686868654",
      "Customer note",
      "US",
      "1",
      list_createList()
    );
  } else {
    customer_add = customer_add_create(
      "mail@example.com",
      "John",
      "Smith",
      "fd5gfd5g75fd",
      "Register",
      "3",
      "1,2,3",
      "enabled",
      "2014-01-30 15:58:41",
      "2014-07-30 15:58:41",
      "makaka",
      "2013-02-26 15:00:00",
      "2013-02-26 15:00:00",
      true,
      list_createList(),
      "male",
      "http://api2cart.com",
      "54545787",
      "Apple",
      "56686868654",
      "Customer note",
      "US",
      "1",
      list_createList()
    );
  }

  return customer_add;
}


#ifdef customer_add_MAIN

void test_customer_add(int include_optional) {
    customer_add_t* customer_add_1 = instantiate_customer_add(include_optional);

	cJSON* jsoncustomer_add_1 = customer_add_convertToJSON(customer_add_1);
	printf("customer_add :\n%s\n", cJSON_Print(jsoncustomer_add_1));
	customer_add_t* customer_add_2 = customer_add_parseFromJSON(jsoncustomer_add_1);
	cJSON* jsoncustomer_add_2 = customer_add_convertToJSON(customer_add_2);
	printf("repeating customer_add:\n%s\n", cJSON_Print(jsoncustomer_add_2));
}

int main() {
  test_customer_add(1);
  test_customer_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_add_MAIN
#endif // customer_add_TEST
