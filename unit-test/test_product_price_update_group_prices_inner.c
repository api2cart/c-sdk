#ifndef product_price_update_group_prices_inner_TEST
#define product_price_update_group_prices_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_price_update_group_prices_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_price_update_group_prices_inner.h"
product_price_update_group_prices_inner_t* instantiate_product_price_update_group_prices_inner(int include_optional);



product_price_update_group_prices_inner_t* instantiate_product_price_update_group_prices_inner(int include_optional) {
  product_price_update_group_prices_inner_t* product_price_update_group_prices_inner = NULL;
  if (include_optional) {
    product_price_update_group_prices_inner = product_price_update_group_prices_inner_create(
      56,
      "0",
      1.337
    );
  } else {
    product_price_update_group_prices_inner = product_price_update_group_prices_inner_create(
      56,
      "0",
      1.337
    );
  }

  return product_price_update_group_prices_inner;
}


#ifdef product_price_update_group_prices_inner_MAIN

void test_product_price_update_group_prices_inner(int include_optional) {
    product_price_update_group_prices_inner_t* product_price_update_group_prices_inner_1 = instantiate_product_price_update_group_prices_inner(include_optional);

	cJSON* jsonproduct_price_update_group_prices_inner_1 = product_price_update_group_prices_inner_convertToJSON(product_price_update_group_prices_inner_1);
	printf("product_price_update_group_prices_inner :\n%s\n", cJSON_Print(jsonproduct_price_update_group_prices_inner_1));
	product_price_update_group_prices_inner_t* product_price_update_group_prices_inner_2 = product_price_update_group_prices_inner_parseFromJSON(jsonproduct_price_update_group_prices_inner_1);
	cJSON* jsonproduct_price_update_group_prices_inner_2 = product_price_update_group_prices_inner_convertToJSON(product_price_update_group_prices_inner_2);
	printf("repeating product_price_update_group_prices_inner:\n%s\n", cJSON_Print(jsonproduct_price_update_group_prices_inner_2));
}

int main() {
  test_product_price_update_group_prices_inner(1);
  test_product_price_update_group_prices_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_price_update_group_prices_inner_MAIN
#endif // product_price_update_group_prices_inner_TEST
