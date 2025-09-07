#ifndef order_calculate_tax_TEST
#define order_calculate_tax_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_tax_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_tax.h"
order_calculate_tax_t* instantiate_order_calculate_tax(int include_optional);



order_calculate_tax_t* instantiate_order_calculate_tax(int include_optional) {
  order_calculate_tax_t* order_calculate_tax = NULL;
  if (include_optional) {
    order_calculate_tax = order_calculate_tax_create(
      "0",
      1.337,
      1.337,
      0,
      0
    );
  } else {
    order_calculate_tax = order_calculate_tax_create(
      "0",
      1.337,
      1.337,
      0,
      0
    );
  }

  return order_calculate_tax;
}


#ifdef order_calculate_tax_MAIN

void test_order_calculate_tax(int include_optional) {
    order_calculate_tax_t* order_calculate_tax_1 = instantiate_order_calculate_tax(include_optional);

	cJSON* jsonorder_calculate_tax_1 = order_calculate_tax_convertToJSON(order_calculate_tax_1);
	printf("order_calculate_tax :\n%s\n", cJSON_Print(jsonorder_calculate_tax_1));
	order_calculate_tax_t* order_calculate_tax_2 = order_calculate_tax_parseFromJSON(jsonorder_calculate_tax_1);
	cJSON* jsonorder_calculate_tax_2 = order_calculate_tax_convertToJSON(order_calculate_tax_2);
	printf("repeating order_calculate_tax:\n%s\n", cJSON_Print(jsonorder_calculate_tax_2));
}

int main() {
  test_order_calculate_tax(1);
  test_order_calculate_tax(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_tax_MAIN
#endif // order_calculate_tax_TEST
