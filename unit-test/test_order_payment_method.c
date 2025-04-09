#ifndef order_payment_method_TEST
#define order_payment_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_payment_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_payment_method.h"
order_payment_method_t* instantiate_order_payment_method(int include_optional);



order_payment_method_t* instantiate_order_payment_method(int include_optional) {
  order_payment_method_t* order_payment_method = NULL;
  if (include_optional) {
    order_payment_method = order_payment_method_create(
      "0",
      0,
      0
    );
  } else {
    order_payment_method = order_payment_method_create(
      "0",
      0,
      0
    );
  }

  return order_payment_method;
}


#ifdef order_payment_method_MAIN

void test_order_payment_method(int include_optional) {
    order_payment_method_t* order_payment_method_1 = instantiate_order_payment_method(include_optional);

	cJSON* jsonorder_payment_method_1 = order_payment_method_convertToJSON(order_payment_method_1);
	printf("order_payment_method :\n%s\n", cJSON_Print(jsonorder_payment_method_1));
	order_payment_method_t* order_payment_method_2 = order_payment_method_parseFromJSON(jsonorder_payment_method_1);
	cJSON* jsonorder_payment_method_2 = order_payment_method_convertToJSON(order_payment_method_2);
	printf("repeating order_payment_method:\n%s\n", cJSON_Print(jsonorder_payment_method_2));
}

int main() {
  test_order_payment_method(1);
  test_order_payment_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_payment_method_MAIN
#endif // order_payment_method_TEST
