#ifndef cart_shipping_zone_TEST
#define cart_shipping_zone_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_shipping_zone_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_shipping_zone.h"
cart_shipping_zone_t* instantiate_cart_shipping_zone(int include_optional);



cart_shipping_zone_t* instantiate_cart_shipping_zone(int include_optional) {
  cart_shipping_zone_t* cart_shipping_zone = NULL;
  if (include_optional) {
    cart_shipping_zone = cart_shipping_zone_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    cart_shipping_zone = cart_shipping_zone_create(
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return cart_shipping_zone;
}


#ifdef cart_shipping_zone_MAIN

void test_cart_shipping_zone(int include_optional) {
    cart_shipping_zone_t* cart_shipping_zone_1 = instantiate_cart_shipping_zone(include_optional);

	cJSON* jsoncart_shipping_zone_1 = cart_shipping_zone_convertToJSON(cart_shipping_zone_1);
	printf("cart_shipping_zone :\n%s\n", cJSON_Print(jsoncart_shipping_zone_1));
	cart_shipping_zone_t* cart_shipping_zone_2 = cart_shipping_zone_parseFromJSON(jsoncart_shipping_zone_1);
	cJSON* jsoncart_shipping_zone_2 = cart_shipping_zone_convertToJSON(cart_shipping_zone_2);
	printf("repeating cart_shipping_zone:\n%s\n", cJSON_Print(jsoncart_shipping_zone_2));
}

int main() {
  test_cart_shipping_zone(1);
  test_cart_shipping_zone(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_shipping_zone_MAIN
#endif // cart_shipping_zone_TEST
