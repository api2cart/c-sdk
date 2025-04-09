#ifndef order_status_refund_item_TEST
#define order_status_refund_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_status_refund_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_status_refund_item.h"
order_status_refund_item_t* instantiate_order_status_refund_item(int include_optional);



order_status_refund_item_t* instantiate_order_status_refund_item(int include_optional) {
  order_status_refund_item_t* order_status_refund_item = NULL;
  if (include_optional) {
    order_status_refund_item = order_status_refund_item_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_status_refund_item = order_status_refund_item_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_status_refund_item;
}


#ifdef order_status_refund_item_MAIN

void test_order_status_refund_item(int include_optional) {
    order_status_refund_item_t* order_status_refund_item_1 = instantiate_order_status_refund_item(include_optional);

	cJSON* jsonorder_status_refund_item_1 = order_status_refund_item_convertToJSON(order_status_refund_item_1);
	printf("order_status_refund_item :\n%s\n", cJSON_Print(jsonorder_status_refund_item_1));
	order_status_refund_item_t* order_status_refund_item_2 = order_status_refund_item_parseFromJSON(jsonorder_status_refund_item_1);
	cJSON* jsonorder_status_refund_item_2 = order_status_refund_item_convertToJSON(order_status_refund_item_2);
	printf("repeating order_status_refund_item:\n%s\n", cJSON_Print(jsonorder_status_refund_item_2));
}

int main() {
  test_order_status_refund_item(1);
  test_order_status_refund_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_status_refund_item_MAIN
#endif // order_status_refund_item_TEST
