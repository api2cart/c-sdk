#ifndef cart_store_info_TEST
#define cart_store_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_store_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_store_info.h"
cart_store_info_t* instantiate_cart_store_info(int include_optional);

#include "test_currency.c"
#include "test_info.c"


cart_store_info_t* instantiate_cart_store_info(int include_optional) {
  cart_store_info_t* cart_store_info = NULL;
  if (include_optional) {
    cart_store_info = cart_store_info_create(
      "0",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_currency(0),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_info(0),
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    cart_store_info = cart_store_info_create(
      "0",
      "0",
      "0",
      list_createList(),
      NULL,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      1,
      list_createList(),
      NULL,
      "0",
      list_createList(),
      0,
      0
    );
  }

  return cart_store_info;
}


#ifdef cart_store_info_MAIN

void test_cart_store_info(int include_optional) {
    cart_store_info_t* cart_store_info_1 = instantiate_cart_store_info(include_optional);

	cJSON* jsoncart_store_info_1 = cart_store_info_convertToJSON(cart_store_info_1);
	printf("cart_store_info :\n%s\n", cJSON_Print(jsoncart_store_info_1));
	cart_store_info_t* cart_store_info_2 = cart_store_info_parseFromJSON(jsoncart_store_info_1);
	cJSON* jsoncart_store_info_2 = cart_store_info_convertToJSON(cart_store_info_2);
	printf("repeating cart_store_info:\n%s\n", cJSON_Print(jsoncart_store_info_2));
}

int main() {
  test_cart_store_info(1);
  test_cart_store_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_store_info_MAIN
#endif // cart_store_info_TEST
