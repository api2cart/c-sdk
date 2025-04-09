#ifndef carrier_TEST
#define carrier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define carrier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/carrier.h"
carrier_t* instantiate_carrier(int include_optional);



carrier_t* instantiate_carrier(int include_optional) {
  carrier_t* carrier = NULL;
  if (include_optional) {
    carrier = carrier_create(
      "0",
      "0",
      1,
      list_createList(),
      0,
      0
    );
  } else {
    carrier = carrier_create(
      "0",
      "0",
      1,
      list_createList(),
      0,
      0
    );
  }

  return carrier;
}


#ifdef carrier_MAIN

void test_carrier(int include_optional) {
    carrier_t* carrier_1 = instantiate_carrier(include_optional);

	cJSON* jsoncarrier_1 = carrier_convertToJSON(carrier_1);
	printf("carrier :\n%s\n", cJSON_Print(jsoncarrier_1));
	carrier_t* carrier_2 = carrier_parseFromJSON(jsoncarrier_1);
	cJSON* jsoncarrier_2 = carrier_convertToJSON(carrier_2);
	printf("repeating carrier:\n%s\n", cJSON_Print(jsoncarrier_2));
}

int main() {
  test_carrier(1);
  test_carrier(0);

  printf("Hello world \n");
  return 0;
}

#endif // carrier_MAIN
#endif // carrier_TEST
