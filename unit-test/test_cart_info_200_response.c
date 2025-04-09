#ifndef cart_info_200_response_TEST
#define cart_info_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_info_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_info_200_response.h"
cart_info_200_response_t* instantiate_cart_info_200_response(int include_optional);

#include "test_cart.c"


cart_info_200_response_t* instantiate_cart_info_200_response(int include_optional) {
  cart_info_200_response_t* cart_info_200_response = NULL;
  if (include_optional) {
    cart_info_200_response = cart_info_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_cart(0)
    );
  } else {
    cart_info_200_response = cart_info_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return cart_info_200_response;
}


#ifdef cart_info_200_response_MAIN

void test_cart_info_200_response(int include_optional) {
    cart_info_200_response_t* cart_info_200_response_1 = instantiate_cart_info_200_response(include_optional);

	cJSON* jsoncart_info_200_response_1 = cart_info_200_response_convertToJSON(cart_info_200_response_1);
	printf("cart_info_200_response :\n%s\n", cJSON_Print(jsoncart_info_200_response_1));
	cart_info_200_response_t* cart_info_200_response_2 = cart_info_200_response_parseFromJSON(jsoncart_info_200_response_1);
	cJSON* jsoncart_info_200_response_2 = cart_info_200_response_convertToJSON(cart_info_200_response_2);
	printf("repeating cart_info_200_response:\n%s\n", cJSON_Print(jsoncart_info_200_response_2));
}

int main() {
  test_cart_info_200_response(1);
  test_cart_info_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_info_200_response_MAIN
#endif // cart_info_200_response_TEST
