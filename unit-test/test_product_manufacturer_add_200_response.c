#ifndef product_manufacturer_add_200_response_TEST
#define product_manufacturer_add_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_manufacturer_add_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_manufacturer_add_200_response.h"
product_manufacturer_add_200_response_t* instantiate_product_manufacturer_add_200_response(int include_optional);

#include "test_product_manufacturer_add_200_response_result.c"


product_manufacturer_add_200_response_t* instantiate_product_manufacturer_add_200_response(int include_optional) {
  product_manufacturer_add_200_response_t* product_manufacturer_add_200_response = NULL;
  if (include_optional) {
    product_manufacturer_add_200_response = product_manufacturer_add_200_response_create(
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_product_manufacturer_add_200_response_result(0)
    );
  } else {
    product_manufacturer_add_200_response = product_manufacturer_add_200_response_create(
      56,
      "0",
      NULL
    );
  }

  return product_manufacturer_add_200_response;
}


#ifdef product_manufacturer_add_200_response_MAIN

void test_product_manufacturer_add_200_response(int include_optional) {
    product_manufacturer_add_200_response_t* product_manufacturer_add_200_response_1 = instantiate_product_manufacturer_add_200_response(include_optional);

	cJSON* jsonproduct_manufacturer_add_200_response_1 = product_manufacturer_add_200_response_convertToJSON(product_manufacturer_add_200_response_1);
	printf("product_manufacturer_add_200_response :\n%s\n", cJSON_Print(jsonproduct_manufacturer_add_200_response_1));
	product_manufacturer_add_200_response_t* product_manufacturer_add_200_response_2 = product_manufacturer_add_200_response_parseFromJSON(jsonproduct_manufacturer_add_200_response_1);
	cJSON* jsonproduct_manufacturer_add_200_response_2 = product_manufacturer_add_200_response_convertToJSON(product_manufacturer_add_200_response_2);
	printf("repeating product_manufacturer_add_200_response:\n%s\n", cJSON_Print(jsonproduct_manufacturer_add_200_response_2));
}

int main() {
  test_product_manufacturer_add_200_response(1);
  test_product_manufacturer_add_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_manufacturer_add_200_response_MAIN
#endif // product_manufacturer_add_200_response_TEST
