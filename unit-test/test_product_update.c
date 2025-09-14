#ifndef product_update_TEST
#define product_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_update.h"
product_update_t* instantiate_product_update(int include_optional);

#include "test_product_add_package_details.c"
#include "test_product_add_manufacturer_info.c"
#include "test_product_add_personalization_details.c"


product_update_t* instantiate_product_update(int include_optional) {
  product_update_t* product_update = NULL;
  if (include_optional) {
    product_update = product_update_create(
      "10",
      "bag_01",
      "bag_01",
      "Pancil",
      "New product description",
      "Short description. This is very short description",
      99.9,
      99.9,
      56.9,
      "2018-08-25 23:56:12",
      "2018-08-25 23:56:12",
      65.9,
      5.5,
      6.9,
      list_createList(),
      65.9,
      65.9,
      false,
      "9",
      "simple",
      "disabled",
      "Like New",
      "search",
      true,
      false,
      "2029-10-25T15:54:37-0500",
      "Shirts",
      "Abidas",
      false,
      "1,2",
      "1",
      "3",
      6,
      1,
      false,
      "true",
      4,
      4,
      1,
      "1",
      23.69,
      "lb",
      56.12,
      56.12,
      56.12,
      "cm",
      false,
      true,
      "12345678912345",
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "9770317847001",
      "Samsung",
      "1",
      "23,56",
      "4,5",
      "4,5",
      "4,5",
      "category,test",
      "category,test",
      "category,test",
      "some seo url",
      "key1,key2,key3",
      "tag1,tag2",
      "24uurs-23",
       // false, not to have infinite recursion
      instantiate_product_add_package_details(0),
      "123456",
      "123456",
      40256592690,
      "made_to_order",
      false,
      true,
      materials[0]=Aluminum&materials[1]=Brass,
      false,
      false,
      "4,5",
       // false, not to have infinite recursion
      instantiate_product_add_manufacturer_info(0),
      "105245017661",
      false,
      false,
      false,
      false,
      list_createList(),
      `12345678`,
       // false, not to have infinite recursion
      instantiate_product_add_personalization_details(0),
      "http://example.com/t-shirt",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      1
    );
  } else {
    product_update = product_update_create(
      "10",
      "bag_01",
      "bag_01",
      "Pancil",
      "New product description",
      "Short description. This is very short description",
      99.9,
      99.9,
      56.9,
      "2018-08-25 23:56:12",
      "2018-08-25 23:56:12",
      65.9,
      5.5,
      6.9,
      list_createList(),
      65.9,
      65.9,
      false,
      "9",
      "simple",
      "disabled",
      "Like New",
      "search",
      true,
      false,
      "2029-10-25T15:54:37-0500",
      "Shirts",
      "Abidas",
      false,
      "1,2",
      "1",
      "3",
      6,
      1,
      false,
      "true",
      4,
      4,
      1,
      "1",
      23.69,
      "lb",
      56.12,
      56.12,
      56.12,
      "cm",
      false,
      true,
      "12345678912345",
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "9770317847001",
      "Samsung",
      "1",
      "23,56",
      "4,5",
      "4,5",
      "4,5",
      "category,test",
      "category,test",
      "category,test",
      "some seo url",
      "key1,key2,key3",
      "tag1,tag2",
      "24uurs-23",
      NULL,
      "123456",
      "123456",
      40256592690,
      "made_to_order",
      false,
      true,
      materials[0]=Aluminum&materials[1]=Brass,
      false,
      false,
      "4,5",
      NULL,
      "105245017661",
      false,
      false,
      false,
      false,
      list_createList(),
      `12345678`,
      NULL,
      "http://example.com/t-shirt",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      1
    );
  }

  return product_update;
}


#ifdef product_update_MAIN

void test_product_update(int include_optional) {
    product_update_t* product_update_1 = instantiate_product_update(include_optional);

	cJSON* jsonproduct_update_1 = product_update_convertToJSON(product_update_1);
	printf("product_update :\n%s\n", cJSON_Print(jsonproduct_update_1));
	product_update_t* product_update_2 = product_update_parseFromJSON(jsonproduct_update_1);
	cJSON* jsonproduct_update_2 = product_update_convertToJSON(product_update_2);
	printf("repeating product_update:\n%s\n", cJSON_Print(jsonproduct_update_2));
}

int main() {
  test_product_update(1);
  test_product_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_update_MAIN
#endif // product_update_TEST
