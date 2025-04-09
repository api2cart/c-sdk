#ifndef product_add_specifics_inner_food_details_TEST
#define product_add_specifics_inner_food_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_specifics_inner_food_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_specifics_inner_food_details.h"
product_add_specifics_inner_food_details_t* instantiate_product_add_specifics_inner_food_details(int include_optional);



product_add_specifics_inner_food_details_t* instantiate_product_add_specifics_inner_food_details(int include_optional) {
  product_add_specifics_inner_food_details_t* product_add_specifics_inner_food_details = NULL;
  if (include_optional) {
    product_add_specifics_inner_food_details = product_add_specifics_inner_food_details_create(
      1.337
    );
  } else {
    product_add_specifics_inner_food_details = product_add_specifics_inner_food_details_create(
      1.337
    );
  }

  return product_add_specifics_inner_food_details;
}


#ifdef product_add_specifics_inner_food_details_MAIN

void test_product_add_specifics_inner_food_details(int include_optional) {
    product_add_specifics_inner_food_details_t* product_add_specifics_inner_food_details_1 = instantiate_product_add_specifics_inner_food_details(include_optional);

	cJSON* jsonproduct_add_specifics_inner_food_details_1 = product_add_specifics_inner_food_details_convertToJSON(product_add_specifics_inner_food_details_1);
	printf("product_add_specifics_inner_food_details :\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_food_details_1));
	product_add_specifics_inner_food_details_t* product_add_specifics_inner_food_details_2 = product_add_specifics_inner_food_details_parseFromJSON(jsonproduct_add_specifics_inner_food_details_1);
	cJSON* jsonproduct_add_specifics_inner_food_details_2 = product_add_specifics_inner_food_details_convertToJSON(product_add_specifics_inner_food_details_2);
	printf("repeating product_add_specifics_inner_food_details:\n%s\n", cJSON_Print(jsonproduct_add_specifics_inner_food_details_2));
}

int main() {
  test_product_add_specifics_inner_food_details(1);
  test_product_add_specifics_inner_food_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_specifics_inner_food_details_MAIN
#endif // product_add_specifics_inner_food_details_TEST
