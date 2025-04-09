#ifndef product_variant_image_add_TEST
#define product_variant_image_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_image_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_image_add.h"
product_variant_image_add_t* instantiate_product_variant_image_add(int include_optional);



product_variant_image_add_t* instantiate_product_variant_image_add(int include_optional) {
  product_variant_image_add_t* product_variant_image_add = NULL;
  if (include_optional) {
    product_variant_image_add = product_variant_image_add_create(
      "10",
      "45",
      "abibas.png",
      api2cart_openapi_product_variant_image_add_TYPE_"base",
      "http://docs.api2cart.com/img/logo.png",
      "/9j/4AAQSkZ...gD/2Q==",
      "This cool image",
      "image/jpeg",
      5,
      "1",
      "5"
    );
  } else {
    product_variant_image_add = product_variant_image_add_create(
      "10",
      "45",
      "abibas.png",
      api2cart_openapi_product_variant_image_add_TYPE_"base",
      "http://docs.api2cart.com/img/logo.png",
      "/9j/4AAQSkZ...gD/2Q==",
      "This cool image",
      "image/jpeg",
      5,
      "1",
      "5"
    );
  }

  return product_variant_image_add;
}


#ifdef product_variant_image_add_MAIN

void test_product_variant_image_add(int include_optional) {
    product_variant_image_add_t* product_variant_image_add_1 = instantiate_product_variant_image_add(include_optional);

	cJSON* jsonproduct_variant_image_add_1 = product_variant_image_add_convertToJSON(product_variant_image_add_1);
	printf("product_variant_image_add :\n%s\n", cJSON_Print(jsonproduct_variant_image_add_1));
	product_variant_image_add_t* product_variant_image_add_2 = product_variant_image_add_parseFromJSON(jsonproduct_variant_image_add_1);
	cJSON* jsonproduct_variant_image_add_2 = product_variant_image_add_convertToJSON(product_variant_image_add_2);
	printf("repeating product_variant_image_add:\n%s\n", cJSON_Print(jsonproduct_variant_image_add_2));
}

int main() {
  test_product_variant_image_add(1);
  test_product_variant_image_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_image_add_MAIN
#endif // product_variant_image_add_TEST
