#ifndef shipment_item_TEST
#define shipment_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment_item.h"
shipment_item_t* instantiate_shipment_item(int include_optional);



shipment_item_t* instantiate_shipment_item(int include_optional) {
  shipment_item_t* shipment_item = NULL;
  if (include_optional) {
    shipment_item = shipment_item_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      0,
      0
    );
  } else {
    shipment_item = shipment_item_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      0,
      0
    );
  }

  return shipment_item;
}


#ifdef shipment_item_MAIN

void test_shipment_item(int include_optional) {
    shipment_item_t* shipment_item_1 = instantiate_shipment_item(include_optional);

	cJSON* jsonshipment_item_1 = shipment_item_convertToJSON(shipment_item_1);
	printf("shipment_item :\n%s\n", cJSON_Print(jsonshipment_item_1));
	shipment_item_t* shipment_item_2 = shipment_item_parseFromJSON(jsonshipment_item_1);
	cJSON* jsonshipment_item_2 = shipment_item_convertToJSON(shipment_item_2);
	printf("repeating shipment_item:\n%s\n", cJSON_Print(jsonshipment_item_2));
}

int main() {
  test_shipment_item(1);
  test_shipment_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_item_MAIN
#endif // shipment_item_TEST
