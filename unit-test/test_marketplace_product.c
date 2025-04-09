#ifndef marketplace_product_TEST
#define marketplace_product_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define marketplace_product_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/marketplace_product.h"
marketplace_product_t* instantiate_marketplace_product(int include_optional);



marketplace_product_t* instantiate_marketplace_product(int include_optional) {
  marketplace_product_t* marketplace_product = NULL;
  if (include_optional) {
    marketplace_product = marketplace_product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      list_createList(),
      "0",
      "0",
      1.337,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  } else {
    marketplace_product = marketplace_product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      list_createList(),
      "0",
      "0",
      1.337,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      0,
      0
    );
  }

  return marketplace_product;
}


#ifdef marketplace_product_MAIN

void test_marketplace_product(int include_optional) {
    marketplace_product_t* marketplace_product_1 = instantiate_marketplace_product(include_optional);

	cJSON* jsonmarketplace_product_1 = marketplace_product_convertToJSON(marketplace_product_1);
	printf("marketplace_product :\n%s\n", cJSON_Print(jsonmarketplace_product_1));
	marketplace_product_t* marketplace_product_2 = marketplace_product_parseFromJSON(jsonmarketplace_product_1);
	cJSON* jsonmarketplace_product_2 = marketplace_product_convertToJSON(marketplace_product_2);
	printf("repeating marketplace_product:\n%s\n", cJSON_Print(jsonmarketplace_product_2));
}

int main() {
  test_marketplace_product(1);
  test_marketplace_product(0);

  printf("Hello world \n");
  return 0;
}

#endif // marketplace_product_MAIN
#endif // marketplace_product_TEST
