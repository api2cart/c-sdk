#ifndef product_variant_update_batch_TEST
#define product_variant_update_batch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_update_batch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_update_batch.h"
product_variant_update_batch_t* instantiate_product_variant_update_batch(int include_optional);



product_variant_update_batch_t* instantiate_product_variant_update_batch(int include_optional) {
  product_variant_update_batch_t* product_variant_update_batch = NULL;
  if (include_optional) {
    product_variant_update_batch = product_variant_update_batch_create(
      api2cart_openapi_product_variant_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_"replace",
      1,
      1,
      list_createList()
    );
  } else {
    product_variant_update_batch = product_variant_update_batch_create(
      api2cart_openapi_product_variant_update_batch_NESTEDITEMSUPDATEBEHAVIOUR_"replace",
      1,
      1,
      list_createList()
    );
  }

  return product_variant_update_batch;
}


#ifdef product_variant_update_batch_MAIN

void test_product_variant_update_batch(int include_optional) {
    product_variant_update_batch_t* product_variant_update_batch_1 = instantiate_product_variant_update_batch(include_optional);

	cJSON* jsonproduct_variant_update_batch_1 = product_variant_update_batch_convertToJSON(product_variant_update_batch_1);
	printf("product_variant_update_batch :\n%s\n", cJSON_Print(jsonproduct_variant_update_batch_1));
	product_variant_update_batch_t* product_variant_update_batch_2 = product_variant_update_batch_parseFromJSON(jsonproduct_variant_update_batch_1);
	cJSON* jsonproduct_variant_update_batch_2 = product_variant_update_batch_convertToJSON(product_variant_update_batch_2);
	printf("repeating product_variant_update_batch:\n%s\n", cJSON_Print(jsonproduct_variant_update_batch_2));
}

int main() {
  test_product_variant_update_batch(1);
  test_product_variant_update_batch(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_update_batch_MAIN
#endif // product_variant_update_batch_TEST
