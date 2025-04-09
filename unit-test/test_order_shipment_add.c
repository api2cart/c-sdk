#ifndef order_shipment_add_TEST
#define order_shipment_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipment_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipment_add.h"
order_shipment_add_t* instantiate_order_shipment_add(int include_optional);



order_shipment_add_t* instantiate_order_shipment_add(int include_optional) {
  order_shipment_add_t* order_shipment_add = NULL;
  if (include_optional) {
    order_shipment_add = order_shipment_add_create(
      "25",
      "1",
      "1",
      "UPS",
      "flatrate_flatrate",
      list_createList(),
      true,
      list_createList(),
      true,
      true,
      "http://example.com?someParam=value",
      true,
      false,
      true
    );
  } else {
    order_shipment_add = order_shipment_add_create(
      "25",
      "1",
      "1",
      "UPS",
      "flatrate_flatrate",
      list_createList(),
      true,
      list_createList(),
      true,
      true,
      "http://example.com?someParam=value",
      true,
      false,
      true
    );
  }

  return order_shipment_add;
}


#ifdef order_shipment_add_MAIN

void test_order_shipment_add(int include_optional) {
    order_shipment_add_t* order_shipment_add_1 = instantiate_order_shipment_add(include_optional);

	cJSON* jsonorder_shipment_add_1 = order_shipment_add_convertToJSON(order_shipment_add_1);
	printf("order_shipment_add :\n%s\n", cJSON_Print(jsonorder_shipment_add_1));
	order_shipment_add_t* order_shipment_add_2 = order_shipment_add_parseFromJSON(jsonorder_shipment_add_1);
	cJSON* jsonorder_shipment_add_2 = order_shipment_add_convertToJSON(order_shipment_add_2);
	printf("repeating order_shipment_add:\n%s\n", cJSON_Print(jsonorder_shipment_add_2));
}

int main() {
  test_order_shipment_add(1);
  test_order_shipment_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipment_add_MAIN
#endif // order_shipment_add_TEST
