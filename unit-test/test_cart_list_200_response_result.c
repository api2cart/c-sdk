#ifndef cart_list_200_response_result_TEST
#define cart_list_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_list_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_list_200_response_result.h"
cart_list_200_response_result_t* instantiate_cart_list_200_response_result(int include_optional);



cart_list_200_response_result_t* instantiate_cart_list_200_response_result(int include_optional) {
  cart_list_200_response_result_t* cart_list_200_response_result = NULL;
  if (include_optional) {
    cart_list_200_response_result = cart_list_200_response_result_create(
      list_createList()
    );
  } else {
    cart_list_200_response_result = cart_list_200_response_result_create(
      list_createList()
    );
  }

  return cart_list_200_response_result;
}


#ifdef cart_list_200_response_result_MAIN

void test_cart_list_200_response_result(int include_optional) {
    cart_list_200_response_result_t* cart_list_200_response_result_1 = instantiate_cart_list_200_response_result(include_optional);

	cJSON* jsoncart_list_200_response_result_1 = cart_list_200_response_result_convertToJSON(cart_list_200_response_result_1);
	printf("cart_list_200_response_result :\n%s\n", cJSON_Print(jsoncart_list_200_response_result_1));
	cart_list_200_response_result_t* cart_list_200_response_result_2 = cart_list_200_response_result_parseFromJSON(jsoncart_list_200_response_result_1);
	cJSON* jsoncart_list_200_response_result_2 = cart_list_200_response_result_convertToJSON(cart_list_200_response_result_2);
	printf("repeating cart_list_200_response_result:\n%s\n", cJSON_Print(jsoncart_list_200_response_result_2));
}

int main() {
  test_cart_list_200_response_result(1);
  test_cart_list_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_list_200_response_result_MAIN
#endif // cart_list_200_response_result_TEST
