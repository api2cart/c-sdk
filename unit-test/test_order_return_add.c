#ifndef order_return_add_TEST
#define order_return_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_return_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_return_add.h"
order_return_add_t* instantiate_order_return_add(int include_optional);



order_return_add_t* instantiate_order_return_add(int include_optional) {
  order_return_add_t* order_return_add = NULL;
  if (include_optional) {
    order_return_add = order_return_add_create(
      "25",
      "1",
      "RETURNED",
      "RETURNED",
      "broken",
      "broken",
      true,
      "Test",
      "This coole order",
      true,
      "ORDER_UNPAID",
      list_createList()
    );
  } else {
    order_return_add = order_return_add_create(
      "25",
      "1",
      "RETURNED",
      "RETURNED",
      "broken",
      "broken",
      true,
      "Test",
      "This coole order",
      true,
      "ORDER_UNPAID",
      list_createList()
    );
  }

  return order_return_add;
}


#ifdef order_return_add_MAIN

void test_order_return_add(int include_optional) {
    order_return_add_t* order_return_add_1 = instantiate_order_return_add(include_optional);

	cJSON* jsonorder_return_add_1 = order_return_add_convertToJSON(order_return_add_1);
	printf("order_return_add :\n%s\n", cJSON_Print(jsonorder_return_add_1));
	order_return_add_t* order_return_add_2 = order_return_add_parseFromJSON(jsonorder_return_add_1);
	cJSON* jsonorder_return_add_2 = order_return_add_convertToJSON(order_return_add_2);
	printf("repeating order_return_add:\n%s\n", cJSON_Print(jsonorder_return_add_2));
}

int main() {
  test_order_return_add(1);
  test_order_return_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_return_add_MAIN
#endif // order_return_add_TEST
