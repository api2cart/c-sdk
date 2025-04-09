#ifndef product_add_manufacturer_info_TEST
#define product_add_manufacturer_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_manufacturer_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_manufacturer_info.h"
product_add_manufacturer_info_t* instantiate_product_add_manufacturer_info(int include_optional);



product_add_manufacturer_info_t* instantiate_product_add_manufacturer_info(int include_optional) {
  product_add_manufacturer_info_t* product_add_manufacturer_info = NULL;
  if (include_optional) {
    product_add_manufacturer_info = product_add_manufacturer_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    product_add_manufacturer_info = product_add_manufacturer_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return product_add_manufacturer_info;
}


#ifdef product_add_manufacturer_info_MAIN

void test_product_add_manufacturer_info(int include_optional) {
    product_add_manufacturer_info_t* product_add_manufacturer_info_1 = instantiate_product_add_manufacturer_info(include_optional);

	cJSON* jsonproduct_add_manufacturer_info_1 = product_add_manufacturer_info_convertToJSON(product_add_manufacturer_info_1);
	printf("product_add_manufacturer_info :\n%s\n", cJSON_Print(jsonproduct_add_manufacturer_info_1));
	product_add_manufacturer_info_t* product_add_manufacturer_info_2 = product_add_manufacturer_info_parseFromJSON(jsonproduct_add_manufacturer_info_1);
	cJSON* jsonproduct_add_manufacturer_info_2 = product_add_manufacturer_info_convertToJSON(product_add_manufacturer_info_2);
	printf("repeating product_add_manufacturer_info:\n%s\n", cJSON_Print(jsonproduct_add_manufacturer_info_2));
}

int main() {
  test_product_add_manufacturer_info(1);
  test_product_add_manufacturer_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_manufacturer_info_MAIN
#endif // product_add_manufacturer_info_TEST
