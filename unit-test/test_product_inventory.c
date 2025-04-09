#ifndef product_inventory_TEST
#define product_inventory_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_inventory_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_inventory.h"
product_inventory_t* instantiate_product_inventory(int include_optional);



product_inventory_t* instantiate_product_inventory(int include_optional) {
  product_inventory_t* product_inventory = NULL;
  if (include_optional) {
    product_inventory = product_inventory_create(
      "0",
      1.337,
      1,
      56,
      0,
      0
    );
  } else {
    product_inventory = product_inventory_create(
      "0",
      1.337,
      1,
      56,
      0,
      0
    );
  }

  return product_inventory;
}


#ifdef product_inventory_MAIN

void test_product_inventory(int include_optional) {
    product_inventory_t* product_inventory_1 = instantiate_product_inventory(include_optional);

	cJSON* jsonproduct_inventory_1 = product_inventory_convertToJSON(product_inventory_1);
	printf("product_inventory :\n%s\n", cJSON_Print(jsonproduct_inventory_1));
	product_inventory_t* product_inventory_2 = product_inventory_parseFromJSON(jsonproduct_inventory_1);
	cJSON* jsonproduct_inventory_2 = product_inventory_convertToJSON(product_inventory_2);
	printf("repeating product_inventory:\n%s\n", cJSON_Print(jsonproduct_inventory_2));
}

int main() {
  test_product_inventory(1);
  test_product_inventory(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_inventory_MAIN
#endif // product_inventory_TEST
