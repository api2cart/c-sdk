#ifndef cart_channel_TEST
#define cart_channel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_channel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_channel.h"
cart_channel_t* instantiate_cart_channel(int include_optional);



cart_channel_t* instantiate_cart_channel(int include_optional) {
  cart_channel_t* cart_channel = NULL;
  if (include_optional) {
    cart_channel = cart_channel_create(
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  } else {
    cart_channel = cart_channel_create(
      "0",
      "0",
      "0",
      1,
      0,
      0
    );
  }

  return cart_channel;
}


#ifdef cart_channel_MAIN

void test_cart_channel(int include_optional) {
    cart_channel_t* cart_channel_1 = instantiate_cart_channel(include_optional);

	cJSON* jsoncart_channel_1 = cart_channel_convertToJSON(cart_channel_1);
	printf("cart_channel :\n%s\n", cJSON_Print(jsoncart_channel_1));
	cart_channel_t* cart_channel_2 = cart_channel_parseFromJSON(jsoncart_channel_1);
	cJSON* jsoncart_channel_2 = cart_channel_convertToJSON(cart_channel_2);
	printf("repeating cart_channel:\n%s\n", cJSON_Print(jsoncart_channel_2));
}

int main() {
  test_cart_channel(1);
  test_cart_channel(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_channel_MAIN
#endif // cart_channel_TEST
