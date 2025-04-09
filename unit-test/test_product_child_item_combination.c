#ifndef product_child_item_combination_TEST
#define product_child_item_combination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_child_item_combination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_child_item_combination.h"
product_child_item_combination_t* instantiate_product_child_item_combination(int include_optional);



product_child_item_combination_t* instantiate_product_child_item_combination(int include_optional) {
  product_child_item_combination_t* product_child_item_combination = NULL;
  if (include_optional) {
    product_child_item_combination = product_child_item_combination_create(
      "0",
      "0",
      0,
      0
    );
  } else {
    product_child_item_combination = product_child_item_combination_create(
      "0",
      "0",
      0,
      0
    );
  }

  return product_child_item_combination;
}


#ifdef product_child_item_combination_MAIN

void test_product_child_item_combination(int include_optional) {
    product_child_item_combination_t* product_child_item_combination_1 = instantiate_product_child_item_combination(include_optional);

	cJSON* jsonproduct_child_item_combination_1 = product_child_item_combination_convertToJSON(product_child_item_combination_1);
	printf("product_child_item_combination :\n%s\n", cJSON_Print(jsonproduct_child_item_combination_1));
	product_child_item_combination_t* product_child_item_combination_2 = product_child_item_combination_parseFromJSON(jsonproduct_child_item_combination_1);
	cJSON* jsonproduct_child_item_combination_2 = product_child_item_combination_convertToJSON(product_child_item_combination_2);
	printf("repeating product_child_item_combination:\n%s\n", cJSON_Print(jsonproduct_child_item_combination_2));
}

int main() {
  test_product_child_item_combination(1);
  test_product_child_item_combination(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_child_item_combination_MAIN
#endif // product_child_item_combination_TEST
