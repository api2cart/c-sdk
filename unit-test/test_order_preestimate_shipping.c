#ifndef order_preestimate_shipping_TEST
#define order_preestimate_shipping_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_preestimate_shipping_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_preestimate_shipping.h"
order_preestimate_shipping_t* instantiate_order_preestimate_shipping(int include_optional);



order_preestimate_shipping_t* instantiate_order_preestimate_shipping(int include_optional) {
  order_preestimate_shipping_t* order_preestimate_shipping = NULL;
  if (include_optional) {
    order_preestimate_shipping = order_preestimate_shipping_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      0,
      0
    );
  } else {
    order_preestimate_shipping = order_preestimate_shipping_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      0,
      0
    );
  }

  return order_preestimate_shipping;
}


#ifdef order_preestimate_shipping_MAIN

void test_order_preestimate_shipping(int include_optional) {
    order_preestimate_shipping_t* order_preestimate_shipping_1 = instantiate_order_preestimate_shipping(include_optional);

	cJSON* jsonorder_preestimate_shipping_1 = order_preestimate_shipping_convertToJSON(order_preestimate_shipping_1);
	printf("order_preestimate_shipping :\n%s\n", cJSON_Print(jsonorder_preestimate_shipping_1));
	order_preestimate_shipping_t* order_preestimate_shipping_2 = order_preestimate_shipping_parseFromJSON(jsonorder_preestimate_shipping_1);
	cJSON* jsonorder_preestimate_shipping_2 = order_preestimate_shipping_convertToJSON(order_preestimate_shipping_2);
	printf("repeating order_preestimate_shipping:\n%s\n", cJSON_Print(jsonorder_preestimate_shipping_2));
}

int main() {
  test_order_preestimate_shipping(1);
  test_order_preestimate_shipping(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_preestimate_shipping_MAIN
#endif // order_preestimate_shipping_TEST
