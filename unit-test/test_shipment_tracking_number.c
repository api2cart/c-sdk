#ifndef shipment_tracking_number_TEST
#define shipment_tracking_number_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_tracking_number_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment_tracking_number.h"
shipment_tracking_number_t* instantiate_shipment_tracking_number(int include_optional);



shipment_tracking_number_t* instantiate_shipment_tracking_number(int include_optional) {
  shipment_tracking_number_t* shipment_tracking_number = NULL;
  if (include_optional) {
    shipment_tracking_number = shipment_tracking_number_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    shipment_tracking_number = shipment_tracking_number_create(
      "0",
      "0",
      0,
      0
    );
  }

  return shipment_tracking_number;
}


#ifdef shipment_tracking_number_MAIN

void test_shipment_tracking_number(int include_optional) {
    shipment_tracking_number_t* shipment_tracking_number_1 = instantiate_shipment_tracking_number(include_optional);

	cJSON* jsonshipment_tracking_number_1 = shipment_tracking_number_convertToJSON(shipment_tracking_number_1);
	printf("shipment_tracking_number :\n%s\n", cJSON_Print(jsonshipment_tracking_number_1));
	shipment_tracking_number_t* shipment_tracking_number_2 = shipment_tracking_number_parseFromJSON(jsonshipment_tracking_number_1);
	cJSON* jsonshipment_tracking_number_2 = shipment_tracking_number_convertToJSON(shipment_tracking_number_2);
	printf("repeating shipment_tracking_number:\n%s\n", cJSON_Print(jsonshipment_tracking_number_2));
}

int main() {
  test_shipment_tracking_number(1);
  test_shipment_tracking_number(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_tracking_number_MAIN
#endif // shipment_tracking_number_TEST
