#ifndef order_totals_new_discount_TEST
#define order_totals_new_discount_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_totals_new_discount_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_totals_new_discount.h"
order_totals_new_discount_t* instantiate_order_totals_new_discount(int include_optional);



order_totals_new_discount_t* instantiate_order_totals_new_discount(int include_optional) {
  order_totals_new_discount_t* order_totals_new_discount = NULL;
  if (include_optional) {
    order_totals_new_discount = order_totals_new_discount_create(
      "0",
      1.337,
      "0",
      0,
      0
    );
  } else {
    order_totals_new_discount = order_totals_new_discount_create(
      "0",
      1.337,
      "0",
      0,
      0
    );
  }

  return order_totals_new_discount;
}


#ifdef order_totals_new_discount_MAIN

void test_order_totals_new_discount(int include_optional) {
    order_totals_new_discount_t* order_totals_new_discount_1 = instantiate_order_totals_new_discount(include_optional);

	cJSON* jsonorder_totals_new_discount_1 = order_totals_new_discount_convertToJSON(order_totals_new_discount_1);
	printf("order_totals_new_discount :\n%s\n", cJSON_Print(jsonorder_totals_new_discount_1));
	order_totals_new_discount_t* order_totals_new_discount_2 = order_totals_new_discount_parseFromJSON(jsonorder_totals_new_discount_1);
	cJSON* jsonorder_totals_new_discount_2 = order_totals_new_discount_convertToJSON(order_totals_new_discount_2);
	printf("repeating order_totals_new_discount:\n%s\n", cJSON_Print(jsonorder_totals_new_discount_2));
}

int main() {
  test_order_totals_new_discount(1);
  test_order_totals_new_discount(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_totals_new_discount_MAIN
#endif // order_totals_new_discount_TEST
