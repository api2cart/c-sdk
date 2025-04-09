#ifndef basket_info_200_response_TEST
#define basket_info_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define basket_info_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/basket_info_200_response.h"
basket_info_200_response_t* instantiate_basket_info_200_response(int include_optional);

#include "test_basket.c"


basket_info_200_response_t* instantiate_basket_info_200_response(int include_optional) {
  basket_info_200_response_t* basket_info_200_response = NULL;
  if (include_optional) {
    basket_info_200_response = basket_info_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_basket(0)
    );
  } else {
    basket_info_200_response = basket_info_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return basket_info_200_response;
}


#ifdef basket_info_200_response_MAIN

void test_basket_info_200_response(int include_optional) {
    basket_info_200_response_t* basket_info_200_response_1 = instantiate_basket_info_200_response(include_optional);

	cJSON* jsonbasket_info_200_response_1 = basket_info_200_response_convertToJSON(basket_info_200_response_1);
	printf("basket_info_200_response :\n%s\n", cJSON_Print(jsonbasket_info_200_response_1));
	basket_info_200_response_t* basket_info_200_response_2 = basket_info_200_response_parseFromJSON(jsonbasket_info_200_response_1);
	cJSON* jsonbasket_info_200_response_2 = basket_info_200_response_convertToJSON(basket_info_200_response_2);
	printf("repeating basket_info_200_response:\n%s\n", cJSON_Print(jsonbasket_info_200_response_2));
}

int main() {
  test_basket_info_200_response(1);
  test_basket_info_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // basket_info_200_response_MAIN
#endif // basket_info_200_response_TEST
