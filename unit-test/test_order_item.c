#ifndef order_item_TEST
#define order_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_item.h"
order_item_t* instantiate_order_item(int include_optional);



order_item_t* instantiate_order_item(int include_optional) {
  order_item_t* order_item = NULL;
  if (include_optional) {
    order_item = order_item_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      "0",
      1.337,
      "0",
      "0",
      0,
      0
    );
  } else {
    order_item = order_item_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      list_createList(),
      "0",
      "0",
      1.337,
      "0",
      "0",
      0,
      0
    );
  }

  return order_item;
}


#ifdef order_item_MAIN

void test_order_item(int include_optional) {
    order_item_t* order_item_1 = instantiate_order_item(include_optional);

	cJSON* jsonorder_item_1 = order_item_convertToJSON(order_item_1);
	printf("order_item :\n%s\n", cJSON_Print(jsonorder_item_1));
	order_item_t* order_item_2 = order_item_parseFromJSON(jsonorder_item_1);
	cJSON* jsonorder_item_2 = order_item_convertToJSON(order_item_2);
	printf("repeating order_item:\n%s\n", cJSON_Print(jsonorder_item_2));
}

int main() {
  test_order_item(1);
  test_order_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_item_MAIN
#endif // order_item_TEST
