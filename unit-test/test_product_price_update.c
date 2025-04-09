#ifndef product_price_update_TEST
#define product_price_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_price_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_price_update.h"
product_price_update_t* instantiate_product_price_update(int include_optional);



product_price_update_t* instantiate_product_price_update(int include_optional) {
  product_price_update_t* product_price_update = NULL;
  if (include_optional) {
    product_price_update = product_price_update_create(
      "10",
      list_createList()
    );
  } else {
    product_price_update = product_price_update_create(
      "10",
      list_createList()
    );
  }

  return product_price_update;
}


#ifdef product_price_update_MAIN

void test_product_price_update(int include_optional) {
    product_price_update_t* product_price_update_1 = instantiate_product_price_update(include_optional);

	cJSON* jsonproduct_price_update_1 = product_price_update_convertToJSON(product_price_update_1);
	printf("product_price_update :\n%s\n", cJSON_Print(jsonproduct_price_update_1));
	product_price_update_t* product_price_update_2 = product_price_update_parseFromJSON(jsonproduct_price_update_1);
	cJSON* jsonproduct_price_update_2 = product_price_update_convertToJSON(product_price_update_2);
	printf("repeating product_price_update:\n%s\n", cJSON_Print(jsonproduct_price_update_2));
}

int main() {
  test_product_price_update(1);
  test_product_price_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_price_update_MAIN
#endif // product_price_update_TEST
