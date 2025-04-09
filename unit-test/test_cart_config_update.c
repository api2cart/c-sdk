#ifndef cart_config_update_TEST
#define cart_config_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_config_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_config_update.h"
cart_config_update_t* instantiate_cart_config_update(int include_optional);



cart_config_update_t* instantiate_cart_config_update(int include_optional) {
  cart_config_update_t* cart_config_update = NULL;
  if (include_optional) {
    cart_config_update = cart_config_update_create(
      "oc_",
      0,
      "1",
      "Mozilla/5.0 (Windows NT 6.1; Win64; x64; rv:47.0) Gecko/20100101 Firefox/47.0"
    );
  } else {
    cart_config_update = cart_config_update_create(
      "oc_",
      0,
      "1",
      "Mozilla/5.0 (Windows NT 6.1; Win64; x64; rv:47.0) Gecko/20100101 Firefox/47.0"
    );
  }

  return cart_config_update;
}


#ifdef cart_config_update_MAIN

void test_cart_config_update(int include_optional) {
    cart_config_update_t* cart_config_update_1 = instantiate_cart_config_update(include_optional);

	cJSON* jsoncart_config_update_1 = cart_config_update_convertToJSON(cart_config_update_1);
	printf("cart_config_update :\n%s\n", cJSON_Print(jsoncart_config_update_1));
	cart_config_update_t* cart_config_update_2 = cart_config_update_parseFromJSON(jsoncart_config_update_1);
	cJSON* jsoncart_config_update_2 = cart_config_update_convertToJSON(cart_config_update_2);
	printf("repeating cart_config_update:\n%s\n", cJSON_Print(jsoncart_config_update_2));
}

int main() {
  test_cart_config_update(1);
  test_cart_config_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_config_update_MAIN
#endif // cart_config_update_TEST
