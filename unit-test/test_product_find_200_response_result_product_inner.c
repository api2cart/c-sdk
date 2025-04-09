#ifndef product_find_200_response_result_product_inner_TEST
#define product_find_200_response_result_product_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_find_200_response_result_product_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_find_200_response_result_product_inner.h"
product_find_200_response_result_product_inner_t* instantiate_product_find_200_response_result_product_inner(int include_optional);



product_find_200_response_result_product_inner_t* instantiate_product_find_200_response_result_product_inner(int include_optional) {
  product_find_200_response_result_product_inner_t* product_find_200_response_result_product_inner = NULL;
  if (include_optional) {
    product_find_200_response_result_product_inner = product_find_200_response_result_product_inner_create(
      "0",
      "0",
      "0",
      1.337
    );
  } else {
    product_find_200_response_result_product_inner = product_find_200_response_result_product_inner_create(
      "0",
      "0",
      "0",
      1.337
    );
  }

  return product_find_200_response_result_product_inner;
}


#ifdef product_find_200_response_result_product_inner_MAIN

void test_product_find_200_response_result_product_inner(int include_optional) {
    product_find_200_response_result_product_inner_t* product_find_200_response_result_product_inner_1 = instantiate_product_find_200_response_result_product_inner(include_optional);

	cJSON* jsonproduct_find_200_response_result_product_inner_1 = product_find_200_response_result_product_inner_convertToJSON(product_find_200_response_result_product_inner_1);
	printf("product_find_200_response_result_product_inner :\n%s\n", cJSON_Print(jsonproduct_find_200_response_result_product_inner_1));
	product_find_200_response_result_product_inner_t* product_find_200_response_result_product_inner_2 = product_find_200_response_result_product_inner_parseFromJSON(jsonproduct_find_200_response_result_product_inner_1);
	cJSON* jsonproduct_find_200_response_result_product_inner_2 = product_find_200_response_result_product_inner_convertToJSON(product_find_200_response_result_product_inner_2);
	printf("repeating product_find_200_response_result_product_inner:\n%s\n", cJSON_Print(jsonproduct_find_200_response_result_product_inner_2));
}

int main() {
  test_product_find_200_response_result_product_inner(1);
  test_product_find_200_response_result_product_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_find_200_response_result_product_inner_MAIN
#endif // product_find_200_response_result_product_inner_TEST
