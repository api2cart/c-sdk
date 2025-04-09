#ifndef product_update_batch_payload_inner_TEST
#define product_update_batch_payload_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_update_batch_payload_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_update_batch_payload_inner.h"
product_update_batch_payload_inner_t* instantiate_product_update_batch_payload_inner(int include_optional);



product_update_batch_payload_inner_t* instantiate_product_update_batch_payload_inner(int include_optional) {
  product_update_batch_payload_inner_t* product_update_batch_payload_inner = NULL;
  if (include_optional) {
    product_update_batch_payload_inner = product_update_batch_payload_inner_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      1,
      1,
      "0",
      1,
      1,
      1,
      1,
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    product_update_batch_payload_inner = product_update_batch_payload_inner_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      "0",
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      1.337,
      1.337,
      1.337,
      1.337,
      "0",
      "0",
      1,
      1,
      "0",
      1,
      1,
      1,
      1,
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return product_update_batch_payload_inner;
}


#ifdef product_update_batch_payload_inner_MAIN

void test_product_update_batch_payload_inner(int include_optional) {
    product_update_batch_payload_inner_t* product_update_batch_payload_inner_1 = instantiate_product_update_batch_payload_inner(include_optional);

	cJSON* jsonproduct_update_batch_payload_inner_1 = product_update_batch_payload_inner_convertToJSON(product_update_batch_payload_inner_1);
	printf("product_update_batch_payload_inner :\n%s\n", cJSON_Print(jsonproduct_update_batch_payload_inner_1));
	product_update_batch_payload_inner_t* product_update_batch_payload_inner_2 = product_update_batch_payload_inner_parseFromJSON(jsonproduct_update_batch_payload_inner_1);
	cJSON* jsonproduct_update_batch_payload_inner_2 = product_update_batch_payload_inner_convertToJSON(product_update_batch_payload_inner_2);
	printf("repeating product_update_batch_payload_inner:\n%s\n", cJSON_Print(jsonproduct_update_batch_payload_inner_2));
}

int main() {
  test_product_update_batch_payload_inner(1);
  test_product_update_batch_payload_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_update_batch_payload_inner_MAIN
#endif // product_update_batch_payload_inner_TEST
