#ifndef product_group_price_TEST
#define product_group_price_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_group_price_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_group_price.h"
product_group_price_t* instantiate_product_group_price(int include_optional);



product_group_price_t* instantiate_product_group_price(int include_optional) {
  product_group_price_t* product_group_price = NULL;
  if (include_optional) {
    product_group_price = product_group_price_create(
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      "0",
      0,
      0
    );
  } else {
    product_group_price = product_group_price_create(
      "0",
      "0",
      1.337,
      "0",
      1.337,
      "0",
      "0",
      0,
      0
    );
  }

  return product_group_price;
}


#ifdef product_group_price_MAIN

void test_product_group_price(int include_optional) {
    product_group_price_t* product_group_price_1 = instantiate_product_group_price(include_optional);

	cJSON* jsonproduct_group_price_1 = product_group_price_convertToJSON(product_group_price_1);
	printf("product_group_price :\n%s\n", cJSON_Print(jsonproduct_group_price_1));
	product_group_price_t* product_group_price_2 = product_group_price_parseFromJSON(jsonproduct_group_price_1);
	cJSON* jsonproduct_group_price_2 = product_group_price_convertToJSON(product_group_price_2);
	printf("repeating product_group_price:\n%s\n", cJSON_Print(jsonproduct_group_price_2));
}

int main() {
  test_product_group_price(1);
  test_product_group_price(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_group_price_MAIN
#endif // product_group_price_TEST
