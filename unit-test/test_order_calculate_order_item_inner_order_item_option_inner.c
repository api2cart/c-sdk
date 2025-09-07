#ifndef order_calculate_order_item_inner_order_item_option_inner_TEST
#define order_calculate_order_item_inner_order_item_option_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_calculate_order_item_inner_order_item_option_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_calculate_order_item_inner_order_item_option_inner.h"
order_calculate_order_item_inner_order_item_option_inner_t* instantiate_order_calculate_order_item_inner_order_item_option_inner(int include_optional);



order_calculate_order_item_inner_order_item_option_inner_t* instantiate_order_calculate_order_item_inner_order_item_option_inner(int include_optional) {
  order_calculate_order_item_inner_order_item_option_inner_t* order_calculate_order_item_inner_order_item_option_inner = NULL;
  if (include_optional) {
    order_calculate_order_item_inner_order_item_option_inner = order_calculate_order_item_inner_order_item_option_inner_create(
      "Color",
      "green"
    );
  } else {
    order_calculate_order_item_inner_order_item_option_inner = order_calculate_order_item_inner_order_item_option_inner_create(
      "Color",
      "green"
    );
  }

  return order_calculate_order_item_inner_order_item_option_inner;
}


#ifdef order_calculate_order_item_inner_order_item_option_inner_MAIN

void test_order_calculate_order_item_inner_order_item_option_inner(int include_optional) {
    order_calculate_order_item_inner_order_item_option_inner_t* order_calculate_order_item_inner_order_item_option_inner_1 = instantiate_order_calculate_order_item_inner_order_item_option_inner(include_optional);

	cJSON* jsonorder_calculate_order_item_inner_order_item_option_inner_1 = order_calculate_order_item_inner_order_item_option_inner_convertToJSON(order_calculate_order_item_inner_order_item_option_inner_1);
	printf("order_calculate_order_item_inner_order_item_option_inner :\n%s\n", cJSON_Print(jsonorder_calculate_order_item_inner_order_item_option_inner_1));
	order_calculate_order_item_inner_order_item_option_inner_t* order_calculate_order_item_inner_order_item_option_inner_2 = order_calculate_order_item_inner_order_item_option_inner_parseFromJSON(jsonorder_calculate_order_item_inner_order_item_option_inner_1);
	cJSON* jsonorder_calculate_order_item_inner_order_item_option_inner_2 = order_calculate_order_item_inner_order_item_option_inner_convertToJSON(order_calculate_order_item_inner_order_item_option_inner_2);
	printf("repeating order_calculate_order_item_inner_order_item_option_inner:\n%s\n", cJSON_Print(jsonorder_calculate_order_item_inner_order_item_option_inner_2));
}

int main() {
  test_order_calculate_order_item_inner_order_item_option_inner(1);
  test_order_calculate_order_item_inner_order_item_option_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_calculate_order_item_inner_order_item_option_inner_MAIN
#endif // order_calculate_order_item_inner_order_item_option_inner_TEST
