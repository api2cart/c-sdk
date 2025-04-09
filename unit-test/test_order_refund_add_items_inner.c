#ifndef order_refund_add_items_inner_TEST
#define order_refund_add_items_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_refund_add_items_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_refund_add_items_inner.h"
order_refund_add_items_inner_t* instantiate_order_refund_add_items_inner(int include_optional);



order_refund_add_items_inner_t* instantiate_order_refund_add_items_inner(int include_optional) {
  order_refund_add_items_inner_t* order_refund_add_items_inner = NULL;
  if (include_optional) {
    order_refund_add_items_inner = order_refund_add_items_inner_create(
      "0",
      56,
      1.337
    );
  } else {
    order_refund_add_items_inner = order_refund_add_items_inner_create(
      "0",
      56,
      1.337
    );
  }

  return order_refund_add_items_inner;
}


#ifdef order_refund_add_items_inner_MAIN

void test_order_refund_add_items_inner(int include_optional) {
    order_refund_add_items_inner_t* order_refund_add_items_inner_1 = instantiate_order_refund_add_items_inner(include_optional);

	cJSON* jsonorder_refund_add_items_inner_1 = order_refund_add_items_inner_convertToJSON(order_refund_add_items_inner_1);
	printf("order_refund_add_items_inner :\n%s\n", cJSON_Print(jsonorder_refund_add_items_inner_1));
	order_refund_add_items_inner_t* order_refund_add_items_inner_2 = order_refund_add_items_inner_parseFromJSON(jsonorder_refund_add_items_inner_1);
	cJSON* jsonorder_refund_add_items_inner_2 = order_refund_add_items_inner_convertToJSON(order_refund_add_items_inner_2);
	printf("repeating order_refund_add_items_inner:\n%s\n", cJSON_Print(jsonorder_refund_add_items_inner_2));
}

int main() {
  test_order_refund_add_items_inner(1);
  test_order_refund_add_items_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_refund_add_items_inner_MAIN
#endif // order_refund_add_items_inner_TEST
