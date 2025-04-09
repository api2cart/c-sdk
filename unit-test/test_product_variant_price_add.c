#ifndef product_variant_price_add_TEST
#define product_variant_price_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_price_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_price_add.h"
product_variant_price_add_t* instantiate_product_variant_price_add(int include_optional);



product_variant_price_add_t* instantiate_product_variant_price_add(int include_optional) {
  product_variant_price_add_t* product_variant_price_add = NULL;
  if (include_optional) {
    product_variant_price_add = product_variant_price_add_create(
      "10",
      "10",
      list_createList(),
      "1"
    );
  } else {
    product_variant_price_add = product_variant_price_add_create(
      "10",
      "10",
      list_createList(),
      "1"
    );
  }

  return product_variant_price_add;
}


#ifdef product_variant_price_add_MAIN

void test_product_variant_price_add(int include_optional) {
    product_variant_price_add_t* product_variant_price_add_1 = instantiate_product_variant_price_add(include_optional);

	cJSON* jsonproduct_variant_price_add_1 = product_variant_price_add_convertToJSON(product_variant_price_add_1);
	printf("product_variant_price_add :\n%s\n", cJSON_Print(jsonproduct_variant_price_add_1));
	product_variant_price_add_t* product_variant_price_add_2 = product_variant_price_add_parseFromJSON(jsonproduct_variant_price_add_1);
	cJSON* jsonproduct_variant_price_add_2 = product_variant_price_add_convertToJSON(product_variant_price_add_2);
	printf("repeating product_variant_price_add:\n%s\n", cJSON_Print(jsonproduct_variant_price_add_2));
}

int main() {
  test_product_variant_price_add(1);
  test_product_variant_price_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_price_add_MAIN
#endif // product_variant_price_add_TEST
