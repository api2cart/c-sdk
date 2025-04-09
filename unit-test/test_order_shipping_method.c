#ifndef order_shipping_method_TEST
#define order_shipping_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipping_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipping_method.h"
order_shipping_method_t* instantiate_order_shipping_method(int include_optional);



order_shipping_method_t* instantiate_order_shipping_method(int include_optional) {
  order_shipping_method_t* order_shipping_method = NULL;
  if (include_optional) {
    order_shipping_method = order_shipping_method_create(
      "0",
      0,
      0
    );
  } else {
    order_shipping_method = order_shipping_method_create(
      "0",
      0,
      0
    );
  }

  return order_shipping_method;
}


#ifdef order_shipping_method_MAIN

void test_order_shipping_method(int include_optional) {
    order_shipping_method_t* order_shipping_method_1 = instantiate_order_shipping_method(include_optional);

	cJSON* jsonorder_shipping_method_1 = order_shipping_method_convertToJSON(order_shipping_method_1);
	printf("order_shipping_method :\n%s\n", cJSON_Print(jsonorder_shipping_method_1));
	order_shipping_method_t* order_shipping_method_2 = order_shipping_method_parseFromJSON(jsonorder_shipping_method_1);
	cJSON* jsonorder_shipping_method_2 = order_shipping_method_convertToJSON(order_shipping_method_2);
	printf("repeating order_shipping_method:\n%s\n", cJSON_Print(jsonorder_shipping_method_2));
}

int main() {
  test_order_shipping_method(1);
  test_order_shipping_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipping_method_MAIN
#endif // order_shipping_method_TEST
