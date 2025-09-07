#ifndef order_calculate_subtotal_TEST
#define order_calculate_subtotal_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_subtotal_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_subtotal.h"
order_calculate_subtotal_t* instantiate_order_calculate_subtotal(int include_optional);



order_calculate_subtotal_t* instantiate_order_calculate_subtotal(int include_optional) {
  order_calculate_subtotal_t* order_calculate_subtotal = NULL;
  if (include_optional) {
    order_calculate_subtotal = order_calculate_subtotal_create(
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_calculate_subtotal = order_calculate_subtotal_create(
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_calculate_subtotal;
}


#ifdef order_calculate_subtotal_MAIN

void test_order_calculate_subtotal(int include_optional) {
    order_calculate_subtotal_t* order_calculate_subtotal_1 = instantiate_order_calculate_subtotal(include_optional);

	cJSON* jsonorder_calculate_subtotal_1 = order_calculate_subtotal_convertToJSON(order_calculate_subtotal_1);
	printf("order_calculate_subtotal :\n%s\n", cJSON_Print(jsonorder_calculate_subtotal_1));
	order_calculate_subtotal_t* order_calculate_subtotal_2 = order_calculate_subtotal_parseFromJSON(jsonorder_calculate_subtotal_1);
	cJSON* jsonorder_calculate_subtotal_2 = order_calculate_subtotal_convertToJSON(order_calculate_subtotal_2);
	printf("repeating order_calculate_subtotal:\n%s\n", cJSON_Print(jsonorder_calculate_subtotal_2));
}

int main() {
  test_order_calculate_subtotal(1);
  test_order_calculate_subtotal(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_subtotal_MAIN
#endif // order_calculate_subtotal_TEST
