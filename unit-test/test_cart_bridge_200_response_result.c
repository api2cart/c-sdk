#ifndef cart_bridge_200_response_result_TEST
#define cart_bridge_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_bridge_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_bridge_200_response_result.h"
cart_bridge_200_response_result_t* instantiate_cart_bridge_200_response_result(int include_optional);



cart_bridge_200_response_result_t* instantiate_cart_bridge_200_response_result(int include_optional) {
  cart_bridge_200_response_result_t* cart_bridge_200_response_result = NULL;
  if (include_optional) {
    cart_bridge_200_response_result = cart_bridge_200_response_result_create(
      "0",
      "0"
    );
  } else {
    cart_bridge_200_response_result = cart_bridge_200_response_result_create(
      "0",
      "0"
    );
  }

  return cart_bridge_200_response_result;
}


#ifdef cart_bridge_200_response_result_MAIN

void test_cart_bridge_200_response_result(int include_optional) {
    cart_bridge_200_response_result_t* cart_bridge_200_response_result_1 = instantiate_cart_bridge_200_response_result(include_optional);

	cJSON* jsoncart_bridge_200_response_result_1 = cart_bridge_200_response_result_convertToJSON(cart_bridge_200_response_result_1);
	printf("cart_bridge_200_response_result :\n%s\n", cJSON_Print(jsoncart_bridge_200_response_result_1));
	cart_bridge_200_response_result_t* cart_bridge_200_response_result_2 = cart_bridge_200_response_result_parseFromJSON(jsoncart_bridge_200_response_result_1);
	cJSON* jsoncart_bridge_200_response_result_2 = cart_bridge_200_response_result_convertToJSON(cart_bridge_200_response_result_2);
	printf("repeating cart_bridge_200_response_result:\n%s\n", cJSON_Print(jsoncart_bridge_200_response_result_2));
}

int main() {
  test_cart_bridge_200_response_result(1);
  test_cart_bridge_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_bridge_200_response_result_MAIN
#endif // cart_bridge_200_response_result_TEST
