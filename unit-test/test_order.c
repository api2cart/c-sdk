#ifndef order_TEST
#define order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order.h"
order_t* instantiate_order(int include_optional);

#include "test_base_customer.c"
#include "test_a2_c_date_time.c"
#include "test_currency.c"
#include "test_customer_address.c"
#include "test_customer_address.c"
#include "test_order_payment_method.c"
#include "test_order_shipping_method.c"
#include "test_order_status.c"
#include "test_order_totals.c"
#include "test_order_total.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


order_t* instantiate_order(int include_optional) {
  order_t* order = NULL;
  if (include_optional) {
    order = order_create(
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_base_customer(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_currency(0),
       // false, not to have infinite recursion
      instantiate_customer_address(0),
       // false, not to have infinite recursion
      instantiate_customer_address(0),
       // false, not to have infinite recursion
      instantiate_order_payment_method(0),
       // false, not to have infinite recursion
      instantiate_order_shipping_method(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_order_status(0),
       // false, not to have infinite recursion
      instantiate_order_totals(0),
       // false, not to have infinite recursion
      instantiate_order_total(0),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  } else {
    order = order_create(
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      0,
      0
    );
  }

  return order;
}


#ifdef order_MAIN

void test_order(int include_optional) {
    order_t* order_1 = instantiate_order(include_optional);

	cJSON* jsonorder_1 = order_convertToJSON(order_1);
	printf("order :\n%s\n", cJSON_Print(jsonorder_1));
	order_t* order_2 = order_parseFromJSON(jsonorder_1);
	cJSON* jsonorder_2 = order_convertToJSON(order_2);
	printf("repeating order:\n%s\n", cJSON_Print(jsonorder_2));
}

int main() {
  test_order(1);
  test_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_MAIN
#endif // order_TEST
