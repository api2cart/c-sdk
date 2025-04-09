#ifndef product_group_item_TEST
#define product_group_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_group_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_group_item.h"
product_group_item_t* instantiate_product_group_item(int include_optional);



product_group_item_t* instantiate_product_group_item(int include_optional) {
  product_group_item_t* product_group_item = NULL;
  if (include_optional) {
    product_group_item = product_group_item_create(
      "0",
      "0",
      "0",
      1,
      1.337,
      0,
      0
    );
  } else {
    product_group_item = product_group_item_create(
      "0",
      "0",
      "0",
      1,
      1.337,
      0,
      0
    );
  }

  return product_group_item;
}


#ifdef product_group_item_MAIN

void test_product_group_item(int include_optional) {
    product_group_item_t* product_group_item_1 = instantiate_product_group_item(include_optional);

	cJSON* jsonproduct_group_item_1 = product_group_item_convertToJSON(product_group_item_1);
	printf("product_group_item :\n%s\n", cJSON_Print(jsonproduct_group_item_1));
	product_group_item_t* product_group_item_2 = product_group_item_parseFromJSON(jsonproduct_group_item_1);
	cJSON* jsonproduct_group_item_2 = product_group_item_convertToJSON(product_group_item_2);
	printf("repeating product_group_item:\n%s\n", cJSON_Print(jsonproduct_group_item_2));
}

int main() {
  test_product_group_item(1);
  test_product_group_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_group_item_MAIN
#endif // product_group_item_TEST
