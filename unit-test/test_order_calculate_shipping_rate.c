#ifndef order_calculate_shipping_rate_TEST
#define order_calculate_shipping_rate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_shipping_rate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_shipping_rate.h"
order_calculate_shipping_rate_t* instantiate_order_calculate_shipping_rate(int include_optional);



order_calculate_shipping_rate_t* instantiate_order_calculate_shipping_rate(int include_optional) {
  order_calculate_shipping_rate_t* order_calculate_shipping_rate = NULL;
  if (include_optional) {
    order_calculate_shipping_rate = order_calculate_shipping_rate_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_calculate_shipping_rate = order_calculate_shipping_rate_create(
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_calculate_shipping_rate;
}


#ifdef order_calculate_shipping_rate_MAIN

void test_order_calculate_shipping_rate(int include_optional) {
    order_calculate_shipping_rate_t* order_calculate_shipping_rate_1 = instantiate_order_calculate_shipping_rate(include_optional);

	cJSON* jsonorder_calculate_shipping_rate_1 = order_calculate_shipping_rate_convertToJSON(order_calculate_shipping_rate_1);
	printf("order_calculate_shipping_rate :\n%s\n", cJSON_Print(jsonorder_calculate_shipping_rate_1));
	order_calculate_shipping_rate_t* order_calculate_shipping_rate_2 = order_calculate_shipping_rate_parseFromJSON(jsonorder_calculate_shipping_rate_1);
	cJSON* jsonorder_calculate_shipping_rate_2 = order_calculate_shipping_rate_convertToJSON(order_calculate_shipping_rate_2);
	printf("repeating order_calculate_shipping_rate:\n%s\n", cJSON_Print(jsonorder_calculate_shipping_rate_2));
}

int main() {
  test_order_calculate_shipping_rate(1);
  test_order_calculate_shipping_rate(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_shipping_rate_MAIN
#endif // order_calculate_shipping_rate_TEST
