#ifndef order_add_200_response_TEST
#define order_add_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_add_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_add_200_response.h"
order_add_200_response_t* instantiate_order_add_200_response(int include_optional);

#include "test_order_add_200_response_result.c"


order_add_200_response_t* instantiate_order_add_200_response(int include_optional) {
  order_add_200_response_t* order_add_200_response = NULL;
  if (include_optional) {
    order_add_200_response = order_add_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_order_add_200_response_result(0)
    );
  } else {
    order_add_200_response = order_add_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return order_add_200_response;
}


#ifdef order_add_200_response_MAIN

void test_order_add_200_response(int include_optional) {
    order_add_200_response_t* order_add_200_response_1 = instantiate_order_add_200_response(include_optional);

	cJSON* jsonorder_add_200_response_1 = order_add_200_response_convertToJSON(order_add_200_response_1);
	printf("order_add_200_response :\n%s\n", cJSON_Print(jsonorder_add_200_response_1));
	order_add_200_response_t* order_add_200_response_2 = order_add_200_response_parseFromJSON(jsonorder_add_200_response_1);
	cJSON* jsonorder_add_200_response_2 = order_add_200_response_convertToJSON(order_add_200_response_2);
	printf("repeating order_add_200_response:\n%s\n", cJSON_Print(jsonorder_add_200_response_2));
}

int main() {
  test_order_add_200_response(1);
  test_order_add_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_add_200_response_MAIN
#endif // order_add_200_response_TEST
