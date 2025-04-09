#ifndef return_order_product_TEST
#define return_order_product_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define return_order_product_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/return_order_product.h"
return_order_product_t* instantiate_return_order_product(int include_optional);

#include "test_return_reason.c"
#include "test_return_action.c"


return_order_product_t* instantiate_return_order_product(int include_optional) {
  return_order_product_t* return_order_product = NULL;
  if (include_optional) {
    return_order_product = return_order_product_create(
      "0",
      "0",
      "0",
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_return_reason(0),
       // false, not to have infinite recursion
      instantiate_return_action(0),
      "0",
      "0",
      0,
      0
    );
  } else {
    return_order_product = return_order_product_create(
      "0",
      "0",
      "0",
      "0",
      56,
      NULL,
      NULL,
      "0",
      "0",
      0,
      0
    );
  }

  return return_order_product;
}


#ifdef return_order_product_MAIN

void test_return_order_product(int include_optional) {
    return_order_product_t* return_order_product_1 = instantiate_return_order_product(include_optional);

	cJSON* jsonreturn_order_product_1 = return_order_product_convertToJSON(return_order_product_1);
	printf("return_order_product :\n%s\n", cJSON_Print(jsonreturn_order_product_1));
	return_order_product_t* return_order_product_2 = return_order_product_parseFromJSON(jsonreturn_order_product_1);
	cJSON* jsonreturn_order_product_2 = return_order_product_convertToJSON(return_order_product_2);
	printf("repeating return_order_product:\n%s\n", cJSON_Print(jsonreturn_order_product_2));
}

int main() {
  test_return_order_product(1);
  test_return_order_product(0);

  printf("Hello world \n");
  return 0;
}

#endif // return_order_product_MAIN
#endif // return_order_product_TEST
