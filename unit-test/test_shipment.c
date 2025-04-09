#ifndef shipment_TEST
#define shipment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shipment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shipment.h"
shipment_t* instantiate_shipment(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


shipment_t* instantiate_shipment(int include_optional) {
  shipment_t* shipment = NULL;
  if (include_optional) {
    shipment = shipment_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      list_createList(),
      1,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    shipment = shipment_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      1,
      NULL,
      0,
      0
    );
  }

  return shipment;
}


#ifdef shipment_MAIN

void test_shipment(int include_optional) {
    shipment_t* shipment_1 = instantiate_shipment(include_optional);

	cJSON* jsonshipment_1 = shipment_convertToJSON(shipment_1);
	printf("shipment :\n%s\n", cJSON_Print(jsonshipment_1));
	shipment_t* shipment_2 = shipment_parseFromJSON(jsonshipment_1);
	cJSON* jsonshipment_2 = shipment_convertToJSON(shipment_2);
	printf("repeating shipment:\n%s\n", cJSON_Print(jsonshipment_2));
}

int main() {
  test_shipment(1);
  test_shipment(0);

  printf("Hello world \n");
  return 0;
}

#endif // shipment_MAIN
#endif // shipment_TEST
