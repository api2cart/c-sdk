#ifndef product_add_sales_tax_TEST
#define product_add_sales_tax_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_sales_tax_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_sales_tax.h"
product_add_sales_tax_t* instantiate_product_add_sales_tax(int include_optional);



product_add_sales_tax_t* instantiate_product_add_sales_tax(int include_optional) {
  product_add_sales_tax_t* product_add_sales_tax = NULL;
  if (include_optional) {
    product_add_sales_tax = product_add_sales_tax_create(
      1.337,
      "0",
      1
    );
  } else {
    product_add_sales_tax = product_add_sales_tax_create(
      1.337,
      "0",
      1
    );
  }

  return product_add_sales_tax;
}


#ifdef product_add_sales_tax_MAIN

void test_product_add_sales_tax(int include_optional) {
    product_add_sales_tax_t* product_add_sales_tax_1 = instantiate_product_add_sales_tax(include_optional);

	cJSON* jsonproduct_add_sales_tax_1 = product_add_sales_tax_convertToJSON(product_add_sales_tax_1);
	printf("product_add_sales_tax :\n%s\n", cJSON_Print(jsonproduct_add_sales_tax_1));
	product_add_sales_tax_t* product_add_sales_tax_2 = product_add_sales_tax_parseFromJSON(jsonproduct_add_sales_tax_1);
	cJSON* jsonproduct_add_sales_tax_2 = product_add_sales_tax_convertToJSON(product_add_sales_tax_2);
	printf("repeating product_add_sales_tax:\n%s\n", cJSON_Print(jsonproduct_add_sales_tax_2));
}

int main() {
  test_product_add_sales_tax(1);
  test_product_add_sales_tax(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_sales_tax_MAIN
#endif // product_add_sales_tax_TEST
