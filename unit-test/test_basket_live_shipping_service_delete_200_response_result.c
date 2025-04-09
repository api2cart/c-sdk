#ifndef basket_live_shipping_service_delete_200_response_result_TEST
#define basket_live_shipping_service_delete_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_live_shipping_service_delete_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket_live_shipping_service_delete_200_response_result.h"
basket_live_shipping_service_delete_200_response_result_t* instantiate_basket_live_shipping_service_delete_200_response_result(int include_optional);



basket_live_shipping_service_delete_200_response_result_t* instantiate_basket_live_shipping_service_delete_200_response_result(int include_optional) {
  basket_live_shipping_service_delete_200_response_result_t* basket_live_shipping_service_delete_200_response_result = NULL;
  if (include_optional) {
    basket_live_shipping_service_delete_200_response_result = basket_live_shipping_service_delete_200_response_result_create(
      1
    );
  } else {
    basket_live_shipping_service_delete_200_response_result = basket_live_shipping_service_delete_200_response_result_create(
      1
    );
  }

  return basket_live_shipping_service_delete_200_response_result;
}


#ifdef basket_live_shipping_service_delete_200_response_result_MAIN

void test_basket_live_shipping_service_delete_200_response_result(int include_optional) {
    basket_live_shipping_service_delete_200_response_result_t* basket_live_shipping_service_delete_200_response_result_1 = instantiate_basket_live_shipping_service_delete_200_response_result(include_optional);

	cJSON* jsonbasket_live_shipping_service_delete_200_response_result_1 = basket_live_shipping_service_delete_200_response_result_convertToJSON(basket_live_shipping_service_delete_200_response_result_1);
	printf("basket_live_shipping_service_delete_200_response_result :\n%s\n", cJSON_Print(jsonbasket_live_shipping_service_delete_200_response_result_1));
	basket_live_shipping_service_delete_200_response_result_t* basket_live_shipping_service_delete_200_response_result_2 = basket_live_shipping_service_delete_200_response_result_parseFromJSON(jsonbasket_live_shipping_service_delete_200_response_result_1);
	cJSON* jsonbasket_live_shipping_service_delete_200_response_result_2 = basket_live_shipping_service_delete_200_response_result_convertToJSON(basket_live_shipping_service_delete_200_response_result_2);
	printf("repeating basket_live_shipping_service_delete_200_response_result:\n%s\n", cJSON_Print(jsonbasket_live_shipping_service_delete_200_response_result_2));
}

int main() {
  test_basket_live_shipping_service_delete_200_response_result(1);
  test_basket_live_shipping_service_delete_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_live_shipping_service_delete_200_response_result_MAIN
#endif // basket_live_shipping_service_delete_200_response_result_TEST
