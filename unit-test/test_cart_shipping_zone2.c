#ifndef cart_shipping_zone2_TEST
#define cart_shipping_zone2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_shipping_zone2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_shipping_zone2.h"
cart_shipping_zone2_t* instantiate_cart_shipping_zone2(int include_optional);



cart_shipping_zone2_t* instantiate_cart_shipping_zone2(int include_optional) {
  cart_shipping_zone2_t* cart_shipping_zone2 = NULL;
  if (include_optional) {
    cart_shipping_zone2 = cart_shipping_zone2_create(
      "0",
      "0",
      1,
      list_createList(),
      list_createList(),
      0,
      0
    );
  } else {
    cart_shipping_zone2 = cart_shipping_zone2_create(
      "0",
      "0",
      1,
      list_createList(),
      list_createList(),
      0,
      0
    );
  }

  return cart_shipping_zone2;
}


#ifdef cart_shipping_zone2_MAIN

void test_cart_shipping_zone2(int include_optional) {
    cart_shipping_zone2_t* cart_shipping_zone2_1 = instantiate_cart_shipping_zone2(include_optional);

	cJSON* jsoncart_shipping_zone2_1 = cart_shipping_zone2_convertToJSON(cart_shipping_zone2_1);
	printf("cart_shipping_zone2 :\n%s\n", cJSON_Print(jsoncart_shipping_zone2_1));
	cart_shipping_zone2_t* cart_shipping_zone2_2 = cart_shipping_zone2_parseFromJSON(jsoncart_shipping_zone2_1);
	cJSON* jsoncart_shipping_zone2_2 = cart_shipping_zone2_convertToJSON(cart_shipping_zone2_2);
	printf("repeating cart_shipping_zone2:\n%s\n", cJSON_Print(jsoncart_shipping_zone2_2));
}

int main() {
  test_cart_shipping_zone2(1);
  test_cart_shipping_zone2(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_shipping_zone2_MAIN
#endif // cart_shipping_zone2_TEST
