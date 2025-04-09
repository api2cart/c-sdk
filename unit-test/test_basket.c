#ifndef basket_TEST
#define basket_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket.h"
basket_t* instantiate_basket(int include_optional);

#include "test_base_customer.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_currency.c"


basket_t* instantiate_basket(int include_optional) {
  basket_t* basket = NULL;
  if (include_optional) {
    basket = basket_create(
      "0",
       // false, not to have infinite recursion
      instantiate_base_customer(0),
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_currency(0),
      list_createList(),
      0,
      0
    );
  } else {
    basket = basket_create(
      "0",
      NULL,
      "0",
      NULL,
      NULL,
      NULL,
      list_createList(),
      0,
      0
    );
  }

  return basket;
}


#ifdef basket_MAIN

void test_basket(int include_optional) {
    basket_t* basket_1 = instantiate_basket(include_optional);

	cJSON* jsonbasket_1 = basket_convertToJSON(basket_1);
	printf("basket :\n%s\n", cJSON_Print(jsonbasket_1));
	basket_t* basket_2 = basket_parseFromJSON(jsonbasket_1);
	cJSON* jsonbasket_2 = basket_convertToJSON(basket_2);
	printf("repeating basket:\n%s\n", cJSON_Print(jsonbasket_2));
}

int main() {
  test_basket(1);
  test_basket(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_MAIN
#endif // basket_TEST
