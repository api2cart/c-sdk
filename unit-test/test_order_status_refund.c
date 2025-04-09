#ifndef order_status_refund_TEST
#define order_status_refund_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_status_refund_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_status_refund.h"
order_status_refund_t* instantiate_order_status_refund(int include_optional);

#include "test_a2_c_date_time.c"


order_status_refund_t* instantiate_order_status_refund(int include_optional) {
  order_status_refund_t* order_status_refund = NULL;
  if (include_optional) {
    order_status_refund = order_status_refund_create(
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
    order_status_refund = order_status_refund_create(
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

  return order_status_refund;
}


#ifdef order_status_refund_MAIN

void test_order_status_refund(int include_optional) {
    order_status_refund_t* order_status_refund_1 = instantiate_order_status_refund(include_optional);

	cJSON* jsonorder_status_refund_1 = order_status_refund_convertToJSON(order_status_refund_1);
	printf("order_status_refund :\n%s\n", cJSON_Print(jsonorder_status_refund_1));
	order_status_refund_t* order_status_refund_2 = order_status_refund_parseFromJSON(jsonorder_status_refund_1);
	cJSON* jsonorder_status_refund_2 = order_status_refund_convertToJSON(order_status_refund_2);
	printf("repeating order_status_refund:\n%s\n", cJSON_Print(jsonorder_status_refund_2));
}

int main() {
  test_order_status_refund(1);
  test_order_status_refund(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_status_refund_MAIN
#endif // order_status_refund_TEST
