#ifndef product_tier_price_TEST
#define product_tier_price_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_tier_price_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_tier_price.h"
product_tier_price_t* instantiate_product_tier_price(int include_optional);



product_tier_price_t* instantiate_product_tier_price(int include_optional) {
  product_tier_price_t* product_tier_price = NULL;
  if (include_optional) {
    product_tier_price = product_tier_price_create(
      1.337,
      1.337,
      0,
      0
    );
  } else {
    product_tier_price = product_tier_price_create(
      1.337,
      1.337,
      0,
      0
    );
  }

  return product_tier_price;
}


#ifdef product_tier_price_MAIN

void test_product_tier_price(int include_optional) {
    product_tier_price_t* product_tier_price_1 = instantiate_product_tier_price(include_optional);

	cJSON* jsonproduct_tier_price_1 = product_tier_price_convertToJSON(product_tier_price_1);
	printf("product_tier_price :\n%s\n", cJSON_Print(jsonproduct_tier_price_1));
	product_tier_price_t* product_tier_price_2 = product_tier_price_parseFromJSON(jsonproduct_tier_price_1);
	cJSON* jsonproduct_tier_price_2 = product_tier_price_convertToJSON(product_tier_price_2);
	printf("repeating product_tier_price:\n%s\n", cJSON_Print(jsonproduct_tier_price_2));
}

int main() {
  test_product_tier_price(1);
  test_product_tier_price(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_tier_price_MAIN
#endif // product_tier_price_TEST
