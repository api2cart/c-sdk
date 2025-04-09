#ifndef product_add_seller_profiles_TEST
#define product_add_seller_profiles_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_seller_profiles_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add_seller_profiles.h"
product_add_seller_profiles_t* instantiate_product_add_seller_profiles(int include_optional);



product_add_seller_profiles_t* instantiate_product_add_seller_profiles(int include_optional) {
  product_add_seller_profiles_t* product_add_seller_profiles = NULL;
  if (include_optional) {
    product_add_seller_profiles = product_add_seller_profiles_create(
      "0",
      "0",
      "0"
    );
  } else {
    product_add_seller_profiles = product_add_seller_profiles_create(
      "0",
      "0",
      "0"
    );
  }

  return product_add_seller_profiles;
}


#ifdef product_add_seller_profiles_MAIN

void test_product_add_seller_profiles(int include_optional) {
    product_add_seller_profiles_t* product_add_seller_profiles_1 = instantiate_product_add_seller_profiles(include_optional);

	cJSON* jsonproduct_add_seller_profiles_1 = product_add_seller_profiles_convertToJSON(product_add_seller_profiles_1);
	printf("product_add_seller_profiles :\n%s\n", cJSON_Print(jsonproduct_add_seller_profiles_1));
	product_add_seller_profiles_t* product_add_seller_profiles_2 = product_add_seller_profiles_parseFromJSON(jsonproduct_add_seller_profiles_1);
	cJSON* jsonproduct_add_seller_profiles_2 = product_add_seller_profiles_convertToJSON(product_add_seller_profiles_2);
	printf("repeating product_add_seller_profiles:\n%s\n", cJSON_Print(jsonproduct_add_seller_profiles_2));
}

int main() {
  test_product_add_seller_profiles(1);
  test_product_add_seller_profiles(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_seller_profiles_MAIN
#endif // product_add_seller_profiles_TEST
