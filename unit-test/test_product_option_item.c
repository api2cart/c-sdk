#ifndef product_option_item_TEST
#define product_option_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_option_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_option_item.h"
product_option_item_t* instantiate_product_option_item(int include_optional);



product_option_item_t* instantiate_product_option_item(int include_optional) {
  product_option_item_t* product_option_item = NULL;
  if (include_optional) {
    product_option_item = product_option_item_create(
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      1,
      0,
      0
    );
  } else {
    product_option_item = product_option_item_create(
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      1,
      0,
      0
    );
  }

  return product_option_item;
}


#ifdef product_option_item_MAIN

void test_product_option_item(int include_optional) {
    product_option_item_t* product_option_item_1 = instantiate_product_option_item(include_optional);

	cJSON* jsonproduct_option_item_1 = product_option_item_convertToJSON(product_option_item_1);
	printf("product_option_item :\n%s\n", cJSON_Print(jsonproduct_option_item_1));
	product_option_item_t* product_option_item_2 = product_option_item_parseFromJSON(jsonproduct_option_item_1);
	cJSON* jsonproduct_option_item_2 = product_option_item_convertToJSON(product_option_item_2);
	printf("repeating product_option_item:\n%s\n", cJSON_Print(jsonproduct_option_item_2));
}

int main() {
  test_product_option_item(1);
  test_product_option_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_option_item_MAIN
#endif // product_option_item_TEST
