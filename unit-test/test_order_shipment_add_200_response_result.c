#ifndef order_shipment_add_200_response_result_TEST
#define order_shipment_add_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipment_add_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipment_add_200_response_result.h"
order_shipment_add_200_response_result_t* instantiate_order_shipment_add_200_response_result(int include_optional);



order_shipment_add_200_response_result_t* instantiate_order_shipment_add_200_response_result(int include_optional) {
  order_shipment_add_200_response_result_t* order_shipment_add_200_response_result = NULL;
  if (include_optional) {
    order_shipment_add_200_response_result = order_shipment_add_200_response_result_create(
      "0"
    );
  } else {
    order_shipment_add_200_response_result = order_shipment_add_200_response_result_create(
      "0"
    );
  }

  return order_shipment_add_200_response_result;
}


#ifdef order_shipment_add_200_response_result_MAIN

void test_order_shipment_add_200_response_result(int include_optional) {
    order_shipment_add_200_response_result_t* order_shipment_add_200_response_result_1 = instantiate_order_shipment_add_200_response_result(include_optional);

	cJSON* jsonorder_shipment_add_200_response_result_1 = order_shipment_add_200_response_result_convertToJSON(order_shipment_add_200_response_result_1);
	printf("order_shipment_add_200_response_result :\n%s\n", cJSON_Print(jsonorder_shipment_add_200_response_result_1));
	order_shipment_add_200_response_result_t* order_shipment_add_200_response_result_2 = order_shipment_add_200_response_result_parseFromJSON(jsonorder_shipment_add_200_response_result_1);
	cJSON* jsonorder_shipment_add_200_response_result_2 = order_shipment_add_200_response_result_convertToJSON(order_shipment_add_200_response_result_2);
	printf("repeating order_shipment_add_200_response_result:\n%s\n", cJSON_Print(jsonorder_shipment_add_200_response_result_2));
}

int main() {
  test_order_shipment_add_200_response_result(1);
  test_order_shipment_add_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipment_add_200_response_result_MAIN
#endif // order_shipment_add_200_response_result_TEST
