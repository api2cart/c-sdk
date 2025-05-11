#ifndef product_add_personalization_details_TEST
#define product_add_personalization_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_personalization_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_personalization_details.h"
product_add_personalization_details_t* instantiate_product_add_personalization_details(int include_optional);



product_add_personalization_details_t* instantiate_product_add_personalization_details(int include_optional) {
  product_add_personalization_details_t* product_add_personalization_details = NULL;
  if (include_optional) {
    product_add_personalization_details = product_add_personalization_details_create(
      1,
      1,
      56,
      "0"
    );
  } else {
    product_add_personalization_details = product_add_personalization_details_create(
      1,
      1,
      56,
      "0"
    );
  }

  return product_add_personalization_details;
}


#ifdef product_add_personalization_details_MAIN

void test_product_add_personalization_details(int include_optional) {
    product_add_personalization_details_t* product_add_personalization_details_1 = instantiate_product_add_personalization_details(include_optional);

	cJSON* jsonproduct_add_personalization_details_1 = product_add_personalization_details_convertToJSON(product_add_personalization_details_1);
	printf("product_add_personalization_details :\n%s\n", cJSON_Print(jsonproduct_add_personalization_details_1));
	product_add_personalization_details_t* product_add_personalization_details_2 = product_add_personalization_details_parseFromJSON(jsonproduct_add_personalization_details_1);
	cJSON* jsonproduct_add_personalization_details_2 = product_add_personalization_details_convertToJSON(product_add_personalization_details_2);
	printf("repeating product_add_personalization_details:\n%s\n", cJSON_Print(jsonproduct_add_personalization_details_2));
}

int main() {
  test_product_add_personalization_details(1);
  test_product_add_personalization_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_personalization_details_MAIN
#endif // product_add_personalization_details_TEST
