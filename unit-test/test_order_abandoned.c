#ifndef order_abandoned_TEST
#define order_abandoned_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_abandoned_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_abandoned.h"
order_abandoned_t* instantiate_order_abandoned(int include_optional);

#include "test_base_customer.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_currency.c"
#include "test_order_totals.c"


order_abandoned_t* instantiate_order_abandoned(int include_optional) {
  order_abandoned_t* order_abandoned = NULL;
  if (include_optional) {
    order_abandoned = order_abandoned_create(
      "0",
       // false, not to have infinite recursion
      instantiate_base_customer(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_currency(0),
       // false, not to have infinite recursion
      instantiate_order_totals(0),
      list_createList(),
      0,
      0
    );
  } else {
    order_abandoned = order_abandoned_create(
      "0",
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      0,
      0
    );
  }

  return order_abandoned;
}


#ifdef order_abandoned_MAIN

void test_order_abandoned(int include_optional) {
    order_abandoned_t* order_abandoned_1 = instantiate_order_abandoned(include_optional);

	cJSON* jsonorder_abandoned_1 = order_abandoned_convertToJSON(order_abandoned_1);
	printf("order_abandoned :\n%s\n", cJSON_Print(jsonorder_abandoned_1));
	order_abandoned_t* order_abandoned_2 = order_abandoned_parseFromJSON(jsonorder_abandoned_1);
	cJSON* jsonorder_abandoned_2 = order_abandoned_convertToJSON(order_abandoned_2);
	printf("repeating order_abandoned:\n%s\n", cJSON_Print(jsonorder_abandoned_2));
}

int main() {
  test_order_abandoned(1);
  test_order_abandoned(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_abandoned_MAIN
#endif // order_abandoned_TEST
