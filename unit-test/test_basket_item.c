#ifndef basket_item_TEST
#define basket_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket_item.h"
basket_item_t* instantiate_basket_item(int include_optional);



basket_item_t* instantiate_basket_item(int include_optional) {
  basket_item_t* basket_item = NULL;
  if (include_optional) {
    basket_item = basket_item_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      1.337,
      list_createList(),
      0,
      0
    );
  } else {
    basket_item = basket_item_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      "0",
      1.337,
      list_createList(),
      0,
      0
    );
  }

  return basket_item;
}


#ifdef basket_item_MAIN

void test_basket_item(int include_optional) {
    basket_item_t* basket_item_1 = instantiate_basket_item(include_optional);

	cJSON* jsonbasket_item_1 = basket_item_convertToJSON(basket_item_1);
	printf("basket_item :\n%s\n", cJSON_Print(jsonbasket_item_1));
	basket_item_t* basket_item_2 = basket_item_parseFromJSON(jsonbasket_item_1);
	cJSON* jsonbasket_item_2 = basket_item_convertToJSON(basket_item_2);
	printf("repeating basket_item:\n%s\n", cJSON_Print(jsonbasket_item_2));
}

int main() {
  test_basket_item(1);
  test_basket_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_item_MAIN
#endif // basket_item_TEST
