#ifndef order_totals_TEST
#define order_totals_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_totals_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_totals.h"
order_totals_t* instantiate_order_totals(int include_optional);



order_totals_t* instantiate_order_totals(int include_optional) {
  order_totals_t* order_totals = NULL;
  if (include_optional) {
    order_totals = order_totals_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_totals = order_totals_create(
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_totals;
}


#ifdef order_totals_MAIN

void test_order_totals(int include_optional) {
    order_totals_t* order_totals_1 = instantiate_order_totals(include_optional);

	cJSON* jsonorder_totals_1 = order_totals_convertToJSON(order_totals_1);
	printf("order_totals :\n%s\n", cJSON_Print(jsonorder_totals_1));
	order_totals_t* order_totals_2 = order_totals_parseFromJSON(jsonorder_totals_1);
	cJSON* jsonorder_totals_2 = order_totals_convertToJSON(order_totals_2);
	printf("repeating order_totals:\n%s\n", cJSON_Print(jsonorder_totals_2));
}

int main() {
  test_order_totals(1);
  test_order_totals(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_totals_MAIN
#endif // order_totals_TEST
