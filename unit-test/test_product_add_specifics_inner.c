#ifndef product_add_specifics_inner_TEST
#define product_add_specifics_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_specifics_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_specifics_inner.h"
product_add_specifics_inner_t* instantiate_product_add_specifics_inner(int include_optional);

#include "test_product_add_specifics_inner_food_details.c"
#include "test_product_add_specifics_inner_booking_details.c"


product_add_specifics_inner_t* instantiate_product_add_specifics_inner(int include_optional) {
  product_add_specifics_inner_t* product_add_specifics_inner = NULL;
  if (include_optional) {
    product_add_specifics_inner = product_add_specifics_inner_create(
      "0",
      "0",
      list_createList(),
      1,
      56,
       // false, not to have infinite recursion
      instantiate_product_add_specifics_inner_food_details(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_product_add_specifics_inner_booking_details(0)
    );
  } else {
    product_add_specifics_inner = product_add_specifics_inner_create(
      "0",
      "0",
      list_createList(),
      1,
      56,
      NULL,
      list_createList(),
      NULL
    );
  }

  return product_add_specifics_inner;
}


#ifdef product_add_specifics_inner_MAIN

void test_product_add_specifics_inner(int include_optional) {
    product_add_specifics_inner_t* product_add_specifics_inner_1 = instantiate_product_add_specifics_inner(include_optional);

	cJSON* jsonproduct_add_specifics_inner_1 = product_add_specifics_inner_convertToJSON(product_add_specifics_inner_1);
	printf("product_add_specifics_inner :\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_1));
	product_add_specifics_inner_t* product_add_specifics_inner_2 = product_add_specifics_inner_parseFromJSON(jsonproduct_add_specifics_inner_1);
	cJSON* jsonproduct_add_specifics_inner_2 = product_add_specifics_inner_convertToJSON(product_add_specifics_inner_2);
	printf("repeating product_add_specifics_inner:\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_2));
}

int main() {
  test_product_add_specifics_inner(1);
  test_product_add_specifics_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_specifics_inner_MAIN
#endif // product_add_specifics_inner_TEST
