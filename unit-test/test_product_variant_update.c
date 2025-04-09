#ifndef product_variant_update_TEST
#define product_variant_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_variant_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_variant_update.h"
product_variant_update_t* instantiate_product_variant_update(int include_optional);



product_variant_update_t* instantiate_product_variant_update(int include_optional) {
  product_variant_update_t* product_variant_update = NULL;
  if (include_optional) {
    product_variant_update = product_variant_update_create(
      "1",
      "10",
      "10",
      "1",
      1,
      6,
      4,
      4,
      99.9,
      56.9,
      6.9,
      99.9,
      65.9,
      5.5,
      "2018-08-25 23:56:12",
      "2018-08-25 23:56:12",
      false,
      true,
      "Bag Green L",
      "Product variant",
      "bag_01",
      "category,test",
      "category,test",
      "category,test",
      "Short description. This is very short description",
      "catalog",
      "disabled",
      "true",
      23.69,
      "9770317847001",
      false,
      false,
      list_createList(),
      "123456",
      "123456",
      56.12,
      "lb",
      56.12,
      56.12,
      "12345678912345",
      false,
      "3",
      "bag_01",
      false,
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      false,
      true,
      true,
      "9",
      false
    );
  } else {
    product_variant_update = product_variant_update_create(
      "1",
      "10",
      "10",
      "1",
      1,
      6,
      4,
      4,
      99.9,
      56.9,
      6.9,
      99.9,
      65.9,
      5.5,
      "2018-08-25 23:56:12",
      "2018-08-25 23:56:12",
      false,
      true,
      "Bag Green L",
      "Product variant",
      "bag_01",
      "category,test",
      "category,test",
      "category,test",
      "Short description. This is very short description",
      "catalog",
      "disabled",
      "true",
      23.69,
      "9770317847001",
      false,
      false,
      list_createList(),
      "123456",
      "123456",
      56.12,
      "lb",
      56.12,
      56.12,
      "12345678912345",
      false,
      "3",
      "bag_01",
      false,
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      false,
      true,
      true,
      "9",
      false
    );
  }

  return product_variant_update;
}


#ifdef product_variant_update_MAIN

void test_product_variant_update(int include_optional) {
    product_variant_update_t* product_variant_update_1 = instantiate_product_variant_update(include_optional);

	cJSON* jsonproduct_variant_update_1 = product_variant_update_convertToJSON(product_variant_update_1);
	printf("product_variant_update :\n%s\n", cJSON_Print(jsonproduct_variant_update_1));
	product_variant_update_t* product_variant_update_2 = product_variant_update_parseFromJSON(jsonproduct_variant_update_1);
	cJSON* jsonproduct_variant_update_2 = product_variant_update_convertToJSON(product_variant_update_2);
	printf("repeating product_variant_update:\n%s\n", cJSON_Print(jsonproduct_variant_update_2));
}

int main() {
  test_product_variant_update(1);
  test_product_variant_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_variant_update_MAIN
#endif // product_variant_update_TEST
