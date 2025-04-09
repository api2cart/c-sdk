#ifndef brand_TEST
#define brand_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define brand_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/brand.h"
brand_t* instantiate_brand(int include_optional);



brand_t* instantiate_brand(int include_optional) {
  brand_t* brand = NULL;
  if (include_optional) {
    brand = brand_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      1,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  } else {
    brand = brand_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      1,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      0,
      0
    );
  }

  return brand;
}


#ifdef brand_MAIN

void test_brand(int include_optional) {
    brand_t* brand_1 = instantiate_brand(include_optional);

	cJSON* jsonbrand_1 = brand_convertToJSON(brand_1);
	printf("brand :\n%s\n", cJSON_Print(jsonbrand_1));
	brand_t* brand_2 = brand_parseFromJSON(jsonbrand_1);
	cJSON* jsonbrand_2 = brand_convertToJSON(brand_2);
	printf("repeating brand:\n%s\n", cJSON_Print(jsonbrand_2));
}

int main() {
  test_brand(1);
  test_brand(0);

  printf("Hello world \n");
  return 0;
}

#endif // brand_MAIN
#endif // brand_TEST
