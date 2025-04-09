#ifndef order_status_history_item_TEST
#define order_status_history_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_status_history_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_status_history_item.h"
order_status_history_item_t* instantiate_order_status_history_item(int include_optional);

#include "test_a2_c_date_time.c"


order_status_history_item_t* instantiate_order_status_history_item(int include_optional) {
  order_status_history_item_t* order_status_history_item = NULL;
  if (include_optional) {
    order_status_history_item = order_status_history_item_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      1,
      "0",
      0,
      0
    );
  } else {
    order_status_history_item = order_status_history_item_create(
      "0",
      "0",
      NULL,
      1,
      "0",
      0,
      0
    );
  }

  return order_status_history_item;
}


#ifdef order_status_history_item_MAIN

void test_order_status_history_item(int include_optional) {
    order_status_history_item_t* order_status_history_item_1 = instantiate_order_status_history_item(include_optional);

	cJSON* jsonorder_status_history_item_1 = order_status_history_item_convertToJSON(order_status_history_item_1);
	printf("order_status_history_item :\n%s\n", cJSON_Print(jsonorder_status_history_item_1));
	order_status_history_item_t* order_status_history_item_2 = order_status_history_item_parseFromJSON(jsonorder_status_history_item_1);
	cJSON* jsonorder_status_history_item_2 = order_status_history_item_convertToJSON(order_status_history_item_2);
	printf("repeating order_status_history_item:\n%s\n", cJSON_Print(jsonorder_status_history_item_2));
}

int main() {
  test_order_status_history_item(1);
  test_order_status_history_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_status_history_item_MAIN
#endif // order_status_history_item_TEST
