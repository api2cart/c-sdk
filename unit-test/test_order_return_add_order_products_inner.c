#ifndef order_return_add_order_products_inner_TEST
#define order_return_add_order_products_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_return_add_order_products_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_return_add_order_products_inner.h"
order_return_add_order_products_inner_t* instantiate_order_return_add_order_products_inner(int include_optional);



order_return_add_order_products_inner_t* instantiate_order_return_add_order_products_inner(int include_optional) {
  order_return_add_order_products_inner_t* order_return_add_order_products_inner = NULL;
  if (include_optional) {
    order_return_add_order_products_inner = order_return_add_order_products_inner_create(
      "125, where {x} - 1,2,3,... etc",
      1, where {x} - 1,2,3,... etc,
      "DEFECTIVE, where {x} - 1,2,3,... etc",
      "REFUND, where {x} - 1,2,3,... etc",
      "I need a bigger size, where {x} - 1,2,3,... etc",
      "123456",
      "Broken, where {x} - 1,2,3,... etc",
      "123456",
      "pending"
    );
  } else {
    order_return_add_order_products_inner = order_return_add_order_products_inner_create(
      "125, where {x} - 1,2,3,... etc",
      1, where {x} - 1,2,3,... etc,
      "DEFECTIVE, where {x} - 1,2,3,... etc",
      "REFUND, where {x} - 1,2,3,... etc",
      "I need a bigger size, where {x} - 1,2,3,... etc",
      "123456",
      "Broken, where {x} - 1,2,3,... etc",
      "123456",
      "pending"
    );
  }

  return order_return_add_order_products_inner;
}


#ifdef order_return_add_order_products_inner_MAIN

void test_order_return_add_order_products_inner(int include_optional) {
    order_return_add_order_products_inner_t* order_return_add_order_products_inner_1 = instantiate_order_return_add_order_products_inner(include_optional);

	cJSON* jsonorder_return_add_order_products_inner_1 = order_return_add_order_products_inner_convertToJSON(order_return_add_order_products_inner_1);
	printf("order_return_add_order_products_inner :\n%s\n", cJSON_Print(jsonorder_return_add_order_products_inner_1));
	order_return_add_order_products_inner_t* order_return_add_order_products_inner_2 = order_return_add_order_products_inner_parseFromJSON(jsonorder_return_add_order_products_inner_1);
	cJSON* jsonorder_return_add_order_products_inner_2 = order_return_add_order_products_inner_convertToJSON(order_return_add_order_products_inner_2);
	printf("repeating order_return_add_order_products_inner:\n%s\n", cJSON_Print(jsonorder_return_add_order_products_inner_2));
}

int main() {
  test_order_return_add_order_products_inner(1);
  test_order_return_add_order_products_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_return_add_order_products_inner_MAIN
#endif // order_return_add_order_products_inner_TEST
