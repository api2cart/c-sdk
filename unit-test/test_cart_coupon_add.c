#ifndef cart_coupon_add_TEST
#define cart_coupon_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_coupon_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_coupon_add.h"
cart_coupon_add_t* instantiate_cart_coupon_add(int include_optional);



cart_coupon_add_t* instantiate_cart_coupon_add(int include_optional) {
  cart_coupon_add_t* cart_coupon_add = NULL;
  if (include_optional) {
    cart_coupon_add = cart_coupon_add_create(
      "000_BIG_SALE_000",
      api2cart_openapi_cart_coupon_add_ACTIONTYPE_"percent",
      api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_"order_total",
      api2cart_openapi_cart_coupon_add_ACTIONSCOPE_"matching_items",
      15.5,
      codes[0]=000_BIG_SALE_000&codes[1]=000_BIG_SALE_001&codes[2]=000_BIG_SALE_002,
      "Sale! -30%",
      "now",
      "2020-01-05 01:00:00",
      99,
      1,
      "order",
      "product_id",
      "ONE_OF",
      "17834222,45466663",
      true,
      "1"
    );
  } else {
    cart_coupon_add = cart_coupon_add_create(
      "000_BIG_SALE_000",
      api2cart_openapi_cart_coupon_add_ACTIONTYPE_"percent",
      api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_"order_total",
      api2cart_openapi_cart_coupon_add_ACTIONSCOPE_"matching_items",
      15.5,
      codes[0]=000_BIG_SALE_000&codes[1]=000_BIG_SALE_001&codes[2]=000_BIG_SALE_002,
      "Sale! -30%",
      "now",
      "2020-01-05 01:00:00",
      99,
      1,
      "order",
      "product_id",
      "ONE_OF",
      "17834222,45466663",
      true,
      "1"
    );
  }

  return cart_coupon_add;
}


#ifdef cart_coupon_add_MAIN

void test_cart_coupon_add(int include_optional) {
    cart_coupon_add_t* cart_coupon_add_1 = instantiate_cart_coupon_add(include_optional);

	cJSON* jsoncart_coupon_add_1 = cart_coupon_add_convertToJSON(cart_coupon_add_1);
	printf("cart_coupon_add :\n%s\n", cJSON_Print(jsoncart_coupon_add_1));
	cart_coupon_add_t* cart_coupon_add_2 = cart_coupon_add_parseFromJSON(jsoncart_coupon_add_1);
	cJSON* jsoncart_coupon_add_2 = cart_coupon_add_convertToJSON(cart_coupon_add_2);
	printf("repeating cart_coupon_add:\n%s\n", cJSON_Print(jsoncart_coupon_add_2));
}

int main() {
  test_cart_coupon_add(1);
  test_cart_coupon_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_coupon_add_MAIN
#endif // cart_coupon_add_TEST
