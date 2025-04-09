#ifndef product_image_add_TEST
#define product_image_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_image_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_image_add.h"
product_image_add_t* instantiate_product_image_add(int include_optional);



product_image_add_t* instantiate_product_image_add(int include_optional) {
  product_image_add_t* product_image_add = NULL;
  if (include_optional) {
    product_image_add = product_image_add_create(
      "10",
      "bag-gray.png",
      api2cart_openapi_product_image_add_TYPE_"base,small",
      "http://docs.api2cart.com/img/logo.png",
      "This cool image",
      "image/jpeg",
      5,
      "/9j/4AAQSkZ...gD/2Q==",
      "45",
      "1,2,3,4,5",
      "1,2,3,4,5",
      "1",
      "3",
      true
    );
  } else {
    product_image_add = product_image_add_create(
      "10",
      "bag-gray.png",
      api2cart_openapi_product_image_add_TYPE_"base,small",
      "http://docs.api2cart.com/img/logo.png",
      "This cool image",
      "image/jpeg",
      5,
      "/9j/4AAQSkZ...gD/2Q==",
      "45",
      "1,2,3,4,5",
      "1,2,3,4,5",
      "1",
      "3",
      true
    );
  }

  return product_image_add;
}


#ifdef product_image_add_MAIN

void test_product_image_add(int include_optional) {
    product_image_add_t* product_image_add_1 = instantiate_product_image_add(include_optional);

	cJSON* jsonproduct_image_add_1 = product_image_add_convertToJSON(product_image_add_1);
	printf("product_image_add :\n%s\n", cJSON_Print(jsonproduct_image_add_1));
	product_image_add_t* product_image_add_2 = product_image_add_parseFromJSON(jsonproduct_image_add_1);
	cJSON* jsonproduct_image_add_2 = product_image_add_convertToJSON(product_image_add_2);
	printf("repeating product_image_add:\n%s\n", cJSON_Print(jsonproduct_image_add_2));
}

int main() {
  test_product_image_add(1);
  test_product_image_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_image_add_MAIN
#endif // product_image_add_TEST
