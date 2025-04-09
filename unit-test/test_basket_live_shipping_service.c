#ifndef basket_live_shipping_service_TEST
#define basket_live_shipping_service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_live_shipping_service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket_live_shipping_service.h"
basket_live_shipping_service_t* instantiate_basket_live_shipping_service(int include_optional);



basket_live_shipping_service_t* instantiate_basket_live_shipping_service(int include_optional) {
  basket_live_shipping_service_t* basket_live_shipping_service = NULL;
  if (include_optional) {
    basket_live_shipping_service = basket_live_shipping_service_create(
      "0",
      "0",
      "0",
      56,
      1,
      0,
      0
    );
  } else {
    basket_live_shipping_service = basket_live_shipping_service_create(
      "0",
      "0",
      "0",
      56,
      1,
      0,
      0
    );
  }

  return basket_live_shipping_service;
}


#ifdef basket_live_shipping_service_MAIN

void test_basket_live_shipping_service(int include_optional) {
    basket_live_shipping_service_t* basket_live_shipping_service_1 = instantiate_basket_live_shipping_service(include_optional);

	cJSON* jsonbasket_live_shipping_service_1 = basket_live_shipping_service_convertToJSON(basket_live_shipping_service_1);
	printf("basket_live_shipping_service :\n%s\n", cJSON_Print(jsonbasket_live_shipping_service_1));
	basket_live_shipping_service_t* basket_live_shipping_service_2 = basket_live_shipping_service_parseFromJSON(jsonbasket_live_shipping_service_1);
	cJSON* jsonbasket_live_shipping_service_2 = basket_live_shipping_service_convertToJSON(basket_live_shipping_service_2);
	printf("repeating basket_live_shipping_service:\n%s\n", cJSON_Print(jsonbasket_live_shipping_service_2));
}

int main() {
  test_basket_live_shipping_service(1);
  test_basket_live_shipping_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_live_shipping_service_MAIN
#endif // basket_live_shipping_service_TEST
