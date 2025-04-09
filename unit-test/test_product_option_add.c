#ifndef product_option_add_TEST
#define product_option_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_option_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_option_add.h"
product_option_add_t* instantiate_product_option_add(int include_optional);



product_option_add_t* instantiate_product_option_add(int include_optional) {
  product_option_add_t* product_option_add = NULL;
  if (include_optional) {
    product_option_add = product_option_add_create(
      "Color",
      api2cart_openapi_product_option_add_TYPE_"option_type_select",
      "10",
      "green",
      "green,black,yellow",
      "Product option",
      false,
      2,
      true,
      list_createList(),
      false
    );
  } else {
    product_option_add = product_option_add_create(
      "Color",
      api2cart_openapi_product_option_add_TYPE_"option_type_select",
      "10",
      "green",
      "green,black,yellow",
      "Product option",
      false,
      2,
      true,
      list_createList(),
      false
    );
  }

  return product_option_add;
}


#ifdef product_option_add_MAIN

void test_product_option_add(int include_optional) {
    product_option_add_t* product_option_add_1 = instantiate_product_option_add(include_optional);

	cJSON* jsonproduct_option_add_1 = product_option_add_convertToJSON(product_option_add_1);
	printf("product_option_add :\n%s\n", cJSON_Print(jsonproduct_option_add_1));
	product_option_add_t* product_option_add_2 = product_option_add_parseFromJSON(jsonproduct_option_add_1);
	cJSON* jsonproduct_option_add_2 = product_option_add_convertToJSON(product_option_add_2);
	printf("repeating product_option_add:\n%s\n", cJSON_Print(jsonproduct_option_add_2));
}

int main() {
  test_product_option_add(1);
  test_product_option_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_option_add_MAIN
#endif // product_option_add_TEST
