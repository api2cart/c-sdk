#ifndef order_calculate_discount_TEST
#define order_calculate_discount_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_discount_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_discount.h"
order_calculate_discount_t* instantiate_order_calculate_discount(int include_optional);



order_calculate_discount_t* instantiate_order_calculate_discount(int include_optional) {
  order_calculate_discount_t* order_calculate_discount = NULL;
  if (include_optional) {
    order_calculate_discount = order_calculate_discount_create(
      "0",
      1.337,
      "0",
      1,
      0,
      0
    );
  } else {
    order_calculate_discount = order_calculate_discount_create(
      "0",
      1.337,
      "0",
      1,
      0,
      0
    );
  }

  return order_calculate_discount;
}


#ifdef order_calculate_discount_MAIN

void test_order_calculate_discount(int include_optional) {
    order_calculate_discount_t* order_calculate_discount_1 = instantiate_order_calculate_discount(include_optional);

	cJSON* jsonorder_calculate_discount_1 = order_calculate_discount_convertToJSON(order_calculate_discount_1);
	printf("order_calculate_discount :\n%s\n", cJSON_Print(jsonorder_calculate_discount_1));
	order_calculate_discount_t* order_calculate_discount_2 = order_calculate_discount_parseFromJSON(jsonorder_calculate_discount_1);
	cJSON* jsonorder_calculate_discount_2 = order_calculate_discount_convertToJSON(order_calculate_discount_2);
	printf("repeating order_calculate_discount:\n%s\n", cJSON_Print(jsonorder_calculate_discount_2));
}

int main() {
  test_order_calculate_discount(1);
  test_order_calculate_discount(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_discount_MAIN
#endif // order_calculate_discount_TEST
