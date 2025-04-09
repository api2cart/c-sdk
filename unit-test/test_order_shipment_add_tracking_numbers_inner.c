#ifndef order_shipment_add_tracking_numbers_inner_TEST
#define order_shipment_add_tracking_numbers_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipment_add_tracking_numbers_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipment_add_tracking_numbers_inner.h"
order_shipment_add_tracking_numbers_inner_t* instantiate_order_shipment_add_tracking_numbers_inner(int include_optional);



order_shipment_add_tracking_numbers_inner_t* instantiate_order_shipment_add_tracking_numbers_inner(int include_optional) {
  order_shipment_add_tracking_numbers_inner_t* order_shipment_add_tracking_numbers_inner = NULL;
  if (include_optional) {
    order_shipment_add_tracking_numbers_inner = order_shipment_add_tracking_numbers_inner_create(
      "0",
      "0"
    );
  } else {
    order_shipment_add_tracking_numbers_inner = order_shipment_add_tracking_numbers_inner_create(
      "0",
      "0"
    );
  }

  return order_shipment_add_tracking_numbers_inner;
}


#ifdef order_shipment_add_tracking_numbers_inner_MAIN

void test_order_shipment_add_tracking_numbers_inner(int include_optional) {
    order_shipment_add_tracking_numbers_inner_t* order_shipment_add_tracking_numbers_inner_1 = instantiate_order_shipment_add_tracking_numbers_inner(include_optional);

	cJSON* jsonorder_shipment_add_tracking_numbers_inner_1 = order_shipment_add_tracking_numbers_inner_convertToJSON(order_shipment_add_tracking_numbers_inner_1);
	printf("order_shipment_add_tracking_numbers_inner :\n%s\n", cJSON_Print(jsonorder_shipment_add_tracking_numbers_inner_1));
	order_shipment_add_tracking_numbers_inner_t* order_shipment_add_tracking_numbers_inner_2 = order_shipment_add_tracking_numbers_inner_parseFromJSON(jsonorder_shipment_add_tracking_numbers_inner_1);
	cJSON* jsonorder_shipment_add_tracking_numbers_inner_2 = order_shipment_add_tracking_numbers_inner_convertToJSON(order_shipment_add_tracking_numbers_inner_2);
	printf("repeating order_shipment_add_tracking_numbers_inner:\n%s\n", cJSON_Print(jsonorder_shipment_add_tracking_numbers_inner_2));
}

int main() {
  test_order_shipment_add_tracking_numbers_inner(1);
  test_order_shipment_add_tracking_numbers_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipment_add_tracking_numbers_inner_MAIN
#endif // order_shipment_add_tracking_numbers_inner_TEST
