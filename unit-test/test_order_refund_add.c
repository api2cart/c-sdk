#ifndef order_refund_add_TEST
#define order_refund_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_refund_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_refund_add.h"
order_refund_add_t* instantiate_order_refund_add(int include_optional);



order_refund_add_t* instantiate_order_refund_add(int include_optional) {
  order_refund_add_t* order_refund_add = NULL;
  if (include_optional) {
    order_refund_add = order_refund_add_create(
      "25",
      list_createList(),
      23.56,
      5.5,
      5.5,
      "Received item is not like in the photo, get my money back.",
      true,
      true,
      "2012-09-25 19:40:00",
      false
    );
  } else {
    order_refund_add = order_refund_add_create(
      "25",
      list_createList(),
      23.56,
      5.5,
      5.5,
      "Received item is not like in the photo, get my money back.",
      true,
      true,
      "2012-09-25 19:40:00",
      false
    );
  }

  return order_refund_add;
}


#ifdef order_refund_add_MAIN

void test_order_refund_add(int include_optional) {
    order_refund_add_t* order_refund_add_1 = instantiate_order_refund_add(include_optional);

	cJSON* jsonorder_refund_add_1 = order_refund_add_convertToJSON(order_refund_add_1);
	printf("order_refund_add :\n%s\n", cJSON_Print(jsonorder_refund_add_1));
	order_refund_add_t* order_refund_add_2 = order_refund_add_parseFromJSON(jsonorder_refund_add_1);
	cJSON* jsonorder_refund_add_2 = order_refund_add_convertToJSON(order_refund_add_2);
	printf("repeating order_refund_add:\n%s\n", cJSON_Print(jsonorder_refund_add_2));
}

int main() {
  test_order_refund_add(1);
  test_order_refund_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_refund_add_MAIN
#endif // order_refund_add_TEST
