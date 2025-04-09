#ifndef cart_methods_200_response_result_TEST
#define cart_methods_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_methods_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_methods_200_response_result.h"
cart_methods_200_response_result_t* instantiate_cart_methods_200_response_result(int include_optional);



cart_methods_200_response_result_t* instantiate_cart_methods_200_response_result(int include_optional) {
  cart_methods_200_response_result_t* cart_methods_200_response_result = NULL;
  if (include_optional) {
    cart_methods_200_response_result = cart_methods_200_response_result_create(
      list_createList()
    );
  } else {
    cart_methods_200_response_result = cart_methods_200_response_result_create(
      list_createList()
    );
  }

  return cart_methods_200_response_result;
}


#ifdef cart_methods_200_response_result_MAIN

void test_cart_methods_200_response_result(int include_optional) {
    cart_methods_200_response_result_t* cart_methods_200_response_result_1 = instantiate_cart_methods_200_response_result(include_optional);

	cJSON* jsoncart_methods_200_response_result_1 = cart_methods_200_response_result_convertToJSON(cart_methods_200_response_result_1);
	printf("cart_methods_200_response_result :\n%s\n", cJSON_Print(jsoncart_methods_200_response_result_1));
	cart_methods_200_response_result_t* cart_methods_200_response_result_2 = cart_methods_200_response_result_parseFromJSON(jsoncart_methods_200_response_result_1);
	cJSON* jsoncart_methods_200_response_result_2 = cart_methods_200_response_result_convertToJSON(cart_methods_200_response_result_2);
	printf("repeating cart_methods_200_response_result:\n%s\n", cJSON_Print(jsoncart_methods_200_response_result_2));
}

int main() {
  test_cart_methods_200_response_result(1);
  test_cart_methods_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_methods_200_response_result_MAIN
#endif // cart_methods_200_response_result_TEST
