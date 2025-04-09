#ifndef cart_shipping_method_rate_TEST
#define cart_shipping_method_rate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_shipping_method_rate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_shipping_method_rate.h"
cart_shipping_method_rate_t* instantiate_cart_shipping_method_rate(int include_optional);



cart_shipping_method_rate_t* instantiate_cart_shipping_method_rate(int include_optional) {
  cart_shipping_method_rate_t* cart_shipping_method_rate = NULL;
  if (include_optional) {
    cart_shipping_method_rate = cart_shipping_method_rate_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    cart_shipping_method_rate = cart_shipping_method_rate_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return cart_shipping_method_rate;
}


#ifdef cart_shipping_method_rate_MAIN

void test_cart_shipping_method_rate(int include_optional) {
    cart_shipping_method_rate_t* cart_shipping_method_rate_1 = instantiate_cart_shipping_method_rate(include_optional);

	cJSON* jsoncart_shipping_method_rate_1 = cart_shipping_method_rate_convertToJSON(cart_shipping_method_rate_1);
	printf("cart_shipping_method_rate :\n%s\n", cJSON_Print(jsoncart_shipping_method_rate_1));
	cart_shipping_method_rate_t* cart_shipping_method_rate_2 = cart_shipping_method_rate_parseFromJSON(jsoncart_shipping_method_rate_1);
	cJSON* jsoncart_shipping_method_rate_2 = cart_shipping_method_rate_convertToJSON(cart_shipping_method_rate_2);
	printf("repeating cart_shipping_method_rate:\n%s\n", cJSON_Print(jsoncart_shipping_method_rate_2));
}

int main() {
  test_cart_shipping_method_rate(1);
  test_cart_shipping_method_rate(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_shipping_method_rate_MAIN
#endif // cart_shipping_method_rate_TEST
