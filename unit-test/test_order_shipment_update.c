#ifndef order_shipment_update_TEST
#define order_shipment_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_shipment_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_shipment_update.h"
order_shipment_update_t* instantiate_order_shipment_update(int include_optional);



order_shipment_update_t* instantiate_order_shipment_update(int include_optional) {
  order_shipment_update_t* order_shipment_update = NULL;
  if (include_optional) {
    order_shipment_update = order_shipment_update_create(
      "200000002",
      "25",
      "1",
      "UPS",
      list_createList(),
      "http://example.com?someParam=value",
      true,
      "2024-08-25T23:56:12+00:00",
      false
    );
  } else {
    order_shipment_update = order_shipment_update_create(
      "200000002",
      "25",
      "1",
      "UPS",
      list_createList(),
      "http://example.com?someParam=value",
      true,
      "2024-08-25T23:56:12+00:00",
      false
    );
  }

  return order_shipment_update;
}


#ifdef order_shipment_update_MAIN

void test_order_shipment_update(int include_optional) {
    order_shipment_update_t* order_shipment_update_1 = instantiate_order_shipment_update(include_optional);

	cJSON* jsonorder_shipment_update_1 = order_shipment_update_convertToJSON(order_shipment_update_1);
	printf("order_shipment_update :\n%s\n", cJSON_Print(jsonorder_shipment_update_1));
	order_shipment_update_t* order_shipment_update_2 = order_shipment_update_parseFromJSON(jsonorder_shipment_update_1);
	cJSON* jsonorder_shipment_update_2 = order_shipment_update_convertToJSON(order_shipment_update_2);
	printf("repeating order_shipment_update:\n%s\n", cJSON_Print(jsonorder_shipment_update_2));
}

int main() {
  test_order_shipment_update(1);
  test_order_shipment_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_shipment_update_MAIN
#endif // order_shipment_update_TEST
