#ifndef customer_wish_list_TEST
#define customer_wish_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_wish_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_wish_list.h"
customer_wish_list_t* instantiate_customer_wish_list(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


customer_wish_list_t* instantiate_customer_wish_list(int include_optional) {
  customer_wish_list_t* customer_wish_list = NULL;
  if (include_optional) {
    customer_wish_list = customer_wish_list_create(
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      list_createList(),
      0,
      0
    );
  } else {
    customer_wish_list = customer_wish_list_create(
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      list_createList(),
      0,
      0
    );
  }

  return customer_wish_list;
}


#ifdef customer_wish_list_MAIN

void test_customer_wish_list(int include_optional) {
    customer_wish_list_t* customer_wish_list_1 = instantiate_customer_wish_list(include_optional);

	cJSON* jsoncustomer_wish_list_1 = customer_wish_list_convertToJSON(customer_wish_list_1);
	printf("customer_wish_list :\n%s\n", cJSON_Print(jsoncustomer_wish_list_1));
	customer_wish_list_t* customer_wish_list_2 = customer_wish_list_parseFromJSON(jsoncustomer_wish_list_1);
	cJSON* jsoncustomer_wish_list_2 = customer_wish_list_convertToJSON(customer_wish_list_2);
	printf("repeating customer_wish_list:\n%s\n", cJSON_Print(jsoncustomer_wish_list_2));
}

int main() {
  test_customer_wish_list(1);
  test_customer_wish_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_wish_list_MAIN
#endif // customer_wish_list_TEST
