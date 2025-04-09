#ifndef cart_plugin_list_200_response_TEST
#define cart_plugin_list_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_plugin_list_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_plugin_list_200_response.h"
cart_plugin_list_200_response_t* instantiate_cart_plugin_list_200_response(int include_optional);

#include "test_cart_plugin_list_200_response_result.c"


cart_plugin_list_200_response_t* instantiate_cart_plugin_list_200_response(int include_optional) {
  cart_plugin_list_200_response_t* cart_plugin_list_200_response = NULL;
  if (include_optional) {
    cart_plugin_list_200_response = cart_plugin_list_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_cart_plugin_list_200_response_result(0)
    );
  } else {
    cart_plugin_list_200_response = cart_plugin_list_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return cart_plugin_list_200_response;
}


#ifdef cart_plugin_list_200_response_MAIN

void test_cart_plugin_list_200_response(int include_optional) {
    cart_plugin_list_200_response_t* cart_plugin_list_200_response_1 = instantiate_cart_plugin_list_200_response(include_optional);

	cJSON* jsoncart_plugin_list_200_response_1 = cart_plugin_list_200_response_convertToJSON(cart_plugin_list_200_response_1);
	printf("cart_plugin_list_200_response :\n%s\n", cJSON_Print(jsoncart_plugin_list_200_response_1));
	cart_plugin_list_200_response_t* cart_plugin_list_200_response_2 = cart_plugin_list_200_response_parseFromJSON(jsoncart_plugin_list_200_response_1);
	cJSON* jsoncart_plugin_list_200_response_2 = cart_plugin_list_200_response_convertToJSON(cart_plugin_list_200_response_2);
	printf("repeating cart_plugin_list_200_response:\n%s\n", cJSON_Print(jsoncart_plugin_list_200_response_2));
}

int main() {
  test_cart_plugin_list_200_response(1);
  test_cart_plugin_list_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_plugin_list_200_response_MAIN
#endif // cart_plugin_list_200_response_TEST
