#ifndef product_add_batch_TEST
#define product_add_batch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_batch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_batch.h"
product_add_batch_t* instantiate_product_add_batch(int include_optional);



product_add_batch_t* instantiate_product_add_batch(int include_optional) {
  product_add_batch_t* product_add_batch = NULL;
  if (include_optional) {
    product_add_batch = product_add_batch_create(
      api2cart_openapi_product_add_batch_NESTEDITEMSUPDATEBEHAVIOUR_"replace",
      1,
      1,
      list_createList()
    );
  } else {
    product_add_batch = product_add_batch_create(
      api2cart_openapi_product_add_batch_NESTEDITEMSUPDATEBEHAVIOUR_"replace",
      1,
      1,
      list_createList()
    );
  }

  return product_add_batch;
}


#ifdef product_add_batch_MAIN

void test_product_add_batch(int include_optional) {
    product_add_batch_t* product_add_batch_1 = instantiate_product_add_batch(include_optional);

	cJSON* jsonproduct_add_batch_1 = product_add_batch_convertToJSON(product_add_batch_1);
	printf("product_add_batch :\n%s\n", cJSON_Print(jsonproduct_add_batch_1));
	product_add_batch_t* product_add_batch_2 = product_add_batch_parseFromJSON(jsonproduct_add_batch_1);
	cJSON* jsonproduct_add_batch_2 = product_add_batch_convertToJSON(product_add_batch_2);
	printf("repeating product_add_batch:\n%s\n", cJSON_Print(jsonproduct_add_batch_2));
}

int main() {
  test_product_add_batch(1);
  test_product_add_batch(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_batch_MAIN
#endif // product_add_batch_TEST
