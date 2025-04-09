#ifndef product_option_TEST
#define product_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_option.h"
product_option_t* instantiate_product_option(int include_optional);



product_option_t* instantiate_product_option(int include_optional) {
  product_option_t* product_option = NULL;
  if (include_optional) {
    product_option = product_option_create(
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      1,
      1,
      1,
      list_createList(),
      0,
      0
    );
  } else {
    product_option = product_option_create(
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      1,
      1,
      1,
      list_createList(),
      0,
      0
    );
  }

  return product_option;
}


#ifdef product_option_MAIN

void test_product_option(int include_optional) {
    product_option_t* product_option_1 = instantiate_product_option(include_optional);

	cJSON* jsonproduct_option_1 = product_option_convertToJSON(product_option_1);
	printf("product_option :\n%s\n", cJSON_Print(jsonproduct_option_1));
	product_option_t* product_option_2 = product_option_parseFromJSON(jsonproduct_option_1);
	cJSON* jsonproduct_option_2 = product_option_convertToJSON(product_option_2);
	printf("repeating product_option:\n%s\n", cJSON_Print(jsonproduct_option_2));
}

int main() {
  test_product_option(1);
  test_product_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_option_MAIN
#endif // product_option_TEST
