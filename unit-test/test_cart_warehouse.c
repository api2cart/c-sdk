#ifndef cart_warehouse_TEST
#define cart_warehouse_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_warehouse_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_warehouse.h"
cart_warehouse_t* instantiate_cart_warehouse(int include_optional);

#include "test_customer_address.c"


cart_warehouse_t* instantiate_cart_warehouse(int include_optional) {
  cart_warehouse_t* cart_warehouse = NULL;
  if (include_optional) {
    cart_warehouse = cart_warehouse_create(
      "0",
      "0",
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_customer_address(0),
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    cart_warehouse = cart_warehouse_create(
      "0",
      "0",
      "0",
      1,
      NULL,
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return cart_warehouse;
}


#ifdef cart_warehouse_MAIN

void test_cart_warehouse(int include_optional) {
    cart_warehouse_t* cart_warehouse_1 = instantiate_cart_warehouse(include_optional);

	cJSON* jsoncart_warehouse_1 = cart_warehouse_convertToJSON(cart_warehouse_1);
	printf("cart_warehouse :\n%s\n", cJSON_Print(jsoncart_warehouse_1));
	cart_warehouse_t* cart_warehouse_2 = cart_warehouse_parseFromJSON(jsoncart_warehouse_1);
	cJSON* jsoncart_warehouse_2 = cart_warehouse_convertToJSON(cart_warehouse_2);
	printf("repeating cart_warehouse:\n%s\n", cJSON_Print(jsoncart_warehouse_2));
}

int main() {
  test_cart_warehouse(1);
  test_cart_warehouse(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_warehouse_MAIN
#endif // cart_warehouse_TEST
