#ifndef order_refund_TEST
#define order_refund_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_refund_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_refund.h"
order_refund_t* instantiate_order_refund(int include_optional);

#include "test_a2_c_date_time.c"


order_refund_t* instantiate_order_refund(int include_optional) {
  order_refund_t* order_refund = NULL;
  if (include_optional) {
    order_refund = order_refund_create(
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    order_refund = order_refund_create(
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      NULL,
      "0",
      list_createList(),
      0,
      0
    );
  }

  return order_refund;
}


#ifdef order_refund_MAIN

void test_order_refund(int include_optional) {
    order_refund_t* order_refund_1 = instantiate_order_refund(include_optional);

	cJSON* jsonorder_refund_1 = order_refund_convertToJSON(order_refund_1);
	printf("order_refund :\n%s\n", cJSON_Print(jsonorder_refund_1));
	order_refund_t* order_refund_2 = order_refund_parseFromJSON(jsonorder_refund_1);
	cJSON* jsonorder_refund_2 = order_refund_convertToJSON(order_refund_2);
	printf("repeating order_refund:\n%s\n", cJSON_Print(jsonorder_refund_2));
}

int main() {
  test_order_refund(1);
  test_order_refund(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_refund_MAIN
#endif // order_refund_TEST
