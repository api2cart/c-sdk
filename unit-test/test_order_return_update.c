#ifndef order_return_update_TEST
#define order_return_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_return_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_return_update.h"
order_return_update_t* instantiate_order_return_update(int include_optional);



order_return_update_t* instantiate_order_return_update(int include_optional) {
  order_return_update_t* order_return_update = NULL;
  if (include_optional) {
    order_return_update = order_return_update_create(
      "200000002",
      "25",
      "1",
      true,
      "RETURNED",
      "Test",
      "This coole order",
      true,
      "ORDER_UNPAID",
      list_createList()
    );
  } else {
    order_return_update = order_return_update_create(
      "200000002",
      "25",
      "1",
      true,
      "RETURNED",
      "Test",
      "This coole order",
      true,
      "ORDER_UNPAID",
      list_createList()
    );
  }

  return order_return_update;
}


#ifdef order_return_update_MAIN

void test_order_return_update(int include_optional) {
    order_return_update_t* order_return_update_1 = instantiate_order_return_update(include_optional);

	cJSON* jsonorder_return_update_1 = order_return_update_convertToJSON(order_return_update_1);
	printf("order_return_update :\n%s\n", cJSON_Print(jsonorder_return_update_1));
	order_return_update_t* order_return_update_2 = order_return_update_parseFromJSON(jsonorder_return_update_1);
	cJSON* jsonorder_return_update_2 = order_return_update_convertToJSON(order_return_update_2);
	printf("repeating order_return_update:\n%s\n", cJSON_Print(jsonorder_return_update_2));
}

int main() {
  test_order_return_update(1);
  test_order_return_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_return_update_MAIN
#endif // order_return_update_TEST
