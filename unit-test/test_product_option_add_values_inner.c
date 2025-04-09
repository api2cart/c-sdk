#ifndef product_option_add_values_inner_TEST
#define product_option_add_values_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_option_add_values_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_option_add_values_inner.h"
product_option_add_values_inner_t* instantiate_product_option_add_values_inner(int include_optional);



product_option_add_values_inner_t* instantiate_product_option_add_values_inner(int include_optional) {
  product_option_add_values_inner_t* product_option_add_values_inner = NULL;
  if (include_optional) {
    product_option_add_values_inner = product_option_add_values_inner_create(
      "0",
      "0",
      1
    );
  } else {
    product_option_add_values_inner = product_option_add_values_inner_create(
      "0",
      "0",
      1
    );
  }

  return product_option_add_values_inner;
}


#ifdef product_option_add_values_inner_MAIN

void test_product_option_add_values_inner(int include_optional) {
    product_option_add_values_inner_t* product_option_add_values_inner_1 = instantiate_product_option_add_values_inner(include_optional);

	cJSON* jsonproduct_option_add_values_inner_1 = product_option_add_values_inner_convertToJSON(product_option_add_values_inner_1);
	printf("product_option_add_values_inner :\n%s\n", cJSON_Print(jsonproduct_option_add_values_inner_1));
	product_option_add_values_inner_t* product_option_add_values_inner_2 = product_option_add_values_inner_parseFromJSON(jsonproduct_option_add_values_inner_1);
	cJSON* jsonproduct_option_add_values_inner_2 = product_option_add_values_inner_convertToJSON(product_option_add_values_inner_2);
	printf("repeating product_option_add_values_inner:\n%s\n", cJSON_Print(jsonproduct_option_add_values_inner_2));
}

int main() {
  test_product_option_add_values_inner(1);
  test_product_option_add_values_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_option_add_values_inner_MAIN
#endif // product_option_add_values_inner_TEST
