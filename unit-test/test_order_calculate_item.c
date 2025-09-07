#ifndef order_calculate_item_TEST
#define order_calculate_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_item.h"
order_calculate_item_t* instantiate_order_calculate_item(int include_optional);



order_calculate_item_t* instantiate_order_calculate_item(int include_optional) {
  order_calculate_item_t* order_calculate_item = NULL;
  if (include_optional) {
    order_calculate_item = order_calculate_item_create(
      "0",
      "0",
      "0",
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    order_calculate_item = order_calculate_item_create(
      "0",
      "0",
      "0",
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return order_calculate_item;
}


#ifdef order_calculate_item_MAIN

void test_order_calculate_item(int include_optional) {
    order_calculate_item_t* order_calculate_item_1 = instantiate_order_calculate_item(include_optional);

	cJSON* jsonorder_calculate_item_1 = order_calculate_item_convertToJSON(order_calculate_item_1);
	printf("order_calculate_item :\n%s\n", cJSON_Print(jsonorder_calculate_item_1));
	order_calculate_item_t* order_calculate_item_2 = order_calculate_item_parseFromJSON(jsonorder_calculate_item_1);
	cJSON* jsonorder_calculate_item_2 = order_calculate_item_convertToJSON(order_calculate_item_2);
	printf("repeating order_calculate_item:\n%s\n", cJSON_Print(jsonorder_calculate_item_2));
}

int main() {
  test_order_calculate_item(1);
  test_order_calculate_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_item_MAIN
#endif // order_calculate_item_TEST
