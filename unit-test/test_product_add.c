#ifndef product_add_TEST
#define product_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define product_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/product_add.h"
product_add_t* instantiate_product_add(int include_optional);

#include "test_product_add_manufacturer_info.c"
#include "test_product_add_size_chart.c"
#include "test_product_add_sales_tax.c"
#include "test_product_add_package_details.c"
#include "test_product_add_seller_profiles.c"
#include "test_product_add_best_offer.c"
#include "test_product_add_personalization_details.c"


product_add_t* instantiate_product_add(int include_optional) {
  product_add_t* product_add = NULL;
  if (include_optional) {
    product_add = product_add_create(
      "Bag",
      "bag_01",
      "Product description",
      99.9,
      "bag_01",
      "Short description. This is very short description",
      "simple",
      "disabled",
      "search",
      "6",
      "23,56",
      "Shirts",
      "BICYCLE",
      false,
      true,
      false,
      false,
      false,
      "1",
      "1,2",
      "3",
      99.9,
      56.9,
      56.12,
      65.9,
      5.5,
      list_createList(),
      list_createList(),
      65.9,
      65.9,
      6,
      true,
      false,
      "1",
      "true",
      1,
      1,
      1,
      23.69,
      "lb",
      56.12,
      56.12,
      56.12,
      "cm",
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "12345678912345",
      "9770317847001",
      "97703178470",
      "5901234123457",
      "http://example.com/t-shirt",
      "123456",
      "123456",
      "Samsung",
      "1",
       // false, not to have infinite recursion
      instantiate_product_add_manufacturer_info(0),
      "Abidas",
      "https://docs.api2cart.com/img/logo.png",
      "abibas.png",
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_product_add_size_chart(0),
      "4,5",
      "4,5",
      "4,5",
      "Default",
      "Color,Manufacturer",
      "key1,key2,key3",
      "tag1,tag2",
      materials[0]=Aluminum&materials[1]=Brass,
      list_createList(),
      list_createList(),
      "avail_from=2029-10-25T15:54:37-0500",
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      "2014-08-09 13:13:13",
      false,
      "made_to_order",
      "category,test",
      "category,test",
      "category,test",
      "/product_slug",
      "some seo url",
      "9",
      false,
       // false, not to have infinite recursion
      instantiate_product_add_sales_tax(0),
      "Like New",
      "Almost perfect condition, a few scratches",
      false,
      payment_methods[0]=CashOnPickup&payment_methods[1]=PayPal,
      "paypall@mail.com",
      40256592690,
      list_createList(),
      true,
      "24uurs-23",
      "PARCEL",
      1,
      "6956548250505111111,6956548250505111112",
       // false, not to have infinite recursion
      instantiate_product_add_package_details(0),
      list_createList(),
      "Days_3",
      "FixedPrice",
      "Apparel",
      true,
       // false, not to have infinite recursion
      instantiate_product_add_seller_profiles(0),
      "public",
       // false, not to have infinite recursion
      instantiate_product_add_best_offer(0),
      "4,5",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      false,
      9,
      15,
      `12345678`,
      `12345678`,
       // false, not to have infinite recursion
      instantiate_product_add_personalization_details(0)
    );
  } else {
    product_add = product_add_create(
      "Bag",
      "bag_01",
      "Product description",
      99.9,
      "bag_01",
      "Short description. This is very short description",
      "simple",
      "disabled",
      "search",
      "6",
      "23,56",
      "Shirts",
      "BICYCLE",
      false,
      true,
      false,
      false,
      false,
      "1",
      "1,2",
      "3",
      99.9,
      56.9,
      56.12,
      65.9,
      5.5,
      list_createList(),
      list_createList(),
      65.9,
      65.9,
      6,
      true,
      false,
      "1",
      "true",
      1,
      1,
      1,
      23.69,
      "lb",
      56.12,
      56.12,
      56.12,
      "cm",
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      "12345678912345",
      "9770317847001",
      "97703178470",
      "5901234123457",
      "http://example.com/t-shirt",
      "123456",
      "123456",
      "Samsung",
      "1",
      NULL,
      "Abidas",
      "https://docs.api2cart.com/img/logo.png",
      "abibas.png",
      list_createList(),
      list_createList(),
      NULL,
      "4,5",
      "4,5",
      "4,5",
      "Default",
      "Color,Manufacturer",
      "key1,key2,key3",
      "tag1,tag2",
      materials[0]=Aluminum&materials[1]=Brass,
      list_createList(),
      list_createList(),
      "avail_from=2029-10-25T15:54:37-0500",
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      "2014-08-09 13:13:13",
      false,
      "made_to_order",
      "category,test",
      "category,test",
      "category,test",
      "/product_slug",
      "some seo url",
      "9",
      false,
      NULL,
      "Like New",
      "Almost perfect condition, a few scratches",
      false,
      payment_methods[0]=CashOnPickup&payment_methods[1]=PayPal,
      "paypall@mail.com",
      40256592690,
      list_createList(),
      true,
      "24uurs-23",
      "PARCEL",
      1,
      "6956548250505111111,6956548250505111112",
      NULL,
      list_createList(),
      "Days_3",
      "FixedPrice",
      "Apparel",
      true,
      NULL,
      "public",
      NULL,
      "4,5",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      false,
      9,
      15,
      `12345678`,
      `12345678`,
      NULL
    );
  }

  return product_add;
}


#ifdef product_add_MAIN

void test_product_add(int include_optional) {
    product_add_t* product_add_1 = instantiate_product_add(include_optional);

	cJSON* jsonproduct_add_1 = product_add_convertToJSON(product_add_1);
	printf("product_add :\n%s\n", cJSON_Print(jsonproduct_add_1));
	product_add_t* product_add_2 = product_add_parseFromJSON(jsonproduct_add_1);
	cJSON* jsonproduct_add_2 = product_add_convertToJSON(product_add_2);
	printf("repeating product_add:\n%s\n", cJSON_Print(jsonproduct_add_2));
}

int main() {
  test_product_add(1);
  test_product_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // product_add_MAIN
#endif // product_add_TEST
