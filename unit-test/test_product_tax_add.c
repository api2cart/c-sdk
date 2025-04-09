#ifndef product_tax_add_TEST
#define product_tax_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_tax_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_tax_add.h"
product_tax_add_t* instantiate_product_tax_add(int include_optional);



product_tax_add_t* instantiate_product_tax_add(int include_optional) {
  product_tax_add_t* product_tax_add = NULL;
  if (include_optional) {
    product_tax_add = product_tax_add_create(
      "10",
      "ECO-Tax",
      list_createList()
    );
  } else {
    product_tax_add = product_tax_add_create(
      "10",
      "ECO-Tax",
      list_createList()
    );
  }

  return product_tax_add;
}


#ifdef product_tax_add_MAIN

void test_product_tax_add(int include_optional) {
    product_tax_add_t* product_tax_add_1 = instantiate_product_tax_add(include_optional);

	cJSON* jsonproduct_tax_add_1 = product_tax_add_convertToJSON(product_tax_add_1);
	printf("product_tax_add :\n%s\n", cJSON_Print(jsonproduct_tax_add_1));
	product_tax_add_t* product_tax_add_2 = product_tax_add_parseFromJSON(jsonproduct_tax_add_1);
	cJSON* jsonproduct_tax_add_2 = product_tax_add_convertToJSON(product_tax_add_2);
	printf("repeating product_tax_add:\n%s\n", cJSON_Print(jsonproduct_tax_add_2));
}

int main() {
  test_product_tax_add(1);
  test_product_tax_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_tax_add_MAIN
#endif // product_tax_add_TEST
