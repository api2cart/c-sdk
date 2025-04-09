#ifndef product_variant_add_attributes_inner_TEST
#define product_variant_add_attributes_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_add_attributes_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_add_attributes_inner.h"
product_variant_add_attributes_inner_t* instantiate_product_variant_add_attributes_inner(int include_optional);



product_variant_add_attributes_inner_t* instantiate_product_variant_add_attributes_inner(int include_optional) {
  product_variant_add_attributes_inner_t* product_variant_add_attributes_inner = NULL;
  if (include_optional) {
    product_variant_add_attributes_inner = product_variant_add_attributes_inner_create(
      "0",
      "0",
      1.337
    );
  } else {
    product_variant_add_attributes_inner = product_variant_add_attributes_inner_create(
      "0",
      "0",
      1.337
    );
  }

  return product_variant_add_attributes_inner;
}


#ifdef product_variant_add_attributes_inner_MAIN

void test_product_variant_add_attributes_inner(int include_optional) {
    product_variant_add_attributes_inner_t* product_variant_add_attributes_inner_1 = instantiate_product_variant_add_attributes_inner(include_optional);

	cJSON* jsonproduct_variant_add_attributes_inner_1 = product_variant_add_attributes_inner_convertToJSON(product_variant_add_attributes_inner_1);
	printf("product_variant_add_attributes_inner :\n%s\n", cJSON_Print(jsonproduct_variant_add_attributes_inner_1));
	product_variant_add_attributes_inner_t* product_variant_add_attributes_inner_2 = product_variant_add_attributes_inner_parseFromJSON(jsonproduct_variant_add_attributes_inner_1);
	cJSON* jsonproduct_variant_add_attributes_inner_2 = product_variant_add_attributes_inner_convertToJSON(product_variant_add_attributes_inner_2);
	printf("repeating product_variant_add_attributes_inner:\n%s\n", cJSON_Print(jsonproduct_variant_add_attributes_inner_2));
}

int main() {
  test_product_variant_add_attributes_inner(1);
  test_product_variant_add_attributes_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_add_attributes_inner_MAIN
#endif // product_variant_add_attributes_inner_TEST
