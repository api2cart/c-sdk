#ifndef cart_meta_data_TEST
#define cart_meta_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_meta_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_meta_data.h"
cart_meta_data_t* instantiate_cart_meta_data(int include_optional);



cart_meta_data_t* instantiate_cart_meta_data(int include_optional) {
  cart_meta_data_t* cart_meta_data = NULL;
  if (include_optional) {
    cart_meta_data = cart_meta_data_create(
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  } else {
    cart_meta_data = cart_meta_data_create(
      "0",
      "0",
      "0",
      "0",
      0,
      0
    );
  }

  return cart_meta_data;
}


#ifdef cart_meta_data_MAIN

void test_cart_meta_data(int include_optional) {
    cart_meta_data_t* cart_meta_data_1 = instantiate_cart_meta_data(include_optional);

	cJSON* jsoncart_meta_data_1 = cart_meta_data_convertToJSON(cart_meta_data_1);
	printf("cart_meta_data :\n%s\n", cJSON_Print(jsoncart_meta_data_1));
	cart_meta_data_t* cart_meta_data_2 = cart_meta_data_parseFromJSON(jsoncart_meta_data_1);
	cJSON* jsoncart_meta_data_2 = cart_meta_data_convertToJSON(cart_meta_data_2);
	printf("repeating cart_meta_data:\n%s\n", cJSON_Print(jsoncart_meta_data_2));
}

int main() {
  test_cart_meta_data(1);
  test_cart_meta_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_meta_data_MAIN
#endif // cart_meta_data_TEST
