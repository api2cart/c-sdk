#ifndef product_child_item_find_200_response_result_TEST
#define product_child_item_find_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_child_item_find_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_child_item_find_200_response_result.h"
product_child_item_find_200_response_result_t* instantiate_product_child_item_find_200_response_result(int include_optional);



product_child_item_find_200_response_result_t* instantiate_product_child_item_find_200_response_result(int include_optional) {
  product_child_item_find_200_response_result_t* product_child_item_find_200_response_result = NULL;
  if (include_optional) {
    product_child_item_find_200_response_result = product_child_item_find_200_response_result_create(
      null
    );
  } else {
    product_child_item_find_200_response_result = product_child_item_find_200_response_result_create(
      null
    );
  }

  return product_child_item_find_200_response_result;
}


#ifdef product_child_item_find_200_response_result_MAIN

void test_product_child_item_find_200_response_result(int include_optional) {
    product_child_item_find_200_response_result_t* product_child_item_find_200_response_result_1 = instantiate_product_child_item_find_200_response_result(include_optional);

	cJSON* jsonproduct_child_item_find_200_response_result_1 = product_child_item_find_200_response_result_convertToJSON(product_child_item_find_200_response_result_1);
	printf("product_child_item_find_200_response_result :\n%s\n", cJSON_Print(jsonproduct_child_item_find_200_response_result_1));
	product_child_item_find_200_response_result_t* product_child_item_find_200_response_result_2 = product_child_item_find_200_response_result_parseFromJSON(jsonproduct_child_item_find_200_response_result_1);
	cJSON* jsonproduct_child_item_find_200_response_result_2 = product_child_item_find_200_response_result_convertToJSON(product_child_item_find_200_response_result_2);
	printf("repeating product_child_item_find_200_response_result:\n%s\n", cJSON_Print(jsonproduct_child_item_find_200_response_result_2));
}

int main() {
  test_product_child_item_find_200_response_result(1);
  test_product_child_item_find_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_child_item_find_200_response_result_MAIN
#endif // product_child_item_find_200_response_result_TEST
