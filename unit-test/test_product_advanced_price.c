#ifndef product_advanced_price_TEST
#define product_advanced_price_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_advanced_price_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_advanced_price.h"
product_advanced_price_t* instantiate_product_advanced_price(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"


product_advanced_price_t* instantiate_product_advanced_price(int include_optional) {
  product_advanced_price_t* product_advanced_price = NULL;
  if (include_optional) {
    product_advanced_price = product_advanced_price_create(
      "0",
      1.337,
      1,
      "0",
      1.337,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      0,
      0
    );
  } else {
    product_advanced_price = product_advanced_price_create(
      "0",
      1.337,
      1,
      "0",
      1.337,
      NULL,
      NULL,
      0,
      0
    );
  }

  return product_advanced_price;
}


#ifdef product_advanced_price_MAIN

void test_product_advanced_price(int include_optional) {
    product_advanced_price_t* product_advanced_price_1 = instantiate_product_advanced_price(include_optional);

	cJSON* jsonproduct_advanced_price_1 = product_advanced_price_convertToJSON(product_advanced_price_1);
	printf("product_advanced_price :\n%s\n", cJSON_Print(jsonproduct_advanced_price_1));
	product_advanced_price_t* product_advanced_price_2 = product_advanced_price_parseFromJSON(jsonproduct_advanced_price_1);
	cJSON* jsonproduct_advanced_price_2 = product_advanced_price_convertToJSON(product_advanced_price_2);
	printf("repeating product_advanced_price:\n%s\n", cJSON_Print(jsonproduct_advanced_price_2));
}

int main() {
  test_product_advanced_price(1);
  test_product_advanced_price(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_advanced_price_MAIN
#endif // product_advanced_price_TEST
