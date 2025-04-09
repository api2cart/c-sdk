#ifndef product_tax_add_tax_rates_inner_TEST
#define product_tax_add_tax_rates_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_tax_add_tax_rates_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_tax_add_tax_rates_inner.h"
product_tax_add_tax_rates_inner_t* instantiate_product_tax_add_tax_rates_inner(int include_optional);



product_tax_add_tax_rates_inner_t* instantiate_product_tax_add_tax_rates_inner(int include_optional) {
  product_tax_add_tax_rates_inner_t* product_tax_add_tax_rates_inner = NULL;
  if (include_optional) {
    product_tax_add_tax_rates_inner = product_tax_add_tax_rates_inner_create(
      "0",
      "0",
      1.337
    );
  } else {
    product_tax_add_tax_rates_inner = product_tax_add_tax_rates_inner_create(
      "0",
      "0",
      1.337
    );
  }

  return product_tax_add_tax_rates_inner;
}


#ifdef product_tax_add_tax_rates_inner_MAIN

void test_product_tax_add_tax_rates_inner(int include_optional) {
    product_tax_add_tax_rates_inner_t* product_tax_add_tax_rates_inner_1 = instantiate_product_tax_add_tax_rates_inner(include_optional);

	cJSON* jsonproduct_tax_add_tax_rates_inner_1 = product_tax_add_tax_rates_inner_convertToJSON(product_tax_add_tax_rates_inner_1);
	printf("product_tax_add_tax_rates_inner :\n%s\n", cJSON_Print(jsonproduct_tax_add_tax_rates_inner_1));
	product_tax_add_tax_rates_inner_t* product_tax_add_tax_rates_inner_2 = product_tax_add_tax_rates_inner_parseFromJSON(jsonproduct_tax_add_tax_rates_inner_1);
	cJSON* jsonproduct_tax_add_tax_rates_inner_2 = product_tax_add_tax_rates_inner_convertToJSON(product_tax_add_tax_rates_inner_2);
	printf("repeating product_tax_add_tax_rates_inner:\n%s\n", cJSON_Print(jsonproduct_tax_add_tax_rates_inner_2));
}

int main() {
  test_product_tax_add_tax_rates_inner(1);
  test_product_tax_add_tax_rates_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_tax_add_tax_rates_inner_MAIN
#endif // product_tax_add_tax_rates_inner_TEST
