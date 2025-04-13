#ifndef product_TEST
#define product_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product.h"
product_t* instantiate_product(int include_optional);

#include "test_a2_c_date_time.c"
#include "test_a2_c_date_time.c"
#include "test_special_price.c"


product_t* instantiate_product(int include_optional) {
  product_t* product = NULL;
  if (include_optional) {
    product = product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      1.337,
      1.337,
      list_createList(),
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1.337,
      "0",
      56,
      1,
      1,
      "0",
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
       // false, not to have infinite recursion
      instantiate_a2_c_date_time(0),
      "0",
       // false, not to have infinite recursion
      instantiate_special_price(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      0,
      0
    );
  } else {
    product = product_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1.337,
      list_createList(),
      1.337,
      1.337,
      list_createList(),
      list_createList(),
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      1,
      1,
      1.337,
      "0",
      56,
      1,
      1,
      "0",
      "0",
      1,
      NULL,
      NULL,
      "0",
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      1.337,
      1.337,
      1.337,
      list_createList(),
      0,
      0
    );
  }

  return product;
}


#ifdef product_MAIN

void test_product(int include_optional) {
    product_t* product_1 = instantiate_product(include_optional);

	cJSON* jsonproduct_1 = product_convertToJSON(product_1);
	printf("product :\n%s\n", cJSON_Print(jsonproduct_1));
	product_t* product_2 = product_parseFromJSON(jsonproduct_1);
	cJSON* jsonproduct_2 = product_convertToJSON(product_2);
	printf("repeating product:\n%s\n", cJSON_Print(jsonproduct_2));
}

int main() {
  test_product(1);
  test_product(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_MAIN
#endif // product_TEST
