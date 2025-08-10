#ifndef cart_TEST
#define cart_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart.h"
cart_t* instantiate_cart(int include_optional);



cart_t* instantiate_cart(int include_optional) {
  cart_t* cart = NULL;
  if (include_optional) {
    cart = cart_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    cart = cart_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return cart;
}


#ifdef cart_MAIN

void test_cart(int include_optional) {
    cart_t* cart_1 = instantiate_cart(include_optional);

	cJSON* jsoncart_1 = cart_convertToJSON(cart_1);
	printf("cart :\n%s\n", cJSON_Print(jsoncart_1));
	cart_t* cart_2 = cart_parseFromJSON(jsoncart_1);
	cJSON* jsoncart_2 = cart_convertToJSON(cart_2);
	printf("repeating cart:\n%s\n", cJSON_Print(jsoncart_2));
}

int main() {
  test_cart(1);
  test_cart(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_MAIN
#endif // cart_TEST
