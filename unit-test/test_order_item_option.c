#ifndef order_item_option_TEST
#define order_item_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_item_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_item_option.h"
order_item_option_t* instantiate_order_item_option(int include_optional);



order_item_option_t* instantiate_order_item_option(int include_optional) {
  order_item_option_t* order_item_option = NULL;
  if (include_optional) {
    order_item_option = order_item_option_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      0,
      0
    );
  } else {
    order_item_option = order_item_option_create(
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      0,
      0
    );
  }

  return order_item_option;
}


#ifdef order_item_option_MAIN

void test_order_item_option(int include_optional) {
    order_item_option_t* order_item_option_1 = instantiate_order_item_option(include_optional);

	cJSON* jsonorder_item_option_1 = order_item_option_convertToJSON(order_item_option_1);
	printf("order_item_option :\n%s\n", cJSON_Print(jsonorder_item_option_1));
	order_item_option_t* order_item_option_2 = order_item_option_parseFromJSON(jsonorder_item_option_1);
	cJSON* jsonorder_item_option_2 = order_item_option_convertToJSON(order_item_option_2);
	printf("repeating order_item_option:\n%s\n", cJSON_Print(jsonorder_item_option_2));
}

int main() {
  test_order_item_option(1);
  test_order_item_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_item_option_MAIN
#endif // order_item_option_TEST
