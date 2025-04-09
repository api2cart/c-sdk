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

#include "test_product_add_seller_profiles.c"
#include "test_product_add_package_details.c"
#include "test_product_add_best_offer.c"
#include "test_product_add_sales_tax.c"
#include "test_product_add_size_chart.c"
#include "test_product_add_manufacturer_info.c"


product_add_t* instantiate_product_add(int include_optional) {
  product_add_t* product_add = NULL;
  if (include_optional) {
    product_add = product_add_create(
      "Bag",
      "bag_01",
      "bag_01",
      "Product description",
      99.9,
      99.9,
      56.9,
      65.9,
      5.5,
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      list_createList(),
      list_createList(),
      false,
      false,
      23.69,
      56.12,
      56.12,
      56.12,
      "lb",
      "cm",
      "Short description. This is very short description",
      "1",
      "true",
      6,
      true,
      56.12,
      "2014-08-09 13:13:13",
      "Samsung",
      "1",
      "23,56",
      "4,5",
      "4,5",
      "4,5",
      "9",
      "simple",
      "category,test",
      "category,test",
      "category,test",
      "/product_slug",
      "3",
      "1,2",
      "6",
      9,
      15,
      "Default",
      "Color,Manufacturer",
      40256592690,
      "4,5",
      "Like New",
      "Days_3",
      "FixedPrice",
      payment_methods[0]=CashOnPickup&payment_methods[1]=PayPal,
      true,
      list_createList(),
      "paypall@mail.com",
       // false, not to have infinite recursion
      instantiate_product_add_seller_profiles(0),
       // false, not to have infinite recursion
      instantiate_product_add_package_details(0),
       // false, not to have infinite recursion
      instantiate_product_add_best_offer(0),
       // false, not to have infinite recursion
      instantiate_product_add_sales_tax(0),
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      list_createList(),
      "https://docs.api2cart.com/img/logo.png",
      "abibas.png",
      65.9,
      65.9,
      "Almost perfect condition, a few scratches",
      "public",
      "avail_from=2029-10-25T15:54:37-0500",
      "tag1,tag2",
      false,
      "97703178470",
      "12345678912345",
      "9770317847001",
      false,
      "search",
      "disabled",
      "some seo url",
      "Shirts",
      "BICYCLE",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      false,
      "123456",
      "123456",
      list_createList(),
      "key1,key2,key3",
      "1",
      "Abidas",
      false,
      true,
      true,
      "24uurs-23",
      "5901234123457",
      "PARCEL",
      1,
       // false, not to have infinite recursion
      instantiate_product_add_size_chart(0),
      list_createList(),
      "6956548250505111111,6956548250505111112",
       // false, not to have infinite recursion
      instantiate_product_add_manufacturer_info(0),
      "made_to_order",
      false,
      materials[0]=Aluminum&materials[1]=Brass,
      false,
      false,
      1,
      1
    );
  } else {
    product_add = product_add_create(
      "Bag",
      "bag_01",
      "bag_01",
      "Product description",
      99.9,
      99.9,
      56.9,
      65.9,
      5.5,
      "2018-08-25 23:56:12",
      "2018-12-05 13:46:20",
      "2018-08-25 23:56:12",
      list_createList(),
      list_createList(),
      false,
      false,
      23.69,
      56.12,
      56.12,
      56.12,
      "lb",
      "cm",
      "Short description. This is very short description",
      "1",
      "true",
      6,
      true,
      56.12,
      "2014-08-09 13:13:13",
      "Samsung",
      "1",
      "23,56",
      "4,5",
      "4,5",
      "4,5",
      "9",
      "simple",
      "category,test",
      "category,test",
      "category,test",
      "/product_slug",
      "3",
      "1,2",
      "6",
      9,
      15,
      "Default",
      "Color,Manufacturer",
      40256592690,
      "4,5",
      "Like New",
      "Days_3",
      "FixedPrice",
      payment_methods[0]=CashOnPickup&payment_methods[1]=PayPal,
      true,
      list_createList(),
      "paypall@mail.com",
      NULL,
      NULL,
      NULL,
      NULL,
      "9770317847001",
      "9770317847001",
      "5901234123457",
      "9783161484100",
      list_createList(),
      "https://docs.api2cart.com/img/logo.png",
      "abibas.png",
      65.9,
      65.9,
      "Almost perfect condition, a few scratches",
      "public",
      "avail_from=2029-10-25T15:54:37-0500",
      "tag1,tag2",
      false,
      "97703178470",
      "12345678912345",
      "9770317847001",
      false,
      "search",
      "disabled",
      "some seo url",
      "Shirts",
      "BICYCLE",
      "{"color":["Silver"],"manufacturer":"Philips","features":["3 way"],"countPerPack":1,"watts":{"unit":"W","measure":40}}",
      false,
      "123456",
      "123456",
      list_createList(),
      "key1,key2,key3",
      "1",
      "Abidas",
      false,
      true,
      true,
      "24uurs-23",
      "5901234123457",
      "PARCEL",
      1,
      NULL,
      list_createList(),
      "6956548250505111111,6956548250505111112",
      NULL,
      "made_to_order",
      false,
      materials[0]=Aluminum&materials[1]=Brass,
      false,
      false,
      1,
      1
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
