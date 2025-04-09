#ifndef special_price_TEST
#define special_price_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define special_price_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/special_price.h"
special_price_t* instantiate_special_price(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


special_price_t* instantiate_special_price(int include_optional) {
  special_price_t* special_price = NULL;
  if (include_optional) {
    special_price = special_price_create(
      1.337,
      1,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    special_price = special_price_create(
      1.337,
      1,
      NULL,
      NULL,
      NULL,
      0,
      0
    );
  }

  return special_price;
}


#ifdef special_price_MAIN

void test_special_price(int include_optional) {
    special_price_t* special_price_1 = instantiate_special_price(include_optional);

	cJSON* jsonspecial_price_1 = special_price_convertToJSON(special_price_1);
	printf("special_price :\n%s\n", cJSON_Print(jsonspecial_price_1));
	special_price_t* special_price_2 = special_price_parseFromJSON(jsonspecial_price_1);
	cJSON* jsonspecial_price_2 = special_price_convertToJSON(special_price_2);
	printf("repeating special_price:\n%s\n", cJSON_Print(jsonspecial_price_2));
}

int main() {
  test_special_price(1);
  test_special_price(0);

  printf("Hello world \n");
  return 0;
}

#endif // special_price_MAIN
#endif // special_price_TEST
