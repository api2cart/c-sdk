#ifndef cart_list_200_response_result_supported_carts_inner_TEST
#define cart_list_200_response_result_supported_carts_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_list_200_response_result_supported_carts_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_list_200_response_result_supported_carts_inner.h"
cart_list_200_response_result_supported_carts_inner_t* instantiate_cart_list_200_response_result_supported_carts_inner(int include_optional);



cart_list_200_response_result_supported_carts_inner_t* instantiate_cart_list_200_response_result_supported_carts_inner(int include_optional) {
  cart_list_200_response_result_supported_carts_inner_t* cart_list_200_response_result_supported_carts_inner = NULL;
  if (include_optional) {
    cart_list_200_response_result_supported_carts_inner = cart_list_200_response_result_supported_carts_inner_create(
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    cart_list_200_response_result_supported_carts_inner = cart_list_200_response_result_supported_carts_inner_create(
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return cart_list_200_response_result_supported_carts_inner;
}


#ifdef cart_list_200_response_result_supported_carts_inner_MAIN

void test_cart_list_200_response_result_supported_carts_inner(int include_optional) {
    cart_list_200_response_result_supported_carts_inner_t* cart_list_200_response_result_supported_carts_inner_1 = instantiate_cart_list_200_response_result_supported_carts_inner(include_optional);

	cJSON* jsoncart_list_200_response_result_supported_carts_inner_1 = cart_list_200_response_result_supported_carts_inner_convertToJSON(cart_list_200_response_result_supported_carts_inner_1);
	printf("cart_list_200_response_result_supported_carts_inner :\n%s\n", cJSON_Print(jsoncart_list_200_response_result_supported_carts_inner_1));
	cart_list_200_response_result_supported_carts_inner_t* cart_list_200_response_result_supported_carts_inner_2 = cart_list_200_response_result_supported_carts_inner_parseFromJSON(jsoncart_list_200_response_result_supported_carts_inner_1);
	cJSON* jsoncart_list_200_response_result_supported_carts_inner_2 = cart_list_200_response_result_supported_carts_inner_convertToJSON(cart_list_200_response_result_supported_carts_inner_2);
	printf("repeating cart_list_200_response_result_supported_carts_inner:\n%s\n", cJSON_Print(jsoncart_list_200_response_result_supported_carts_inner_2));
}

int main() {
  test_cart_list_200_response_result_supported_carts_inner(1);
  test_cart_list_200_response_result_supported_carts_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_list_200_response_result_supported_carts_inner_MAIN
#endif // cart_list_200_response_result_supported_carts_inner_TEST
