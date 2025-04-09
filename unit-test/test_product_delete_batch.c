#ifndef product_delete_batch_TEST
#define product_delete_batch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_delete_batch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_delete_batch.h"
product_delete_batch_t* instantiate_product_delete_batch(int include_optional);



product_delete_batch_t* instantiate_product_delete_batch(int include_optional) {
  product_delete_batch_t* product_delete_batch = NULL;
  if (include_optional) {
    product_delete_batch = product_delete_batch_create(
      list_createList()
    );
  } else {
    product_delete_batch = product_delete_batch_create(
      list_createList()
    );
  }

  return product_delete_batch;
}


#ifdef product_delete_batch_MAIN

void test_product_delete_batch(int include_optional) {
    product_delete_batch_t* product_delete_batch_1 = instantiate_product_delete_batch(include_optional);

	cJSON* jsonproduct_delete_batch_1 = product_delete_batch_convertToJSON(product_delete_batch_1);
	printf("product_delete_batch :\n%s\n", cJSON_Print(jsonproduct_delete_batch_1));
	product_delete_batch_t* product_delete_batch_2 = product_delete_batch_parseFromJSON(jsonproduct_delete_batch_1);
	cJSON* jsonproduct_delete_batch_2 = product_delete_batch_convertToJSON(product_delete_batch_2);
	printf("repeating product_delete_batch:\n%s\n", cJSON_Print(jsonproduct_delete_batch_2));
}

int main() {
  test_product_delete_batch(1);
  test_product_delete_batch(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_delete_batch_MAIN
#endif // product_delete_batch_TEST
