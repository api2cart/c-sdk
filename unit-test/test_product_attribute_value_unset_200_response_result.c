#ifndef product_attribute_value_unset_200_response_result_TEST
#define product_attribute_value_unset_200_response_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_attribute_value_unset_200_response_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_attribute_value_unset_200_response_result.h"
product_attribute_value_unset_200_response_result_t* instantiate_product_attribute_value_unset_200_response_result(int include_optional);



product_attribute_value_unset_200_response_result_t* instantiate_product_attribute_value_unset_200_response_result(int include_optional) {
  product_attribute_value_unset_200_response_result_t* product_attribute_value_unset_200_response_result = NULL;
  if (include_optional) {
    product_attribute_value_unset_200_response_result = product_attribute_value_unset_200_response_result_create(
      1
    );
  } else {
    product_attribute_value_unset_200_response_result = product_attribute_value_unset_200_response_result_create(
      1
    );
  }

  return product_attribute_value_unset_200_response_result;
}


#ifdef product_attribute_value_unset_200_response_result_MAIN

void test_product_attribute_value_unset_200_response_result(int include_optional) {
    product_attribute_value_unset_200_response_result_t* product_attribute_value_unset_200_response_result_1 = instantiate_product_attribute_value_unset_200_response_result(include_optional);

	cJSON* jsonproduct_attribute_value_unset_200_response_result_1 = product_attribute_value_unset_200_response_result_convertToJSON(product_attribute_value_unset_200_response_result_1);
	printf("product_attribute_value_unset_200_response_result :\n%s\n", cJSON_Print(jsonproduct_attribute_value_unset_200_response_result_1));
	product_attribute_value_unset_200_response_result_t* product_attribute_value_unset_200_response_result_2 = product_attribute_value_unset_200_response_result_parseFromJSON(jsonproduct_attribute_value_unset_200_response_result_1);
	cJSON* jsonproduct_attribute_value_unset_200_response_result_2 = product_attribute_value_unset_200_response_result_convertToJSON(product_attribute_value_unset_200_response_result_2);
	printf("repeating product_attribute_value_unset_200_response_result:\n%s\n", cJSON_Print(jsonproduct_attribute_value_unset_200_response_result_2));
}

int main() {
  test_product_attribute_value_unset_200_response_result(1);
  test_product_attribute_value_unset_200_response_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_attribute_value_unset_200_response_result_MAIN
#endif // product_attribute_value_unset_200_response_result_TEST
