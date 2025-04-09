#ifndef basket_item_option_TEST
#define basket_item_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_item_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket_item_option.h"
basket_item_option_t* instantiate_basket_item_option(int include_optional);



basket_item_option_t* instantiate_basket_item_option(int include_optional) {
  basket_item_option_t* basket_item_option = NULL;
  if (include_optional) {
    basket_item_option = basket_item_option_create(
      "0",
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  } else {
    basket_item_option = basket_item_option_create(
      "0",
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  }

  return basket_item_option;
}


#ifdef basket_item_option_MAIN

void test_basket_item_option(int include_optional) {
    basket_item_option_t* basket_item_option_1 = instantiate_basket_item_option(include_optional);

	cJSON* jsonbasket_item_option_1 = basket_item_option_convertToJSON(basket_item_option_1);
	printf("basket_item_option :\n%s\n", cJSON_Print(jsonbasket_item_option_1));
	basket_item_option_t* basket_item_option_2 = basket_item_option_parseFromJSON(jsonbasket_item_option_1);
	cJSON* jsonbasket_item_option_2 = basket_item_option_convertToJSON(basket_item_option_2);
	printf("repeating basket_item_option:\n%s\n", cJSON_Print(jsonbasket_item_option_2));
}

int main() {
  test_basket_item_option(1);
  test_basket_item_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_item_option_MAIN
#endif // basket_item_option_TEST
