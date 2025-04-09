#ifndef product_variant_add_TEST
#define product_variant_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_add.h"
product_variant_add_t* instantiate_product_variant_add(int include_optional);



product_variant_add_t* instantiate_product_variant_add(int include_optional) {
  product_variant_add_t* product_variant_add = NULL;
  if (include_optional) {
    product_variant_add = product_variant_add_create(
      "10",
      "Bag Green XXL",
      "bag_01",
      "bag_01",
      "9770317847001",
      "12345678912345",
      99.9,
      99.9,
      65.9,
      5.5,
      list_createList(),
      "Product variant",
      56.9,
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      false,
      false,
      23.69,
      56.12,
      56.12,
      56.12,
      "lb",
      "Short description. This is very short description",
      "1",
      6,
      "2014-08-09 13:13:13",
      "Samsung",
      "9",
      "category,test",
      "category,test",
      "category,test",
      "/product_variant_slug",
      "1",
      "3",
      false,
      false,
      "123456",
      "123456",
      false,
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "1,2",
      true,
      true,
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      true,
      "true",
      list_createList(),
      false
    );
  } else {
    product_variant_add = product_variant_add_create(
      "10",
      "Bag Green XXL",
      "bag_01",
      "bag_01",
      "9770317847001",
      "12345678912345",
      99.9,
      99.9,
      65.9,
      5.5,
      list_createList(),
      "Product variant",
      56.9,
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      false,
      false,
      23.69,
      56.12,
      56.12,
      56.12,
      "lb",
      "Short description. This is very short description",
      "1",
      6,
      "2014-08-09 13:13:13",
      "Samsung",
      "9",
      "category,test",
      "category,test",
      "category,test",
      "/product_variant_slug",
      "1",
      "3",
      false,
      false,
      "123456",
      "123456",
      false,
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "1,2",
      true,
      true,
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      true,
      "true",
      list_createList(),
      false
    );
  }

  return product_variant_add;
}


#ifdef product_variant_add_MAIN

void test_product_variant_add(int include_optional) {
    product_variant_add_t* product_variant_add_1 = instantiate_product_variant_add(include_optional);

	cJSON* jsonproduct_variant_add_1 = product_variant_add_convertToJSON(product_variant_add_1);
	printf("product_variant_add :\n%s\n", cJSON_Print(jsonproduct_variant_add_1));
	product_variant_add_t* product_variant_add_2 = product_variant_add_parseFromJSON(jsonproduct_variant_add_1);
	cJSON* jsonproduct_variant_add_2 = product_variant_add_convertToJSON(product_variant_add_2);
	printf("repeating product_variant_add:\n%s\n", cJSON_Print(jsonproduct_variant_add_2));
}

int main() {
  test_product_variant_add(1);
  test_product_variant_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_add_MAIN
#endif // product_variant_add_TEST
