#ifndef product_variant_price_update_TEST
#define product_variant_price_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_price_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_price_update.h"
product_variant_price_update_t* instantiate_product_variant_price_update(int include_optional);



product_variant_price_update_t* instantiate_product_variant_price_update(int include_optional) {
  product_variant_price_update_t* product_variant_price_update = NULL;
  if (include_optional) {
    product_variant_price_update = product_variant_price_update_create(
      "10",
      "10",
      list_createList()
    );
  } else {
    product_variant_price_update = product_variant_price_update_create(
      "10",
      "10",
      list_createList()
    );
  }

  return product_variant_price_update;
}


#ifdef product_variant_price_update_MAIN

void test_product_variant_price_update(int include_optional) {
    product_variant_price_update_t* product_variant_price_update_1 = instantiate_product_variant_price_update(include_optional);

	cJSON* jsonproduct_variant_price_update_1 = product_variant_price_update_convertToJSON(product_variant_price_update_1);
	printf("product_variant_price_update :\n%s\n", cJSON_Print(jsonproduct_variant_price_update_1));
	product_variant_price_update_t* product_variant_price_update_2 = product_variant_price_update_parseFromJSON(jsonproduct_variant_price_update_1);
	cJSON* jsonproduct_variant_price_update_2 = product_variant_price_update_convertToJSON(product_variant_price_update_2);
	printf("repeating product_variant_price_update:\n%s\n", cJSON_Print(jsonproduct_variant_price_update_2));
}

int main() {
  test_product_variant_price_update(1);
  test_product_variant_price_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_price_update_MAIN
#endif // product_variant_price_update_TEST
