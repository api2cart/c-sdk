#ifndef cart_giftcard_add_200_response_result_TEST
#define cart_giftcard_add_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_giftcard_add_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_giftcard_add_200_response_result.h"
cart_giftcard_add_200_response_result_t* instantiate_cart_giftcard_add_200_response_result(int include_optional);



cart_giftcard_add_200_response_result_t* instantiate_cart_giftcard_add_200_response_result(int include_optional) {
  cart_giftcard_add_200_response_result_t* cart_giftcard_add_200_response_result = NULL;
  if (include_optional) {
    cart_giftcard_add_200_response_result = cart_giftcard_add_200_response_result_create(
      "0",
      "0"
    );
  } else {
    cart_giftcard_add_200_response_result = cart_giftcard_add_200_response_result_create(
      "0",
      "0"
    );
  }

  return cart_giftcard_add_200_response_result;
}


#ifdef cart_giftcard_add_200_response_result_MAIN

void test_cart_giftcard_add_200_response_result(int include_optional) {
    cart_giftcard_add_200_response_result_t* cart_giftcard_add_200_response_result_1 = instantiate_cart_giftcard_add_200_response_result(include_optional);

	cJSON* jsoncart_giftcard_add_200_response_result_1 = cart_giftcard_add_200_response_result_convertToJSON(cart_giftcard_add_200_response_result_1);
	printf("cart_giftcard_add_200_response_result :\n%s\n", cJSON_Print(jsoncart_giftcard_add_200_response_result_1));
	cart_giftcard_add_200_response_result_t* cart_giftcard_add_200_response_result_2 = cart_giftcard_add_200_response_result_parseFromJSON(jsoncart_giftcard_add_200_response_result_1);
	cJSON* jsoncart_giftcard_add_200_response_result_2 = cart_giftcard_add_200_response_result_convertToJSON(cart_giftcard_add_200_response_result_2);
	printf("repeating cart_giftcard_add_200_response_result:\n%s\n", cJSON_Print(jsoncart_giftcard_add_200_response_result_2));
}

int main() {
  test_cart_giftcard_add_200_response_result(1);
  test_cart_giftcard_add_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_giftcard_add_200_response_result_MAIN
#endif // cart_giftcard_add_200_response_result_TEST
