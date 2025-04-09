#ifndef cart_shipping_method_TEST
#define cart_shipping_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_shipping_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_shipping_method.h"
cart_shipping_method_t* instantiate_cart_shipping_method(int include_optional);



cart_shipping_method_t* instantiate_cart_shipping_method(int include_optional) {
  cart_shipping_method_t* cart_shipping_method = NULL;
  if (include_optional) {
    cart_shipping_method = cart_shipping_method_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    cart_shipping_method = cart_shipping_method_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return cart_shipping_method;
}


#ifdef cart_shipping_method_MAIN

void test_cart_shipping_method(int include_optional) {
    cart_shipping_method_t* cart_shipping_method_1 = instantiate_cart_shipping_method(include_optional);

	cJSON* jsoncart_shipping_method_1 = cart_shipping_method_convertToJSON(cart_shipping_method_1);
	printf("cart_shipping_method :\n%s\n", cJSON_Print(jsoncart_shipping_method_1));
	cart_shipping_method_t* cart_shipping_method_2 = cart_shipping_method_parseFromJSON(jsoncart_shipping_method_1);
	cJSON* jsoncart_shipping_method_2 = cart_shipping_method_convertToJSON(cart_shipping_method_2);
	printf("repeating cart_shipping_method:\n%s\n", cJSON_Print(jsoncart_shipping_method_2));
}

int main() {
  test_cart_shipping_method(1);
  test_cart_shipping_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_shipping_method_MAIN
#endif // cart_shipping_method_TEST
